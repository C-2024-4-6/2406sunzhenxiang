#include<iostream>
using namespace std;

class point
{
private:
	int x;
	int y;
public:
	point() :x(60), y(80){}

	void setPoint(int i, int j)
	{
		x += i;
		y += j;
	}

	void display()
	{
		cout << "点的坐标为（" << x << "，" << y << "）" << endl;
	}
};

int main()
{
	point p1;
	p1.display();
	cout << "\n";

	point p2;
	p2.setPoint(10, 20);
	p2.display();

	system("pause");
	return 0;
}