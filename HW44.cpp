#include<stdio.h>
#pragma warning(disable:4996)
int input(int* pst, int* pend);
char choosesum(int st, int end);//¦���� ������(e����) Ȧ���� ������ (o����)
int evenSum(int st, int end);
int oddSum(int st, int end);
void output(char ch, int sum, int st, int end);
int main()
{
	int st, end, chek, res, sum;
	char ch;
	chek = input(&st, &end);
	if (chek == -1)return 0;//���� �Է½� ����
	else;
	ch = choosesum(st, end);
	if (ch == 'e')sum = evenSum(st, end);
	else sum = oddSum(st, end);
	output(ch, sum, st, end);
	return 0;

}
int input(int* pst, int* pend)
{
	int chek;
	printf("# ���� ���� �Է��Ͻÿ�: ");
	chek = scanf("%d", pst);
	if (chek == 0)return -1;// ���ڰ� �Էµ��� �� -1����
	else;
	while (1) {//������ ���۰����� ���� �� ���Է� �䱸
		printf("# �� ���� �Է��Ͻÿ�: ");
		scanf("%d", pend);
		if (*pst < *pend) break;
		else;	
	}
	return 1;
}
char choosesum(int st, int end)
{
	char ch;
	while (1) {//e or o �Է� �ƴ� �� ���Է� �䱸
		printf("%d~%d ������ ¦���� ���� ���ұ��? Ȧ���� ���� ���ұ��? (¦��: e/Ȧ��: o): ", st, end);
		scanf(" %c", &ch);
		if (ch == 'e' || ch == 'o')break;
		else;
	}
	return ch;
}
int evenSum(int st, int end)
{
	int i,sum=0;
	for (i = st; i <= end; i++) {
		if (i % 2 == 0)sum += i;
		else;
	}
	return sum;
}
int oddSum(int st, int end)
{
	int i, sum = 0;
	for (i = st; i <= end; i++) {
		if (i % 2 == 1)sum += i;
		else;
	}
	return sum;
}
void output(char ch, int sum, int st, int end)
{
	int i;
	if (ch == 'e') {
		printf("%d~%d ������ ¦��(",st,end);
		for (i = st; i <= end; i++)
		{
			if (i % 2 == 0)printf("%3d", i);
			else;
		}
		printf(")�� ���� %d �Դϴ�. ", sum);
	}
	else {
		printf("%d~%d ������ Ȧ��(",st,end);
		for (i = st; i <= end; i++)
		{
			if (i % 2 == 1)printf("%3d", i);
			else;
		}
		printf(")�� ���� %d �Դϴ�. ", sum);
	}
}