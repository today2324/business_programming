#include<iostream>
#define TEN 10
using namespace std;

int BFS(int n ,int m)
{

}

int main()
{
	float temp;
	float decimal;
	int c;
	int num = (int)decimal;
	cin >> temp;
	decimal = temp;
	while (decimal)
	{
		if (decimal > 1)
		{
			decimal -= (int)decimal;
		}
		else
		{
			decimal *= TEN;
			c *= TEN;
		}
	}
}
