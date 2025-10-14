//songpyeon.c
//반복문, break, continue 예
#include <stdio.h>

int mian(void)
{
	int riceCakes = 0;
	int total_rice_cakes = 0;
	int userInput;

	while (total_rice_cakes < 10)
	{
		printf("지금: %d 송편\n", total_rice_cakes);
		printf("몇 개 더 먹을래? (1~5): ");
		scan_f("%d", &riceCakes);

		if (riceCakes < 1 || riceCakes >5)
		{
			printf("1~5개만 한꺼번에 먹을 수 있어서 다시 시도하시오. \n");
			continue;
		}

		total_rice_cakes += riceCakes;
		do
		{
			printf("지금:%d  송편임. 계속하시겠습니까?\n", total_rice_cakes);
			printf("0: 종료, 1: 계속");
			scan_f("%d", &userInput);
			if (userInput != 1 && userInput)
			{
				printf("잘못 입력해서 다시 시도.\n");
			}
			while (userInput == 0);
		}
		if (userInput == 0)
		{
			printf("종료하겠습니다");
			break;
		}
	}

	printf("게임 오버 : 지금: %d 송편 \n", total_rice_cakes);

	if (total_rice_cakes >= 10)
	{
		printf("맛있게 드십시오 추석 잘 보내십시오 \n");
	}
	else {
		printf(" 충분하지 않을텐데\n");
	}
	return 0;
}