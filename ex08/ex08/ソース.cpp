#include"DxLib.h"

//メイン関数
int WINAPI WinMain(_In_HINSTANCE hInstance, _In_opt_HINSTANCE hPrevInstance, _In_
	LPSTR lpCmdLine, _In_int nShowCmd)
{
	//ローカル変数定義
	int a = 100;
	int* p;

	//ウィンドウモードで起動
	ChangeWindowMode(TRUE);

//Dxライブラリの初期化処理
	if (DxLib_Init() == -1)

	{
		return-1:
	}

	//ポインタ変数に変数aのアドレスを格納
	p = &a;


	//ポインタの中身を出力
	DrawFormatString(20, 20, GetColor(255, 255, 255), "%d", *p);


	//入力待機
	WaitKey();

	//Dxライブラリ使用終了処理
	DxLib_End();

	return 0;
}




