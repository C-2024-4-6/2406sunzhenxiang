#include<iostream>
using namespace std;
bool is_prime(int num)
{
	for (int i = num - 1; i >= 2;i-- )
	{
		if (num % i == 0)
		{
			return false;
		}
		
	}
}

int main()
{
	int num1 = 0;
	int num2 = 2;
	cout << "ǰ���ٸ���������" << endl;
	while (num1 < 200)
	{
		
		if (is_prime(num2))
		{
			cout << num2 << " ";
			num1++;
			if (num1 % 10 == 0)
			{
				cout << endl;
			}
			
		}
		num2++;
	}
	return 0;
}