// Подключение необходимых библиотек
#include <stdio.h>
#include <locale.h>
#include <math.h>

// Создание оснвной функции
int main() {
	// Добавление русской локали
	setlocale(LC_CTYPE, "RUS");
	// Создание переменной для ввода из консоли и счетчиков
	double x, x2;
	x2 = 0;
	int fac_start, fac_end, a1 = 1;
	// Ввод x
	puts("x - x^3/!3 + x^5/!5 - x^7/!7 + x^9/!9 - x^11/!11 + x^13/!13\nВведите x и границы степеней - (x 3 5): ");
	scanf("%lf %d %d", &x, &fac_start, &fac_end);
	getchar();

	if ((fac_start % 2 == 0) || (fac_end % 2 == 0)) {
		puts("Границы должны быть нечетными цифрами/ числами!");
		return 0;
	}

		// Проверка и подставновка условий
		for (int i = 1; fac_start <= fac_end; fac_start += 2, i += 1) {
			if (i % 2 == 1)
				x2 += pow(x, fac_start) / tgamma(fac_start+1);
			else
				x2 -= pow(x, fac_start) / tgamma(fac_start+1);

		}
		printf("Ваш результат - %lf", x2);
	}


