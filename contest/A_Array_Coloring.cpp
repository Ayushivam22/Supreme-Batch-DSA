#include <iostream>
#include <vector>
using namespace std;

int solver(int n, vector<char> &str, int idx)
{
    // Base case
    if (n == 0)
    {
        return 1; // Empty string case
    }

    // Initialize answer
    int ans = 0;

    // Iterate through vowels from current index
    for (int i = idx; i < str.size(); i++)
    {
        // Add strings starting with current vowel and recursive calls
        ans += solver(n - 1, str, i); // Recursive call for strings of length n-1
    }

    return ans;
}

int countVowelStrings(int n)
{
    vector<char> str = {'a', 'e', 'i', 'o', 'u'};
    return solver(n, str, 0);
}

int main()
{
    cout << countVowelStrings(1) << endl; // Output: 5
    cout << countVowelStrings(2) << endl; // Output: 15
    cout << countVowelStrings(5) << endl; // Output: 781
    return 0;
}
