//�� ���� ���� �Է¹޾� ����, ��� ����ϱ�
//���� ���� ������ ������ �Է¹޾Ƽ� (scanf/#pragma)
//������ ����� ���� �� ����ϴ� ���α׷� //����Լ�
//�Է������� ���� ������(unsigned int) ����� �Ǽ���(double)
#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	unsigned int hist, liter, artis,total;
	double average;

	printf("����,����,���� �� ������ ������ �Է��ϼ���:");
	scanf("%u %u %u", &hist, &liter, &artis);
	total = hist + liter + artis;
	average = total / 3.0;
	printf("������ %u �̰� ����� %.2lf �Դϴ�.\n", total, average);
	return 0;

}