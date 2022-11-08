//#include<iostream>
//#include<Windows.h>
//#include<cmath>
//using namespace std;
//void GotoXY(int x, int y)
//{
//	COORD Pos;
//	Pos.X = x;
//	Pos.Y = y;
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
//}
//int K = 0;
//int drawStar(int n)
//{
//	n = log(n)/log(3);
//	if (n == 1)
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			for (int j = 0; j < 3; j++)
//			{
//				if (i == 1 && j == 1)
//					cout << ' ';
//				else
//					cout << '*';
//			}
//			cout << '\n';
//		}
//		return 0;
//		
//	}
//	else
//	{
//
//		for (int i = 0; i < 3; i++)
//		{
//			for (int j = 0; j < 3; j++)
//			{
//				if (i == 1 && j == 1)
//				{
//					
//					
//						for (int k = 0; k < pow(3,n-1); k++)
//						{
//							for (int l = 0; l < pow(3,n-1); l++)
//								cout << ' ';
//							cout << '\n';
//						}
//					
//
//				}
//				else
//					drawStar(pow(3,n-1));
//				if (!(i== 0&&j==0))
//				{
//					GotoXY(j * pow(3, n - 1), i*pow(3,n-1));
//				}
//
//			}
//		
//		}
//	}
//	return 0;
//}
//int main(void)
//{
//	int N=0;
//	cin >> N;
//	K = N;
//	drawStar(9);
//}

//#include <iostream>
//using namespace std;
//void star(int i, int j, int num)
//{
//    if ((i / num) % 3 == 1 && (j / num) % 3 == 1) {
//        cout << ' ';
//    }
//    else
//    {
//        if (num / 3 == 0)
//            cout << '*';
//        else
//            star(i, j, num / 3);
//    }
//}
//int main() {
//    int num;
//    cin >> num;
//    for (int i = 0; i < num; i++)
//    {
//        for (int j = 0; j < num; j++)
//            star(i, j, num);
//        cout << '\n';
//    }
//}