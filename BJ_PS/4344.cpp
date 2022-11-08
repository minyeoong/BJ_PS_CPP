//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main(void)
//{
//	int N;
//
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		float student;
//		cin >> student;
//		float total = 0;
//		float cnt = 0;
//		vector<int>A(1000,0);
//		
//		for (int j = 0; j < student; j++)
//		{
//			float score;
//			cin >> score;
//			total += score;
//			A[j] = score;
//
//		}
//		total /= student;
//
//		for (int j = 0; j < student; j++)
//		{
//			if (total < A[j])
//				cnt++;
//		}
//		cnt = (cnt / student) * 100;
//
//		cout << fixed;
//		cout.precision(3);
//		cout << cnt << "%" << endl;
//		
//
//	}
//}
////마지막 세 문장에서 소수점을 고정시키는 함수가 등장한다.
////cout << fixed; --> 소수점 개수를 고정하는 함수
////cout.precision(3)--> 자리수를 3으로 하는 함수
////또한 변수들의 연산과정에서 int와 float이 함께 연산되면 float이 int로 형변환 되므로 유의해야한다.
