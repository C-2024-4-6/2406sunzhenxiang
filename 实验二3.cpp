#include<iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "������������߸�ֵ" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		cout << "��һ��������" << endl;
		if (a == b || a == c || b == c)
		{
			cout << "��һ������������" << endl;
		}
		else
		{
			cout << "����һ������������" << endl;
		}
	}
	else
	{
		cout << "����һ��������" << endl;
	}
	return 0;
}