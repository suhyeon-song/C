//ȯǳ�� ���� �ý���
#include<stdio.h>
#pragma warning(disable:4996)
int menu();
unsigned char offFan(unsigned char res);
unsigned char openFan(unsigned char res);
unsigned char reverseFan(unsigned char res);
void displayFan(unsigned char res);
void myflush();
int input(const char* msg);
int main()
{
	unsigned char ch,chek,res,mnum;
	res = 0x00;
	while (1)
	{
		mnum = menu();
		if (mnum == 1)
		{
			res = openFan(res);
			displayFan(res);
		}
		else if (mnum == 2)
		{
			res = offFan(res);
			displayFan(res);
		}
		else if (mnum == 3)
		{
			res = reverseFan(res);
			displayFan(res);
		}
		else break;
	}
	return 0;
}
int menu()
{
		int n;
		n=input("\n1. ȯǳ�� ����/ 2. ȯǳ�� �ݱ�/ 3. ȯǳ�� ��ü ��ȯ/ 4. ����: ");
		while (1) {
			while (getchar() != '\n')
			{
				myflush();
				printf("�߸� �Է��ϼ̽��ϴ�. �ٽ��Է��Ͻʽÿ�:");
				scanf("%d", &n);
			}
			if (n!=1&&n!=2&&n!=3&&n!=4)
			{
				printf("�߸� �Է��ϼ̽��ϴ�. �ٽ��Է��Ͻʽÿ�:");
				scanf("%d", &n);
			}
			else break;
		}
		return n;
	}
	
void myflush()

	{
		while (getchar() != '\n') { ; }
	}
unsigned char openFan(unsigned char res)
{
	int n;
	unsigned char chek = 0x01;
	printf("        FAN ���� �۾� ���� ȭ��        \n");
	printf("_______________________________________________________________________\n");
	n = input("* OPEN�� FAN ��ȣ�� �Է��Ͻÿ�(1-8):");
	printf("_______________________________________________________________________\n");
	while (1) {
		while (getchar() != '\n')
		{
			myflush();
			n = input("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ�: ");
		}
		if (n != 1 && n != 2 && n != 3 && n != 4&&n!=5&&n!=6&&n!=7&&n!=8)
		{
			n = input("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ�: ");
		}
		else break;
	}
	chek = chek << n-1;
	res = res | chek;
	return res;
}
unsigned char offFan(unsigned char res)
{
	int n;
	int chek = 0xff7f;
	printf("        FAN �ݱ� �۾� ���� ȭ��        \n");
	printf("\n_______________________________________________________________________\n");
	n = input("* CLOSE�� FAN ��ȣ�� �Է��Ͻÿ�(1-8):");
	printf("\n_______________________________________________________________________\n");
	while (1) {
		while (getchar() != '\n')
		{
			myflush();
			n=input("�߸� �Է��ϼ̽��ϴ�. �ٽ��Է��Ͻʽÿ�:");
	
		}
		if (n != 1 && n != 2 && n != 3 && n != 4 && n != 5 && n != 6 && n != 7 && n != 8)
		{
			n=input("�߸� �Է��ϼ̽��ϴ�. �ٽ��Է��Ͻʽÿ�:");
			
		}
		else break;
	}
	chek = chek >> 8-n;
	res = res & chek;
	return res;
}
unsigned char reverseFan(unsigned char res)
{
	unsigned chek = 0xff;

	printf("        FAN ��ü ��ȯ �۾� ���� ȭ��        \n");
	printf("\n_______________________________________________________________________\n");
	printf("* ��ü FAN�� ���°� ��ȯ�Ǿ����ϴ�.(ON/OFF ���� �ڹٲ�):\n");
	printf("\n_______________________________________________________________________\n");
	res = res ^ chek;
	return res;
}
void displayFan(unsigned char res)
{
	unsigned char chek = 0x80,pres;
	printf("\n8��FAN 7��FAN 6��FAN 5��FAN 4��FAN 3��FAN 2��FAN 1��FAN");
	printf("\n_______________________________________________________________________\n");

	for (int i = 0; i < 8; i++)
	{
		pres = res & chek;
		if (pres == 0)printf("  OFF  ");
		else printf("  ON  ");
		chek = chek >> 1; 
	}
	return ;
}
int input(const char* msg)
{
	int n;
	printf("%s", msg);
	scanf("%d", &n);
	return n;
}