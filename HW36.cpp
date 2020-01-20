//피보나치 수열 구하기
#include<stdio.h>
#pragma warning(disable:4996)
int input(const char* msg);
void myflush();
int main()
{
	int n,cnt=2,num1=1,num2=1,res,sum=2;
	n = input("피보나치 수열의 항수를 입력하시오: ");

	if (n == 1)printf("1=1");
	else if (n == 2)printf("1+1=2");
	else {
		printf("1+1");
		while (cnt < n) {
			res = num1 + num2;
			sum += res;
			printf("+%d", res);
			num1 = num2;
			num2 = res;
			cnt++;
		
		}
		printf("=%d", sum);
	}
}
int input(const char* msg)
{
	int n;
	while (1) {
		printf("%s", msg);
		scanf("%d", &n);
		if (n > 0)break;
		else { myflush(); }
	}
	return n;
}
void myflush()
{
	while (getchar() != '\n') { ; }
}