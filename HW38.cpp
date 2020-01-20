//정해진 금액으로 물건 구입하기
//1. 크림빵 (500원) 2. 새우깡(700원) 3. 콜라(400원)
//잔돈을 남기지 않고, 모든 품목을 적어도 하나 이상 산다면 몇개씩 사야하는가
#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int mymoney,cream,shrmp,coke,total,chek;
	while (1) {
		printf("\n현재 당신의 소유 금액 입력: ");
		chek=scanf("%d", &mymoney);
		if (chek == 0)break;
		else;
		for (cream = 1; cream < mymoney / 500; cream++)
		{
			for (shrmp = 1; shrmp < mymoney / 700; shrmp++)
			{
				for (coke = 1; coke < mymoney / 400; coke++) {
					total = cream * 500 + shrmp * 700 + coke * 400;
					if (total == mymoney)printf("크림빵(%d개) 새우깡(%d봉지) 콜라(%d병)\n", cream, shrmp, coke);
					else;
				}
			}
		}
		printf("어떻게 구입하시겠습니까?\n");
	}
	return 0;
}