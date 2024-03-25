#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here
	int n;
	cin >> n;
	int lead = 0;
	int winner = 0;
	int score1 = 0, score2 = 0;
	for (int i = 1; i <= n; i++)
	{
		int a, b;

		cin >> a >> b;
		score1 += a;
		score2 += b;

		int lead1 = abs(score1 - score2);
		if (lead1 > lead)
		{
			lead = lead1;
			(score1 > score2) ? winner = 1 : winner = 2;
		}
	}
	cout << winner << " " << lead << endl;
}
