//// подключение необходимых библиотек
//#include <stdio.h>
//#include <locale.h>
//
////создание основной функции
//int main() {
//	// добавление русской локали
//
//	setlocale(lc_ctype, "rus");
//
//	// создание переменных для ввода из консоли
//
//	int w_count_1;
//	int w_count_2;
//	char symbol_1;
//	char symbol_2;
//
//	// ввод значений из консоли
//
//	// 1 символ
//	puts("первый символ и его количество: ");
//	scanf("%c %d", &symbol_1, &w_count_1);
//	getchar();
//	// 2 символ
//	puts("второй символ и его количество: ");
//	scanf("%c %d", &symbol_2, &w_count_2);
//	getchar();
//
//	// добавление цикла
//
//	for (int i = 1; i <= (w_count_1 + w_count_2); i++) {
//		if (i < 2)puts("+");
//		if (i <= w_count_1) { if (i < 2) printf("%c!", symbol_1); else printf("\n%c!", symbol_1); }
//		else printf("\n%c!", symbol_2);
//		if (i >= (w_count_1 + w_count_2))puts("\n+");
//	}
//}


#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_CTYPE, "RUS");
	for (int start = 1; start <= 10; start++) {
		if (start < 2)
			puts("31");
		putchar('*');
		if (start >= 10)puts("\n31");
	}
		
		
}
