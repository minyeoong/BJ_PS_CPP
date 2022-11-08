//#include<iostream>
//using namespace std;
//int main(void)
//{
//	int n1, n2, n3;
//	int price;
//	cin >> n1 >> n2 >> n3;
//	if (n1 == n2 && n2 == n3)
//		price = 10000 + n1 * 1000;
//	else if (n1 != n2 && n2 != n3 && n3 != n1)
//	{
//		int max = n1;
//		if (n2 > max)
//			max = n2;
//		if (n3 > max)
//			max = n3;
//		price = max * 100;
//	}
//	else
//	{
//		int n;
//		if (n1 == n2)
//		{
//			n = n1;
//		}
//		if (n2 == n3)
//		{
//			n = n2;
//		}
//		if (n3 == n1)
//		{
//			n = n3;
//		}
//		price = n * 100 + 1000;
//	}
//
//	cout << price << endl;
//}