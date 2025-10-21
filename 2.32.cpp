#include<stdio.h>
int main()
{
	double a,b,BMI;       //假設浮點數變數(身高、體重、BMI不一定為整數) 
	printf("請依序輸入體重(kg)和身高(m):\n"); //使用者輸入體重及身高 
	scanf("%lf%lf",&a,&b);                    //輸入的值存入a、b變數 
	BMI=a/b/b;                                //BMI計算，體重除以身高的平方 
	printf("VALUES is %.2f\nUnderweight:  less than 18.5",BMI,BMI); //列印第一行並包括使用者BMI之值(四捨五入到小數點後第二位) 
    printf("\nNormal:       between 18.5 and 24.9\nOverweight:   between 25 and 29.9\n"); //印出後面的BMI標準 
    printf("Obese:        30 or greater");                                                //同上 
    return 0;
} 
