#include<iostream>
using namespace std;
int main()
{
	int a = 1;
	for (int i = 0; i < 10-1; i++)
	{
		a = (a + 1) * 2;
	}
	int b;
	b = a;
	cout << "第一天猴子摘" << b << "个桃子" << endl;
	return 0;
}