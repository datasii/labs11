#include <iostream>
#include "kek.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int n;
    cout << "Введите размер массива: ";
    cin >> n;

    int* a = new int[n];

    cout << "Введите элементы массива:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int g, o;

    while (true) {
        cout << "\nМЕНЮ:\n";
        cout << "1. Бинарные вставки\n";
        cout << "2. Простой подсчет\n";
        cout << "3. Парный обмен\n";
        cout << "4. Центрированные вставки\n";
        cout << "5. Квадратичный выбор\n";
        cout << "6. Быстрая сортировка\n";
        cout << "0. Выход\n";
        cout << "Выберите метод: ";
        cin >> g;

        if (g == 0) break;
        if (g < 1 || g > 7) continue;

        cout << "1. По возрастанию\n";
        cout << "2. По убыванию\n";
        cout << "Выберите порядок: ";
        cin >> o;

        // Выполняем сортировку
        switch (g) {
        case 1:
            if (o == 1) binaryDesc(a, n);
            else  binaryAsc(a, n);
            break;
        case 2:
            if (o == 1) countingDesc(a, n);
            else  countingAsc(a, n);
            break;
        case 3:
            if (o == 1) bubbleDesc(a, n);
            else  bubbleAsc(a, n);
            break;
        case 4:
            if (o == 1) centeredDesc(a, n);
            else  centeredAsc(a, n);
            break;
        case 5:
            if (o == 1) quadraticDesc(a, n);
            else  quadraticAsc(a, n);
            break;
        case 6:
            if (o == 1) quickDesc(a, n);
            else  quickAsc(a, n);
            break;
        }

        // Выводим результат
        cout << "Результат: ";
        for (int i = 0; i < n; i++) cout << a[i] << " ";
        cout << "\n";
    }

    return 0;
}