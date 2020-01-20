//누승 함수 만들기

#include <stdio.h>
#pragma warning (disable:4996)
int  inputUInt(const char* msg);
double inputDouble(const char* msg);
int ipow(int num, int N);
double fpow(double fnum, int N);
void myflush();
int main()
{
	int x1, y1,y2,res1;
	double x2,res2;
	x1 = inputUInt("* 양의 정수 밑을 입력 하시오:");
	y1 = inputUInt("* 양의 승을 입력 하시오");
	res1 = ipow(x1, y1);
	printf("%d의 %d승은 %d입니다\n\n", x1, y1, res1);
	x2 = inputDouble("\n* 양의 실수 밑을 입력 하시오:");
	y2 = inputUInt("* 양의 승을 입력 하시오:");
	res2 = fpow(x2, y2);
	printf("%.2lf의 %d승은 %.3lf입니다\n\n", x2, y2, res2);
	return 0;
}
int inputUInt(const char* msg)
{
	int n;
	printf("%s", msg);
	scanf("%d", &n);
	while (1) {
		while (getchar() != '\n')
		{
			myflush();
			printf("잘못 입력하셨습니다. 다시입력하십시오:");
			scanf("%d", &n);
		}
		if (n < 0)
		{
			printf("잘못 입력하셨습니다. 다시입력하십시오:");
			scanf("%d", &n);
		}
		else break;
	}
	return n;
}
double inputDouble(const char* msg)
{
	double n;

	while (1) {
		printf("%s", msg);
		scanf("%lf", &n);
		while (getchar() != '\n')
		{
	
			myflush();
			printf("잘못 입력하셨습니다. 다시입력하십시오:");
			scanf("%d", &n);
		}
		if (n < 0)
		{
			printf("잘못 입력하셨습니다. 다시입력하십시오:");
			scanf("%d", &n);
		}
		else break;
	}
	return n;
}
void myflush()
{
	while (getchar() != '\n') { ; }
}
int ipow(int num, int N)
{
	int res=1;
	if (num == 0)return 0;
	else if (N == 0)return 1;
	else
	{
		for (int i = 0; i < N; i++)
		{
			res *= num;
		}
	}return res;
}
double fpow(double num, int N)
{
	double res = 1.0;
	if (num == 0)return 0;
	else if (N == 0)return 1;
	else
	{
		for (int i = 0; i < N; i++)
		{
			res *= num;
		}
	}return res;
}