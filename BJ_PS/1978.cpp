//#include<iostream>
//using namespace std;
//int main(void)
//{
//	int cnt = 0;
//	int N;
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		bool YON = false;
//		int num;
//		cin >> num;
//		if (num == 1)
//			YON = true;
//		else if (num == 2)
//			YON = false;
//		else
//		{
//			for (int j = 2; j < num; j++)
//			{
//				if (num % j == 0)
//				{
//					YON = true;
//					break;
//				}
//			}
//		}
//		if (YON == false)
//			cnt++;
//	}
//	cout << cnt;
//}
//
////제곱근까지만 반복문을 돌리면 된다. 
////그럼 시간 복잡도가 O(n) -> 0(root(n))이 된다.