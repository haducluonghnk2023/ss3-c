#include <stdio.h>

int main() {
    float toan, van, anh, tong_diem, diem_trung_binh;
    printf("Nhap diem mon Toan: ");
    scanf("%f", &toan);
    printf("Nhap diem mon Van: ");
    scanf("%f", &van);
    printf("Nhap diem mon Anh: ");
    scanf("%f", &anh);
    tong_diem = toan + van + anh;
    diem_trung_binh = tong_diem / 3;
    printf("Tong diem: %.2f\n", tong_diem);
    printf("diem trung binh: %.2f\n", diem_trung_binh);
    return 0;
}

