////https://luv-n-interest.tistory.com/899 ���� �ڼ��� Ǯ��
//#include<iostream>
//#include<string>
//using namespace std;
//int K = 0;
//void line(int N, int K) //���������� �̿��ؼ� ������ �ذ��ߴ�.
//{
//	for (int i = 0; i < K - N; i++)
//	{
//		cout << "____";
//	}
//}
//int recur(int N)
//{
//	if(N==K)
//		cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
//	if (N == 0)
//	{
//		line(N, K);
//		cout << "\"����Լ��� ������?\"\n";
//		line(N, K);
//		cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
//		line(N, K);
//		cout << "��� �亯�Ͽ���.\n";
//		return 0;
//	}
//	line(N, K);
//	cout << "\"����Լ��� ������?\"\n";
//	line(N, K);
//	cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
//	line(N, K);
//	cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
//	line(N, K);
//	cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
//	recur(N - 1);
//	line(N, K);
//	cout << "��� �亯�Ͽ���.\n";
//	return 0;
//
//}
//int main(void)
//{
//	int N;
//	cin >> N;
//	K = N;
//	recur(N);
//	return 0;
//}