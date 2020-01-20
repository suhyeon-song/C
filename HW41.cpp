//삼각 알파벳 출력하기
//1. 영문자 대문자를 입력 받는다. 2. 'A'까지 출력 3. 영문자 대문자 이외에 다른 문자 입력 시 종료.
//main에서 작성
#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	char ch;
	int i, j;
	while (1)
	{
		printf("* 영문자 대문자 입력('A'~'Z'): ");
		scanf(" %c", &ch);
		if (ch >= 'A' && ch <= 'Z')
		{
			for (i = 0; i <= ch - 'A'; i++)
			{
				for (j = 0; j <= i; j++) { printf("%c", ch - j); }
				printf("\n");
			}
			printf("\n");
		}
		else break;
	}
	return 0;
}