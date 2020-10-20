#include <iostream>
using namespace std;

int main()
{
	char input;					//輸入的字元
	cin >> input;					//使用者輸入
	int inputAscii = (int)input, outputAscii;	//轉換成ASCII
	if (inputAscii >= 65 && inputAscii <= 90)	//判斷是否為大寫
		outputAscii = inputAscii + 32;
	else if (inputAscii >= 97 && inputAscii <= 122)	//判斷是否為大寫
		outputAscii = inputAscii - 32;
	else						//其他
		outputAscii = -1;
	if (outputAscii != -1)				//確認是否為警示值
		cout << (char)outputAscii;		//輸出
	else
		cout << "Error!!!";			//顯示為錯誤
}
//Ascii的對照表:http://kevin.hwai.edu.tw/~kevin/material/CLanguage/ASCII.htm
