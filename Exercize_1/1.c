// Подключение необходимых библиотек
#include <stdio.h>
#include <locale.h>

//Создание основной функции
int main() {
	// Добавление русской локали
	
	setlocale(LC_CTYPE, "RUS");
	
	// Создание переменных для ввода из консоли
	
	int w_count_1;
	int w_count_2;
	char symbol_1;
	char symbol_2;
	
	// Ввод значений из консоли
	
	// 1 символ
	puts("Первый символ и его количество: ");
	scanf("%c %d",&symbol_1, &w_count_1);
	getchar();
	// 2 символ
	puts("Второй символ и его количество: ");
	scanf("%c %d", &symbol_2, &w_count_2);
	getchar();

	// Добавление цикла
	
	for (int i = 1;i<=(w_count_1+w_count_2);i++) {
		if (i < 2)printf("+");
		if (i <= w_count_1) printf("%c!", symbol_1);
		else printf("%c!", symbol_2);
		if (i >= (w_count_1 + w_count_2))printf("+");
	}
}