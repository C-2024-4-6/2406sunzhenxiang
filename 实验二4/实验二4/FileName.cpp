#include<iostream>
using namespace std;
int main()
{
	double num1, num2;
	char oper;
	double result;
	cout << "��������������" << endl;
	cin >> num1 >> num2;
	cout << "�����������" << endl;
	cin >> oper;
	switch (oper)
	{
	case'+':
		result = num1 + num2;
		break;
	case'-':
		result = num1 - num2;
		break;
	case'*':
		result = num1 * num2;
		break;
	case'/':
		if (num2 == 0)
		{
			cout << "��������Ϊ0" << endl;
			return 1;
		}
		result = num1 / num2;
		break;
	case'%':
		if (num2 == 0)
		{
			cout << "��������Ϊ0" << endl;
			return 1;
		}
		result = static_cast<int>(num1) % static_cast<int>(num2);
		break;
	default:
		cout << "�Ƿ������" << endl;
		return 1;
	}
	cout << "�����" << result << endl;
	return 0;

}