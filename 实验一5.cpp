#include <iostream>
#include <iomanip> 

using namespace std;

double fc(double f) {
    return (f - 32) * 5 / 9;
}

int main() {
    double f, c;


    cout << "�����뻪���¶ȣ�";
    cin >> f;

    c = fc(f);

    cout << fixed << setprecision(2) << "�����¶�Ϊ��" << c << "��C" << endl;

    return 0;
}