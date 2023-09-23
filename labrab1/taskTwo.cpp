#include <iostream>
#include <vector>
#include "taskTwo.h"
void taskTwo()
{
	int* height = new int;
	int* i = new int;
	int* j = new int;
	int* k = new int;

	std::cout << "������� ������ ���������� ����� ��������: ";
	std::cin >> *height;

	std::cout << '\n';
	for (*i = 0; *i <= *height; ++*i) {

		//������� ������ ���-�� ��������
		for (*j = 0; *j < *height - *i; ++*j) {
			std::cout << " ";
		}
		//������� ������ ���-�� �����
		for (*k = 0; *k <= *i; ++*k) {
			printf("%d ", hosoyaNumber(i, k));
		}
		std::cout << "\n";
	}
	delete height, i, j, k;
}

int hosoyaNumber(int* n, int* i) {
	//������� � ���������
	return fibNumber(*i + 1) * fibNumber(*n - *i + 1);
}

int fibNumber(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	return fibNumber(n - 1) + fibNumber(n - 2);
}
