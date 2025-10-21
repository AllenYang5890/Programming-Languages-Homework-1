#include<stdio.h>
int main()
{
	float a,b,c,d,e,cost;                //設六個浮點變數 
	printf("Please enter:\na)Total miles driven per day.\n");
	printf("b)Cost per gallon of gasoline.\n"); 
	printf("c)Average miles per gallon\n");
	printf("d)Parking fees per day.\n");
	printf("e)Tolls per day.\n");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);  //將五個輸入的數存在變數中 
	cost = (a/c)*b+d+e;          //計算總花費 
	printf("您一天下來開車去工作的花費為:%.1f",cost);//輸出總花費 
	return 0;
 } 
