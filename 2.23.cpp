#include<stdio.h>
int main()
{
	int a,b,c;
	printf("叫块计:\n");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b)
	{
		if (b>c)
		printf("%d琌程计%d琌程计",a,c);
	    else if (a<c)
	    printf("%d琌程计%d琌程计",c,b);
	}
	if (a<b)
	{
		if (a>c)
		printf("%d琌程计%d琌程计",b,c);
		else if (c>b)
		printf("%d琌程计%d琌程计",c,a);
	}
	if (a>c)
	{
		if (c>b)
		printf("%d琌程计%d琌程计",a,b);
		else if(b>a)
		printf("%d琌程计%d琌程计",b,c);
	}
	return 0;
					
} 
