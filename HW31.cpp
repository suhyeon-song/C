//은행 계좌 입출금 관리 프로그램
//사용 함수 1. 메뉴함수 2.input 함수 3. deposit() 4. withdraw()
#include<stdio.h>
#pragma warning(disable:4996)
int input(const char* msg);
void myflush();
char menu();
int deposit(int total);
int withdraw(int total);
int main()
{
	int total=0;
	char chmenu;
	printf("*현재 잔액은 %d입니다\n\n", total);
	while (1)
	{
		chmenu = menu();
		if (chmenu == 'i')total=deposit(total);
		else if (chmenu == 'o')total=withdraw(total);
		else break;;
		printf("현재 잔액은 %d입니다\n", total);
	}

	return 0;
}
char menu()
{
	char ch;
	while (1)
	{
		printf("\n# 메뉴를 선택하세요(i-입급, o-출금, q-종료):");
		scanf("%c", &ch);

		if (ch == 'i' || ch == 'o' || ch == 'q')break;
		else { printf("* 잘못 입력하셨습니다.\n"); myflush(); }
	}
	return ch;
}
int input(const char* msg)
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
		if (n < 1)
		{
			printf("잘못 입력하셨습니다. 다시입력하십시오:");
			continue;
		}
		else break;
	}
	return n;
}
int deposit(int total)
{
	int monin;

	monin = input("# 입금액을 입력하세요:");
	

	total += monin;
	return total;
}
int withdraw(int total)
{
	int monout;
	
		monout = input("# 출금액을 입력하세요:");
		if (monout > 0&&monout<total)
		{
			total -=monout;
			return total;
		}
		else
		{
			if (monout > total)
			{
				printf("잔액이 부족합니다.\n");
				return total;
			}
			else;
		}

}
void myflush()
{
	while (getchar() != '\n') { ; }
}