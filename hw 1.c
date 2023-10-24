#include <stdio.h>
int main (){
	int n;
	printf("Nhap mot so nguyen:");
	scanf("%d", &n);
	
	if (n>0 && n % 2 == 0){
		printf("So chan");
	}else{
		printf("So le");
	}
	return 0;
}
