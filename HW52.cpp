//������ sort ���α׷�
//������ ������ ������ �Է¹޾� ������������ ����
//1. ��Ʈ�� ������ �Է��Լ�
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
	printf("�� �׽�Ʈ Ƚ���� �Է��Ͻÿ�: ");
	scanf("%d", &totaltest);
	while (i < totaltest) {
		num = input(a);//num: �迭�� ���� 
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
	printf("# ���ڸ� �Է��ϼ���(�Է��ϰ� ���� ���� �ڿ� 0�� �ٿ� �Է��ϼ���): ");
	while (1)
	{
		scanf("%d", p+i);
		if (p[i] == 0) { break; }
		i++;
	}
	

	return i+1;//�迭�� ���� ����
}
void sort(int* p, int cnt)
{
	int i, j;
	for (i = 0; i<cnt-2; i++)//(����-1)�� ��
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

	printf("# ��Ʈ �� ������");
	for (int i = 0; i < num-1 ; i++) {
		printf("%5d", p[i]);
	}
}
void postoutput(int* p, int num)
{
	
	printf("# ��Ʈ �� ������");
	for (int i = 0; i < num-1; i++) {
		printf("%5d", p[i]);
	}
}