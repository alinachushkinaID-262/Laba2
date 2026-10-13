#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> // Для функции fabs() - абсолютное значение (модуль)
#include <windows.h> // Для корректного русского языка в консоли

// Прототип функции для расчета среднего возраста и разниц
void calculate_ages(double x, double y);

int main(void)
{
	// Настройка консоли на UTF-8 для корректной работы с кириллицей
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);

	double x, y;

	printf("=== Расчет среднего возраста Коли и Миши ===\n");
	printf("Введите возраст Коли (X лет): ");
	if (scanf("%lf", &x) != 1 || x < 0) {
		printf("Ошибка ввода некорректного возраста!\n");
		return 1;
	}

	printf("Введите возраст Миши (Y лет): ");
	if (scanf("%lf", &y) != 1 || y < 0) {
		printf("Ошибка ввода некорректного возраста!\n");
		return 1;
	}

	// Вызов функции расчета
	calculate_ages(x, y);

	return 0;
}

// Функция решения задачи
void calculate_ages(double x, double y)
{
	// 1. Расчет среднего возраста
	double average = (x + y) / 2.0;

	// 2. Расчет отличия возраста каждого мальчика от среднего
	double diff_koly = fabs(x - average); // Модуль разности
	double diff_mishi = fabs(y - average);

	// Вывод результатов
	printf("\n--- Результаты расчетов ---\n");
	printf("Возраст Коли: %.1f лет\n", x);
	printf("Возраст Миши: %.1f лет\n", y);
	printf("Средний возраст: %.2f лет\n", average);
	printf("Возраст Коли отличается от среднего на: %.2f лет\n", diff_koly);
	printf("Возраст Миши отличается от среднего на: %.2f лет\n", diff_mishi);
}