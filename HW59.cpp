//���� �ٸ� ���� ���� ����ϱ�
#include<stdio.h>
#pragma warning(disable: 4996)
void inputArry(int* parry, int num);
int cntdiffNum(int* parry,int num);
int main()
{
	int arry[1000],num,res,check;

	while (1)
	{
		printf("\n* �Է��� ������ ����: ");
		check = scanf("%d", &num);
		if (check == 0)break;//���� �Է½� ����
		else;
		inputArry(arry, num);
		res = cntdiffNum(arry, num);
		printf("* ���� �ٸ� ���� ����: %d\n", res);
	}
	return 0;
}
void inputArry(int* parry, int num)
{
	int i;
	printf("* ���� �Է�: ");
	for (i = 0; i < num; i++)
	{
		scanf("%d", &parry[i]);
		
	}
}
int cntdiffNum(int* parry, int num)
{
	int i,j,cnt=0;
	for(i=0;i<num;i++){
		for (j = i+1; j < num; j++)
		{
			if (parry[i] == parry[j]) {
				parry[j] = 0;
			}
			else;
		}
		if (parry[i] != 0)cnt++;
		else;
	}
	return cnt;
}