//������ ����ϱ�
#pragma warning(disable:4996)
#include <stdio.h>
#define cost 88.5
int input();
void output(double totalcost);
int main()
{
	//�⺻��� 660�� kw�� 88.5��
	//��ü���=�⺻���+(��뷮*kw�� �����)
	//������ ��ü����� 9%
	//���������= ��ü���+����
	//�Է��Լ� ����Լ�

	int basic = 660;
	double totalcost, finalcost,usedelec;
	usedelec = input();
	finalcost = basic + usedelec * cost;
	totalcost = finalcost + finalcost * 0.09;
	output(totalcost);




}
int input()
{
	int usedelec;
	printf("���� ��뷮�� �Է��ϼ���(kw):");
	scanf("%d", &usedelec);
	return usedelec;
}
void output(double totalcost)
{
	printf("���� ������� %lf�Դϴ�", totalcost);
}