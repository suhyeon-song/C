//���� �˻� ���α׷�(���� �˻�)
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
			if (res == -1)	printf("\"%s\"���ڿ� �ȿ� '%c'���ڴ� �������� �ʽ��ϴ�\n\n", str, ch);
			else printf("\"%s\"���ڿ� �ȿ� '%c'���ڴ� %d�� ��ġ�� �����մϴ�.\n\n", str, ch, res);
		
	}
	return 0;
}
void input(char* sp, char* cp)
{
	while (1)
	{
		printf("# ���ڿ��� �Է��Ͻÿ�: ");
		scanf("%s", sp);
	
		if (getchar() != '\n');
		else break;
	}
	while(1)
	{
		if (strcmp(sp, "end") == 0)break;//end �Է½� ���ڸ� �Է¹��� �ʴ´�.
	printf("# ���ڸ� �Է��Ͻÿ�: ");
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