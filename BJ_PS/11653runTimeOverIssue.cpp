//#include<iostream>
//#include<cmath>
//using namespace std;
//int IsPrimeNum(int num)
//{
//	if (num == 1)
//		return false;
//	else if (num == 2)
//		return true;
//
//	for (int i = 2; i <= sqrt(num); i++)
//	{
//		if (num % i == 0)
//		{
//			return false;
//		}
//	
//	}
//	return true;
//}
///*void*/int div(int N) //void������ �ϸ� return �� ���� �ȵȴ�.
//{
//	if (IsPrimeNum(N) == 1) //IsPrimeNum�Լ��� �Ʒ��� ���ǵǸ� �ĺ��ڸ� ã�� �� ���ٴ� ������ �߻��Ѵ�.
//	{
//		cout << N << endl;
//		exit(0); //exit(1)�� ��������, exit(0)�� ���������̴�.
//
//	}
//	for (int i = 2; i <= sqrt(N); i++)
//	{
//		if (N % i == 0)
//		{
//			cout << i << endl;
//			div(N / i);
//		}
//		
//	}
//}
//int main(void)
//{
//	int num;
//	cin >> num;
//	div(num);
//}

//��ͷ� Ǯ����� ������ �ð��ʰ�

//#include<iostream>
//using namespace std;
//int main(void)
//{
//	int N;
//	cin >> N;
//	if (N == 1)
//		return 0;
//	int i = 1;
//	while(1)
//	{
//		i++;
//		if (N % i == 0)
//		{
//			cout << i<<endl;
//			N /= i;
//			if (N == 1)
//				break;
//			i--;
//		}
//	}
//}
//�ð� �ʰ��� �߻��ߴ�.

//#include <iostream>
//using namespace std;
//
//int main() {
//    int N;
//    cin >> N;
//
//    if (N == 1) return 0;
//
//    for (int i = 2; i <= N; i++) {
//        while (N % i == 0) {
//            cout << i << endl;
//            N /= i;
//        }
//    }
//
//}

//while(N%i==0)�� ���ؼ� i++,i--��������� ��ġ�� �ʱ� ������ �ð��� ����ƴ�. 
//N�� ��� ���Ž�Ű�鼭 N%i==0�� ������Ű�� ��� i�� ��½�Ű�� ������� �ϸ� for���ȿ� while�� ������ Ǯ�� �� �ִ�.
