#include"DxLib.h"

int WINAPI WinMain(_In_ HINSTANCE hinstance, _In_opt_ HINSTANCE hPrevInstance, _In_
	LPSTR lpCmdLne, _In_ int nShowCmd)
{
	//ローカル変数定義
	//int a = 100;
	//int data, b = 114514;
	//int*p_a, *p_b;
	//int num[5] = { 2,5,3,9,4 };
	/*int table[3][3] = {
		{10,20,30},
		{40,50,60},
		{70,80,90},
	};
	int i = 0;
	int* p;*/

	char str1[] = "Hello";
	const char* str2 = "Hello";

	//ウィンドウモードで起動
	ChangeWindowMode(TRUE);

	//Dxライブラリの初期化処理
	if (DxLib_Init() == -1)
	{
		return-1;
	}

	//ポインタ変数に変数aのアドレスを格納
	/*p_a = &a;
	p_b = &a*///;


	//ポインタ変数pに配列numの先頭アドレスを格納
	/*p = num;*/
	/*p = (int*)table;*/


	//ポインタの中身を出力
	
	/*for (i = 0; i < (3 * 3); i++)
	{
		DrawFormatString(20, (20 + (20 * i)), GetColor(255, 255, 255), "%d", *p);
			p++;
	}*/


	//while (i < 5)
	//{
	//	DrawFormatString(20, (20 + (20 * i)), GetColor(255, 255, 255), "%d", *(p+i));
	//	DrawFormatString(40, (20 + (20 * i)), GetColor(255, 255, 255), "%d", *p+i);
	//	    //p++;
	//		i++;
	//		
	//}


	/*DrawFormatString(20, 20, GetColor(255, 255, 255), "%d", *p_a);

	data = *p_a;
	DrawFormatString(20, 40, GetColor(255, 255, 255), "%d", data);

	*p_b = 200;
	DrawFormatString(20, 60, GetColor(255, 255, 255), "%d", *p_b);

	*p_a = b;
	DrawFormatString(20, 80, GetColor(255, 255, 255), "%d", *p_a);

	p_b = p_a;
	DrawFormatString(20, 100, GetColor(255, 255, 255), "%d", *p_b);

	a = *p_b;
	DrawFormatString(20, 120, GetColor(255, 255, 255), "%d", a);

	*p_b = *p_a;
	DrawFormatString(20, 140, GetColor(255, 255, 255), "%d", *p_b);

	(*p_a)++;
	DrawFormatString(20, 160, GetColor(255, 255, 255), "%d", *p_a);
*/

	//文字列の出力
	DrawFormatString(20, 20, GetColor(255, 255, 255), "%s", str1);
	DrawFormatString(20, 40, GetColor(255, 255, 255), "%s", str2);

	//ポインタ整数の中身を変更
	str2 = "World";

	//文字列の出力
	DrawFormatString(20, 60, GetColor(255, 255, 255), "%s", str2);

	//入力待機
	WaitKey();

	//Dxライブラリ使用終了処理
	DxLib_End();

	return 0;
}