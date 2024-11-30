#include<iostream>
using namespace std;
void counts(const char s[],int count[])
	{
	for (int i = 0; s[i] != '\0'; ++i)
	{
		char ch = s[i];
		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
		{
			if (ch >= 'A' && ch <= 'Z')
			{
				ch = ch + 'a' - 'A';
			}
		}
		count[ch - 'a']++;
	}
	
	}
int main()
{
	const int maxLength = 100;
	char s[maxLength];
	int count[maxLength] = { 0 };

	cout << "请输入字符串" << endl;
	cin.getline(s, maxLength);

	counts(s, count);

	cout << "每个字母出现的次数：" << endl;
	for (int i = 0; i < 26; ++i)
	{
		if (count[i] != 0) {
			cout << static_cast<char>('a' + i) << "：" << count[i] << "\n";
		}
		
	}
}