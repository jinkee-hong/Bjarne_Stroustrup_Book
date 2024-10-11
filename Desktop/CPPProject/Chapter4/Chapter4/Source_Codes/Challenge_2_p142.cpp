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
//	cout << " 얼만큼의 달러를 갖고 계십니까?" << endl;
//	cin >> dollar;
//
//	cout << dollar << "달러를 어떤 화폐로 변환하시겠습니까 ? " << endl;
//
//	for (int i = 0; i < sizeof(str_currency) / sizeof(const char*); i++)
//	{
//		cout << (i + 1) << "번. " << str_currency[i] << endl;
//	}
//	cin >> input_num;
//
//	cout << "$" << dollar << "가 ";
//	cout << Choice(input_num, dollar, currency) << *(str_currency + (input_num - 1)) << "으로 변환되었습니다." << endl;
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
//		cout << "잘못된 입력!" << endl;
//		return -1;
//		break;
//	 }
//}
//
//long ChangeCurrency(int choice, long dollar, double* currency)
//{
//	return (dollar * (*(currency + (choice - 1))));
//}