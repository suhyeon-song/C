//�ް� ���� ���α׷� �ۼ��ϱ�
// 1. �ް��� ���Ը� �Է� ���� 2. (150<mass<500)=> ���� (mass<150 || mass>500)=> ���忡�� ���� if�� 3. 10���� �ް��� �� �ڽ� ����
#include<stdio.h>
#pragma warning (disable:4996)
int input();
int main()
{
	int mass, num=0;
	mass = input();
	while (num < 10) 
	{
		if (mass < 150)printf("���߸��� ������ �峭���� ���ÿ�~^^\n");
		else if (mass > 500)printf("Ÿ���� ������ �峭���� ���ÿ�~^^\n");
		else {
			num++;
			printf("������ �ް� ��: %d\n", num);
		}
		mass = input();
		
	}printf("*** �ް� ������ �������ϴ�. ");
	return 0;

}
int input()
{
	int mass;
	printf("# ����� ���Ը� �Է��ϼ���(����: g): ");
	scanf("%d", &mass);
	return mass;
}