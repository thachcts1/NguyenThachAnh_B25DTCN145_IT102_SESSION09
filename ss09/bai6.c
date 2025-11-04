#include <stdio.h> 
	int main () {
		int n ;
		int m[100] ;
		int x, found = 0; 
		
	printf (" nhap so luong phan tu ");
			scanf ("%d",&n);
			
	for (int i =0 ; i<n ; i++){
		 printf("Nhap phan tu [%d] : ",i);
            scanf("%d", & m[i]);
	}
	printf("\nCac phan tu trong mang la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", m[i]);
    }

   
    printf("\n\nNhap gia tri can tim x: ");
    scanf("%d", &x);

   
    for (int i = 0; i < n; i++) {
        if (m[i] == x) {
            printf("Gia tri %d xuat hien tai vi tri %d\n", x, i);
            found = 1;
    }
}
   
    if (found == 0) {
        printf("Gia tri %d khong xuat hien trong mang.\n", x);
    }

	
			
		 
		
		
		
		
		return 0;
		 
	}
