#include<stdio.h>
int main()
{
	int a,b;
	printf("�п�J��Ӿ��(�P�_�Ĥ@�ӼƬO�_���ĤG�Ӽƪ�����):\n");
	scanf("%d%d",&a,&b);
	switch(a%b)
	{
		case 0:
			printf("%d��%d������",a,b);
			break;
		default:
			printf("%d����%d������",a,b);
			break;
	}
    return 0;
} 
