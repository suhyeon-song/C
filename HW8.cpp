//세 과목 점수 입력받아 총점, 평균 출력하기
//역사 문학 예능의 점수를 입력받아서 (scanf/#pragma)
//총점과 평균을 구한 후 출력하는 프로그램 //출력함수
//입력점수는 양의 정수값(unsigned int) 평균은 실수값(double)
#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	unsigned int hist, liter, artis,total;
	double average;

	printf("역사,문학,예능 세 과목의 점수를 입력하세요:");
	scanf("%u %u %u", &hist, &liter, &artis);
	total = hist + liter + artis;
	average = total / 3.0;
	printf("총점은 %u 이고 평균은 %.2lf 입니다.\n", total, average);
	return 0;

}