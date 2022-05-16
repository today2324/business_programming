#include <iostream>
using namespace std;

typedef struct number {
	int firstNumber;
	int secondNumber;
	int thirdNumber;

}Number;
Number phoneNum[100];
int Numbercount = 0;
bool four_digits = false;
bool input_error = false;
void digits(int Num)
{
	while (Num)
	{
		Num /= 10;
		Numbercount++;
	}
}

void moblieCarrier(int Num)
{
	if (Numbercount == 3)
	{
		switch (phoneNum[Num].firstNumber)
		{
		case 11:
			if (200 < phoneNum[Num].secondNumber && phoneNum[Num].secondNumber < 499)
			{
				phoneNum[Num].secondNumber += 5000;
			}
			else if (500 < phoneNum[Num].secondNumber && phoneNum[Num].secondNumber < 899)
			{
				phoneNum[Num].secondNumber += 3000;
			}
			else
			{
				cout << "입력오류" << endl;
				input_error = true;
				return;
			}
			break;
		case 16:
			if (200 < phoneNum[Num].secondNumber && phoneNum[Num].secondNumber < 499)
			{
				phoneNum[Num].secondNumber += 3000;
			}
			else if (500 < phoneNum[Num].secondNumber && phoneNum[Num].secondNumber < 899)
			{
				phoneNum[Num].secondNumber += 2000;
			}
			else
			{
				cout << "입력오류" << endl;
				input_error = true;
				return;
			}
			break;
		case 19:
			if (200 < phoneNum[Num].secondNumber && phoneNum[Num].secondNumber < 499)
			{
				phoneNum[Num].secondNumber += 2000;
			}
			else if (500 < phoneNum[Num].secondNumber && phoneNum[Num].secondNumber < 899)
			{
				phoneNum[Num].secondNumber += 5000;
			}
			else
			{
				cout << "입력오류" << endl;
				input_error = true;
				return;
			}
			break;
		default:
			cout << "입력오류" << endl;
			input_error = true;
			break;
		}
	}
	else if (Numbercount == 4)
	{
		switch (phoneNum[Num].firstNumber)
		{
		case 11:
			if (9500 < phoneNum[Num].secondNumber && phoneNum[Num].secondNumber < 9999)
			{
				phoneNum[Num].secondNumber -= 9000;
				phoneNum[Num].secondNumber += 8000;
			}
			else if (1700 < phoneNum[Num].secondNumber && phoneNum[Num].secondNumber < 1799)
			{
				phoneNum[Num].secondNumber -= 1700;
				phoneNum[Num].secondNumber += 7100;
			}
			else
			{
				cout << "입력오류" << endl;
				input_error = true;
				return;
			}
			break;
		case 16:
			if (9000 < phoneNum[Num].secondNumber && phoneNum[Num].secondNumber < 9499)
			{
				phoneNum[Num].secondNumber -= 9000;
				phoneNum[Num].secondNumber += 7000;
			}
			else
			{
				cout << "입력오류" << endl;
				input_error = true;
				return;
			}
			break;
		case 19:
			if (9000 < phoneNum[Num].secondNumber && phoneNum[Num].secondNumber < 9499)
			{
				phoneNum[Num].secondNumber -= 9000;
				phoneNum[Num].secondNumber += 8000;
			}
			else if (9500 < phoneNum[Num].secondNumber && phoneNum[Num].secondNumber < 9999)
			{
				phoneNum[Num].secondNumber -= 9000;
				phoneNum[Num].secondNumber += 7000;
			}
			else
			{
				cout << "입력오류" << endl;
				input_error = true;
				return;
			}
			break;
		default:
			cout << "입력오류" << endl;
			input_error = true;
			break;
		}


	}
	else
	{
		cout << "입력오류" << endl;
		input_error = true;
	}
}

int main()
{
	int Testcase;
	int count;
	cin >> Testcase;

	for (size_t i = 0; i < Testcase; i++)
	{
		cin >> phoneNum[i].firstNumber >> phoneNum[i].secondNumber >> phoneNum[i].thirdNumber;
	}

	for (size_t i = 0; i < Testcase; i++)
	{
		digits(phoneNum[i].secondNumber);

		moblieCarrier(i);

		if (!input_error)
		{
			cout << "0";
			cout << phoneNum[i].firstNumber << " " << phoneNum[i].secondNumber << " " << phoneNum[i].thirdNumber << endl;
		}
		input_error = false;
		Numbercount = 0;
	}

}
