#include<iostream>

using namespace std;

int puzzle[10][10];
int visited[10][10];
int testcase;
bool isCheck = false;
int Xside[4] = { 1, 0 };
int Yside[4] = { 0, 1 };

bool search(int x, int y)
{
	int tempX;
	int tempY;
	for (int i = 0; i < 2; i++)
	{
		int aroundX = Xside[i] + x;
		int aroundY = Yside[i] + y;

		cout << "aroundX = " << aroundX << endl;
		cout << "aroundY = " << aroundY << endl;

		if (aroundX < 0 || aroundY < 0 || aroundX > testcase - 1 || aroundY > testcase - 1) { continue; }

		if (visited[aroundX][aroundY] == false && puzzle[aroundX][aroundY] == 0)
		{
			visited[aroundX][aroundY] = true;
			if (i == 1)
			{
				search(aroundX, aroundY);
			}
			else
			{
				aroundY++;	
				if (puzzle[aroundX][aroundY] == 0)
				{
					tempX = aroundX;
					tempY = aroundY;
				}a
			}

			if (aroundX == testcase-1 && aroundY == testcase - 1)
			{
				isCheck = true;
				return isCheck;
			}

		}
	}
	return isCheck;
}

int main()
{
	cin >> testcase;

	for (int i = 0; i < testcase; i++)
	{
		for (int j = 0; j < testcase; j++)
		{
			cin >> puzzle[j][i];
			if (puzzle[j][i] > 1 || puzzle[j][i] < 0)
			{
				cout << "입력 오류" << endl;
				return 0;
			}
		}
	}

	for (int i = 0; i < testcase; i++)
	{
		for (int j = 0; j < testcase; j++)
		{
			cout << puzzle[j][i];
		}
		cout << endl;
	}

	cout << "참가번호(12345) 성명(조수빈) 학교명(여수정보과학고등학교)" << endl;
	cout << "=========================================================" << endl;
	if (puzzle[0][0] == 0)
	{
		if (search(0, 0))
		{
			cout << 1 << endl;
		}
		else
		{
			cout << 0 << endl;
		}
	}

	return 0;
}
