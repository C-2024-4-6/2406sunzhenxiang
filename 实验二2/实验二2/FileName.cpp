#include<iostream>
using namespace std;
int main()
{
	int x;
	cout << "������x��ֵ" << endl;
	cin >> x;
	if (x < 1 && x>0)
	{
		int y = 3 - 2 * x;
		cout << "y��ֵΪ��" << y << endl;
	}
	else if (x < 5 && x >= 1)
	{
		int y = 2 / (4 * x) + 1;
		cout << "y��ֵΪ��" << y << endl;
	}
	else if (x < 10 && x >= 5)
	{
		int y = x * x;
		cout << "y��ֵΪ��" << y << endl;
	}
	else
	{
		cout << "�����������" << endl;
	}
}