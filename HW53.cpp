//ȸ�� �˻� ���α׷�
//1. ���ڿ� �Լ� �Է� �Լ�;���ڿ� ���� ����,
//2. �˻��Լ� ( ���������� ���ڿ� �ް�, ���ڿ� ���� �������ڷ� ����)
//(num/2)ȸ �� ary[0]:ary[num-1]/ary[1]:ary[num-2]/.../ary[num/2]:ary[num-num/2-1]
//�� �迭�� ���� topper()���� ��
//3. ��� ��� �Լ� 
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
	printf("# �ܾ� �Է�: ");
	while (1)
	{
		scanf("%c", p + i);
		if (p[i] == '\n') { p[i] = '\0'; break; }//������ ���� ���ڸ� \0���� �ٲ�
		i++;
	}


	return i;//�迭�� ����-1(\0���� �������� �ʴ� �迭�� ����) ����
}
int checkStr(char* p, int num)
{
	int i = 0;
	for (i = 0; i < num / 2 - 1; i++)//num/2ȸ ��
	{
		if (toupper(p[i]) == toupper(p[num - i - 1]));
		else return 0;//ȸ���� �ƴҶ� 0 ����
	}
	return 1;//ȸ���϶� 1 ���� 
}
void output(char*p,int a)
{
	if (a == 0) { printf("%s: ȸ���� �ƴմϴ�!",p); }
	else { printf("%s: ȸ���Դϴ�!",p); }
}



