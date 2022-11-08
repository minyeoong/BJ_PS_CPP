//#include<iostream>
//using namespace std;
//
//int main(void)
//{
//	int N;
//	cin >> N;
//	for (int t = 0; t < N; t++)
//	{
//		int arr[15][15]={0,};
//		for (int i = 0; i < 15; i++)
//		{
//			arr[0][i] = i;
//		}
//		int k, n;
//		cin >> k;
//		cin >> n;
//		for (int i = 1; i < k+1; i++)
//		{
//			for (int k = 1; k < n + 1; k++)
//			{
//				for (int j = 1; j < k+1;j++)
//				{
//					arr[i][k]+= arr[i - 1][j]; 
//					//arr[i][n]이 초기화 되지 않은 상태에서 진행하면 안된다.
//
//				}
//			}
//		}
//		cout << arr[k][n];
//		cout << '\n';
//	}
//}

////재귀로 대박적 풀이..
////https://aorica.tistory.com/125