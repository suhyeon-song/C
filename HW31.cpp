//���� ���� ����� ���� ���α׷�
//��� �Լ� 1. �޴��Լ� 2.input �Լ� 3. deposit() 4. withdraw()
#include<stdio.h>
#pragma warning(disable:4996)
int input(const char* msg);
void myflush();
char menu();
int deposit(int total);
int withdraw(int total);
int main()
{
	int total=0;
	char chmenu;
	printf("*���� �ܾ��� %d�Դϴ�\n\n", total);
	while (1)
	{
		chmenu = menu();
		if (chmenu == 'i')total=deposit(total);
		else if (chmenu == 'o')total=withdraw(total);
		else break;;
		printf("���� �ܾ��� %d�Դϴ�\n", total);
	}

	return 0;
}
char menu()
{
	char ch;
	while (1)
	{
		printf("\n# �޴��� �����ϼ���(i-�Ա�, o-���, q-����):");
		scanf("%c", &ch);

		if (ch == 'i' || ch == 'o' || ch == 'q')break;
		else { printf("* �߸� �Է��ϼ̽��ϴ�.\n"); myflush(); }
	}
	return ch;
}
int input(const char* msg)
{
	int n;
	printf("%s", msg);
	scanf("%d", &n);
	while (1) {
		while (getchar() != '\n')
		{
			myflush();
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ��Է��Ͻʽÿ�:");
			scanf("%d", &n);
		}
		if (n < 1)
		{
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ��Է��Ͻʽÿ�:");
			continue;
		}
		else break;
	}
	return n;
}
int deposit(int total)
{
	int monin;

	monin = input("# �Աݾ��� �Է��ϼ���:");
	

	total += monin;
	return total;
}
int withdraw(int total)
{
	int monout;
	
		monout = input("# ��ݾ��� �Է��ϼ���:");
		if (monout > 0&&monout<total)
		{
			total -=monout;
			return total;
		}
		else
		{
			if (monout > total)
			{
				printf("�ܾ��� �����մϴ�.\n");
				return total;
			}
			else;
		}

}
void myflush()
{
	while (getchar() != '\n') { ; }
}