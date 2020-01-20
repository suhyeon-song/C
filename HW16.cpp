//지하철 요금 계산하기
//역수에 따라 적용되는 규칙
//1~5;600원 6~10;800원 
//10정거장 초과시 1~2정거장 100원 3~4정거장 200원
//입력 요금 계산 출력함수
#pragma warning(disable:4996)
#include <stdio.h>
int input();
int calcu(int num);
void output(int a);
int main() {
	int num,a;
	num = input();
	a=calcu(num);
	output(a);
	return 0;
}
int input() {
	int num;
	printf("역수를 입력하시오: ");
	scanf("%d", &num);
	return num;
}
int calcu(int num) {
	int fee;
	if (num <= 5)  fee = 600; 
	else if (num <= 10)  fee = 800; 
	else
	{
		fee = 800 + (num - 9) / 2 * 100;
	}
	return fee;
}
void output(int a)
{
	printf("요금: %d원", a);
	return;
}