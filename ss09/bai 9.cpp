#include <stdio.h>

int main() {
    int a[] = {3, 5, 2, 3, 8, 5, 3, 2, 5, 5};  
    int n = sizeof(a) / sizeof(a[0]);          
    int dem, maxDem = 0, phanTuNhieuNhat;


    for (int i = 0; i < n; i++) {
        dem = 0;
        for (int j = 0; j < n; j++) {
            if (a[i] == a[j])
                dem++;
        }
        if (dem > maxDem) {
            maxDem = dem;
            phanTuNhieuNhat = a[i];
        }
    }

    printf("Phan tu xuat hien nhieu nhat la: %d\n", phanTuNhieuNhat);
    printf("So lan xuat hien: %d\n", maxDem);

    return 0;
}

