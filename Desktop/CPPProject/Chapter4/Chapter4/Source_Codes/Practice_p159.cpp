#include "std_lib_facilities.h"
int StrToInt(string temp);

int main()
{
	string str[2] = { "first", "second" };
	vector <int> nums (2);
	string temp;
	int num = 0,counter = 0 ;
	while (1)
	{
		if(counter > 1)
		{
			cout << nums.size();
			for (int i = 0; i < nums.size(); i++)
			{
				cout << nums[i] << "\t" ;
			}
			cout << "\n";
			//clear vector
			nums.clear();
			counter = 0;
		}
		else
		{
			cout << "Input  " << str[counter] << "  Number" << endl;
			cin >> temp;
			// TODO : fix, if condition is not working 
			if (temp.compare("|")) // if temp is "|"
			{
				exit(-1);
			}
			else //if temp is not "|"
			{
				// change string into int
				num = StrToInt(temp);
				//save it to 2 sized vector 
				nums[counter] = num;
			}
			counter++;
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