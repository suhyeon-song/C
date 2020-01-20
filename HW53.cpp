//회문 검사 프로그램
//1. 문자열 함수 입력 함수;문자열 개수 리턴,
//2. 검사함수 ( 포인터통해 문자열 받고, 문자열 개수 전달인자로 받음)
//(num/2)회 비교 ary[0]:ary[num-1]/ary[1]:ary[num-2]/.../ary[num/2]:ary[num-num/2-1]
//각 배열의 값을 topper()시켜 비교
//3. 결과 출력 함수 
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#pragma warning(disable:4996)
int input(char* p);
int checkStr(char* p, int num);
void output(char *p,int res);
int main()
{
	char str[100];
	int num, res;
	while (1) {
	num = input(str);
	if (strcmp(str, "end") == 0)return 0;
	else;
	res = checkStr(str, num);
	output(str,res);
	printf("\n\n");
}
	return 0;
}
int input(char* p)
{
	char i = 0;
	printf("# 단어 입력: ");
	while (1)
	{
		scanf("%c", p + i);
		if (p[i] == '\n') { p[i] = '\0'; break; }//마지막 개행 문자를 \0으로 바꿈
		i++;
	}


	return i;//배열의 개수-1(\0문자 포함하지 않는 배열의 개수) 리턴
}
int checkStr(char* p, int num)
{
	int i = 0;
	for (i = 0; i < num / 2 - 1; i++)//num/2회 비교
	{
		if (toupper(p[i]) == toupper(p[num - i - 1]));
		else return 0;//회문이 아닐때 0 리턴
	}
	return 1;//회문일때 1 리턴 
}
void output(char*p,int a)
{
	if (a == 0) { printf("%s: 회문이 아닙니다!",p); }
	else { printf("%s: 회문입니다!",p); }
}



