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
//	cout << "�������һ���ַ�����" << endl;
//	cin.getline(s1, maxLength);
//	cout << "������ڶ����ַ�����" << endl;
//	cin.getline(s2, maxLength);
//
//	int result = indexof(s1, s2);
//
//	if (result != -1)
//	{
//		cout << "��һ���ַ���Ϊ��" << endl;
//		cout << s1;
//		cout << endl;
//		cout << "�ڶ����ַ���Ϊ��" << endl;
//		cout << s2;
//		cout << endl;
//		cout << "��" << result << "��ʼ" << endl;
//		cout << "��һ���ַ����ǵڶ����ַ������Ӵ�" << endl;
//	}
//	else
//	{
//		cout << "��һ���ַ���Ϊ��" << endl;
//		cout << s1;
//		cout << "�ڶ����ַ���Ϊ��" << endl;
//		cout << s2;
//		cout << "��һ���ַ������ǵڶ����ַ������Ӵ�" << endl;
//	}
//}