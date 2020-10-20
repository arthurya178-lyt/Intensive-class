#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
	srand(unsigned(time(NULL)));						//設定時間種子
	int bottom = 0, top = 9999,guessTime = 0;				//設頂跟底並設定猜測計數器為0
	int randomNumber = rand()%10000;					//設定隨機數字
	int input;								//設定使用者輸入數值
	while (true)
	{
		guessTime++;							//猜測數字加1
		cout << bottom << "~" << top << endl;				//輸出範圍
		cin >> input;							//使用者輸入
		if (input == randomNumber)					//猜到數字
		{
			cout << "Guessed!!!" << endl;				//顯示
			cout << "Time:" << guessTime << endl;			//顯示次數
			break;							//中斷迴圈
		}
		else if (input < randomNumber && input > bottom)		//數字小於所隨機數字並且輸入值大於底
			bottom = input;
		else if (input > randomNumber && input < top)			//數字大於所隨機數字並且輸入值小於頂
			top = input;
	}
}
