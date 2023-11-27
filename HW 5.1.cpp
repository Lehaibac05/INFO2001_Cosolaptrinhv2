#include <stdio.h>

struct SinhVien {
    char Name[50];
    char id[10];
    float gpa;
};


void hienThiThongTin(struct SinhVien sv) {
    printf("Ma SV: %d\n", sv.id);
    printf("Ten SV: %s\n", sv.Name);
    printf("Diem: %.2f\n", sv.gpa);
}

int main() {
    
    struct SinhVien sv;

    printf("Nhap ma sinh vien: ");
    fgets(sv.id, sizeof(sv.id), stdin);
    getchar();
    printf("Nhap ten sinh vien: ");
    fgets(sv.Name, 50, stdin);
    printf("Nhap diem sinh vien: ");
    scanf("%f", &sv.gpa);

    
    printf("\nThong tin sinh vien vua nhap:\n");
    hienThiThongTin(sv);

    
    printf("\nNhap ma sv moi: ");
    fgets(sv.id, sizeof(sv.id), stdin);
    getchar();
    printf("Nhap ten moi: ");
    fgets(sv.Name, 50, stdin);
    printf("Nhap diem moi: ");
    scanf("%f", &sv.gpa);

    printf("\nThong tin sinh vien sau cap nhat:\n");
    hienThiThongTin(sv);

    return 0;
}
