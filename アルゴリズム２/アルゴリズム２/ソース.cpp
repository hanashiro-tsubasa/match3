#include<stdio.h>
#include<string>

int main(void)
{
//	int i, j;
//	i;
//	j;
//
//	int b[9][9];
//
//	for (i = 0; i < 9; i++) {
//
//		/*	printf("\n");*/
//		for (j = 0; j < 9; j++) {
//			b[i][j] = (i+1)*(j+1);
//			printf("%3d", b[i][j]);
//		}
//		printf("\n");
//	}
//}
	int key, i;
	//配列末尾に番兵となるデータを入れる領域を確保
	int carNo[7] = { 1003, 1012, 1053, 1031, 1021, 1075, 0 };
	std::string carName[6] = { "X1","A3","F5","B6","P7","R6" };

	printf("車両番号を入力してください（4桁の半角数字）");
	scanf_s("%d", &key);



