#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

// Виведення масиву
void COUT(int mas[], int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << mas[i] << " ";
    }
    cout << endl;
}

// Підрахунок кількості від'ємних парних елементів
int PlusEl(int mas[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (mas[i] < 0 && mas[i] % 2 == 0) {  // Перевірка на від'ємне парне
            count++;
        }
    }
    return count;
}

// Обчислення суми від'ємних парних елементів
int SUM(int mas[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (mas[i] < 0 && mas[i] % 2 == 0) {  // Перевірка на від'ємне парне
            sum += mas[i];
        }
    }
    return sum;
}

// Замінити від'ємні парні елементи на нулі
void Nulls(int mas[], int size) {
    for (int i = 0; i < size; i++) {
        if (mas[i] < 0 && mas[i] % 2 == 0) {  // Перевірка на від'ємне парне
            mas[i] = 0;
        }
    }
}

int main() {
    const int SIZE = 20;  // Масив має 20 елементів

    srand((unsigned)time(0)); // генератор випадкових чисел
    setlocale(LC_CTYPE, "ukr");

    int a[SIZE];

    // Генерація масиву з випадкових значень від -20 до 34
    for (int i = 0; i < SIZE; i++) {
        a[i] = rand() % 55 - 20;  // Генерація значень від -20 до 34
    }

    // Виведення початкового масиву
    cout << "Початковий масив: " << endl;
    COUT(a, SIZE);

    // Підрахунок кількості від'ємних парних елементів
    int count = PlusEl(a, SIZE);

    // Обчислення суми від'ємних парних елементів
    int sum = SUM(a, SIZE);

    // Виведення результатів
    cout << "Кількість від'ємних парних елементів: " << count << endl;
    cout << "Сума від'ємних парних елементів: " << sum << endl;

    // Заміна від'ємних парних елементів на нулі
    Nulls(a, SIZE);

    // Виведення модифікованого масиву
    cout << "Модифікований масив: " << endl;
    COUT(a, SIZE);

    return 0;
}
