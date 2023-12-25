#include <iostream>
using namespace std;

int main()
{
	int arr[] = {0, 0, 0, 0, 1, 0, 0};
	bool flag = true;
	int s = 0;
	int ms = 0;
	for (int i = 0; i < 7; i++)
	{
		if (arr[i] != 0 && flag)
		{
			s++;
		}
		else if (arr[i] == 0)
		{
			flag = false;
			
			s = 0;
		}

		else
		{
			flag = true;
			s++;
		}
		ms = max(ms, s);
	}
	ms = max(ms, s);
	cout << ms << endl;
	return 0;
}
