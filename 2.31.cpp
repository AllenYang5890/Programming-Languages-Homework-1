#include<stdio.h>
int main()
{
	int a,b;              //�]�w�ܼ� 
	printf("number  square  cube\n");  //�C�L�Ĥ@�椣�ܪ����D 
	for (a=0;a<4;a++)                  //��for �j��@���L�X0~3���Ʀr�P�䦸�� 
	{
		printf("%d       %d       %d\n",a,a*a,a*a*a);
	}
	for (a=4;a<10;a++)                  //�]���q4~9����O�G��ơA�ҥH�ťծ�ƭn�A���� 
	{
		printf("%d       %d      %d\n",a,a*a,a*a*a);
	}
	printf("%d      %d     %d\n",a,a*a,a*a*a); //�̫�]��10������O�T��ƩҥH�n�W�ߦL�X�~�i�H��� 
	return 0;
} 
