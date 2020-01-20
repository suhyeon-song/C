//���� ���ϴ� ���α׷�
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
	if (res == -1)return 0;//���� �Է½� ����
	else;
	check = checkNum(&year, &month, &day);
	while (check==-1)
	{
		printf("�߸��� ��¥�Դϴ�. �ٽ� �Է��ϼ���\n");
		myflush(); 
		res = inputInt(&year, &month, &day);
		if (res == -1)return 0;//���� �Է½� ����
		else;
		check = checkNum(&year, &month, &day);
	}
	
	totalDays = cntDays(year, month, day);
	switch (totalDays % 7)
	{
	case 0: strcpy(str, "�Ͽ���"); break;
	case 1: strcpy(str, "������"); break;
	case 2: strcpy(str, "ȭ����"); break;
	case 3: strcpy(str, "������"); break;
	case 4: strcpy(str, "�����"); break;
	case 5: strcpy(str, "�ݿ���"); break;
	case 6: strcpy(str, "�����"); break;
	}
	output(year, month, day, str);

	return 0;
}
int inputInt(int *pyear,int *pmonth, int *pday)
{
	int res,check;

	printf("* �� �� ���� �Է��Ͻÿ�: ");
	res = scanf("%d %d %d", pyear, pmonth, pday);
	
	if (res == 3)return 1;
	else return -1;
	
}

int yearCheck(int year) // �����̸� 1, ����̸� 0 ����
{
	if (year % 4 != 0) { // 4�� ������ �������� ������ ���
		return 0;
	}
	else if (year % 100 != 0) { // 4�� ������ �������� 100���� ������ �������� ������ ����
		return 1;
	}
	else if (year % 400 == 0) { // 4�� 100�� 400���� ������ �������� ����
		return 1;
	}
	else { // 4�� 100���� ������ �������� 400���� ������ �������� ������ ���
		return 0;
	}
}

int checkNum(int *pyear, int *pmonth, int *pday)//�߸��� ��¥ �Է½� -1 ����, ���� �Է½� 1 ���� 
{
	
	//�߸��� �� ����
		if (*pyear > 0);
		else return -1;
	
	//�߸��� �� ����

		if (*pmonth >= 1 && *pmonth <= 12);
		else return -1;
	
	//�߸��� �� ����
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
	//������ � �ִ��� ���
	for (i = 1900; i < year; i++)//(�Է� ��-1)�� ������ �� �� 
	{
		if (yearCheck(i) == 1)sum += 366;
		else sum += 365;
	}
	for (i = 1; i < month; i++)//�Է� �� 1�� ���� �Է� �� �� �ޱ����� �� �� 
	{
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)sum += 31;//31�� ���� �ִ� ��
		else if (i == 4 || i == 6 || i == 9 || i == 11) sum += 30;//30�� ���� �ִ� ��
		else {
			if (yearCheck(year) == 1)sum += 29;//29�ϱ��� �ִ� ��
			else sum += 28;//28�� ���� �ִ� �� 
		}
	}
	//�Է� �� �Է� �� 1��~�Է� �� �Է� �� �Է� ��
	sum = sum + day;

	return sum;
}

void output(int year, int month, int day, char* a) {
	printf("%d�� %d�� %d���� %s�Դϴ�. \n", year, month, day, a);
}
void myflush()
{
	while (getchar() != '\n') { ; }
}