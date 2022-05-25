#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#define TEN 10
using namespace std;

int decimal=0;
int c = 1;
void divisor(int 분자, int 분모)
{
	if (분자 % 2 && 분모 % 2)
	{
		분자 /= 2;
		분모 /= 2;
		divisor(분자, 분모);
	}
	else if (분자 % 3 && 분모 % 3)
	{
		분자 /= 3;
		분모 /= 3;
		divisor(분자, 분모);
	}
	else if (분자 % 5 && 분모 % 5)
	{
		분자 /= 5;
		분모 /= 5;
		divisor(분자, 분모);
	}
	else if (분자 % 7 && 분모 % 7)
	{
		분자 /= 7;
		분모 /= 7;
		divisor(분자, 분모);
	}
	else
	{
		decimal = 분자;
		c = 분모;
	}
}

int main()
{
	int zero;
	int Divisor;
	scanf("%d.%d", &zero, &decimal);

	cout << decimal << endl;
	Divisor = decimal;
	while (decimal)
	{
		decimal /= TEN;
		c *= TEN;
	}

	divisor(Divisor, c);
	Divisor = decimal;
	cout << Divisor << "/" << c << endl;
}
