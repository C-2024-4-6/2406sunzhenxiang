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
	cout << "���a,b��ֵ" << endl;
	cin >> a >> b;
	
	cout << "���Լ��" << maxm(a, b) << endl;
	cout << "��С������" << minm(a, b) << endl;
	system("pause");
	return 0;
}