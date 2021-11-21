/*
В некоторой школе занятия начинаются в 9:00. Продолжительность 
урока — 45 минут, после 1-го, 3-го, 5-го и т.д. уроков перемена 
длится 5 минут, а после 2-го, 4-го, 6-го и т.д. — 15 минут. 
Дан номер урока N. Определите, когда заканчивается указанный урок.

Формат входных данных
Вводится одно целое число N (1≤N≤10).
Формат выходных данных
Требуется вывести два целых числа: время окончания урока в часах 
и минутах. В случае, если число меньше десяти - выводить ведущий 
ноль не нужно.

Примечания
Обратите внимание, что при решении данной задачи нельзя пользоваться циклами.
*/
#include <iostream>

int main() {
	int n;
	int time = 9 * 60;
	int lesson = 45;
	int sb = 5;
	int lb = 15;

	std::cin >> n;

	time += lesson * n;
	time += n / 2 * lb;
	time += n / 2 * sb;

	if (n % 2 == 0) {
		time -= lb;
	} 
	
	std::cout << time / 60 << ":" << time % 60 << std::endl;
}
