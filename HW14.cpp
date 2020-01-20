//문자열 생략하여 출력하기
//문자열을 입력받아 입력받은 문자열을 앞에서부터 반만 출력
//출력시 대괄호로 묶어서 출력, 문자열의 길이만큼의 필드폭에 문자열의 반만 출력하고 문자열 뒤에는 생략기호를 넣어 출력
#include <stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main() {
	char str[10];
	int len;
	printf("문자열 입력:");
	scanf("%s", str);
	len = strlen(str);
	printf("[%*.*s...]", len,len/2,str);
	return 0;
}