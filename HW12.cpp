//이름을 영문으로 입력받아 다음과 같은 형태로 출력
//이름 전체를 ""로 묶어서 출력
//필드폭을 20자로 이름을 출력하되 전 필드를 ""로 감싸서 출력
//필드폭을 20자로 이름을 출력하되 전 필드를 ""로 감싸서 왼쪽 정렬
#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	char name[20];
	printf("이름을 입력하세요");
	scanf("%s", name);
	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	return 0;

}