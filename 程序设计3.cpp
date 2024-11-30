#include<iostream>
using namespace std;

void sortArray(int* array, int size);

int main()
{
	int size;
	cout << "请输入数组元素的个数：" << endl;
	cin >> size;

	int* array = new int[size];
	cout << "请依次输入数组元素：" << endl;
	for (int i = 0; i < size; ++i)
	{
		cin >> array[i];
	}
	cout << "排序前：" << endl;
	for (int i = 0; i < size; ++i)
	{
		cout << array[i] << " ";
	}

	sortArray(array, size);

	cout << "排序后：" << endl;
	for (int i = 0; i < size; ++i)
	{
		cout << *(array + i) << " ";
	}

	cout << endl;

	delete[]array;

	return 0;
}

void sortArray(int* array, int size)
{
	for (int i = 0; i < size - 1; ++i)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (*(array + j) > *(array + j + 1))
			{
				int temp = *(array + j+1);
				*(array + j + 1) = *(array + j);
				*(array + j) = temp;
			}
		}
	}
}