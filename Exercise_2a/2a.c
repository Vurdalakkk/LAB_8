// Подключение необходимых библиотек
#include <stdio.h>
#include <locale.h>
#include <math.h>

// Создание основной функции
int main() {
	// Добавление русской локали
	setlocale(LC_CTYPE,"RUS");
	//Создание пременной для ввода степеней двойки 
	int power;
	// Ввод из консоли
	puts("Сколько степеней 2 хотите получить? ");
	scanf("%d",&power);
	getchar();
	// Создание цикла и вывод результатов
	for (int i = 0; i <= power; i++)
		printf("\n2 ^ %d = %.lf", i, (pow(2, i)));
}
