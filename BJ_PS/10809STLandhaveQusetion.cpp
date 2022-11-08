//#include<iostream>
//#include<cstring>
//using namespace std;
//
//int main(void)
//{
//	char str[101]; //100으로 할당했다가 계속 틀렸다. 마지막에 널문자가 삽입되는 것을 고려하여 str을 101만큼 할당해야했다.
//	cin >> str;
//	int abc[26] = { -1, };
//	
//
//	for (int i = 97; i < 123; i++)
//	{
//		int storeIdx=-1;
//		for (int j = 0; j < strlen(str); j++) //str의 길이를 초기화 하지 않았기 때문에 
//			//0부터 99까지 str에 어떤 값이 저장 돼 있을지 모름
//			//문자열의 길이만큼 보는 습관을 들여야 한다.
//		{
//			if (str[j] == i)
//			{
//				storeIdx = j;
//				break;
//			}
//
//		}
//		abc[i - 'a'] = storeIdx;
//	}
//	for (int i = 97; i < 123; i++)
//		cout << abc[i - 'a']<<' ';
//}
//
////https://cryptosalamander.tistory.com/11 
////stl에서 string 을 도입해서 str.find()함수를 이용하면 
////해당 문자가 쓰인 첫 인덱스를 반환받을 수 있다.