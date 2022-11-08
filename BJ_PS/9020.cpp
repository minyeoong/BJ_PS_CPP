//#include<iostream>
//#include<cmath>
//#include<vector>
//using namespace std;
//int IsPrimeNum(int num)
//{
//	if (num == 2)
//		return 2;
//	for (int i = 2; i <= sqrt(num); i++)
//	{
//		if (num % i == 0)
//			return -1;
//
//	}
//	return num;
//}
//int main(void)
//{
//	int T;
//	cin >> T;
//	for (int j = 0; j < T; j++)
//	{
//		int N;
//		cin >> N;
//		vector<int>Prime;
//		for (int i = 2; i <= N/2; i++)
//		{
//			if (IsPrimeNum(i) > 0)
//				Prime.push_back(i);
//		}
//		int i = Prime.size()-1;
//		while (1)
//		{
//			if (IsPrimeNum(N - Prime[i]) > 0)
//			{
//				cout << Prime[i] << ' ' << N - Prime[i]<<'\n';
//				break;
//			}
//			i--;
//		}
//	}
//}

//#include <iostream>
//#include <cmath>
//using namespace std;
//int main() {
//    int num, max = 0;
//    cin >> num;
//    int* even = new int[num];
//    for (int i = 0; i < num; i++) {
//        cin >> even[i];
//        if (even[i] > max)
//            max = even[i];
//    }
//    bool* prime = new bool[max + 1];
//    fill_n(prime, max + 1, 1);
//    prime[0] = false;
//    prime[1] = false;
//    for (int i = 2; i <= sqrt(max); i++)
//        if (prime[i] == true)
//            for (int j = i * 2; j <= (max); j += i)
//                prime[j] = false;
//
//    for (int t = 0; t < num; t++)
//    {
//        for (int j = even[t] / 2; j > 0; j--)
//        {
//            if (prime[j] && prime[even[t] - j])
//            {
//                cout << j << ' ' << even[t] - j << '\n';
//                break;
//            }
//        }
//    }
//}
////이 방법이 훨씬 효율적이다.