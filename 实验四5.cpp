#include<iostream>
using namespace std;

int indexOf(const char s1[], const char s2[]) {
    int s1Length = 0;
    int s2Length = 0;

    while (s1[s1Length] != '\0') {
        s1Length++;
    }

    
    while (s2[s2Length] != '\0') {
        s2Length++;
    }

    for (int i = 0; i <= s2Length - s1Length; i++) {
        int j=0;
        for (j ; j < s1Length; j++) {
            if (s2[i + j] != s1[j]) {
                break;
            }
        }
        if (j == s1Length) {
            return i;
        }
    }

    return -1;
}


int main()
{
	const int max_length=100;
	cout << "�������ַ�������󳤶�" << endl;
	/*cin >> max_length;*/
	char s1[max_length];
	char s2[max_length];
	cout << "�������һ���ַ�����" << endl;
	cin.getline(s1, max_length);
	cout << "������ڶ����ַ�����" << endl;
	cin.getline(s2, max_length);
	if (indexOf(s1, s2) != -1)
	{

		cout << "��"<< indexOf(s1, s2) << "��ʼ" << endl;
		cout << "��һ���ַ����ǵڶ����ַ������Ӵ�" << endl;
	}
	else
	{
		cout << "��һ���ַ������ǵڶ����ַ������Ӵ�" << endl;
	}

}
