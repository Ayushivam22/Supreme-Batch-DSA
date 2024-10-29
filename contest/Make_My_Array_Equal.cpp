#include <iostream>
#include <vector>
using namespace std;

int main() {
    int numTests;
    cin >> numTests;
    while(numTests--) {
        int size;
        cin >> size;
        vector<int> sequence(size);
        int start = 1;
        int end = size;
        int index = 0;
        while(index < size) {
            if(index % 2 == 0) {
                sequence[index] = start++;
            } else {
                sequence[index] = end--;
            }
            index++;
        }
        
        for(index = 0; index < size; index++) {
            cout << sequence[index] << " ";
        }
        
        cout << endl;
    }
    return 0;
}
