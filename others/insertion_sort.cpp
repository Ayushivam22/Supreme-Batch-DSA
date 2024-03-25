#include <iostream>
using namespace std;
// 2
// 4 6
// 3 2 5 2
// 3 8 1 4
// 2 12
// 5 5

int main() {
	// your code goes here
	int arr[4]={3,2,5,2};
	for(int i=1;i<4;i++){
		for(int j=i;j>0;j--){
			if(arr[j]<=arr[j-1])swap(arr[j-1],arr[j]);
		}
	}
	for(int i=0;i<4;i++){
		cout << arr[i] << " ";
	}
	return 0;
}
