//#include<iostream>
//#include<vector>
//using namespace std;
//typedef struct {
//	int weight;
//	int height;
//	int rank;
//}DUNG;
//
//int compareRank(DUNG input1,DUNG input2)
//{
//	if (input1.weight > input2.weight && input1.height > input2.height)
//		return 1;
//	else if (input1.weight == input2.weight && input1.height > input2.height)
//		return 1;
//	else if (input1.weight > input2.weight && input1.height == input2.height)
//		return 1;
//	else if (input2.weight > input1.weight && input2.height > input1.height)
//		return -1;
//	else if (input2.weight == input1.weight && input2.height > input1.height)
//		return -1;
//	else if (input2.weight > input1.weight && input2.height == input1.height)
//		return 1;
//	else
//		return 0;
//}
//int main(void)
//{
//	int N;
//	cin >> N;
//	vector<DUNG>dung;
//
//	
//
//	for (int j = 0; j < N; j++)
//	{
//		DUNG input;
//		cin >> input.weight >> input.height;
//		if(dung.empty())
//			dung.push_back(input);
//		else
//		{
//			int i = j;
//			while (i>0)
//			{
//				if (compareRank(input, dung[i]) < 0)
//				{
//					dung.push_back(input);
//					break;
//				}
//				else if (compareRank(input, dung[i]) == 0)
//				{
//					input.rank = i + 1;
//					break;
//				}
//				else
//					i--;
//
//			}
//
//
//		}
//
//	}
//	for (int i = 0; i < N; i++)
//	{
//		dung[i].rank = i + 1;
//	}
//	
//
//
//
//	
//}