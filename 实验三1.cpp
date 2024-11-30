#include<iostream>
using namespace std;

int maxm(int a, int b)
{
	int c = a < b ? a : b;
	while (c > 0)
	{
		c--;
		if (a % c == 0 && b % c == 0)
		{
			
			break;
		}
	}
	return c;
}
int minm(int a, int b)
{
	int c = a < b ? a : b;
	while (c > 0)
	{
		c--;
		if (a % c == 0 && b % c == 0)
		{
			
			break;
		}
	}
	
	int d = a * b / c;
	return d;
}
int main()
{
	int a, b;
	cout << "请给a,b赋值" << endl;
	cin >> a >> b;
	
	cout << "最大公约数" << maxm(a, b) << endl;
	cout << "最小公倍数" << minm(a, b) << endl;
	system("pause");
	return 0;
}