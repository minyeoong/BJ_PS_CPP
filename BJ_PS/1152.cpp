//#include<iostream>
//#include<string>
//using namespace std;
//
//int main(void)
//{
//	string str; 
//	/*cin >> str;*/ //�׳� str�� ������ ������ ������ �� ����.
//	getline(cin, str);
//	int cnt = 1;
//	int i;
//	for (i = 0; i < str.length(); i++)
//	{
//		
//		if (str[i] == ' ')
//		{
//			if (i == 0 || i == (str.length() - 1));
//			else
//				cnt++;
//		}
//	}
//	if(str.length()==1)
//		if (str[0] == ' ')
//			cnt = 0;
//
//
//	cout << cnt << endl;
//}
////�� �ڵ嵵 �������� cnt�� 1�� �ʱ�ȭ ���� �ָ鼭 
////if (str.length() == 1)
////if (str[0] == ' ')
////cnt = 0;
////���� ���� �ڵ带 �߰��ؾ� �ϴ� �������� ������
//
//#include <iostream>
//#include <string>
//using namespace std;
//int main() {
//    string str;
//    getline(cin, str);
//    int count = 0;
//    bool space = false;
//    if (str.empty())
//    {
//        cout << "0";
//        return 0;
//    }
//    count = 1;
//    for (int i = 0; i < str.length(); i++)
//    {
//        if (str[i] == ' ')
//            count++;
//    }
//    if (str[0] == ' ')
//        count--;
//    if (str[str.length() - 1] == ' ')
//        count--;
//
//    cout << count;
//    return 0;
//}
////�� �ڵ带 �̿��ϸ� �׷� �ʿ䰡 ����.
