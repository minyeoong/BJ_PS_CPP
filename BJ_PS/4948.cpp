//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//    while (1)
//    {
//
//        int min, max;
//        int cnt = 0;
//        bool* prime;
//        cin >> min;
//        if (min == 0)
//            break;
//        prime = new bool[min*2+1];
//        fill_n(prime, min*2+1, 1);
//        prime[0] = false;
//        prime[1] = false;
//
//        for (int i = 2; i <= sqrt(min*2); i++)
//            if (prime[i] == true)
//                for (int j = i * i; j <= min*2; j += i)
//                    prime[j] = false;
//
//        for (int i = min + 1; i <= min * 2; i++)
//            if (prime[i] == true)
//                cnt++;
//        cout << cnt<<'\n';
//        
//    }
//    return 0;
//}