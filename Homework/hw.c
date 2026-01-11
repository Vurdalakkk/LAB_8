// Необходимые библиотеки
#include <stdio.h>
#include <locale.h>
#include <math.h>


// Основная функция
int main() {
	// Русская локаль
	setlocale(LC_CTYPE, "RUS");

	// Переменные
	double x;
	double result = 0;
	
	// Ввод числа x фи границы из консоли
	printf("Введите значение x: ");
	scanf("%lf", &x);
	getchar();
	
	// Цикл с вычислением выражения
	for (int i = 0; i <= 6; i++) {
		double chisl = pow(x, 2.0 * i + 1);
		double znam = tgamma(2.0 * i + 2);
		double term = pow(-1, i) * chisl / znam;
		result += term;
	}
	printf("Ответ - %lf", result);
	return 0;
}
