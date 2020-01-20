//정수값 sort 프로그램
//임의의 개수의 정수를 입력받아 오름차순으로 정렬
//1. 소트할 데이터 입력함수
#include <stdio.h>
#pragma warning (disable:4996)
int input(int* p);
void sort(int* p, int cnt);
void swap(int *a, int *b);
void postoutput(int* p,int num);
void pastoutput(int* p, int num);
int main()
{
	int a[100],num,totaltest,i=0;
	printf("총 테스트 횟수를 입력하시오: ");
	scanf("%d", &totaltest);
	while (i < totaltest) {
		num = input(a);//num: 배열의 개수 
		pastoutput(a, num);
		printf("\n");
		sort(a, num);
		postoutput(a, num);
		i++;
		printf("\n");
	}
	return 0;
}
int input(int* p)
{
	int i = 0;
	printf("# 숫자를 입력하세요(입력하고 싶은 숫자 뒤에 0을 붙여 입력하세요): ");
	while (1)
	{
		scanf("%d", p+i);
		if (p[i] == 0) { break; }
		i++;
	}
	

	return i+1;//배열의 개수 리턴
}
void sort(int* p, int cnt)
{
	int i, j;
	for (i = 0; i<cnt-2; i++)//(개수-1)번 비교
	{
		for (j = i+1; j<cnt-1; j++)
		{
			if (p[j] < p[i]) { swap(p+i, p+j); }
			else;
	}
	}
}
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void pastoutput(int* p, int num)
{

	printf("# 소트 전 데이터");
	for (int i = 0; i < num-1 ; i++) {
		printf("%5d", p[i]);
	}
}
void postoutput(int* p, int num)
{
	
	printf("# 소트 후 데이터");
	for (int i = 0; i < num-1; i++) {
		printf("%5d", p[i]);
	}
}