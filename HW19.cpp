#include<stdio.h>
#pragma warning (disable:4996)
int input();
int yearCheck(int year);
int main() {
	int year,res;
	year = input();
	res = yearCheck(year);
	if (res == 1) {
		printf("%d년은 윤년(Leap year)입니다.", year);
	}
	else printf("%d년은 평년(Common year)입니다", year);

	return 0;
}
int input() {
	int year;
	printf("년도를 입력하시오: ");
	scanf("%d", &year);
	return year;
}
int yearCheck(int year) {
	if ((year % 4) == 0)
	{
		if ((year % 100) == 0) {
			if ((year % 400) == 0)return 1;
			else return 0;
		}
		else return 1;
	}
	else return 0;
}