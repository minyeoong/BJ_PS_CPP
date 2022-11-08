//#include<iostream>
//using namespace std;
//int from1to3(int n);
//int from3to1(int n);
//int from3to2(int n);
//int from2to3(int n);
//int from2to1(int n);
//int from1to2(int n);
//int from1to3cnt(int n);
//int from3to1cnt(int n);
//int from3to2cnt(int n);
//int from2to3cnt(int n);
//int from2to1cnt(int n);
//int from1to2cnt(int n);
//int cnt = 0;
//
//
//int from3to1(int n)
//{
//	if (n == 2)
//	{
//		cout << 3 << ' ' << 2 << '\n';
//		cout << 3 << ' ' << 1 << '\n';
//		cout << 2 << ' ' << 1 << '\n';
//		return 0;
//	}
//	from3to2(n - 1);
//	cout << 3 << ' ' << 1 << '\n';
//	from2to1(n - 1);
//	return 0;
//}
//int from3to1cnt(int n)
//{
//	if (n == 2)
//	{
//		/*cout << 3 << ' ' << 2 << '\n';
//		cout << 3 << ' ' << 1 << '\n';
//		cout << 2 << ' ' << 1 << '\n';*/
//		cnt += 3;
//		return 0;
//	}
//	from3to2cnt(n - 1);
//	/*cout << 3 << ' ' << 1 << '\n';*/
//	cnt++;
//	from2to1cnt(n - 1);
//	return 0;
//}
//int from3to2(int n)
//{
//	if (n == 2)
//	{
//		cout << 3 << ' ' << 1 << '\n';
//		cout << 3 << ' ' << 2 << '\n';
//		cout << 1 << ' ' << 2 << '\n';
//		cnt += 3;
//		return 0;
//	}
//	from3to1(n - 1);
//	cout << 3 << ' ' << 2 << '\n';
//	cnt++;
//	from1to2(n - 1);
//	return 0;
//}
//int from3to2cnt(int n)
//{
//	if (n == 2)
//	{
//		/*cout << 3 << ' ' << 1 << '\n';
//		cout << 3 << ' ' << 2 << '\n';
//		cout << 1 << ' ' << 2 << '\n';*/
//		cnt += 3;
//		return 0;
//	}
//	from3to1cnt(n - 1);
//	/*cout << 3 << ' ' << 2 << '\n';*/
//	cnt++;
//	from1to3cnt(n - 1);
//	return 0;
//}
//int from2to3(int n)
//{
//	if (n == 2)
//	{
//		cout << 2 << ' ' << 1 << '\n';
//		cout << 2 << ' ' << 3 << '\n';
//		cout << 1 << ' ' << 3 << '\n';
//		return 0;
//	}
//	from2to1(n - 1);
//	cout << 2 << ' ' << 3 << '\n';
//	from1to3(n - 1);
//	return 0;
//
//}
//int from2to3cnt(int n)
//{
//	if (n == 2)
//	{
//	/*	cout << 2 << ' ' << 1 << '\n';
//		cout << 2 << ' ' << 3 << '\n';
//		cout << 1 << ' ' << 3 << '\n';*/
//		cnt += 3;
//		return 0;
//	}
//	from2to1cnt(n - 1);
//	/*cout << 2 << ' ' << 3 << '\n';*/
//	cnt++;
//	from1to3cnt(n - 1);
//	return 0;
//
//}
//int from2to1(int n)
//{
//	if (n == 2)
//	{
//		cout << 2 << ' ' << 3<<'\n';
//		cout << 2 << ' '<<1 << '\n';
//		cout << 3 << ' ' <<1<< '\n';
//		return 0;
//	}
//	from2to3(n - 1);
//	cout << 2 << ' ' << 1 << '\n';
//	from3to1(n - 1);
//	return 0;
//}
//int from2to1cnt(int n)
//{
//	if (n == 2)
//	{
//		/*cout << 2 << ' ' << 3 << '\n';
//		cout << 2 << ' ' << 1 << '\n';
//		cout << 3 << ' ' << 1 << '\n';*/
//		cnt += 3;
//		return 0;
//	}
//	from2to3cnt(n - 1);
//	/*cout << 2 << ' ' << 1 << '\n';*/
//	cnt++;
//	from3to1cnt(n - 1);
//	return 0;
//}
//int from1to2(int n)
//{
//	if (n == 2)
//	{
//		cout << 1 << ' ' << 3 << '\n';
//		cout << 1 << ' ' << 2 << '\n';
//		cout << 3 << ' ' << 2 << '\n';
//		return 0;
//	}
//	from1to3(n - 1);
//	cout << 1 << ' ' << 2 << '\n';
//	from3to2(n - 1);
//	return 0;
//}
//int from1to2cnt(int n)
//{
//	if (n == 2)
//	{
//		/*cout << 1 << ' ' << 3 << '\n';
//		cout << 1 << ' ' << 2 << '\n';
//		cout << 3 << ' ' << 2 << '\n';*/
//		cnt += 3;
//		return 0;
//	}
//	from1to3cnt(n - 1);
//	/*cout << 1 << ' ' << 2 << '\n';*/
//	cnt++;
//	from3to2cnt(n - 1);
//	return 0;
//}
//
//int from1to3(int n)
//{
//	if (n == 2)
//	{
//		cout << 1 << ' ' << 2 << '\n';
//		cout << 1 << ' ' << 3 << '\n';
//		cout << 2 << ' ' << 3 << '\n';
//		return 0;
//	}
//	from1to2(n - 1);
//	cout << 1 << ' ' << 3 << '\n';
//	from2to3(n - 1);
//	return 0;
//
//}
//int from1to3cnt(int n)
//{
//	if (n == 2)
//	{
//		/*cout << 1 << ' ' << 2 << '\n';
//		cout << 1 << ' ' << 3 << '\n';
//		cout << 2 << ' ' << 3 << '\n';*/
//		cnt += 3;
//		return 0;
//	}
//	from1to2cnt(n - 1);
//	/*cout << 1 << ' ' << 3 << '\n';*/
//	cnt++;
//	from2to3cnt(n - 1);
//	return 0;
//}
//int main(void)
//{
//	int N=0;
//	cin >> N;
//	from1to3cnt(N);
//	cout << cnt<<'\n';
//	from1to3(N);
//	
//}