//#include<iostream>
//
//using namespace std;
//bool IsHanSu(int num)
//{
//	if (((num / 10) % 10) * 2 == (num % 10) + (num / 100) % 10)
//		return true;
//	else
//		return false;
//}
//int main(void)
//{
//	int N;
//	int cnt = 99;
//	cin >> N;
//	if (N < 100)
//		cout << N << endl;
//	else if (N == 1000)
//		cout << 144 << endl;
//	else
//	{
//		for (int i = 100; i < N + 1; i++)
//		{
//			if (IsHanSu(i) == true)
//				cnt++;
//		}
//		cout << cnt << endl;
//	}
//}
