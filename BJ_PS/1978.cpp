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
////�����ٱ����� �ݺ����� ������ �ȴ�. 
////�׷� �ð� ���⵵�� O(n) -> 0(root(n))�� �ȴ�.