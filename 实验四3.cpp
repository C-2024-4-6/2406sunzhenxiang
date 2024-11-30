//#include<iostream>
//using namespace std;
//
//int main()
//{
//	const int numlocker = 100;
//	bool lockers[numlocker];
//	for (int i = 0; i < numlocker; ++i)
//	{
//		lockers[i] = false;
//	}
//	for (int student=1; student <= numlocker; ++student)
//	{
//		for (int locker = student-1; locker < numlocker; locker += student)
//		{
//			lockers[locker] = !lockers[locker];
//		}
//	}
//	cout << "开着的门有：" << endl;
//	for (int i = 0; i < numlocker; ++i)
//	{
//		if (lockers[i])
//		{
//			cout << i + 1 << " ";
//		}
//	}
//}