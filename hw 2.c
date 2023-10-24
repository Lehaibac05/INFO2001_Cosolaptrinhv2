#include <stdio.h>
int main(){
	int x;
	printf("Nhap diem cua ban:");
	scanf("%d", &x);
	
	if (x >= 9 && x <= 10){
		printf("Xuat sac");
	}else if (x < 9 && x >= 8){
		printf("Gioi");
	}else if (x < 8 && x >= 6.5){
		printf("Kha");
	}else if (x < 6.5 && x >= 5){
		printf("Trung binh");
	}else if (x < 5 && x >= 0){
		printf("Yeu");
	}
	return 0;
}
