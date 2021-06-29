#include <iostream>
#include <cmath>
using namespace std;

int RandomNum(int min, int max)
{
    static const double frac = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return static_cast<int>(rand() * frac * (max - min + 1) + min);
}



int main() {
 cout << "ЗАДАНИЕ №1. Решить квадратное уравнение" << endl;
double x1, x2, a, b, c;

cout << "Введите значение a: " << endl;
    cin >> a;
    cout << "Введите значение b: " << endl;
    cin >> b;
    cout << "Введите значение c: " << endl;;
    cin >> c;
    if((b*b - 4*a*c) >= 0) 
    {
        x1 = ( -1*b + sqrt(b*b - 4*a*c) ) / (2 * a);
        cout << "Первый корень равен " << x1 << endl;
        x2 = ( -1*b - sqrt(b*b - 4*a*c) ) / (2 * a);
        cout << "Второй корень равен " << x2 << endl;
    }
    else
    {
        cout << "Дискриминант меньше 0" << endl;
    }
    cout << endl;

    cout << "ЗАДАНИЕ №2. Нахождение случайного числа в заданном диапазоне" << endl;
    int a2, b2;
    cout << "Введите нижний диапазон: " << endl;
    cin >> a2;
    cout << "Введите верхний диапазон: " << endl;
    cin >> b2;
    srand(static_cast<unsigned int>(time(0)));
    cout << RandomNum(a2,b2) << endl;
    cout << endl;

    cout << "Задание №3. Сортировка массива пузырьком." << endl;

int arr[10];
for (int i = 0; i < 10; i++)
 {
   cout << "Введите элемент массива № " << i + 1 << " : ";
   cin >> arr[i];
 }
int t;

for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // меняем элементы местами
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }

    // Вывод отсортированного массива на экран
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}