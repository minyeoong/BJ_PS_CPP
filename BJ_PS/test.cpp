#include<iostream>
using namespace std;
int main(void)
{
	int cnt = 0;
	for (int i = 1; i <= 3; i++)
	{
		if (i % 3 == 0)
			continue;
		for (int j = 1; j <= 4; j++)
		{
			if (j % 4 == 0)
				continue;
			for (int k = 1; k <= 3; k++)
			{
				if (i + j + k >= 9)
					break;
				cout << "hello";
				cnt++;
				


			}
				
		}

	}
	cout << cnt;
}