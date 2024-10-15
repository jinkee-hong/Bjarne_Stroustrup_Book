#include "std_lib_facilities.h"
#define SWAP(x,t,y) (t = x , x = y , y = t) 
#define MAX_UNIT_ARR 2
string ChangeUnit(double num, string unit);
double ChangeNumber(double num, string unit);

int main()
{
	vector<double> nums;
	string unit_arr[MAX_UNIT_ARR] ;
	double num=0,sum=0,temp=0;
	int i = 0;
	string unit;
	bool isFirstTime = true;
	while (cin >> num)
	{
		if (cin.fail())
		{
			getline(cin, unit);
			if (unit == "cm" || unit == "m" || unit == "in" || unit == "ft")
			{
				temp = num;
				sum += num;
				num = ChangeNumber(num, unit);
				unit = ChangeUnit(temp, unit);
				cout << num << unit << endl;
				unit_arr[i] = unit;
				nums.push_back(num);

				sort(nums);

				if (isFirstTime)
				{
					if (nums.size() >= 2)
						cout << "THE SMALLEST SO FAR : " << nums[0] << unit_arr[0] << endl;
					cout << "THE LARGEST SO FAR : " << nums[nums.size() - 1] << unit_arr[0] << endl;
					isFirstTime = false;
				}
				else
				{
					cout << "THE SMALLEST SO FAR : " << nums[0] << unit_arr[0] << endl;
					cout << "THE LARGEST SO FAR : " << nums[nums.size() - 1] << unit_arr[i] << endl;
				}

				i++;

				if (i >= MAX_UNIT_ARR)
				{
					i = 0;
					nums.clear();
				}
			}
			else
			{
				cout << "WRONG INPUT" << endl;
				sort(nums);
				cout << "THE SMALLEST : " << nums[0] << endl;
				cout << "THE LARGEST : " << nums[nums.size() - 1] << endl;
				cout << "THE NUM OF VALUES : " << nums.size() - 1 << endl;
				cout << "THE SUM OF VALUES : " << sum << endl;
				break;
			}
		}
		else
		{
			break;
		}
	}
	cout << "WRONG INPUT " << endl;
	return 0;
}

string ChangeUnit(double num,string unit)
{
	if (unit == "cm" && num >= 100)
	{
		return (unit = "m");
	}
	else if (unit == "in" && num >= 1)
	{
		return (unit = "cm");
	}
	else if (unit == "ft" && num >= 1)
	{
		return (unit = "in");
	}
	else
	{
		return unit;
	}
}

double ChangeNumber(double num, string unit)
{
	if (unit == "cm" && num >= 100)
	{
		return (num/=100);
	}
	else if (unit == "in" && num >= 1)
	{
		return (num *= 2.54);
	}
	else if (unit == "ft" && num >= 1)
	{
		return (num *= 12);
	}
	else
	{
		return num;
	}
}
 
 