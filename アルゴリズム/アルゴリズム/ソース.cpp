#include<stdio.h>
int main(void)
//{
//	int i, j;
//	i = 0;
//	j = 0;
//
//
//	//C����ł̐錾�Ə�������i�s�Ɨ�j
//	int ma[2][3] = { {1,2,3},{4,5,6} };
//
//	//���e�̕\��
//	for (i = 0; i < 2; i++) {
//		for (j = 0; j < 3; j++) {
//			printf("%d\n", ma[i][j]);
//		}
//	}
//}

//������
//{
//	int i, j;
//
//	//C����ł�2�����z��̐錾�Ə�������i�s�Ɨ�j
//	int ma[9][9] = { {1,2,3,4,5,6,7,8,9},{1,2,3,4,5,6,7,8,9} };
//
//	//���e�̕\��
//	for (i = 1; i < 10; i++) {
//		for (j = 1; j < 10; j++) {
//			printf("%d\n", i*j);
//		}
//	}
//}

//����
//{
//	int i, j;
//	 //C����ł̐錾�Ə�������i�s�Ɨ�j
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
////10���̐�����z��date[]�ɑ������
//for (n = 0; n < 10; n++) {
//	printf("�z�� data[%d]�Ƀf�[�^����͂��Ă�������\n", n);
//	scanf_s("%d", &data);
//}

{
	int k, max, min;
	int data[20];

	//�ő�20���̐�����z��data[]�ɑ������
	for (k = 0; k < 20; k++) {
		printf("�z��@data[%d]�Ƀf�[�^����͂��Ă�������\n", k);
		scanf_s("%d", &data[k]);
	}
	
	//1���ڂ̃f�[�^�����̍ő�l�A�ŏ��n�Ƃ���
	max = data[0];
	min = data[0];

	for (k = 0; k < 20; k++) {
		//�ő�l��max�ɑ������
		if (data[k] > max) {
			max = data[k];
		}
		if (data[k] < min) {
			min = data[k];
		}
	}
	printf("�ő�l��%d�ł�\n", max);
	printf("�ŏ��l��%d�ł�\n", min);

}

