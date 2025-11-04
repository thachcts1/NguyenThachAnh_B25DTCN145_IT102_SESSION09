#include <stdio.h>
#include <math.h>

int laSoNguyenTo(int n) {
    if (n < 2) 
        return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n, a[100];
    int tong = 0;

    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu [%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Cac so nguyen to trong mang la: ");
    for (int i = 0; i < n; i++) {
        if (laSoNguyenTo(a[i])) {
            printf("%d ", a[i]);
            tong += a[i];
        }
    }

    printf("\nTong cac so nguyen to trong mang la: %d\n", tong);

    return 0;
}
