//#include<iostream>
//using namespace std;
////int IsBigger(int n1, int n2)
////{
////	if (n1 % 10 > n2 % 10)
////		return n1;
////	else
////		return n2;
////	if ((n1 / 10) % 10 > (n2 / 10) % 10)
////		return n1;
////	else
////		return n2;
////	if ((n1 / 100) % 10 > (n2 / 100) % 10)
////		return n1;
////	else
////		return n2;
////	
////}
//int main(void)
//{
//	int N1, N2;
//	cin >> N1 >> N2;
//	/*if (IsBigger(N1, N2) == N1)*/
//	N1 = (N1 % 10) * 100 + ((N1 / 10) % 10) * 10 + (N1 / 100) % 10;
//	N2 = (N2 % 10) * 100 + ((N2 / 10) % 10) * 10 + (N2 / 100) % 10;
//	if (N1 > N2)
//		cout << N1;
//	else
//		cout << N2;
//	cout << '\n';
//
//}