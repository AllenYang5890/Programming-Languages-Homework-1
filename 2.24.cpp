#include<stdio.h> 
int main()
{
	int a;  //�]�@�Ӿ���ܼ� 
	printf("�п�J�@�Ӿ��: \n");//�ϥΪ̿�J��ƭ� 
	scanf("%d",&a);              //�s�Ja 
	if (a%2==0)                  //��a���H�G���l�Ƶ���0���� 
	printf("%d������",a);        //��Xa������ 
	else                         //��a���H�G���l�Ƥ�����0���� 
	printf("%d���_��",a);        //��Xa���_�� 
	return 0;
}
