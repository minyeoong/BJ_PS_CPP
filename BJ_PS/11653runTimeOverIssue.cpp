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
///*void*/int div(int N) //void형으로 하면 return 을 쓰면 안된다.
//{
//	if (IsPrimeNum(N) == 1) //IsPrimeNum함수가 아래에 정의되면 식별자를 찾을 수 없다는 오류가 발생한다.
//	{
//		cout << N << endl;
//		exit(0); //exit(1)은 에러종료, exit(0)은 정상종료이다.
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

//재귀로 풀어보려고 했으나 시간초과

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
//시간 초과가 발생했다.

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

//while(N%i==0)을 통해서 i++,i--연산과정을 거치지 않기 때문이 시간이 단축됐다. 
//N을 계속 갱신시키면서 N%i==0을 만족시키면 계속 i를 출력시키는 방식으로 하면 for문안에 while문 구조로 풀릴 수 있다.
