#include <stdio.h>
int main(){
	int n;
	printf("Nhap mot so nguyen duong:");
	scanf("%d", &n);
	
	if (n % 2!= 0 && n% n == 0){
		printf("So nguyen to");
	}else {
		printf("Khong pahi so nguyen to");
	}
	return 0;
}
