#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "������һ���ַ�" << endl;
	cin >> ch;
	if (ch >= 'a' && ch <= 'z')
	{
		ch = ch - 'a' + 'A';
		cout << "ת��Ϊ��д�ַ�" << ch << endl;
	}
	else
	{
		cout << "��̵�ASCII��ֵΪ" << static_cast<int>(ch + 1) << endl;
	}
	return 0;
}