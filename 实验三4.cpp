#include "mytriangle.h"

int main()
{
	double side1, side2, side3;
	cout << "������߸�ֵ" << endl;
	cin >> side1 >> side2 >> side3;
	if (is_valid(side1, side2, side3))
	{
		cout << "�����ε����Ϊ��" << area(side1, side2, side3) << endl;
	}
	else
	{
		cout << "���������������������������룡" << endl;
	}
	return 0;
}
