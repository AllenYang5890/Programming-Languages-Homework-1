#include<stdio.h>
int main()
{
	int a,b,c;                        //�]�T�Ӿ���ܼ� 
	printf("�п�J�T�Ӽ�:\n");        //�ϥΪ̿�J�T�� 
	scanf("%d%d%d",&a,&b,&c);         //�T�Ʀs�Ja,b,c�� 
	if (a>b)                          //if�P�_�j�p 
	{
		if (b>c)
		printf("%d�O�̤j���ơA%d�O�̤p����",a,c); //a>b>c
	    else if (a<c)
	    printf("%d�O�̤j���ơA%d�O�̤p����",c,b); //c>a>b
	}
	if (a<b)
	{
		if (a>c)
		printf("%d�O�̤j���ơA%d�O�̤p����",b,c); //b>a>c
		else if (c>b)
		printf("%d�O�̤j���ơA%d�O�̤p����",c,a); //c>b>a
	}
	if (a>c)
	{
		if (c>b)
		printf("%d�O�̤j���ơA%d�O�̤p����",a,b); //a>c>b
	}
	if (b>c)
	{
		if(c>a)
		printf("%d�O�̤j���ơA%d�O�̤p����",b,a); //b>c>a
	}
	return 0;
					
} 
