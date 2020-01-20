//2진수 변환 프로그램
//1. 10진수를 입력받아 2.이진수로 출력(이로 나누고 나머지)
//bit조절 연산자 사용, 반복문 사용 , 음수는 2의 보수상태 출력
#include <stdio.h>
#pragma warning(disable:4996)
int input();
void myflush();
int main()
{
	int num, res;
	unsigned int chek = 0x80000000;
	num = input();
	printf("%d(10) =", num);
	for(int i=0;i<32;i++)
	{
		res=num & chek;
		if (res == 0)printf("0");
		else printf("1");
		chek = chek >> 1;
	}
	printf("(2)");
	return 0;
}
int input()
{
	int num;
	while (1)
	{
		printf("* 10진 정수를 입력하세요:");
		scanf("%d", &num);
		if (getchar() == '\n')break;
		else
		{
			myflush();
		}
	}
	return num;
}
void myflush()
{
	while (getchar() != '\n') { ; }
}