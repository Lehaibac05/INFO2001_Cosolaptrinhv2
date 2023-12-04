#include <stdio.h>
#include <stdlib.h>

int main (){
	int n;
	printf("Nhap so luong phan tu:");
	scanf("%d", &n);
	int* ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL){
		printf("Khong cap phat duoc vung nho");
		return 0;
	}
	
	for(int i = 0; i<n; i++){
		printf("Phan tu [%d]=",i);
		scanf("%d", ptr+i);
	}
	
	for(int i=0; i<n; i++){
		printf("%d", *(ptr + i));
	}
	
	free(ptr);
	return 0;
}
