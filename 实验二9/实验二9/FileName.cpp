#include<iostream>
using namespace std;
int main()
{
	double a = 0.8, aver;
	int b, num, day;
	for (num = 0, b = 2, day = 1; num <= 100; day++, b = 2 * b)
	{
		
		num = num + b;
	}
	aver = num * a / day;
	cout << "平均价钱为" << aver << endl;

	return 0;
	
}