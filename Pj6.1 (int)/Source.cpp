#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

// ��������� ������
void COUT(int mas[], int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << mas[i] << " ";
    }
    cout << endl;
}

// ϳ�������� ������� ��'����� ������ ��������
int PlusEl(int mas[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (mas[i] < 0 && mas[i] % 2 == 0) {  // �������� �� ��'���� �����
            count++;
        }
    }
    return count;
}

// ���������� ���� ��'����� ������ ��������
int SUM(int mas[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (mas[i] < 0 && mas[i] % 2 == 0) {  // �������� �� ��'���� �����
            sum += mas[i];
        }
    }
    return sum;
}

// ������� ��'��� ���� �������� �� ���
void Nulls(int mas[], int size) {
    for (int i = 0; i < size; i++) {
        if (mas[i] < 0 && mas[i] % 2 == 0) {  // �������� �� ��'���� �����
            mas[i] = 0;
        }
    }
}

int main() {
    const int SIZE = 20;  // ����� �� 20 ��������

    srand((unsigned)time(0)); // ��������� ���������� �����
    setlocale(LC_CTYPE, "ukr");

    int a[SIZE];

    // ��������� ������ � ���������� ������� �� -20 �� 34
    for (int i = 0; i < SIZE; i++) {
        a[i] = rand() % 55 - 20;  // ��������� ������� �� -20 �� 34
    }

    // ��������� ����������� ������
    cout << "���������� �����: " << endl;
    COUT(a, SIZE);

    // ϳ�������� ������� ��'����� ������ ��������
    int count = PlusEl(a, SIZE);

    // ���������� ���� ��'����� ������ ��������
    int sum = SUM(a, SIZE);

    // ��������� ����������
    cout << "ʳ������ ��'����� ������ ��������: " << count << endl;
    cout << "���� ��'����� ������ ��������: " << sum << endl;

    // ����� ��'����� ������ �������� �� ���
    Nulls(a, SIZE);

    // ��������� �������������� ������
    cout << "������������� �����: " << endl;
    COUT(a, SIZE);

    return 0;
}
