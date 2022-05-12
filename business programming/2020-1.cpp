#include<iostream>
#define MAX_WEIGHT 10000
using namespace std;
typedef struct busket{
	int gram;
	int total;
}Busket;
int main()
{
	int tmp;
	int length;
	int gram_sum;
	int weight = 0;
	Busket busket[100];
	cin >> length;

	for (int i = 0; i < length; i++)	
	{
		cin >> busket[i].gram >> busket[i].total;
	}

	for (size_t i = 0; i < length; i++)
	{
		for (size_t j = 0; j < length; j++)
		{
			if (busket[i].gram < busket[j].gram)
			{
				swap(busket[i], busket[j]);
			}
		}
	}
	cout << "정렬 후" << endl;

	cout << "수험번호(12345) 성명(조수빈) 학교명(여수정보과학고등학교)" << endl;
	cout << "=========================================================" << endl;

	for (size_t i = 0; i < length; i++)
	{
		gram_sum = busket[i].gram * busket[i].total;
		weight += gram_sum;
		cout << weight << endl;
		if (weight > MAX_WEIGHT)
		{
			cout << "중량초과" << endl;
		}
	}
}