/*
Определите наименьшее расстояние между двумя локальными максимумами
последовательности натуральных чисел, завершающейся числом 0. Если в
последовательности нет двух локальных максимумов, выведите число 0.

Начальное и конечное значение при этом локальными максимумами не считаются.

Расстоянием считается количество пробелов между элементами. В качестве
примера смотрите первый тест.

Формат входных данных
Вводится последовательность целых чисел, оканчивающаяся числом 0 (само
число 0 в последовательность не входит, а служит как признак ее окончания).

Выведите ответ на задачу.
Sample Input 1:

1
2
1
1
2
1
2
1
0

Sample Output 1:

2
*/

#include <iostream>
using namespace std;

int main() {
    int tmp, prev = 0, candidate = 0, count = 0, curr_distance = 0, min_distance = 0;
    while(cin >> tmp and tmp){
        if(prev != 0 and prev < candidate and candidate > tmp) {
            count++;
            if(count == 2) min_distance = curr_distance;
            min_distance = min(min_distance, curr_distance);
            curr_distance = 0;
        }
        prev = candidate, candidate = tmp;
        curr_distance++;
    }
    cout << min_distance << endl;
  return 0;
}
