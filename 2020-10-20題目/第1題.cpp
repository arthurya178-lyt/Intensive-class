#include <iostream>
using namespace std;


int main()
{
	int numA = 0, numB = 1, numC = 1,input; 		 	//設定 N-2 跟 N-1 跟 N 的數字
	cin >> input;							//輸入範圍
	while (numC < input)						//檢查N是否比範圍大
	{
		cout << numC << " ";					//輸出N
		numC = numA + numB;					//使N等於N-1 加 N-2
		numA = numB;						//使N-2 指定為N-1的數字
		numB = numC;						//使N-1 指定為N的數字
	}
}
