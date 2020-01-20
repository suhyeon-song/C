//환풍구 관리 시스템
#include<stdio.h>
#pragma warning(disable:4996)
int menu();
unsigned char offFan(unsigned char res);
unsigned char openFan(unsigned char res);
unsigned char reverseFan(unsigned char res);
void displayFan(unsigned char res);
void myflush();
int input(const char* msg);
int main()
{
	unsigned char ch,chek,res,mnum;
	res = 0x00;
	while (1)
	{
		mnum = menu();
		if (mnum == 1)
		{
			res = openFan(res);
			displayFan(res);
		}
		else if (mnum == 2)
		{
			res = offFan(res);
			displayFan(res);
		}
		else if (mnum == 3)
		{
			res = reverseFan(res);
			displayFan(res);
		}
		else break;
	}
	return 0;
}
int menu()
{
		int n;
		n=input("\n1. 환풍구 열기/ 2. 환풍구 닫기/ 3. 환풍구 전체 전환/ 4. 종료: ");
		while (1) {
			while (getchar() != '\n')
			{
				myflush();
				printf("잘못 입력하셨습니다. 다시입력하십시오:");
				scanf("%d", &n);
			}
			if (n!=1&&n!=2&&n!=3&&n!=4)
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
unsigned char openFan(unsigned char res)
{
	int n;
	unsigned char chek = 0x01;
	printf("        FAN 열기 작업 실행 화면        \n");
	printf("_______________________________________________________________________\n");
	n = input("* OPEN할 FAN 번호를 입력하시오(1-8):");
	printf("_______________________________________________________________________\n");
	while (1) {
		while (getchar() != '\n')
		{
			myflush();
			n = input("잘못 입력하셨습니다. 다시 입력하십시오: ");
		}
		if (n != 1 && n != 2 && n != 3 && n != 4&&n!=5&&n!=6&&n!=7&&n!=8)
		{
			n = input("잘못 입력하셨습니다. 다시 입력하십시오: ");
		}
		else break;
	}
	chek = chek << n-1;
	res = res | chek;
	return res;
}
unsigned char offFan(unsigned char res)
{
	int n;
	int chek = 0xff7f;
	printf("        FAN 닫기 작업 실행 화면        \n");
	printf("\n_______________________________________________________________________\n");
	n = input("* CLOSE할 FAN 번호를 입력하시오(1-8):");
	printf("\n_______________________________________________________________________\n");
	while (1) {
		while (getchar() != '\n')
		{
			myflush();
			n=input("잘못 입력하셨습니다. 다시입력하십시오:");
	
		}
		if (n != 1 && n != 2 && n != 3 && n != 4 && n != 5 && n != 6 && n != 7 && n != 8)
		{
			n=input("잘못 입력하셨습니다. 다시입력하십시오:");
			
		}
		else break;
	}
	chek = chek >> 8-n;
	res = res & chek;
	return res;
}
unsigned char reverseFan(unsigned char res)
{
	unsigned chek = 0xff;

	printf("        FAN 전체 전환 작업 실행 화면        \n");
	printf("\n_______________________________________________________________________\n");
	printf("* 전체 FAN의 상태가 전환되었습니다.(ON/OFF 상태 뒤바뀜):\n");
	printf("\n_______________________________________________________________________\n");
	res = res ^ chek;
	return res;
}
void displayFan(unsigned char res)
{
	unsigned char chek = 0x80,pres;
	printf("\n8번FAN 7번FAN 6번FAN 5번FAN 4번FAN 3번FAN 2번FAN 1번FAN");
	printf("\n_______________________________________________________________________\n");

	for (int i = 0; i < 8; i++)
	{
		pres = res & chek;
		if (pres == 0)printf("  OFF  ");
		else printf("  ON  ");
		chek = chek >> 1; 
	}
	return ;
}
int input(const char* msg)
{
	int n;
	printf("%s", msg);
	scanf("%d", &n);
	return n;
}