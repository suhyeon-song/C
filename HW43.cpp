//소수 출력하기 
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
	printf("\n1~%d 까지의 총 소수는 %d개 입니다. ", num, cnt);
	return 0;
}
int input(void)
{
	int num;
	printf("* 정수값 하나를 입력하시오: ");
	scanf("%d", &num);
	return num;
}
int primeNumber(int number)//검사한 숫자가 소수이면 1리턴, 소수가 아니면 0 리턴 
{
	int i; 
	for (i = 2; i <= sqrt(number); i++)
	{
		if (number % i == 0)return 0;
		else;
	}
	return 1;
}