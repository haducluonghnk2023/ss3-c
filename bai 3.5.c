#include <stdio.h>
#include <conio.h>
#include <time.h>
int main ()
{
    int namsinh, namhientai, tuoi;
    printf("\nNhap nam sinh cua ban: ");
    scanf("%d",&namsinh);
    time_t t = time(0);
    struct tm *Now = localtime(&t);
    namhientai = Now ->tm_year + 1900;
    tuoi = namhientai - namsinh;
    printf("\n Ban sinh nam %d => Ban %d tuoi\n",namsinh,tuoi);
    if (tuoi % 2 ==0){
    	printf("tuoi cua ban la %d va no la tuoi chan . \n", tuoi);
    }else{
    	 printf("tuoi cua ban  la %d va no la so le : \n", tuoi);
	}
    getch ();
    return 0;
}

