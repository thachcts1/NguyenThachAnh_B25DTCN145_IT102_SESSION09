#include<stdio.h> 
		int main (){
		int n ;
		int m [100];
		int so_chan=0;
		int so_le =0; 
		
			printf (" nhap so luong phan tu ");
			scanf ("%d",&n);
			
	for (int i =0 ; i<n ; i++){
		 	printf("Nhap phan tu [%d] : ",i);
            scanf("%d", & m[i]);
	}
	
	
	printf (" so chan la "); 
    for ( int i=0 ; i<n ;i++){
    	if (m[i]%2==0){
    		printf("%d ", m[i]);
    		so_chan++;	 
    	}
    }
    
    
	printf ("\n so le la "); 
	for ( int i=0 ; i<n ;i++){
    	if (m[i ]% 2 !=0){
    		printf("%d ", m[i]);
    		so_le++; 
		}	
	}
    	
	 printf( " \n tong so chan %d  ",so_chan ) ;
    printf ( " \n tong so le %d  ",so_le ) ;	
		return 0; 
		 
	}
