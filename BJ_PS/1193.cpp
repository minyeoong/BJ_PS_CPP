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
//	//�̷��� �ϸ� �� Ʋ��??
// //�����غ��� �翬�� Ʋ����.
// //1�� ���ǹ� ���� -> true��� 2�� ���ǹ� ���� 3�� ��ȭ����(i++)
// //���� sum+=i�� sum ==X�� ���ڸ��� i++�� �Ͽ� i�� �������� �ϳ� �� Ŀ����.
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