//#include<iostream>
//#include<vector>
//#include <algorithm>
//#include<cmath>
//using namespace std;
//int main(void)
//{
//	int M=0, N=0;
//	cin >> M;
//	cin >> N;
//	vector<int>arr;
//	for (int i = M; i < N + 1; i++)
//	{
//		bool TF = false;
//		for (int j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0) 
//				TF = true;
//		}
//		if (i == 1)
//			TF=true;
//		if (i == 2)
//			TF=false;
//		if (TF == false)
//		{
//			arr.push_back(i);
//
//		}
//	}
//	if (arr.empty())
//		cout << -1;
//	else
//	{
//		int total = 0;
//		for (int i = 0; i < arr.size(); i++)
//			total += arr[i];
//		int min = *min_element(arr.begin(), arr.end());
//		cout << total << endl << min << endl;
//	}
//}
//
////vector<int>v;
////*max_element(v.begin(), v.end()); // 최대값
////*min_element(v.begin(), v.end()); // 최소값