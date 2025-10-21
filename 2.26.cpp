#include<stdio.h>
int main()
{
	int a,b;     //設變數a,b 
	printf("請輸入兩個整數(判斷第一個數是否為第二個數的倍數):\n");//使用者輸入變數 
	scanf("%d%d",&a,&b);                                          //值存入變數 
	switch(a%b)                                                   //選擇結構 
	{
		case 0:                                      //當a%b為0時執行此case 
			printf("%d為%d的倍數",a,b);
			break;                                   //跳出程式以免依序執行下去 
		default:                                     //不符合的都用這行輸出 
			printf("%d不為%d的倍數",a,b);
			break;                                   //可加可不加 
	}
    return 0;
} 
