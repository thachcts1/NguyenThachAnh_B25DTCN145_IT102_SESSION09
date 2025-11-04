#include<stdio.h>
	int main (){
		int n ;
		int m[100];
		int sum =0 ; 
		float trung_binh= 0; 
		
	printf (" so luong phan tu ");
	scanf ("%d",&n);
	
	for(int i=0; i<n ; i++){
		printf ("nhap phan tu [%d] ",i);
		scanf ("%d", &m[i]);
		sum=sum + m[i] ;
    }
    
		trung_binh = (float)sum /n; 
		printf ("%.2f",trung_binh) ;
			
		return 0;
		
	}
