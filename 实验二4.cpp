#include<iostream>
using namespace std;
int main()
{
	double num1, num2;
	char oper;
	double result;
	cout << "请输入两个数字" << endl;
	cin >> num1 >> num2;
	cout << "请输入运算符" << endl;
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
			cout << "除数不能为0" << endl;
			return 1;
		}
		result = num1 / num2;
		break;
	case'%':
		if (num2 == 0)
		{
			cout << "除数不能为0" << endl;
			return 1;
		}
		result = static_cast<int>(num1) % static_cast<int>(num2);
		break;
	default:
		cout << "非法运算符" << endl;
		return 1;
	}
	cout << "结果是" << result << endl;
	return 0;

}