//#include<iostream>
//#include<string>
//using namespace std;
//
//int main(void)
//{
//	string str;
//	cin >> str;
//	
//	int abcABC[58] = { 0, };
//	for (int i = 0; i < str.length(); i++)
//	{
//		abcABC[str[i] - 'A']++;
//	}
//	for (int i = 0; i < 26; i++)
//	{
//		abcABC[i] += abcABC[i + 32];
//	}
//	int max = -1;
//	int storeIdx = -1;
//	int storeMax;
//	for (int i = 0; i < 26; i++)
//	{
//		if (max == abcABC[i])
//			storeMax = max;
//
//		else if (max < abcABC[i])
//		{
//			max = abcABC[i];
//			storeIdx = i;
//		}
//	}
//	if (storeMax == max)
//		cout << '?' << '\n';
//	else
//	{
//		storeIdx += 'A';
//		cout << (char)storeIdx;
//	}
//}