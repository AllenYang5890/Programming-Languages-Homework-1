#include<stdio.h>
int main()
{
	int a,b,c;
	printf("�п�J�T�Ӽ�:\n");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b)
	{
		if (b>c)
		printf("%d�O�̤j���ơA%d�O�̤p����",a,c);
	    else if (a<c)
	    printf("%d�O�̤j���ơA%d�O�̤p����",c,b);
	}
	if (a<b)
	{
		if (a>c)
		printf("%d�O�̤j���ơA%d�O�̤p����",b,c);
		else if (c>b)
		printf("%d�O�̤j���ơA%d�O�̤p����",c,a);
	}
	if (a>c)
	{
		if (c>b)
		printf("%d�O�̤j���ơA%d�O�̤p����",a,b);
		else if(b>a)
		printf("%d�O�̤j���ơA%d�O�̤p����",b,c);
	}
	return 0;
					
} 
