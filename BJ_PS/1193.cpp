//#include<iostream>
//using namespace std;
//int main(void)
//{
//	int cnt = 0;
//	float row = 0, col = 0;
//	int X;
//	cin >> X;
//	int i = 0;
//	int sum = 0;
//	while (sum < X)
//	{
//		i++;
//		sum += i;
//	}
//	//for(sum=0; sum<X;i++) 
//	// sum+=i;
//	//이렇게 하면 왜 틀림??
// //생각해보면 당연히 틀린다.
// //1번 조건문 실행 -> true라면 2번 조건문 실행 3번 변화식평가(i++)
// //따라서 sum+=i로 sum ==X이 되자마자 i++을 하여 i가 생각보다 하나 더 커진다.
//
//	if (i % 2 == 0)
//	{
//		row = 1;
//		col = i;
//		for (int j = 0; j < X - (sum - i+1); j++)
//		{
//			row++;
//			col--;
//		}
//	}
//	else
//	{
//		row = i;
//		col = 1;
//		for (int j = 0; j < X - (sum -i+1); j++)
//		{
//			row--;
//			col++;
//		}
//	}
//	cout <<row<<"/"<<col<< endl;
//
//}