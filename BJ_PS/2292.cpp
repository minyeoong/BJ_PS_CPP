//#include<iostream>
//using namespace std;
//int main(void)
//{
//	float N;
//	int i = 0;
//	cin >> N;
//	while (1)
//	{
//		if (N == 1)
//		{
//			cout << 1;
//			break;
//		}
//		else if (2+3*i*(i-1)<=N && N<2+3*i*(i+1))
//		{
//			cout << i+1;
//			break;
//		}
//		i++;
//	}
//}

//위의 코드는 계차수열의 일반항을 이용해서 푼 풀이고
//아래의 소개할 풀이는 점화식의 형태로 접근하는 풀이다.
//수학이 아니라 코딩을 할 때에 있어서는 아래와 같은 접근이 더욱 선호된다.

//#include <iostream>
//using namespace std;
//int main() {
//    int number;
//    cin >> number;
//    int i = 0;
//    for (int sum = 2; sum <= number; i++)
//        sum += 6 * i;
//    if (number == 1) i = 1;
//    cout << i;
//    return 0;
//}