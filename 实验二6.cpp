
#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "������a,b�ĸ�ֵ" << endl;
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
	cout << "���Լ��Ϊ��" << c << endl;
	cout << "��С������Ϊ��" << d<< endl;
	system("pause");
	return 0;
}