//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main(void)
//{
//	int N=0, M;
//	cin >> N >> M;
//	vector<int>A;
//	int num;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> num;
//		A.push_back(num);
//	}
//	int sum = 0;
//	int min = M;
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = i+1; j < N; j++)
//		{
//			for (int k = j + 1; k < N; k++)
//			{
//				sum = A[i] + A[j] + A[k];
//				if (M == sum)
//				{
//					i =10;
//					j =10;
//					break;
//				}
//				if (M > sum)
//				{
//					if (min > M-sum)
//						min = M-sum;
//				}
//
//					
//			}
//
//		}
//	}
//	if (sum == M)
//		cout << M << '\n';
//	else
//		cout << M-min << '\n';
//	return 0;
//}