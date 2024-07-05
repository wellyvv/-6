#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <math.h>
// �����i� ��� ���������� ������� �������
double vector_length(int x1, int y1, int x2, int y2) {
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
int main() {
	setlocale(LC_ALL, "Ukr");
	// ��i��i ���i
	int x1, y1, x2, y2;
	printf("����i�� ���������� x1, y1, x2, y2 ����� ����i�: ");
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	// ���������� ������� �������
	double length = vector_length(x1, y1, x2, y2);
	// ��������� ���������� � ����i��� �� ����� ����i� �i��� ����
	printf("������� �������: %.6f\n", length);
	return 0;
}