#include <iostream>
#include <ctime>
using namespace std;

long long fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int tests[] = { 50, 100000 };
    for (int i = 0; i < 2; i++) {
        int n = tests[i];
        clock_t start = clock();
        long long result = fib(n);
        double elapsed = double(clock() - start) / CLOCKS_PER_SEC;
        cout << "fib(" << n << ") = " << result
            << "   time: " << elapsed << " s" << endl;
    }
    return 0;
}