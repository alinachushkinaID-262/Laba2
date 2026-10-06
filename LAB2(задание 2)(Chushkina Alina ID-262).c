#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
	// Включаем поддержку русского языка в консоли
	setlocale(LC_ALL, "Russian");

	// 1) Инициализация переменных N и K текущим временем (N - часов, K - минут)
	int N = 14;
	int K = 35;

	// 2) Вывод сообщений на экран
	printf("«Сейчас %02d часов %02d минут 00 секунд»\n", N, K);

	// Идет _ минута суток
	int current_minute = N * 60 + K + 1;
	printf("«Идет %d минута суток»\n", current_minute);

	// До полуночи осталось _ часов и _ минут
	int minutes_left_total = (24 * 60) - (N * 60 + K);
	int hours_left = minutes_left_total / 60;
	int mins_left = minutes_left_total % 60;
	printf("«До полуночи осталось %d часов и %d минут»\n", hours_left, mins_left);

	// С 8.00 прошло _ секунд (считаем при условии, что N >= 8)
	int seconds_from_8 = (N - 8) * 3600 + K * 60;
	printf("«С 8.00 прошло %d секунд»\n", seconds_from_8);

	// Текущий час = _ суток и текущая минута = _ часа (с выводом 2 цифр в дробной части)
	double day_part = (double)N / 24.0;
	double hour_part = (double)K / 60.0;
	printf("«Текущий час = %.2f суток и текущая минута = %.2f часа»\n", day_part, hour_part);

	return 0;
}
