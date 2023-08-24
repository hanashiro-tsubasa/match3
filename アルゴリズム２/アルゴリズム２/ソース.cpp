////#include<stdio.h>
////#include<string>
//////
////int main(void)
////{
////	int key, i;
////	//
////	/ int narNo[7] = { 1003,1012,1053,10211075,0 };
////	std::string carName[6]={"X1"
////	int i, j;
////	i;
////	j;
////
////	int b[9][9];
////
////	for (i = 0; i < 9; i++) {
////
////		/*	printf("\n");*/
////		for (j = 0; j < 9; j++) {
////			b[i][j] = (i+1)*(j+1);
////			printf("%3d", b[i][j]);
////		}
////		printf("\n");
////	}
////}
//	//int key, i;
//	////配列末尾に番兵となるデータを入れる領域を確保
//	//int carNo[7] = { 1003, 1012, 1053, 1031, 1021, 1075, 0 };
//	//std::string carName[6] = { "X1","A3","F5","B6","P7","R6" };
//
//	//printf("車両番号を入力してください（4桁の半角数字）");
//	//scanf_s("%d", &key);
//
//
////　教科書 例題7-1 117ページ 番兵法 サンプルプログラム
//// C++のstringライブラリをインクルードして stringクラスを利用しています。
//#include<stdio.h>
//#include<string>
//
//int main(void)
//{
//    int key, i;
//    // 配列末尾に番兵となるデータを入れる領域を確保
//    int carNo[7] = { 1003,1012,1053,1031,1021,1075,0 };
//    std::string carName[6] = { "X1","A3","F5","B6","P7","R6" };
//
//    printf("車両番号を入力してください(4桁の半角数字)");
//    scanf_s("%d", &key);
//    //配列末尾に番兵となるデータとしてこの入力データを入れておく
//    carNo[6] = key;
//
//    i = 0;
//
//    //目的の車両番号が見つかるまで線形探索を行う。
//    //データがなくても最後に必ずkeyとcarNoが一致してループが終了する
//    while (key != carNo[i]) {
//        i++;
//    }
//
//    //c_str()で、c++の文字列をprintf()で表示できるように変換する
//    if (i < 6) {
//        printf("車種名は ");
//        printf("%s です。\n", carName[i].c_str());
//    }
//    else {
//        printf("データエラー");
//    }
//}
//#include<stdio.h>
//int main(void)
//{
//	int t[12] = { 15,16,19,21,25,28,29,30,34,36,38,40 };
//	int i, j, key;
//	printf("探索する数値を入力してください");
//	scanf_s("%d", &key);
//	i = 3;
//	//i<12を入れておかないと t[]の範囲を超えて t[i]<keyを比較してしまう
//	//ブロックは4個となる。
//	while (i < 12 && t[i] < key) {
//		i = i + 4;
//
//	}
//
//	if (i < 12) {
//		//iから3つ差し引いた値がブロックの最初の探索する配列となる
//
//		j = i - 3;
//		while (j <= i && t[j] != key) {
//			j = j + 1;
//
//		}
//		if (j <= i) {
//
//			printf("データ存在する配列t[]の添字 %d", j);
//
//		}
//		else {
//
//			printf("該当データなし");
//
//		}
//
//	}
//	else {
//		printf("該当データなし");
//	}
//}

//教科書 例題7-1 112ページ ハンバーガーショップ サンプルプログラム
//C++のstringライブラリをインクルードして stringクラスを利用しています。
#include<stdio.h>
#include<string>

int main(void)
{
    // amountは数量 iはカウンター,keyは入力される商品番号
    int amount, i;
    char key[5];
    std::string itemNo[7] = { "A001","A003","A005","A007","A009","A010","A011" };
    std::string itemName[7] = { "ハンバーガー","チーズバーガー","エッグサンド","アイスコーヒー","アイスティ","グリーンサラダ","フライドポテト" };
    int itemPrice[7] = { 200,260,240,120,120,280,150 };

    printf("商品番号を入力してください");
    scanf_s("%s", &key, 5);
    printf("数量を入力してください");
    scanf_s("%d", &amount);

    i = 0;

    //目的のデータが見つかるまで線形探索を行う。
    while (i < 7 && strcmp(key, itemNo[i].c_str())) {
        i++;
    }

    //入力された商品番号から商品名と単価、合計金額を表示する
    //c_str()で、c++の文字列をprintf()で表示できるように変換する
    if (i < 7) {
        printf("商品名は ");
        printf("%s です。\n", itemName[i].c_str());
        printf("単価は ");
        printf("%d です。\n", itemPrice[i]);
        printf("合計金額は ");
        printf("%d 円です。\n", itemPrice[i] * amount);
    }
    else {
        printf("データエラー");
    }
}