#include<iostream>
#include<vector>

using namespace std;

int puzzle[10][10];
int visited[10][10];
int testcase;
bool isCheck = false;
int Xside[3] = { 1, 0, -1};
int Yside[3] = { 0, 1, 0};

void search(int x, int y)
{
	int possibleRoute = 0;
	int tempNum = 0;
	vector<int> tempX;
	vector<int> tempY;
	for (int i = 0; i < 3; i++)
	{
		int aroundX = Xside[i] + x;
		int aroundY = Yside[i] + y;
		if (aroundX < 0 || aroundY < 0 || aroundX > testcase - 1 || aroundY > testcase - 1) { continue; }

		if (visited[aroundX][aroundY] == false && puzzle[aroundX][aroundY] == 0)
		{
			visited[aroundX][aroundY] = true;
			if (aroundX == testcase - 1 && aroundY == testcase - 1)
			{
				isCheck = true;
				break;
			}
			if (i == 0)
			{
				if (puzzle[aroundX][aroundY + 1] == 0)
				{
					tempX.push_back(aroundX);
					tempY.push_back(aroundY);
					possibleRoute++;
					tempNum++;
				}
			}

			search(aroundX, aroundY);
		}
		else if (i == 1 && possibleRoute > 0)
		{
			possibleRoute--;
			search(tempX[tempNum - (possibleRoute + 1)], tempY[tempNum - (possibleRoute + 1)]);
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

	//for (int i = 0; i < testcase; i++)
	//{
	//	for (int j = 0; j < testcase; j++)
	//	{
	//		cout << puzzle[j][i];
	//	}
	//	cout << endl;
	//}

	cout << "참가번호(24312) 성명(조수빈) 학교명(여수정보과학고등학교)" << endl;
	cout << "=========================================================" << endl;

	if (puzzle[0][0] == 0)
	{
		search(0, 0);
		if (isCheck)
		{
			cout << 1 << endl;
		}
		else
		{
			cout << 0 << endl;
		}
	}

	cout << "end";
	return 0;
}
