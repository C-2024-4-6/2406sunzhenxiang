//#include<iostream>
//#include<cctype>
//#include<string>
//using namespace std;
//
//int parseHex(const char* const hexString)
//{
//	int Result = 0;
//	int length = strlen(hexString);
//	int base = 1;
//
//	for (int i = length - 1; i >= 0; i--)
//	{
//		if (isdigit(hexString[i]))
//		{
//			Result += (hexString[i] - '0') * base;
//		}
//		else if (isalpha(hexString[i]))
//		{
//			if (isupper(hexString[i]))
//			{
//				Result += (hexString[i] - 'A' + 10) * base;
//			}
//			else
//			{
//				Result += (hexString[i] - 'a' + 10) * base;
//			}
//		}
//		base *= 16;
//	}
//	return Result;
//}
//
//int main()
//{
//	const int maxLength = 100;
//	char hexString[maxLength];
//
//	cout << "请输入一个十六进制的数字：" << endl;
//	cin.getline(hexString, maxLength);
//
//	cout << "十六进制数位：" << hexString << "转化来的十进制数为：" << parseHex(hexString) << endl;
//	return 0;
//}