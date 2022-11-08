//#include<iostream>
//using namespace std;
//
//int main(void)
//{
//	int N;
//	int cnt = 0;
//	cin >> N;
//	if (N < 10)
//		N *= 10;
//	int storeNum;
//	storeNum = N;
//	do
//	{
//		cnt++;
//		N = (N % 10) * 10 + (N % 10 + (N / 10) % 10) % 10;
//	}
//
//	while (storeNum != N);
//
//	cout << cnt;
//}
////do while문 연습!
////do 하면서 블럭을 써 주고 while 에 조건을 써주고 ;을 붙여야 한다.
////dowhile은 블럭 실행 후 조건 검사, while은 조건 검사 후 블럭 실행