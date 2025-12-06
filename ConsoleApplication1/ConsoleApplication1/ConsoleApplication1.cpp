#include <iostream>
#include "kek.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int n;
    cout << "Введите размер массива: ";
    cin >> n;

    int* a = new int[n];
    int* t = new int[n];

    cout << "Введите элементы массива:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        t[i] = a[i];
    }

    int g, o;

    while (true) {
        cout << "\nМЕНЮ:\n";
        cout << "1. Бинарные вставки\n";
        cout << "2. Простой подсчет\n";
        cout << "3. Парный обмен\n";
        cout << "0. Выход\n";
        cout << "Выберите метод: ";
        cin >> g;

        if (g == 0) break;
        if (g < 1 || g > 4) continue;

        cout << "1. По возрастанию\n";
        cout << "2. По убыванию\n";
        cout << "Выберите порядок: ";
        cin >> o;

        // Восстанавливаем исходный массив
        for (int i = 0; i < n; i++) t[i] = a[i];

        // Выполняем сортировку
        switch (g) {
        case 1:
            if (o == 1) binaryDesc(t, n);
            else  binaryAsc(t, n);
            break;
        case 2:
            if (o == 1) countingDesc(t, n);
            else  countingAsc(t, n);
            break;
        case 3:
            if (o == 1) bubbleDesc(t, n);
            else  bubbleAsc(t, n);
            break;
        }

        // Выводим результат
        cout << "Результат: ";
        for (int i = 0; i < n; i++) cout << t[i] << " ";
        cout << "\n";
    }

    return 0;
}