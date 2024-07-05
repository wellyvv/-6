#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <math.h>
// Функцiя для обчислення довжини вектора
double vector_length(int x1, int y1, int x2, int y2) {
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
int main() {
	setlocale(LC_ALL, "Ukr");
	// Вхiднi данi
	int x1, y1, x2, y2;
	printf("Введiть координати x1, y1, x2, y2 через пробiл: ");
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	// Обчислення довжини вектора
	double length = vector_length(x1, y1, x2, y2);
	// Виведення результату з точнiстю до шести знакiв пiсля коми
	printf("Довжина вектора: %.6f\n", length);
	return 0;
}