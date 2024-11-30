//#include<iostream>
//using namespace std;
//
//int indexof(const char s1[], const char s2[])
//{
//	int s1Length = 0;
//	int s2Length = 0;
//
//	while (s1[s1Length] != '\0')
//	{
//		s1Length++;
//	}
//
//	while (s2[s2Length] != '\0')
//	{
//		s2Length++;
//	}
//
//	for (int i = 0; i < s2Length - s1Length; i++)
//	{
//		int j = 0;
//		for (j; j < s1Length; j++)
//		{
//			if (s2[i + j] != s1[j])
//			{
//				break;
//			}
//		}
//		if (j == s1Length)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	const int maxLength = 100;
//	char s1[maxLength];
//	char s2[maxLength];
//
//	cout << "请输入第一个字符串：" << endl;
//	cin.getline(s1, maxLength);
//	cout << "请输入第二个字符串：" << endl;
//	cin.getline(s2, maxLength);
//
//	int result = indexof(s1, s2);
//
//	if (result != -1)
//	{
//		cout << "第一个字符串为：" << endl;
//		cout << s1;
//		cout << endl;
//		cout << "第二个字符串为：" << endl;
//		cout << s2;
//		cout << endl;
//		cout << "从" << result << "开始" << endl;
//		cout << "第一个字符串是第二个字符串的子串" << endl;
//	}
//	else
//	{
//		cout << "第一个字符串为：" << endl;
//		cout << s1;
//		cout << "第二个字符串为：" << endl;
//		cout << s2;
//		cout << "第一个字符串不是第二个字符串的子串" << endl;
//	}
//}