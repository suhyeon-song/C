//전기요금 계산하기
#pragma warning(disable:4996)
#include <stdio.h>
#define cost 88.5
int input();
void output(double totalcost);
int main()
{
	//기본요금 660원 kw당 88.5원
	//전체요금=기본요금+(사용량*kw당 사용요금)
	//세금은 전체요금의 9%
	//최종사용요금= 전체요금+세금
	//입력함수 출력함수

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
	printf("전기 사용량을 입력하세요(kw):");
	scanf("%d", &usedelec);
	return usedelec;
}
void output(double totalcost)
{
	printf("전기 사용요금은 %lf입니다", totalcost);
}