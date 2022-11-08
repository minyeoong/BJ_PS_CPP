////https://ko.wikipedia.org/wiki/%EC%97%90%EB%9D%BC%ED%86%A0%EC%8A%A4%ED%85%8C%EB%84%A4%EC%8A%A4%EC%9D%98_%EC%B2%B4
//아리토스테네스의 체 설명

//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//    int min, max;
//    bool* prime;
//    cin >> min;
//    cin >> max;
//    prime = new bool[max + 1];
//    fill_n(prime, max + 1, 1);
//    prime[0] = false;
//    prime[1] = false;
//
//    for (int i = 2; i <= sqrt(max); i++)
//        if (prime[i] == true)
//            for (int j = i * i; j <= max; j += i)
//                prime[j] = false;
//
//    for (int i = min; i <= max; i++)
//        if (prime[i] == true)
//            cout << i << "\n";
//    return 0;
//}