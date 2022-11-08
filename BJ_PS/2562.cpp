//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main(void)
//{
//	int num;
//	int maxNum, maxIdx=0; //0으로 초기화해주지 않으면 첫 번째 값이 최대일 때 오류가 발생한다.
//	int j;
//	
//	vector<int>A;
//	for (int i = 0; i < 9; i++)
//	{
//		cin >> num;
//		A.push_back(num);
//	}
//	maxNum = A[0];
//	for  (j = 0; j < 9; j++)
//	{
//		if (maxNum < A[j])
//		{
//			maxNum = A[j];
//			maxIdx = j;
//		}
//	}
//
//	cout << maxNum << endl << maxIdx+1 << endl;
//
//}