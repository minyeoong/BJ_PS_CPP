//#include<iostream>
//#include<cstring>
//using namespace std;
//
//int main(void)
//{
//	char str[101]; //100���� �Ҵ��ߴٰ� ��� Ʋ�ȴ�. �������� �ι��ڰ� ���ԵǴ� ���� ����Ͽ� str�� 101��ŭ �Ҵ��ؾ��ߴ�.
//	cin >> str;
//	int abc[26] = { -1, };
//	
//
//	for (int i = 97; i < 123; i++)
//	{
//		int storeIdx=-1;
//		for (int j = 0; j < strlen(str); j++) //str�� ���̸� �ʱ�ȭ ���� �ʾұ� ������ 
//			//0���� 99���� str�� � ���� ���� �� ������ ��
//			//���ڿ��� ���̸�ŭ ���� ������ �鿩�� �Ѵ�.
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
////stl���� string �� �����ؼ� str.find()�Լ��� �̿��ϸ� 
////�ش� ���ڰ� ���� ù �ε����� ��ȯ���� �� �ִ�.