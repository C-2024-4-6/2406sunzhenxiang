
#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "请输入a,b的赋值" << endl;
	cin >> a >> b;
	int c = a < b ? a: b;
	while (c>0)
	{
		c--;
		if (a % c == 0 && b % c == 0)
		{
			break;
	}
	}
	int d = a * b / c;
	cout << "最大公约数为：" << c << endl;
	cout << "最小公倍数为：" << d<< endl;
	system("pause");
	return 0;
}