#include<stdio.h>
#pragma warning (disable:4996)
int input();
int yearCheck(int year);
int main() {
	int year,res;
	year = input();
	res = yearCheck(year);
	if (res == 1) {
		printf("%d���� ����(Leap year)�Դϴ�.", year);
	}
	else printf("%d���� ���(Common year)�Դϴ�", year);

	return 0;
}
int input() {
	int year;
	printf("�⵵�� �Է��Ͻÿ�: ");
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