#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef struct BUS {
	string Number;
	int Station = 0;
	int StationNum[100] = { 0, };
	int waiting_time[100] = { 0, };
}BUS;
vector<BUS> bus;
vector<BUS> real_bus;
BUS temp;
int main()
{
	int testcase;
	int inputTime;
	bool isdel = false;
	int count = 0;
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
		if (inputTime == bus[i].StationNum[count])
		{
			real_bus.push_back(bus[i]);
			count++;
			cout << "confirm RealBus value testing" << endl;
			for (size_t i = 0; i < count; i++)
			{
				cout << real_bus[i].Number << " " << real_bus[i].Station << endl;
				for (size_t k = 0; k < real_bus[i].Station; k++)
				{
					cout << real_bus[i].StationNum[k] << " " << real_bus[i].waiting_time[k] << endl;
				}
			}

		}
	}
	cout << "\\\\\\\\\\\\\\" << endl;

	for (size_t i = 0; i < count; i++)
	{
		cout << real_bus[i].Number << " " << real_bus[i].Station << endl;
		for (size_t k = 0; k < real_bus[i].Station; k++)
		{
			cout << real_bus[i].StationNum[k] << " " << real_bus[i].waiting_time[k] << endl;
		}
	}


}
