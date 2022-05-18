#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef struct {
	char Num;
	int StationNum;
	int waiting_time;
}BUS;
BUS Bus;

bool compare(BUS a, BUS b)
{
	return a.waiting_time > b.waiting_time;
}

int main()
{
	vector<BUS> Bus;
	int BlockNum;
	int information_block;
	int input_time;
	int Station;

	for (size_t i = 0; i < BlockNum; i++)
	{
		cin >> Bus[i].Num >> Station;
		for (size_t j = 0; j < Station; j++)
		{
			cin >> Bus[i].StationNum >> Bus[i].waiting_time;
		}
	}
	cin >> input_time;

	sort(Bus.begin(), Bus.end(), compare);

}
