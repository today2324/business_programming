#include<iostream>
#include<vector>
#include<algorithm>
#define OUT 10000
#define MAX 100
using namespace std;
typedef struct BUS {
	string Number;
	int Station = 0;
	int StationNum[MAX] = { 0, };
	int waiting_time[MAX] = { 0, };
}BUS;
vector<BUS> bus;
vector<BUS> real_bus;
BUS temp;
int inputTime;
int Count = 0;
BUS grind(BUS target)
{
	int sum = 0;
	for (size_t i = 0; i < target.Station; i++)
	{
		if (inputTime != target.StationNum[i])
		{
			target.StationNum[i] = OUT;
			target.waiting_time[i] = OUT;
		}
	}
	return target;
}

bool compare(BUS a, BUS b)
{
	return a.waiting_time[0] < b.waiting_time[0];
}

int main()
{
	int s=0;
	int testcase;
	cin >> testcase;

	for (size_t i = 0; i < testcase; i++)
	{
		cin >> temp.Number >> temp.Station;
		for (size_t l = 0; l < temp.Station; l++)
		{
			cin >> temp.StationNum[l] >> temp.waiting_time[l];
		}
		bus.push_back(temp);
	}
	cin >> inputTime;

	for (size_t i = 0; i < testcase; i++)
	{
		for (size_t j = 0; j < bus[i].Station; j++)
		{
			if (inputTime == bus[i].StationNum[j])
			{
				real_bus.push_back(bus[i]);
				Count++;
			}
		}
	}

	for (size_t i = 0; i < Count; i++)
	{
		real_bus[i] = grind(real_bus[i]);
		sort(real_bus[i].waiting_time, real_bus[i].waiting_time + real_bus[i].Station);
	}
	sort(real_bus.begin(), real_bus.end(), compare);
	
	cout << "수험번호(12345) " << "성명(조수빈) " << "학교명(여수정보과학고등학교)" << endl;

	cout << real_bus[s].Number << " " << real_bus[s].waiting_time[0] << endl;
	
}
