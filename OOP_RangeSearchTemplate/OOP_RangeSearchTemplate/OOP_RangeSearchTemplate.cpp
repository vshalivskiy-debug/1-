#include <iostream>
#include <clocale>

using namespace std;

// Шаблонна функцiя пошуку елементiв у дiапазонi [low; high]
template <typename T>
int findInRange(const T arr[], int n, T low, T high) {
    int count = 0;

    cout << "Дiапазон [" << low << "; " << high << "]\n";
    cout << "Елементи у дiапазонi: ";

    for (int i = 0; i < n; i++) {
        if (arr[i] >= low && arr[i] <= high) {
            cout << arr[i] << " ";
            count++;
        }
    }

    if (count == 0) {
        cout << "(немає)";
    }

    cout << "\nКiлькiсть знайдених: " << count << "\n";
    return count;
}

// Друк масиву
template <typename T>
void printArray(const T arr[], int n) {
    cout << "{ ";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i != n - 1) cout << ", ";
    }
    cout << " }";
}

int main() {
    setlocale(LC_ALL, "Ukrainian");

    // int
    int a[] = { 1, 5, 9, -2, 7, 3, 10, 4 };
    int n1 = sizeof(a) / sizeof(a[0]);

    cout << "=== Перевiрка для типу int ===\n";
    cout << "Масив: ";
    printArray(a, n1);
    cout << "\n";
    findInRange(a, n1, 3, 8);
    cout << "-----------------------------\n\n";

    // double
    double b[] = { 1.2, 5.5, 9.1, -2.3, 7.0, 3.14, 10.8, 4.4 };
    int n2 = sizeof(b) / sizeof(b[0]);

    cout << "=== Перевiрка для типу double ===\n";
    cout << "Масив: ";
    printArray(b, n2);
    cout << "\n";
    findInRange(b, n2, 3.0, 7.5);
    cout << "-----------------------------\n\n";

    // char
    char c[] = { 'a', 'f', 'z', 'b', 'm', 'c', 'x' };
    int n3 = sizeof(c) / sizeof(c[0]);

    cout << "=== Перевiрка для типу char ===\n";
    cout << "Масив: ";
    printArray(c, n3);
    cout << "\n";
    findInRange(c, n3, 'c', 'm');
    cout << "-----------------------------\n\n";

    return 0;
}
