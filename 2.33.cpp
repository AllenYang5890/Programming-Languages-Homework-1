#include<stdio.h>
int main()
{
	float a,b,c,d,e,cost;                //�]���ӯB�I�ܼ� 
	printf("Please enter:\na)Total miles driven per day.\n");
	printf("b)Cost per gallon of gasoline.\n"); 
	printf("c)Average miles per gallon\n");
	printf("d)Parking fees per day.\n");
	printf("e)Tolls per day.\n");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);  //�N���ӿ�J���Ʀs�b�ܼƤ� 
	cost = (a/c)*b+d+e;          //�p���`��O 
	printf("�z�@�ѤU�Ӷ}���h�u�@����O��:%.1f",cost);//��X�`��O 
	return 0;
 } 
