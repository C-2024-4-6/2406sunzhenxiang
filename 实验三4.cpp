#include "mytriangle.h"

int main()
{
	double side1, side2, side3;
	cout << "请给三边赋值" << endl;
	cin >> side1 >> side2 >> side3;
	if (is_valid(side1, side2, side3))
	{
		cout << "三角形的面积为：" << area(side1, side2, side3) << endl;
	}
	else
	{
		cout << "输入的三角形三遍错误，请重新输入！" << endl;
	}
	return 0;
}
