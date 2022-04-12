#include<iostream>

using namespace std;

int puzzle[10][10];
int visited[10][10];
int testcase;
bool isCheck = false;
int Xside[4] = { 1, 0, -1, 0 };
int Yside[4] = { 0, 1, 0, -1 };

void search(int x, int y)
{
	for (int i = 0; !isCheck; i++)
	{
		int aroundX = Xside[i] + x;
		int aroundY = Yside[i] + y;

		if (aroundX < 0 || aroundY < 0 || aroundX > testcase - 1 || aroundY>testcase - 1) { continue; }

		cout << "i = " << i << endl;
		cout << "Xside = " << Xside[i] << " Yside = " << Yside[i] << "\n========" << endl;

		if (visited[aroundX][aroundY] == false)
		{
			if (puzzle[aroundX][aroundY] != 0)
			{
				cout << "in puzzle" << endl;
				visited[aroundX][aroundY] = true;
				i--;
				continue;
			}
			cout << "aroundX = " << aroundX << " aroundY = " << aroundY << "\n========" << endl;

			if (aroundX == testcase - 1 && aroundY == testcase - 1)
			{
				isCheck = true;
				i = testcase;
				break;
			}
			visited[aroundX][aroundY] = true;
			cout << "in search" << endl;
			search(aroundX, aroundY);
		}
	}
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
		visited[0][0] = true;
		search(0, 0);
		if (isCheck)
		{
			cout << 1 << endl;
			return 0;
		}
	}

}