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
//	cout << " ��ŭ�� �޷��� ���� ��ʴϱ�?" << endl;
//	cin >> dollar;
//
//	cout <<  dollar << "�޷��� � ȭ��� ��ȯ�Ͻðڽ��ϱ� ? " << endl;
//
//	for (int i = 0; i < sizeof(str_currency) / sizeof(const char*); i++)
//	{
//		cout << (i+1) << "��. " << str_currency[i] << endl;
//	}
//	cin >> input_num;
//
//	cout << "$" << dollar << "�� ";
//	cout << Choice(input_num, dollar, currency) << *(str_currency + input_num) << "���� ��ȯ�Ǿ����ϴ�." << endl;
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
//		cout << "�߸��� ����!" << endl;
//		return -1;
//	}
//}
//
//int ChangeCurrency(int choice,long dollar,double *currency)
//{
//	return ( dollar * (*(currency + choice)) );
//}