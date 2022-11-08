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
//////Greedy Algorithm 문제이다. 큰 단위가 작은 단위의 배수라면 단순히 큰 단위부터 
//////계산하면 되지만 그렇지 않다면 방법을 생각해보아야 한다.
//////위와 같은 방법은 큰 단위가 작은 단위의 배수가 아니므로 불가능하다.
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
////total에서 5로 나누어 떨어지지 않는다면 3바구니가 필요한 것
////total -=3을 한 후 같은 과정을 반복 
////total==1 or total ==2가 되는 경우 5로 나누어 떨어지지도 않고 3으로 지워지지도 않음(total>0)
////따라서 그런 경우에 -1을 출력한다.