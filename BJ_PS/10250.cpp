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
//				//���ڶ� ���ڶ� ����� �����ϸ� 01�̶�� ���ڸ� �ƽ�Ű�ڵ� ���ڷ� �ٲ㼭 ��¤�����.
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