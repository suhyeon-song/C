//���ڿ� ���� ������ �� ���ϱ�
//1. ���ڿ��� �Է¹޴´�(�Է��Լ�) 2. ���ڿ����� ���ڸ� ��� ���Ѵ�.(���ڳ����� ���� ���� ���� ������ ��)
#include <stdio.h>
#include<string.h>
#pragma warning (disable: 4996)
int strinput(char *p);
int calcu(char *p,int arynum);
void output(char *pstr,int sum);
int pow(int a, int b);
int main()
{
	char str[100];
	int num[100] = { 0, },sum,arynum;
	while (1)
	{
		arynum = strinput(str);
		if (strcmp(str, "end") == 0)return 0;
		else;
		sum = calcu(str, arynum);
		output(str, sum);
		printf("\n");
	}
	return 0;
}
int strinput(char *p)
{
	int i = 0;
	printf("# ������ �Է��ϼ���: ");
	while (1)
	{
		scanf("%c", p + i);
		if (p[i] == '\n') { p[i] = '\0'; break; }
		i++;
	}
	return i+1;//�迭�� ���� (\0������)  ����
}
int calcu(char* pstr,int arynum)
{
	int i, k, cnt = 0, sum = 0;
	int num[100] = { 0, };
	for (i = 0; i < arynum; i++)
	{
		if (pstr[i] - '0' >= 0 && pstr[i] - '0' <= 9) {//pstr[i]�� ���ڷ� ��ȯ ������ ���ڻ��
			num[cnt] = pstr[i] - '0';//num[cnt]�� pstr[i] ���� ��ȯ �� �� ����
			cnt++;//cnt 1 ����
		}
		else {
			for (k = 0; k < cnt; k++)
			{
				sum += (num[k] * pow(10, cnt-k-1));//cnt�� sum�迭�� ���� cnt�� 3�̸� 10^2���� ���ϱ� �����ϱ� ������ -1 ����� �Ѵ�.
			}
			cnt = 0;
		}
	
			
	}
	return sum;
}
void output(char* pstr, int sum)
{	printf("\"%s\"���� �� ���ڴ� [%d]�Դϴ�.\n", pstr, sum);}
int pow(int a, int b)
{
	int total = 1;//**total=0�̶�� �ϸ� *=�� 0�� �������� ������ �׻� 0�� ������ ������ total�� 1�� �ʱ�ȭ
	for (int i = 0; i < b; i++)
	{
		total *= a;
	}
	return total;
}
