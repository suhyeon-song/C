//�Ҽ� ����ϱ� 
#include<stdio.h>
#include <math.h>
#pragma warning(disable: 4996)
int input(void);
int primeNumber(int number);
int main()
{
	int num,i,cnt=0;
	num = input();
	for (i = 2; i <= num; i++)
	{
		if (primeNumber(i) == 1)
		{
			printf("%d\t",i);
			cnt++;
			if (cnt % 5 == 0)printf("\n");
			else;
		}
		else;
	}
	printf("\n1~%d ������ �� �Ҽ��� %d�� �Դϴ�. ", num, cnt);
	return 0;
}
int input(void)
{
	int num;
	printf("* ������ �ϳ��� �Է��Ͻÿ�: ");
	scanf("%d", &num);
	return num;
}
int primeNumber(int number)//�˻��� ���ڰ� �Ҽ��̸� 1����, �Ҽ��� �ƴϸ� 0 ���� 
{
	int i; 
	for (i = 2; i <= sqrt(number); i++)
	{
		if (number % i == 0)return 0;
		else;
	}
	return 1;
}