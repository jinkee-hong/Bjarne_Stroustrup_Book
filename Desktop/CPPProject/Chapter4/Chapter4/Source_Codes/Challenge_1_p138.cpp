//#include "std_lib_facilities.h"
//
//#define CURRENCIES 3
//int ChangeCurrency(int choice, long dollar, double* currency);
//int Choice(int inputNum, long dollar, double* currency);
//
//
//int main()
//{
//	const char* str_currency[CURRENCIES] = {"YEN","EURO","POUND"};
//	double currency[CURRENCIES] = { 148.69, 0.91 ,0.76584 };
//
//	int input_num = 0;
//	long dollar = 0;
//
//	cout << " 얼만큼의 달러를 갖고 계십니까?" << endl;
//	cin >> dollar;
//
//	cout <<  dollar << "달러를 어떤 화폐로 변환하시겠습니까 ? " << endl;
//
//	for (int i = 0; i < sizeof(str_currency) / sizeof(const char*); i++)
//	{
//		cout << (i+1) << "번. " << str_currency[i] << endl;
//	}
//	cin >> input_num;
//
//	cout << "$" << dollar << "가 ";
//	cout << Choice(input_num, dollar, currency) << *(str_currency + input_num) << "으로 변환되었습니다." << endl;
//	 
//
//
//	
//}
//
//int Choice(int inputNum,long dollar,double* currency)
//{
//	if (inputNum == 1)
//	{
//		return ChangeCurrency(inputNum,dollar, currency);
//	}
//	else if (inputNum == 2)
//	{
//		return ChangeCurrency(inputNum,dollar, currency);
//	}
//	else if (inputNum == 3)
//	{
//		return ChangeCurrency(inputNum,dollar, currency);
//	}
//	else
//	{
//		cout << "잘못된 선택!" << endl;
//		return -1;
//	}
//}
//
//int ChangeCurrency(int choice,long dollar,double *currency)
//{
//	return ( dollar * (*(currency + choice)) );
//}