#include <iostream>
#include <clocale>
#include <string>

using namespace std;

// === Шаблон класу Pair ===
// Зберiгає два значення рiзних типiв
template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    Pair(T1 f, T2 s) : first(f), second(s) {}

    T1 getFirst() const {
        return first;
    }

    T2 getSecond() const {
        return second;
    }

    void show() const {
        cout << "Перше значення: " << first << endl;
        cout << "Друге значення: " << second << endl;
    }
};

int main() {
    // Увiмкнення коректної української мови
    setlocale(LC_ALL, "");
    system("chcp 65001 > nul");

    cout << "=== Шаблон класу Pair (пара чисел) ===\n\n";

    // 1) int + double
    Pair<int, double> p1(10, 3.14);
    cout << "Пара 1 (int + double):\n";
    p1.show();
    cout << endl;

    // 2) double + int
    Pair<double, int> p2(5.75, 20);
    cout << "Пара 2 (double + int):\n";
    p2.show();
    cout << endl;

    // 3) long + float
    Pair<long, float> p3(1000000L, 2.5f);
    cout << "Пара 3 (long + float):\n";
    p3.show();
    cout << endl;

    // 4) string + int (не лише числа)
    Pair<string, int> p4("Значення", 55);
    cout << "Пара 4 (string + int):\n";
    p4.show();
    cout << endl;

    return 0;
}