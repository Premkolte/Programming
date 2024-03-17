#include <iostream>
using namespace std;
int fibonacci(int n) {
    if (n == 1 || n == 2)
        return 1;
    
    int prev = 1, curr = 1, next;
    for (int i = 3; i <= n; ++i) {
        next = prev + curr;
        prev = curr;
        curr = next;
    }
    return curr;
}

int main() {
    int n;
    cin >> n;
    
    fibonacci(n);
}
