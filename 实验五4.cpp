//#include<iostream>
//using namespace std;
//
//class Student
//{
//public:
//
//	void set()
//	{
//		cout << "学号：" << endl;
//		cin >> num;
//		cout << "成绩：" << endl;
//		cin >> score;
//	}
//
//	int getNum()
//	{
//		return num;
//	}
//
//	double getScore()
//	{
//		return score;
//	}
//
//	void max(Student *student, int size)
//	{
//		int maxIndex = 0;
//		for (int i = 0; i < size; ++i) {
//			if (student[i].getScore() > student[maxIndex].getScore()) {
//				maxIndex = i;
//			}
//		}
//		cout << "成绩最高的学生学号为: " << student[maxIndex].getNum() << endl;
//		cout << "他的成绩为：" << student[maxIndex].getScore() << endl;
//	}
//private:
//	int num;
//	int score;
//};
//
//int main()
//{
//	Student student[5];
//	int size = sizeof(student) / sizeof(student[0]);
//	for (int i = 0; i < size; i++)
//	{
//		cout << "请为学生" << i + 1 << "赋值" << endl;
//		student[i].set();
//	}
//
//	student->max(student, size);
//
//}