#include<stdio.h>
int main()
{
	int a,b,c;                        //砞俱计跑计 
	printf("叫块计:\n");        //ㄏノ块计 
	scanf("%d%d%d",&a,&b,&c);         //计a,b,cい 
	if (a>b)                          //if耞 
	{
		if (b>c)
		printf("%d琌程计%d琌程计",a,c); //a>b>c
	    else if (a<c)
	    printf("%d琌程计%d琌程计",c,b); //c>a>b
	}
	if (a<b)
	{
		if (a>c)
		printf("%d琌程计%d琌程计",b,c); //b>a>c
		else if (c>b)
		printf("%d琌程计%d琌程计",c,a); //c>b>a
	}
	if (a>c)
	{
		if (c>b)
		printf("%d琌程计%d琌程计",a,b); //a>c>b
	}
	if (b>c)
	{
		if(c>a)
		printf("%d琌程计%d琌程计",b,a); //b>c>a
	}
	return 0;
					
} 
