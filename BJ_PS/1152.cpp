//#include<iostream>
//#include<string>
//using namespace std;
//
//int main(void)
//{
//	string str; 
//	/*cin >> str;*/ //그냥 str로 받으면 공백을 포함할 수 없다.
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
////위 코드도 괜찮지만 cnt를 1로 초기화 시켜 주면서 
////if (str.length() == 1)
////if (str[0] == ' ')
////cnt = 0;
////위와 같은 코드를 추가해야 하는 불편함이 따랐다
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
////이 코드를 이용하면 그럴 필요가 없다.
