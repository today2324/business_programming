#include<iostream>

using namespace std;

bool acted = false;
void errorCheck(int circleX, int circleY, int bulletX, int bulletY)
{
	if (1000 < circleX || -1000 > circleX)
	{
		acted = true;
	}
	if (1000 < circleY || -1000 > circleY)
	{
		acted = true;
	}
	if (1000 < bulletX || -1000 > bulletX)
	{
		acted = true;
	}
	if (1000 < bulletY || -1000 > bulletY)
	{
		acted = true;
	}
}

int main()
{
	int shotNum;
	int circleX[100], circleY[100];
	int bulletX[100], bulletY[100];
	int x, y;
	int c;
	int radius = 100;
	int bullet = 5;
	int count = 0;
	cin >> shotNum;
	if (shotNum < 1 || shotNum > 100)
	{
		cout << "입력 오류" << endl;
		return 0;
	}

	for (int i = 0; i < shotNum; i++)
	{
		cin >> circleX[i] >> circleY[i] >> bulletX[i] >> bulletY[i];
		errorCheck(circleX[i], circleY[i], bulletX[i], bulletY[i]);
		if (acted)
		{
			cout << "입력 오류" << endl;
			return 0;
		}
		x = pow(bulletX[i] - circleX[i], 2);
		y = pow(bulletY[i] - circleY[i], 2);
		c = x + y;
		if (pow(radius + bullet, 2) > c)
		{
			count++;
		}
	}

	cout << "참가번호(12345) 성명(조수빈) 학교명(여수정보과학고등학교)" << endl;
	cout << "=========================================================" << endl;
	cout << count << endl;
}