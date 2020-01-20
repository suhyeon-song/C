#include<stdio.h>
#include <string.h>
#pragma warning (disable:4996)
int main() {
	char name[20];
	double tall;
	char sex;
	int len;
	printf("#성명 입력 :");
	fgets(name, 20, stdin);
	len = strlen(name);
	name[len - 1] = '\0';

	printf("#키 입력(cm단위):");
	scanf("%lf", &tall);

	printf("#성별입력(M/F) 입력 :");
	scanf(" %c", &sex);
	if (sex == 'M') {
		printf("%s씨의 키는 %.2lfcm이고 남성입니다.", name, tall);
	}
	else if (sex == 'F')
	{
		printf("%s씨의 키는 %.2lfcm이고 여성입니다.", name, tall);
	}
	return 0;

}