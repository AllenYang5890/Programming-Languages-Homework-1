#include<stdio.h>
int main()
{
	int a,b;     //�]�ܼ�a,b 
	printf("�п�J��Ӿ��(�P�_�Ĥ@�ӼƬO�_���ĤG�Ӽƪ�����):\n");//�ϥΪ̿�J�ܼ� 
	scanf("%d%d",&a,&b);                                          //�Ȧs�J�ܼ� 
	switch(a%b)                                                   //��ܵ��c 
	{
		case 0:                                      //��a%b��0�ɰ��榹case 
			printf("%d��%d������",a,b);
			break;                                   //���X�{���H�K�̧ǰ���U�h 
		default:                                     //���ŦX�����γo���X 
			printf("%d����%d������",a,b);
			break;                                   //�i�[�i���[ 
	}
    return 0;
} 
