#include <stdio.h>
int main()
{
 float r, s, c;
 #define PI 3.14;
 printf("Nhap ban kinh r: ");
 scanf("%f", &r);
 c = r * 2 * PI;
 s = r*r*PI;
 printf("Chu vi va dien tich cua hinh tron lan luot la %f va %f", c, s);
 return 0;
}

