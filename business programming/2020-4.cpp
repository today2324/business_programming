#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef struct BUS {
	char* Number = new char;
	int Station = 0;
	int StationNum[100] = { 0, };
	int waiting_time[100] = { 0, };
}BUS;
vector<BUS> bus;
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
		if (inputTime != bus[i].StationNum[count])
		{
			cout << "test" << endl;
			bus[i].StationNum[count] = bus[i].StationNum[count +1];
			bus[i].waiting_time[count] = bus[i].waiting_time[count +1];
			for (size_t l = 0; l < testcase; l++)
			{
				cout << bus[l].Number << " " << bus[l].Station << endl;
				for (size_t k = 0; k < bus[l].Station; k++)
				{
					cout << bus[l].StationNum[k] << " " << bus[l].waiting_time[k] << endl;
				}
			}
			cout << "test clear" << endl;






		}
		else
		{
			isdel = true;
		}

		if (isdel)
		{
			cout << "erase test" << endl;
			bus.erase(bus.begin() + i);
			isdel = false;
			/*for (size_t l = 0; l < testcase; l++)
			{
				cout << bus[l].Number << " " << bus[l].Station << endl;
				for (size_t k = 0; k < bus[l].Station; k++)
				{
					cout << bus[l].StationNum[k] << " " << bus[l].waiting_time[k] << endl;
				}
			}*/
			cout << "erase test clear" << endl;
		}
	}

	for (size_t i = 0; i < testcase; i++)
	{
		cout << bus[i].Number << " " << bus[i].Station << endl;
		for (size_t k = 0; k < bus[i].Station; k++)
		{
			cout << bus[i].StationNum[k] << " " << bus[i].waiting_time[k] << endl;
		}
	}


}
