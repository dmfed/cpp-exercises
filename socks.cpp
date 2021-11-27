/*
Условие
Пара носков стоит 1,05 руб., связка (12 пар) стоит 10,25 руб., 
а коробка (12 связок) стоит 114 руб. Составьте программу, 
которая по числу n пар носков, которые хочет купить покупатель, 
вычисляет числа n1, n2, n3 коробок, связок и пар носков, которые 
ему следует (выгоднее всего) купить.

Формат входных данных
С клавиатуры вводится целое число n (0≤n≤3⋅104).

Формат выходных данных
Вывести на экран три числа: число коробок n1, число связок n2, 
число пар носков n3.
Примечания
В первом примере вместо 11 пар носков следует покупать связку — 
это обойдется дешевле

входные данные	выходные данные
11		0 1 0
*/

#include <iostream>

int main() {
	int n;
	int box = 144;
	int pack = 12;
	int boxes, packs, pairs;

	float pa = 1.05;
        float pk = 10.25;
	float bx = 114.0;

	std::cin >> n;
	
	boxes = n / box;
	n = n % box;

	packs = n / pack;
	n = n % pack;

	pairs = n;

	if (pairs * pa > pk) {
		pairs = 0;
		packs++;
	}
	if (packs * pk > bx) {
		packs = 0;
		boxes++;
	}
	std::cout << boxes << " " << packs << " " << pairs << std::endl;
}
