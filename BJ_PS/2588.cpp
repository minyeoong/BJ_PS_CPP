//#include<iostream>
//#include<cmath>
//using namespace std;
//
//
//int main(void)
//{
//	int num1, num2, num,storenum1;
//	int ThirdPosition=0,FourthPosition=0,FivethPosition=0,SixthPosition=0;
//	cin >> num1;
//	cin >> num2;
//	storenum1 = num1;
//	
//	for (int i = 0; i<3; i++)
//	{
//		num = num1 % 10;
//		num1 /= 10;
//		ThirdPosition += (num2%10)*num * pow(10, i);
//	}
//	num2 /= 10;
//	num1 = storenum1;
//	
//	for (int i = 0; i < 3; i++)
//	{
//		num = num1 % 10;
//		num1 /= 10;
//		FourthPosition += (num2%10)*num * pow(10, i);
//	}
//	num2 /= 10;
//	num1 = storenum1;
//
//	for (int i = 0; i < 3; i++)
//	{
//		num = num1 % 10;
//		num1 /= 10;
//		FivethPosition += (num2 % 10) * num * pow(10, i);
//	}
//	SixthPosition = 100 * FivethPosition + 10 * FourthPosition + 1 * ThirdPosition;
//	cout << ThirdPosition << endl << FourthPosition << endl << FivethPosition << endl << SixthPosition << endl;
//}
////��~~�� ��ư� Ǯ����.. �׳� num2�� �ڸ��� ���� �ɰ��� �ٷ� num1 �� �����ָ� �ȴ�.