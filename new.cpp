// second largest of three numbers
#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
		int x[3]={0};
		int max = INT_MIN;
		for (int i = 0; i < 3; i++)
		{
			cin >> x[i];
			if (x[i] > max)
				max = x[i];
		}
		cout<<"MAX"<<max<<endl;

		int second = INT_MIN;
		for (int i = 0; i < 3; i++)
		{
			if ((second < x[i]) && (x[i] < max)){
				second=x[i];
				cout <<i<<" SECOND"<<second<<endl;
			}
		}
		// cout<<second<<endl;
	}
}
