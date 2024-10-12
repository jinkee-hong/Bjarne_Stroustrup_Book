#include "std_lib_facilities.h"
void PrintResult(int num1, int num2);
void ExitOnGivenCondition(int num);
 
int main()
{
	int num1 = 0, num2 = 0,toggle =0;
	
	while (1)
	{
		switch (toggle)
		{
		case 0:
			cout << "INPUT FIRST NUMBER" << endl;
			cin >> num1;

			cout << "INPUT SECOND NUMBER" << endl;
			cin >> num2;
			break;

		default:
			break;
		}
		 
	 

		PrintResult(num1, num2);
	}
}


void PrintResult(int num1, int num2)
{
	int larger = max(num1, num2);
	int smaller = min(num1, num2);

	if (larger == smaller)
	{
		cout << "NUMBERS ARE SAME" << endl;
	}
	else
	{
		cout << "LARGER : " << larger << endl;
		cout << "SMALLER : " << smaller << endl;
	}

	cout << endl;
}

void ExitOnGivenCondition(int num)
{
	if (cin.fail())
	{
		if (cin.get() == '|')
		{
			cout << "조건에 따라 프로그램을 종료합니다. " << endl;
			exit(-1);
		}
		else
			cin.clear();
	}
}
 
 