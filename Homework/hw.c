// Подключение необходимых библиотек
#include <stdio.h>
#include <locale.h>
#include <math.h>

// Создание оснвной функции
int main() {
	// Добавление русской локали
	setlocale(LC_CTYPE, "RUS");
	// Создание переменной для ввода из консоли
	double x;
	// Ввод x
	puts("x - x^3/!3 + x^5/!5 - x^7/!7 + x^9/!9 - x^11/!11 + x^13/!13\nВведите x для решения данного выражения: ");
	scanf("%lf", &x);
	getchar();
	// Вывод результата

	printf("Результат - %.5lf", x - (pow(x, 3) / tgamma(4)) + (pow(x, 5) / tgamma(6)) - (pow(x, 7) / tgamma(8)) + (pow(x, 9) / tgamma(10)) - (pow(x, 11) / tgamma(12)) + (pow(x, 13) / tgamma(14)));

}