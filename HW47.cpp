//�ּҰ�, �ִ밪 ã��
#include<stdio.h>
#pragma warning (disable:4996)
void input(double *p);
double findMax(double *p);
double findMin(double *p);
void output(double mymax,double mymin);
void myflush();
int main()
{
	double num[5],mymax,mymin;
	input(num);
	mymax = findMax(num);
	mymin = findMin(num);
	
	output(mymax, mymin);

	return 0;
}
void input(double* p)
{
	int i;
		for (i = 0; i < 5; i++) 
		{
			printf("%d �� �� ��: ",i);
			scanf("%lf", p + i);
			while (getchar() != '\n') 
			{ myflush();  
			printf("%d �� �� ��: ",i);
			scanf("%lf", p + i);
			}
		}
	
}
void myflush()
{
	while (getchar() != '\n') { ; }
}
double findMax(double* p)
{
	//�迭�� 0��° ���� �ִ밪�̶�� ���� //0��° �� ������ ũ�� mymax�� ����
	double mymax;
	int i;
	mymax = p[0];
	for (i = 1; i < 5; i++) {
		if (mymax >= p[i]);
		else mymax = p[i]; 
	}
	return mymax;
}
double findMin(double* p)
{
	//�迭�� 0��° ���� �ּҰ��̶�� ���� //0��° �� ������ ������ mymin�� ����
	double mymin;
	int i;
	mymin = p[0];
	for (i = 1; i < 5; i++) {
		if (mymin <= p[i]);
		else mymin = p[i];
	}
	return mymin;
}
void output(double mymax, double mymin)
{
	printf("\n\n���� ū ��: %.2lf\n���� ���� ��: %.2lf\n", mymax, mymin);
}