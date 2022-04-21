#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int enemyHP;
	int punch;
	int kick;
	int skill;

	scanf("%d", &enemyHP);
	if (1 > enemyHP > 10)
	{
		printf("입력오류");
	}

	scanf("%d", &punch);
	if (1 > punch > 10)
	{
		printf("입력오류");

	}

	scanf("%d", &kick);
	if (1 > kick > 10)
	{
		printf("입력오류");

	}

	scanf("%d", &skill);
	if (1 > skill > 10)
	{
		printf("입력오류");
	}

	printf("참가번호(12345) 성명(조수빈) 학교명(여수정보과학고등학교)\n");
	printf("=========================================================\n");

	int outcome;
	punch = 10 * punch;
	kick = 50 * kick;
	skill = 200 * skill;
	if (enemyHP <= punch+kick+skill)
	{
		printf("%d %d %d %d 승리", punch, kick, skill, punch + kick + skill);
	}
	else
	{
		printf("%d %d %d %d 패배", punch, kick, skill, punch + kick + skill);
	}
}
