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
	cout << "请输入字符串的最大长度" << endl;
	/*cin >> max_length;*/
	char s1[max_length];
	char s2[max_length];
	cout << "请输入第一个字符串：" << endl;
	cin.getline(s1, max_length);
	cout << "请输入第二个字符串：" << endl;
	cin.getline(s2, max_length);
	if (indexOf(s1, s2) != -1)
	{

		cout << "从"<< indexOf(s1, s2) << "开始" << endl;
		cout << "第一个字符串是第二个字符串的子串" << endl;
	}
	else
	{
		cout << "第一个字符串不是第二个字符串的子串" << endl;
	}

}
