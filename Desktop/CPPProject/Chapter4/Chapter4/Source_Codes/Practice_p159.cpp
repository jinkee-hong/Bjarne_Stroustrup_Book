#include "std_lib_facilities.h"
int StrToInt(string temp);

int main()
{

	string temp;
	int first = 0, second = 0;
	while (1)
	{
		cout << "Input First Number" << endl;
		cin >> temp;

		first = StrToInt(temp);
		if ()
		{
			break;
		}
	}
	return 0;
}

int StrToInt(string temp)
{
	const char* first = temp.c_str();
	int digit = temp.size()-1;
	int num = 0;
	for (int i = 0; i < temp.size(); i++)
	{
		if (48 <= *(first + i) && *(first + i) <= 57)
		{
			num += pow(10, digit) * ( (*(first + i) - 48));
			digit--;
		}
		else if (temp == "|")
		{
			return '|';
		}
	}
	return num;
}