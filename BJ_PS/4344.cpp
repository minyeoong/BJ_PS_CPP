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
////������ �� ���忡�� �Ҽ����� ������Ű�� �Լ��� �����Ѵ�.
////cout << fixed; --> �Ҽ��� ������ �����ϴ� �Լ�
////cout.precision(3)--> �ڸ����� 3���� �ϴ� �Լ�
////���� �������� ����������� int�� float�� �Բ� ����Ǹ� float�� int�� ����ȯ �ǹǷ� �����ؾ��Ѵ�.
