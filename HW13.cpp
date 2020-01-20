//이름의 글자 수 출력하기
#pragma warning (disable:4996)
#include <stdio.h>
#include<string.h>
int main() {
	char fname[20], lname[20];
	int flen, llen;
	printf("#성을 입력하시오 :");
	scanf("%s", lname);
	llen = strlen(lname);
	printf("#이름을 입력하시오 :");
	scanf("%s", fname);
	flen = strlen(fname);
	printf("%s %s\n", lname, fname);
	
	printf("%*d %*d", llen, llen, flen, flen);
	return 0;
}