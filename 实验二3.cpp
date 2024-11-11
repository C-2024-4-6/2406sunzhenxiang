#include<iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "请给三角形三边赋值" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		cout << "是一个三角形" << endl;
		if (a == b || a == c || b == c)
		{
			cout << "是一个等腰三角形" << endl;
		}
		else
		{
			cout << "不是一个等腰三角形" << endl;
		}
	}
	else
	{
		cout << "不是一个三角形" << endl;
	}
	return 0;
}