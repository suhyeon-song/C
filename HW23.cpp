#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int x, y, res;

	while (1)
	{
		printf("# 두개의 정수를 입력하세요: ");
		if (scanf("%d%d", &x, &y) != 2)break;
		else
		{
			if (x > y) printf("%d-%d=%d\n", x, y, x - y);
			else printf("%d-%d=%d\n", y, x, y - x);
		}
	}
	return 0;
}