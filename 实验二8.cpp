#include<iostream>
//#include<cmath>
using namespace std;
int main()
{
	double a;
	cout << "������a�ĸ�ֵ" << endl;
	cin >> a;
	if (a < 0)
	{
		a = -a;
	}
	double xn = a;
	double xn1;
	while (true)
	{
		xn1 = 0.5 * (xn + a / xn);
		if (abs(xn1 - xn) < 1e-5)
		{
			break;
		}
		xn = xn1;
	}
	cout << "a��ƽ����Ϊ" << xn << endl;
	system("pause");
	return 0;
}