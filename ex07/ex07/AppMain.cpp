#include"DxLib.h"

//グローバル変数定義
int global=30;

////2つの値の合計値を求める関数
//int Sum(int para1, int para2)
//{
//	return para1 + para2;
//}

//プロトタイプ宣言
/*int Sum(int para1, int para2);*/    //2つの値の合計値を求める関数
//プロトタイプ宣言
void Func1(int a[]);      //値渡し用関数
void Func2(int* a);       //アドレス渡し用関数

//メイン関数
int WINAPI WinMain(_In_ HINSTANCE hinstance, _In_opt_ HINSTANCE hPrevInstance, _In_
	LPSTR lpCmdLne, _In_ int nShowCmd)
{
	//ローカル変数定義
	/*int num = 10;*/
	int num[] = { 1,2,3 };
	//変数定義
	/*int num = Sum(2, 3);*/

	//ウィンドウモードで起動
	ChangeWindowMode(TRUE);

	//Dxライブラリの初期化処理
	if (DxLib_Init() == -1)
	{
		return -1;

	}

	//関数の呼び出し
	Func1(num);

	//変数の値を出力
	/*DrawFormatString(20, 60, GetColor(255, 255, 255),*//* "%d",num);*/
	/*DrawFormatString(20, 40, GetColor(255, 255, 255), "%d", Sum(10,30));*/
	
	//関数の呼び出し
	Func2(num);

	//変数の値を出力
	/*DrawFormatString(20, 80, GetColor(255, 255, 255), "%d", num);*/



	//入力待機
	WaitKey();



	//Dxライブラリ使用の終了処理
	DxLib_End();


	return 0;

}

//配列のアドレス渡し用関数
void Func1(int a[])
{
	int i;

	//因数の中身を出力
	for (i = 0; i < 3; i++)
	{
		DrawFormatString(20, (20 + (20 * i)), GetColor(255, 255, 255), "%d", a[i]);
	}
}

//ポインタのアドレス渡し用関数
void Func2(int* a)
{
	int i;

	//引数の中身を出力
	for (i = 0; i < 3; i++)
	{
		DrawFormatString(20, (20 + (20 * i)), GetColor(255, 255, 255), "%d", *(a + i));
	}
}


//値渡し用関数
//void Func1(int a)
//{
//	//引数の値を出力
//	DrawFormatString(20, 20, GetColor(255, 255, 255), "%d", a);
//
//	//引数の値を更新
//	a += 10;
//
//	//引数の値を出力
//	DrawFormatString(20, 40, GetColor(255, 255, 255), "%d", a);
//}
//
////アドレス渡し用関数
//void Func2(int* a)
//{
//	//引数の値を出力
//	DrawFormatString(20, 80, GetColor(255, 255, 255), "%d", *a);
//	//引数の値を更新
//	*a += 10;
//	//引数の値を更新
//	DrawFormatString(20, 100, GetColor(255, 255, 255), "%d", *a);
//
//}

//void Func(void)
//{
//	//ローカル変数定義
//	int num = 20;
//
//   //変数の値を出力
//	DrawFormatString(20, 40, GetColor(255, 255, 255), "Func関数のローカル変数num:%d", num);
//   //変数の値を出力
//	DrawFormatString(20, 60, GetColor(255, 255, 255), "グローバル変数global:%d", global);
//

//２つの値の合計値を求める関数
//int Sum(int para1, int para2)
//{
//	return para1 + para2;
//}

//グローバル変数の値を変更
//global = 40;
//}