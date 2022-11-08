//#include<iostream>
//using namespace std;
//
//int dnFunc(int n)
//{
//	return n + n % 10 + (n / 10) % 10 + (n / 100) % 10 + (n / 1000) % 10;
//}
//int main(void)
//{
//	int i = 0;
//	int cnt = 0;
//	int A[10001] = { 0, };
//	do {
//		i++;
//		if(dnFunc(i)<10000)
//			A[dnFunc(i)] = 1;
//	} while (i<10000);
//	for (int j = 0; j < 10000; j++)
//	{
//		if (A[j] == 0&&j>0)
//			cout <<j<<"\n";
//	}
//
//
//}