//BMI���ϱ�
//1. �����Կ� Ű�� �Է¹޾� 2. BMI���� ��� 3.�񸸵� ���(5����) 
//BMI=������(Ű��)/Ű(����)�� ����
#include<stdio.h>
#pragma warning(disable:4996)
int inputweight();
double inputheight();
double calculatebmi(int weight, double height);
void output(double bmi);
int main()
{
	int weight;
	double height, bmi;
	weight = inputweight();
	height = inputheight();
	bmi = calculatebmi(weight, height);
	output(bmi);
	return 0;
}
int inputweight() {
	int weight;
	printf("�����Ը� �Է��ϼ���(Kg): ");
	scanf("%d", &weight);
	return weight;
}
double inputheight() {
	int height;
	printf("Ű�� �Է��ϼ���(m):");
	scanf("%lf", &height);
	return height;
}

double calculatebmi(int weight, double height) {
	double bmi;
	bmi = weight / (height * height);
	return bmi;
}
void output(double bmi) {
	if (bmi < 25.0)
	{
		if (bmi < 18.5)  printf("����� BMI�� %lf�� ��ü���Դϴ�", bmi); 
		else  printf("����� BMI�� %lf�� ����ü���Դϴ�", bmi); 
	}
	else{
		if (bmi < 30)  printf("����� BMI�� %lf�� ��ü���Դϴ�", bmi); 
		else if (bmi < 40)  printf("����� BMI�� %lf�� ���Դϴ�", bmi); 
		else  printf("����� BMI�� %lf�� �����Դϴ�", bmi); 
	}
}