//�̸��� ���� �� ����ϱ�
#pragma warning (disable:4996)
#include <stdio.h>
#include<string.h>
int main() {
	char fname[20], lname[20];
	int flen, llen;
	printf("#���� �Է��Ͻÿ� :");
	scanf("%s", lname);
	llen = strlen(lname);
	printf("#�̸��� �Է��Ͻÿ� :");
	scanf("%s", fname);
	flen = strlen(fname);
	printf("%s %s\n", lname, fname);
	
	printf("%*d %*d", llen, llen, flen, flen);
	return 0;
}