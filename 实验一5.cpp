#include <iostream>
#include <iomanip> 

using namespace std;

double fc(double f) {
    return (f - 32) * 5 / 9;
}

int main() {
    double f, c;


    cout << "请输入华氏温度：";
    cin >> f;

    c = fc(f);

    cout << fixed << setprecision(2) << "摄氏温度为：" << c << "°C" << endl;

    return 0;
}