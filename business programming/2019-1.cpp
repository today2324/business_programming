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
		printf("�Է¿���");
	}

	scanf("%d", &punch);
	if (1 > punch > 10)
	{
		printf("�Է¿���");

	}

	scanf("%d", &kick);
	if (1 > kick > 10)
	{
		printf("�Է¿���");

	}

	scanf("%d", &skill);
	if (1 > skill > 10)
	{
		printf("�Է¿���");
	}

	printf("������ȣ(12345) ����(������) �б���(�����������а���б�)\n");
	printf("=========================================================\n");

	int outcome;
	punch = 10 * punch;
	kick = 50 * kick;
	skill = 200 * skill;
	if (enemyHP <= punch+kick+skill)
	{
		printf("%d %d %d %d �¸�", punch, kick, skill, punch + kick + skill);
	}
	else
	{
		printf("%d %d %d %d �й�", punch, kick, skill, punch + kick + skill);
	}
}
