// Lab 1 - factorial, recursive and iterative
#include <iostream>
using namespace std;

long long factorialRec(int n) {
    if (n == 0) return 1; // base case
    return (long long)n * factorialRec(n - 1); // recursive case
}

long long factorialIter(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++)
        result = result * i;
    return result;
}

int main() {
    // الجزء الأول: طباعة الجدول
    for (int n = 0; n <= 22; n++) {
        cout << n << "! = " << factorialRec(n);
        cout << "  |  loop: " << factorialIter(n);
        cout << endl;
    }

    // الجزء الثاني: اختبار الـ n الكبير
    int big;
    cout << "\nEnter a large n: ";
    cin >> big;
    cout << "recursive finished: " << factorialRec(big) << endl;
    return 0;
}