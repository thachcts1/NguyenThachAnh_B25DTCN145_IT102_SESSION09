#include<stdio.h>
	int main(){
		int number, arr[100];
			printf("so phan tu trong mang :");
			scanf("%d",&number);
			
			for(int i = 0; i < number ; i++){
				printf("nhap phan tu [%d] ",i);
				scanf("%d", &arr[i]);
}			
	printf("so phan tu da nhap la : ");
	for(int i = 0 ; i < number; i++){
		printf("%d",arr[i]);
		}
		return 0;
	}
