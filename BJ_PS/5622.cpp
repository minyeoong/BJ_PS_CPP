//#include<iostream>
//#include<string>
//using namespace std;
//
//int main(void)
//{
//	string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//	string input;
//	cin >> input;
//	int total = 0;
//	for (int i = 0; i < input.length(); i++)
//	{
//		int storeIdx;
//		for (int j = 0; j < 26; j++)
//		{
//			if (input[i] == str[j])
//				storeIdx = j;
//		}
//		if (storeIdx < 3)
//			total += 3;
//		else if (storeIdx < 6)
//			total += 4;
//		else if (storeIdx < 9)
//			total += 5;
//		else if (storeIdx < 12)
//			total += 6;
//		else if (storeIdx < 15)
//			total += 7;
//		else if (storeIdx < 19)
//			total += 8;
//		else if (storeIdx < 22)
//			total += 9;
//		else
//			total += 10;
//
//	}
//	cout << total << endl;
//}

////아래의 코드가 더 깔끔한 것 같다.
////그냥 알파벳배열에 직접 숫자를 넣는 것이다.
//#include <string>
//using namespace std;
//
//int main(int argc, char* argv[])
//{
//	int arr[26] = { 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10 };
//	int sum = 0;
//	string s;
//
//	cin >> s;
//
//	for (int i = 0; i < s.length(); ++i) {
//		int index = s[i] - 65;
//		sum += arr[index];
//	}
//
//	cout << sum << endl;
//
//	return 0;
//}
