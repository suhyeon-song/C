//문자 검색 프로그램(단일 검색)
#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
void input(char* sp, char* cp);
int strcheck(char* a, char b);
int main()
{
	char str[100], ch;
	int res;
	while (1)
	{
		
	
			input(str, &ch);
			if (strcmp(str, "end") == 0)return 0;
			else;
			res = strcheck(str, ch);
			if (res == -1)	printf("\"%s\"문자열 안에 '%c'문자는 존재하지 않습니다\n\n", str, ch);
			else printf("\"%s\"문자열 안에 '%c'문자는 %d번 위치에 존재합니다.\n\n", str, ch, res);
		
	}
	return 0;
}
void input(char* sp, char* cp)
{
	while (1)
	{
		printf("# 문자열을 입력하시오: ");
		scanf("%s", sp);
	
		if (getchar() != '\n');
		else break;
	}
	while(1)
	{
		if (strcmp(sp, "end") == 0)break;//end 입력시 문자를 입력받지 않는다.
	printf("# 문자를 입력하시오: ");
	scanf("%c", cp);
	if (getchar() != '\n');
	else break;
	}
}
int strcheck(char* a, char b)
{
	int i;
	for (i = 0; i < 99; i++)
	{
		if (a[i] == b)return i;
		else;
	}
	return -1;
}