////#include<iostream>
////using namespace std;
////int main(void)
////{
////	int N;
////	cin >> N;
////	int total = 0;
////	if (N >= 5)
////	{
////		if (N % 5 == 0)
////			cout << N / 5;
////		else
////		{
////			total += N / 5;
////			N %= 5;
////			if (N == 3)
////				cout << total + 1;
////			else
////				cout << -1;
////		}
////	}
////	else
////	{
////		if (N == 3)
////			cout << 1;
////		else
////			cout << -1;
////	}
////}
//////Greedy Algorithm �����̴�. ū ������ ���� ������ ������ �ܼ��� ū �������� 
//////����ϸ� ������ �׷��� �ʴٸ� ����� �����غ��ƾ� �Ѵ�.
//////���� ���� ����� ū ������ ���� ������ ����� �ƴϹǷ� �Ұ����ϴ�.
//#include<iostream>
//using namespace std;
//int main(void)
//{
//	int total;
//	int five=0, three=0;
//	cin >> total;
//	while (1)
//	{
//		if (total==1||total==2)
//		{
//			cout << -1;
//			break;
//		}
//		if (total % 5 == 0)
//		{
//			five = total / 5;
//			cout << five + three;
//			break;
//		}
//		else
//		{
//			total -= 3;
//			three++;
//			if (total == 0)
//			{
//				cout << five + three;
//				break;
//			}
//		}
//	}
//	
//}
////total���� 5�� ������ �������� �ʴ´ٸ� 3�ٱ��ϰ� �ʿ��� ��
////total -=3�� �� �� ���� ������ �ݺ� 
////total==1 or total ==2�� �Ǵ� ��� 5�� ������ ���������� �ʰ� 3���� ���������� ����(total>0)
////���� �׷� ��쿡 -1�� ����Ѵ�.