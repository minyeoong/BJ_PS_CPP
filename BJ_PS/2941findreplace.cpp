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
//					cnt += 2; //���⼭ cnt++;cnt++;����ؼ� ������ ����.
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

////�Ʒ��� �ڵ尡 �ξ� ���� ���� ����.
////find�Լ�, replace�Լ��� �������
////vector���� dz=�� z=���� �տ� ������ ���� �����ϴ� ���� ó���� �� �ʿ䰡 ����.
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