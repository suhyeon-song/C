//������ �ݾ����� ���� �����ϱ�
//1. ũ���� (500��) 2. �����(700��) 3. �ݶ�(400��)
//�ܵ��� ������ �ʰ�, ��� ǰ���� ��� �ϳ� �̻� ��ٸ� ��� ����ϴ°�
#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int mymoney,cream,shrmp,coke,total,chek;
	while (1) {
		printf("\n���� ����� ���� �ݾ� �Է�: ");
		chek=scanf("%d", &mymoney);
		if (chek == 0)break;
		else;
		for (cream = 1; cream < mymoney / 500; cream++)
		{
			for (shrmp = 1; shrmp < mymoney / 700; shrmp++)
			{
				for (coke = 1; coke < mymoney / 400; coke++) {
					total = cream * 500 + shrmp * 700 + coke * 400;
					if (total == mymoney)printf("ũ����(%d��) �����(%d����) �ݶ�(%d��)\n", cream, shrmp, coke);
					else;
				}
			}
		}
		printf("��� �����Ͻðڽ��ϱ�?\n");
	}
	return 0;
}