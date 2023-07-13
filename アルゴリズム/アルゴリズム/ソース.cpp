#include<stdio.h>
int main(void)
//{
//	int i, j;
//	i = 0;
//	j = 0;
//
//
//	//C言語での宣言と初期化例（行と列）
//	int ma[2][3] = { {1,2,3},{4,5,6} };
//
//	//内容の表示
//	for (i = 0; i < 2; i++) {
//		for (j = 0; j < 3; j++) {
//			printf("%d\n", ma[i][j]);
//		}
//	}
//}

//自分の
//{
//	int i, j;
//
//	//C言語での2次元配列の宣言と初期化例（行と列）
//	int ma[9][9] = { {1,2,3,4,5,6,7,8,9},{1,2,3,4,5,6,7,8,9} };
//
//	//内容の表示
//	for (i = 1; i < 10; i++) {
//		for (j = 1; j < 10; j++) {
//			printf("%d\n", i*j);
//		}
//	}
//}

//正解
//{
//	int i, j;
//	 //C言語での宣言と初期化例（行と列）
//	int ma[9][9];
//	for (i = 0; i < 9; i++) {
//		for (j = 0; j < 9; j++) {
//			ma[i][j] = (i + 1) * (j + 1);
//			printf("%3d", ma[i][j]);
//		}
//		printf("\n");
//	 }
//}
//{
//int n, sum;
//n = 0;
//sum = 0;
//int data[10];
//
////10件の整数を配列date[]に代入する
//for (n = 0; n < 10; n++) {
//	printf("配列 data[%d]にデータを入力してください\n", n);
//	scanf_s("%d", &data);
//}

{
	int k, max, min;
	int data[20];

	//最大20件の整数を配列data[]に代入する
	for (k = 0; k < 20; k++) {
		printf("配列　data[%d]にデータを入力してください\n", k);
		scanf_s("%d", &data[k]);
	}
	
	//1件目のデータを仮の最大値、最小地とする
	max = data[0];
	min = data[0];

	for (k = 0; k < 20; k++) {
		//最大値をmaxに代入する
		if (data[k] > max) {
			max = data[k];
		}
		if (data[k] < min) {
			min = data[k];
		}
	}
	printf("最大値は%dです\n", max);
	printf("最小値は%dです\n", min);

}

