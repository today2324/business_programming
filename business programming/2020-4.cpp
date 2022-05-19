#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef struct {
	char Num;
	int Station;
	int StationNum[100];
	int waiting_time[100];
}BUS;
vector<BUS> Bus;
int BlockNum;
int input_time;

void bus_search(int i)
{
	for (size_t k = 0; k < BlockNum; k++)
	{
		for (size_t j = 0; j < Bus[k].Station; j++)
		{
			if (input_time == Bus[k].StationNum[j])
			{

			}
		}
	}
}
int main()
{
	BUS temp;
	int time_temp[100];
	int information_block;
	cin >> BlockNum;

	for (size_t i = 0; i < BlockNum; i++)
	{
		cin >> temp.Num >> temp.Station;
		for (size_t j = 0; j < temp.Station; j++)
		{
			cin >> Bus[i].StationNum[j] >> Bus[i].waiting_time[j];
		}
		Bus.push_back(temp);
	}
}
