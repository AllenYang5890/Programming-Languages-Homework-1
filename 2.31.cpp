#include<stdio.h>
int main()
{
	int a,b;              //設定變數 
	printf("number  square  cube\n");  //列印第一行不變的標題 
	for (a=0;a<4;a++)                  //用for 迴圈一次印出0~3的數字與其次方 
	{
		printf("%d       %d       %d\n",a,a*a,a*a*a);
	}
	for (a=4;a<10;a++)                  //因為從4~9平方是二位數，所以空白格數要適當減少 
	{
		printf("%d       %d      %d\n",a,a*a,a*a*a);
	}
	printf("%d      %d     %d\n",a,a*a,a*a*a); //最後因為10的平方是三位數所以要獨立印出才可以對齊 
	return 0;
} 
