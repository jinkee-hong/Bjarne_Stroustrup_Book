//#include "std_lib_facilities.h"
//
//#define CURRENCIES 5
//long ChangeCurrency(int choice, long dollar, double* currency);
//long Choice(int inputNum, long dollar, double* currency);
//
//
//int main()
//{
//	const char* str_currency[CURRENCIES] = { "YEN","EURO","POUND","YUAN","KRONER"};
//	double currency[CURRENCIES] = { 148.69, 0.91 ,0.76584 , 200.03, 182.2 };
//
//	int input_num = 0;
//	long dollar = 0;
//
//	
//
//	cout << " ��ŭ�� �޷��� ���� ��ʴϱ�?" << endl;
//	cin >> dollar;
//
//	cout << dollar << "�޷��� � ȭ��� ��ȯ�Ͻðڽ��ϱ� ? " << endl;
//
//	for (int i = 0; i < sizeof(str_currency) / sizeof(const char*); i++)
//	{
//		cout << (i + 1) << "��. " << str_currency[i] << endl;
//	}
//	cin >> input_num;
//
//	cout << "$" << dollar << "�� ";
//	cout << Choice(input_num, dollar, currency) << *(str_currency + (input_num - 1)) << "���� ��ȯ�Ǿ����ϴ�." << endl;
//
//}
//
//long Choice(int inputNum, long dollar, double* currency)
//{
//	switch (inputNum)
//	{
//	case 1: case 2: case 3: case 4: case 5:
//		return ChangeCurrency(inputNum, dollar, currency);
//		break;
//	default :
//		cout << "�߸��� �Է�!" << endl;
//		return -1;
//		break;
//	 }
//}
//
//long ChangeCurrency(int choice, long dollar, double* currency)
//{
//	return (dollar * (*(currency + (choice - 1))));
//}