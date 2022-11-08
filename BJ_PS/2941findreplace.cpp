//#include<iostream>
//#include<string>
//using namespace std;
//int main(void)
//{
//	string str;
//	cin >> str;
//	int cnt = 0;
//	int i = 0;
//	for (i = 0; i < str.length(); i++)
//	{
//		if (str[i] == 'c')
//			if (str[i + 1] == '=' || str[i + 1] == '-')
//				cnt++;
//		if (str[i] == 'd')
//		{
//			if (str[i + 1] == '-')
//				cnt++;
//			else if (str[i + 1] == 'z')
//				if (str[i + 2] == '=')
//					cnt += 2; //여기서 cnt++;cnt++;라고해서 오류가 났다.
//
//
//		}
//		if (str[i] == 'l')
//			if (str[i + 1] == 'j')
//				cnt++;
//		if (str[i] == 'n')
//			if (str[i + 1] == 'j')
//				cnt++;
//		if (str[i] == 's')
//			if (str[i + 1] == '=')
//				cnt++;
//		if (str[i] == 'z')
//			if (str[i + 1] == '=')
//			{
//				if (str[i - 1] == 'd');
//				else
//					cnt++;
//			}
//	}
//	cout << str.length() - cnt << endl;
//	
//	
//}

////아래의 코드가 훨씬 얻을 것이 많다.
////find함수, replace함수를 배워보자
////vector에서 dz=가 z=보다 앞에 있으니 둘을 구분하는 예외 처리도 할 필요가 없다.
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//int main() {
//    vector<string> croatian = { "c=","c-","dz=","d-","lj","nj","s=","z=" };
//    int idx;
//    string str;
//    cin >> str;
//    for (int i = 0; i < croatian.size(); i++)
//    {
//        while (1) {
//            idx = str.find(croatian[i]);
//            if (idx == string::npos)
//                break;
//            str.replace(idx, croatian[i].length(), "#");
//        }
//    }
//    cout << str.length();
//}