//수도요금 계산 프로그램
#include<stdio.h>
#pragma warning(disable:4996)
int input(const char* msg);
int calcu(int code,int use);
void output(int code,int use, int total);
void myflush();
int main()
{
	int code, use, total;
	while (1) {
		code = input("사용자 코드를 입력하시오(1:가정용/2:상업용/3.공업용): ");
		if (code >= 1 && code <= 3)break;
		else;
}
	while (1) {
		use = input("사용량을 입력하시오(ton단위): ");
		if (use >= 0)break;
		else;
	}
	total = calcu(code, use);
	output(code, use, total);
	return 0;
}
int input(const char* msg)
{
	int n;
	printf("%s", msg);
	scanf("%d", &n);
	myflush();
	return n;
	}
int calcu(int code, int use)
{
	int total,tax;
	double dtax;

	switch (code)
	{
	case 1: total = use * 50; break;
	case 2: total = use * 45; break;
	case 3: total = use * 30; break;
	}
	dtax = total * 0.05;
	tax = (int)dtax;
	return total + tax;
}
void output(int code, int use, int total)
{
	if(code==1)printf("\n# 사용자코드: %d(가정용)\n", code);
	else if (code == 2)printf("\n# 사용자코드: %d(상업용)\n", code);
	else printf("\n# 사용자코드: %d(공업용)\n", code);
	
	printf("# 사용량: %dton\n", use);
	printf("# 총 수도요금: %d원\n", total);
	return;
}
void myflush()
{
	while (getchar() != '\n') { ; }
}