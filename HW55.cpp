//3�� 4��¥�� 2���� int �迭�� ��,���� ���� ���ϱ�
//3�� 4���� �� ���� 1~9 ���� ������ �ʱ�ȭ
//�� ���� ���� �� ���� �հ�, ���� �հ踦 ����ϴ� ���α׷�
//1. ������ �迭 �ʱ�ȭ(�����ͷ� ����)
//2 �迭�� ����� ����� �� ���
#include <stdio.h>
#include<time.h>
#include<stdlib.h>
void inputarry(int(*p)[4],int row);
void output(int(* p)[4],int row);
int main()
{
	int arry[3][4],i;
	int row, col;
	srand((unsigned int)time(NULL));
	row = sizeof(arry) / sizeof(arry[0]);
	col = sizeof(arry[0]) /sizeof( arry[0][0]);
	inputarry(arry, row);
	output(arry, row);
	return 0;
}
void inputarry(int(*p)[4], int row)//int ?�� 4��¥�� 2���� ������ �Է�
{
	int i, j;
	for (i = 0; i < row; i++) {
		for (j = 0; j < 4; j++) {
			p[i][j] = rand() % 9 + 1;
		}
	}
}
void output(int(*p)[4], int row)
{
	int i, j,sumrow=0,sumcol=0;
	for (i = 0; i < row; i++) {
		printf("%d��: ", i);
		for (j = 0; j < 4; j++)
		{
				printf("%4d", p[i][j]);
				sumrow += p[i][j];
		}
		printf("   %d���� ��:%d\n",i,sumrow);
		sumrow = 0;
		}

	printf("���� ��");
	for (i = 0; i < 4; i++)
	{
		sumcol = p[0][i] + p[1][i] + p[2][i];
		printf("%4d", sumcol);
		sumcol = 0;
	}
	



}
