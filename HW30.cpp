//2���� ��ȯ ���α׷�
//1. 10������ �Է¹޾� 2.�������� ���(�̷� ������ ������)
//bit���� ������ ���, �ݺ��� ��� , ������ 2�� �������� ���
#include <stdio.h>
#pragma warning(disable:4996)
int input();
void myflush();
int main()
{
	int num, res;
	unsigned int chek = 0x80000000;
	num = input();
	printf("%d(10) =", num);
	for(int i=0;i<32;i++)
	{
		res=num & chek;
		if (res == 0)printf("0");
		else printf("1");
		chek = chek >> 1;
	}
	printf("(2)");
	return 0;
}
int input()
{
	int num;
	while (1)
	{
		printf("* 10�� ������ �Է��ϼ���:");
		scanf("%d", &num);
		if (getchar() == '\n')break;
		else
		{
			myflush();
		}
	}
	return num;
}
void myflush()
{
	while (getchar() != '\n') { ; }
}