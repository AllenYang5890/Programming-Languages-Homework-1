#include<stdio.h>
int main()
{
	int a,b;
	printf("叫块ㄢ俱计(耞材计琌材计计):\n");
	scanf("%d%d",&a,&b);
	switch(a%b)
	{
		case 0:
			printf("%d%d计",a,b);
			break;
		default:
			printf("%dぃ%d计",a,b);
			break;
	}
    return 0;
} 
