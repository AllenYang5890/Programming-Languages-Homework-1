#include<stdio.h>
int main()
{
	double a,b,BMI;       //���]�B�I���ܼ�(�����B�魫�BBMI���@�w�����) 
	printf("�Ш̧ǿ�J�魫(kg)�M����(m):\n"); //�ϥΪ̿�J�魫�Ψ��� 
	scanf("%lf%lf",&a,&b);                    //��J���Ȧs�Ja�Bb�ܼ� 
	BMI=a/b/b;                                //BMI�p��A�魫���H���������� 
	printf("VALUES is %.2f\nUnderweight:  less than 18.5",BMI,BMI); //�C�L�Ĥ@��å]�A�ϥΪ�BMI����(�|�ˤ��J��p���I��ĤG��) 
    printf("\nNormal:       between 18.5 and 24.9\nOverweight:   between 25 and 29.9\n"); //�L�X�᭱��BMI�з� 
    printf("Obese:        30 or greater");                                                //�P�W 
    return 0;
} 
