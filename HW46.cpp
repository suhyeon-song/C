//요일 구하는 프로그램
#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
int inputInt(int* pyear, int* pmonth, int* pday);
int yearCheck(int year);
int checkNum(int *pyear, int *pmonth, int *pday);
int cntDays(int year, int month, int day);
void output(int year, int month, int day, char* a);
void myflush();
int main()
{
	int year, month, day,res,totalDays,check;
	char str[20];

	res = inputInt(&year, &month, &day);
	if (res == -1)return 0;//문자 입력시 종료
	else;
	check = checkNum(&year, &month, &day);
	while (check==-1)
	{
		printf("잘못된 날짜입니다. 다시 입력하세요\n");
		myflush(); 
		res = inputInt(&year, &month, &day);
		if (res == -1)return 0;//문자 입력시 종료
		else;
		check = checkNum(&year, &month, &day);
	}
	
	totalDays = cntDays(year, month, day);
	switch (totalDays % 7)
	{
	case 0: strcpy(str, "일요일"); break;
	case 1: strcpy(str, "월요일"); break;
	case 2: strcpy(str, "화요일"); break;
	case 3: strcpy(str, "수요일"); break;
	case 4: strcpy(str, "목요일"); break;
	case 5: strcpy(str, "금요일"); break;
	case 6: strcpy(str, "토요일"); break;
	}
	output(year, month, day, str);

	return 0;
}
int inputInt(int *pyear,int *pmonth, int *pday)
{
	int res,check;

	printf("* 년 월 일을 입력하시오: ");
	res = scanf("%d %d %d", pyear, pmonth, pday);
	
	if (res == 3)return 1;
	else return -1;
	
}

int yearCheck(int year) // 윤년이면 1, 평년이면 0 리턴
{
	if (year % 4 != 0) { // 4로 나누어 떨어지지 않으면 평년
		return 0;
	}
	else if (year % 100 != 0) { // 4로 나누어 떨어지고 100으로 나누어 떨어지지 않으면 윤년
		return 1;
	}
	else if (year % 400 == 0) { // 4와 100과 400으로 나누어 떨어지면 윤년
		return 1;
	}
	else { // 4와 100으로 나누어 떨어지고 400으로 나누어 떨어지지 않으면 평년
		return 0;
	}
}

int checkNum(int *pyear, int *pmonth, int *pday)//잘못된 날짜 입력시 -1 리턴, 정상 입력시 1 리턴 
{
	
	//잘못된 년 숫자
		if (*pyear > 0);
		else return -1;
	
	//잘못된 월 숫자

		if (*pmonth >= 1 && *pmonth <= 12);
		else return -1;
	
	//잘못된 일 숫자
		if (*pmonth == 1 || *pmonth == 3 || *pmonth == 5 || *pmonth == 7 || *pmonth == 8 || *pmonth == 10 || *pmonth == 12)
		{
			if (*pday >= 1 && *pday <= 31);
			else return -1;
		}
		if (*pmonth == 4 || *pmonth == 6 || *pmonth == 9 || *pmonth == 11)
		{
			if (*pday >= 1 && *pday <= 30);
			else return -1;
			
		}
		if (*pmonth == 2) {
			if (yearCheck(*pyear) == 1) {
				if (*pday >= 1 && *pday <= 29);
				else return -1;
				
			}
			else {
				if (*pday >= 1 && *pday <= 28);
				else return -1;
			}
		}
		return 1;
	}


int cntDays(int year, int month, int day)
{
	int i, sum = 0;
	//윤년이 몇개 있는지 계산
	for (i = 1900; i < year; i++)//(입력 년-1)년 까지의 일 수 
	{
		if (yearCheck(i) == 1)sum += 366;
		else sum += 365;
	}
	for (i = 1; i < month; i++)//입력 년 1월 부터 입력 월 전 달까지의 일 수 
	{
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)sum += 31;//31일 까지 있는 달
		else if (i == 4 || i == 6 || i == 9 || i == 11) sum += 30;//30일 까지 있는 달
		else {
			if (yearCheck(year) == 1)sum += 29;//29일까지 있는 달
			else sum += 28;//28일 까지 있는 달 
		}
	}
	//입력 년 입력 달 1일~입력 년 입력 달 입력 일
	sum = sum + day;

	return sum;
}

void output(int year, int month, int day, char* a) {
	printf("%d년 %d월 %d일은 %s입니다. \n", year, month, day, a);
}
void myflush()
{
	while (getchar() != '\n') { ; }
}