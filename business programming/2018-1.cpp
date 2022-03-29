#include<iostream>

using namespace std;

int gcd(int i, int j) 
{
	return j ? gcd(j, i % j) : i;
}

int main()
{
	int testcase;
	int a[100], b[100], c[100], d[100];
	int fractionplus[100];
	int fractionminus[100];
	int temp;

	cin >> testcase;
	if (1 > testcase || testcase > 100)
	{
		cout << "입력오류" << endl;
		return 0;
	}
	for (int i = 0; i < testcase; i++)
	{
		cin >> a[i];
		cin >> b[i];
		cin >> c[i];
		cin >> d[i];
	}

	cout << "참가번호(12345) 성명(조수빈) 학교명(여수정보과학고등학교)" << endl;
	cout << "===========================================================" << endl;

	for (int i = 0; i < testcase; i++)
	{
		if (1 > d[i] || d[i] > 10000)
		{
			cout << "입력오류" << endl;
			continue;
		}	
		if (1 > c[i] || c[i] > 10000)
		{
			cout << "입력오류" << endl;
			continue;
		}	
		if (1 > b[i] || b[i] > 10000)
		{
			cout << "입력오류" << endl;
			continue;
		}	
		if (1 > a[i] || a[i] > 10000)
		{
			cout << "입력오류" << endl;
			continue;
		}

		if (b[i] != d[i])
		{
			a[i] *= d[i];
			c[i] *= b[i];
			temp = b[i];
			b[i] *= d[i];
			d[i] *= temp;
		}

		fractionminus[i] = a[i] - c[i];
		fractionplus[i] = a[i] + c[i];

		temp = gcd(fractionminus[i], b[i]);
		fractionminus[i] /= temp;
		b[i] = b[i] / temp;
		temp = gcd(fractionplus[i], d[i]);
		fractionplus[i] /= temp;
		d[i] = d[i] / temp;

		if (b[i] < 0)
		{
			b[i] -= b[i] * 2;
			if (fractionminus[i] < 0)
			{
				b[i] += b[i] * 2;
			}
			else
			{
				fractionminus[i] -= fractionminus[i] * 2;
			}
		}

		if (d[i] < 0)
		{
			d[i] -= d[i] * 2;
			if (fractionplus[i] < 0)
			{
				d[i] += d[i] * 2;
			}
			else
			{
				fractionplus[i] -= fractionplus[i] * 2;
			}
		}
		cout << fractionminus[i] << "/" << b[i];
		cout << " ";
		cout << fractionplus[i] << "/" << d[i] << endl;
	}
}
