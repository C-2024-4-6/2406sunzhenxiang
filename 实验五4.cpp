//#include<iostream>
//using namespace std;
//
//class Student
//{
//public:
//
//	void set()
//	{
//		cout << "ѧ�ţ�" << endl;
//		cin >> num;
//		cout << "�ɼ���" << endl;
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
//		cout << "�ɼ���ߵ�ѧ��ѧ��Ϊ: " << student[maxIndex].getNum() << endl;
//		cout << "���ĳɼ�Ϊ��" << student[maxIndex].getScore() << endl;
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
//		cout << "��Ϊѧ��" << i + 1 << "��ֵ" << endl;
//		student[i].set();
//	}
//
//	student->max(student, size);
//
//}