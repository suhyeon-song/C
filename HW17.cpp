#include<stdio.h>
#include <string.h>
#pragma warning (disable:4996)
int main() {
	char name[20];
	double tall;
	char sex;
	int len;
	printf("#���� �Է� :");
	fgets(name, 20, stdin);
	len = strlen(name);
	name[len - 1] = '\0';

	printf("#Ű �Է�(cm����):");
	scanf("%lf", &tall);

	printf("#�����Է�(M/F) �Է� :");
	scanf(" %c", &sex);
	if (sex == 'M') {
		printf("%s���� Ű�� %.2lfcm�̰� �����Դϴ�.", name, tall);
	}
	else if (sex == 'F')
	{
		printf("%s���� Ű�� %.2lfcm�̰� �����Դϴ�.", name, tall);
	}
	return 0;

}