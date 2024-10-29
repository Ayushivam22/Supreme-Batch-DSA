#include <iostream>
#include <vector>
using namespace std;

int solve(int n, vector<int> &arr) {
    cout << "solve(" << n << ")" << endl;
    if (n == 0 || n == 1 || n == 2) return 1;
    if (arr[n] != 0) return arr[n];
    arr[n] = (solve(n - 2, arr) % int(1e9 + 7) + solve(n - 3, arr) % int(1e9 + 7)) % int(1e9 + 7);
    return arr[n];
}

int padovanSequence(int n) {
    cout << "padovanSequence(" << n << ")" << endl;
    if (n < 0) return -1; // Invalid input, return -1 or handle accordingly
    vector<int> arr(n + 1, 0);
    int ans = solve(n, arr);
    return ans;
}

int main() {
    int result = padovanSequence(999993);
    cout << "Result: " << result << endl;
    return 0;
}
