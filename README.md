<h1 align="center">Домашнее задание к работе 8</h1>
<div align="center">



## Условие задачи


<img width="523" height="101" alt="image" src="https://github.com/user-attachments/assets/5f00bd70-ca9f-4fbd-b5b9-76159ddde47b" />






## 1. Алгоритм и блок-схема



### Алгоритм
1. **Начало**
2. Создание переменной для ввода из консоли <br>
   - `double x` - значение,которое будем подставлять в функцию<br>
3. Вычисление и вывод результата<br>
   - 'x - (pow(x, 3) / tgamma(4)) + (pow(x, 5) / tgamma(6)) - (pow(x, 7) / tgamma(8)) + (pow(x, 9) / tgamma(10)) - (pow(x, 11) / tgamma(12)) + (pow(x, 13) / tgamma(14))'
4. **Конец**

</div>

### Блок-схема

<img width="637" height="682" alt="LAB_8" src="https://github.com/user-attachments/assets/27198b92-c9f0-4a83-8aa9-b2048382f643" />


</div>

## 2. Реализация программы

```c
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
```
<div align="center">

## 3. Результаты работы программы

<img width="974" height="511" alt="image" src="https://github.com/user-attachments/assets/e229539c-9ced-49c2-9e92-ad4b354301a9" />




## 4. Информация о разработчике

Выполнил Гребенников Артем, бИПТ-252
