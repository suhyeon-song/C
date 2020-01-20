#include<stdio.h>
#pragma warning(disable:4996)
int input(int* pst, int* pend);
char choosesum(int st, int end);//짝수를 더할지(e리턴) 홀수를 더할지 (o리턴)
int evenSum(int st, int end);
int oddSum(int st, int end);
void output(char ch, int sum, int st, int end);
int main()
{
	int st, end, chek, res, sum;
	char ch;
	chek = input(&st, &end);
	if (chek == -1)return 0;//문자 입력시 종료
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
	printf("# 시작 값을 입력하시오: ");
	chek = scanf("%d", pst);
	if (chek == 0)return -1;// 문자가 입력됐을 떄 -1리턴
	else;
	while (1) {//끝값이 시작값보다 작을 떄 재입력 요구
		printf("# 끝 값을 입력하시오: ");
		scanf("%d", pend);
		if (*pst < *pend) break;
		else;	
	}
	return 1;
}
char choosesum(int st, int end)
{
	char ch;
	while (1) {//e or o 입력 아닐 시 재입력 요구
		printf("%d~%d 까지의 짝수의 합을 구할까요? 홀수의 합을 구할까요? (짝수: e/홀수: o): ", st, end);
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
		printf("%d~%d 까지의 짝수(",st,end);
		for (i = st; i <= end; i++)
		{
			if (i % 2 == 0)printf("%3d", i);
			else;
		}
		printf(")의 합은 %d 입니다. ", sum);
	}
	else {
		printf("%d~%d 까지의 홀수(",st,end);
		for (i = st; i <= end; i++)
		{
			if (i % 2 == 1)printf("%3d", i);
			else;
		}
		printf(")의 합은 %d 입니다. ", sum);
	}
}