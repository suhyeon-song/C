//������ �칰 Ż�� ���α׷�
//1. �칰 ���� cm (������)�Է¹��� 2. ������ 50cm �㵿�� 20cm 3. �����̰� �칰�� Ż���ϱ���� ��ĥ�� �ɸ�����
#include <stdio.h>
#pragma warning (disable:4996)
int input();
int outdate(int dep);
void output(int dep,int num);
int main()
{
	int dep, date;
	dep = input();
	date = outdate(dep);
	output(dep, date);
	return 0;

}
int input() {
	int dep;
	printf("�칰�� ���̸� �Է��Ͻÿ�(cm����):");
	scanf("%d", &dep);
	return dep;
}
int outdate(int dep)
{
	int num;
	if (dep >= 50)
	{
		num = (dep - 50) / 30;
		if ((dep - 50) % 30 == 0)return num + 1;
		else return (num + 2);
	}
	else {
		if (dep == 0)return 0;
		else return 1;
	}
}
void output(int dep, int num)
{
	printf("%.2lf ���� ������ �칰�� Ż���ϱ� ���ؼ��� %d���� �ɸ��ϴ�", dep / 100.00, num);
}