#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int bus;
	char charTemp;
	int intTemp;
	bool Acted = true;
	vector<pair<char, int>> type;

	cin >> bus;
	if (1 > bus || bus > 100)
	{
		cout << "�Է¿���" << endl;
		return 0;
	}

	for (int i = 0; i < bus; i++)
	{
		cin >> charTemp >> intTemp;
		type.push_back(pair<char, int>(charTemp, intTemp));
		if (type[i].first == 'G' || type[i].first == 'B' || type[i].first == 'R' || type[i].first == 'Y')
		{
			Acted = false;
		}
		if (100 > type[i].second || type[i].second > 9999)
		{
			Acted = false;
		}
		if (Acted)
		{
			cout << "�Է¿���" << endl;
			return 0;
		}
		Acted = true;
	}

	sort(type.begin(), type.end());
	cout << "������ȣ(12345) ����(������) �б���(�����������а���б�)" << endl;
	cout << "===========================================================" << endl;
	for (int i = 0; i < bus; i++)
	{
		cout << type[i].first << " ";
		cout << type[i].second << endl;
	}

}