// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <time.h>
#include<stdlib.h>
using namespace std;

int game1()
{
	int bate;
	cout << "請下注:";
	cin >> bate;
	cout << "15 次以內 獲得賭金 超過反之 " << endl;
	srand(unsigned(time(NULL)));						//設定時間種子
	int bottom = 0, top = 9999, guessTime = 0;				//設頂跟底並設定猜測計數器為0
	int randomNumber = rand() % 10000;					//設定隨機數字
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
	system("Pause");
	if (guessTime > 15)
		bate *= -1;
	system("cls");
	return bate;
}

int main()
{
	bool conti = true;
	int money = 10000,game;
	while (conti)
	{
		cout << "你有" << money << "元 請選擇你的遊戲 1: 猜數字 -1: 結束遊戲" << endl;
		cin >> game;
		
		switch (game)
		{
		case 1:
			money += game1();
			break;
		case -1:
			conti = false;
			break;
		default:
			cout << "輸入錯誤!" << endl;
			break;
		}
	}
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
