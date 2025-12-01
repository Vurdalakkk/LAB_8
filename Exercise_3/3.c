// Подключение необходимых библиотек
#include <stdio.h>
#include <math.h>
#include <locale.h>

// Создание основной функции
int main() {
	// Добавление русской локали
	setlocale(LC_CTYPE,"RUS");
	// Создание переменных
	
	//Промежуток
	double a1 = 0.15, a2 = 2.1;
	// Шаг
	double step;
	// F(x)
	double result;
	
	// Добавление ввода значений
	puts("Функция: y = x - 3 * cos^2 (1,04 * x)\nПромежуток - [0.15 ; 2.1]\nВведите шаг");
	scanf("%lf", &step);
	getchar();
	printf("|     x    | |   f(x)   |");
	// Создание цикла для подстановки значений в функцию и вывод результатов
	for (double i = a1; i <= a2; i+= step) {
		result = i - (3 * pow(cos(1.04 * i),2));
		printf("\n| %8.5lf | | %8.5lf |",i, result);
	}
}