//#include<iostream>
//using namespace std;
//int main(void)
//{
//	int T, H, W, N;
//	cin >> T;
//	for (int i = 0; i < T; i++)
//	{
//		cin >> H >> W >> N;
//		if (N % H == 0)
//		{
//			if (N == H)
//			{
//				cout << H;
//				/*cout << '01';*/ 
//				//숫자랑 문자랑 출력을 같이하면 01이라는 문자를 아스키코드 숫자로 바꿔서 출력ㅎ나다.
//				cout <<0<<1;
//			}
//			else
//			{
//				cout << H;
//				if ((N / H) >= 10)
//					cout << (N / H);
//				else
//					cout << 0 << (N / H);
//			}
//			cout << '\n';
//		}
//		else
//		{
//			cout << N % H;
//			if ((N / H) + 1 >= 10)
//				cout << (N / H) + 1;
//			else
//				cout << 0 << (N / H) + 1;
//			cout << '\n';
//		}
//	}
//
//}