#include<stdio.h>
int main(){
	int number1, number2, number3;
    printf("Nhap gia tri so nguyên thu nhat: ");
    scanf("%d", &number1);
    printf("Nhap gia tri so nguyên thu hai: ");
    scanf("%d", &number2);
    printf("Nhap gia tri so nguyên thu ba: ");
    scanf("%d", &number3);
    int max = number1;
    if (number2 > max) {
        max = number2;
    }
    if (number3 > max) {
        max = number3;
    }
    int min = number1;
    if (number2 < min) {
        min = number2;
    }
    if (number3 < min) {
        min = number3;
    }
    printf("So lon nhat la: %d\n", max);
    printf("So nho nhat la: %d\n", min);
    return 0;
}
    

	
	
	
	
