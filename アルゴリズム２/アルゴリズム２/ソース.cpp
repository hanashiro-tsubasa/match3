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
//	////�z�񖖔��ɔԕ��ƂȂ�f�[�^������̈���m��
//	//int carNo[7] = { 1003, 1012, 1053, 1031, 1021, 1075, 0 };
//	//std::string carName[6] = { "X1","A3","F5","B6","P7","R6" };
//
//	//printf("�ԗ��ԍ�����͂��Ă��������i4���̔��p�����j");
//	//scanf_s("%d", &key);
//
//
////�@���ȏ� ���7-1 117�y�[�W �ԕ��@ �T���v���v���O����
//// C++��string���C�u�������C���N���[�h���� string�N���X�𗘗p���Ă��܂��B
//#include<stdio.h>
//#include<string>
//
//int main(void)
//{
//    int key, i;
//    // �z�񖖔��ɔԕ��ƂȂ�f�[�^������̈���m��
//    int carNo[7] = { 1003,1012,1053,1031,1021,1075,0 };
//    std::string carName[6] = { "X1","A3","F5","B6","P7","R6" };
//
//    printf("�ԗ��ԍ�����͂��Ă�������(4���̔��p����)");
//    scanf_s("%d", &key);
//    //�z�񖖔��ɔԕ��ƂȂ�f�[�^�Ƃ��Ă��̓��̓f�[�^�����Ă���
//    carNo[6] = key;
//
//    i = 0;
//
//    //�ړI�̎ԗ��ԍ���������܂Ő��`�T�����s���B
//    //�f�[�^���Ȃ��Ă��Ō�ɕK��key��carNo����v���ă��[�v���I������
//    while (key != carNo[i]) {
//        i++;
//    }
//
//    //c_str()�ŁAc++�̕������printf()�ŕ\���ł���悤�ɕϊ�����
//    if (i < 6) {
//        printf("�Ԏ햼�� ");
//        printf("%s �ł��B\n", carName[i].c_str());
//    }
//    else {
//        printf("�f�[�^�G���[");
//    }
//}
//#include<stdio.h>
//int main(void)
//{
//	int t[12] = { 15,16,19,21,25,28,29,30,34,36,38,40 };
//	int i, j, key;
//	printf("�T�����鐔�l����͂��Ă�������");
//	scanf_s("%d", &key);
//	i = 3;
//	//i<12�����Ă����Ȃ��� t[]�͈̔͂𒴂��� t[i]<key���r���Ă��܂�
//	//�u���b�N��4�ƂȂ�B
//	while (i < 12 && t[i] < key) {
//		i = i + 4;
//
//	}
//
//	if (i < 12) {
//		//i����3�����������l���u���b�N�̍ŏ��̒T������z��ƂȂ�
//
//		j = i - 3;
//		while (j <= i && t[j] != key) {
//			j = j + 1;
//
//		}
//		if (j <= i) {
//
//			printf("�f�[�^���݂���z��t[]�̓Y�� %d", j);
//
//		}
//		else {
//
//			printf("�Y���f�[�^�Ȃ�");
//
//		}
//
//	}
//	else {
//		printf("�Y���f�[�^�Ȃ�");
//	}
//}

//���ȏ� ���7-1 112�y�[�W �n���o�[�K�[�V���b�v �T���v���v���O����
//C++��string���C�u�������C���N���[�h���� string�N���X�𗘗p���Ă��܂��B
#include<stdio.h>
#include<string>

int main(void)
{
    // amount�͐��� i�̓J�E���^�[,key�͓��͂���鏤�i�ԍ�
    int amount, i;
    char key[5];
    std::string itemNo[7] = { "A001","A003","A005","A007","A009","A010","A011" };
    std::string itemName[7] = { "�n���o�[�K�[","�`�[�Y�o�[�K�[","�G�b�O�T���h","�A�C�X�R�[�q�[","�A�C�X�e�B","�O���[���T���_","�t���C�h�|�e�g" };
    int itemPrice[7] = { 200,260,240,120,120,280,150 };

    printf("���i�ԍ�����͂��Ă�������");
    scanf_s("%s", &key, 5);
    printf("���ʂ���͂��Ă�������");
    scanf_s("%d", &amount);

    i = 0;

    //�ړI�̃f�[�^��������܂Ő��`�T�����s���B
    while (i < 7 && strcmp(key, itemNo[i].c_str())) {
        i++;
    }

    //���͂��ꂽ���i�ԍ����珤�i���ƒP���A���v���z��\������
    //c_str()�ŁAc++�̕������printf()�ŕ\���ł���悤�ɕϊ�����
    if (i < 7) {
        printf("���i���� ");
        printf("%s �ł��B\n", itemName[i].c_str());
        printf("�P���� ");
        printf("%d �ł��B\n", itemPrice[i]);
        printf("���v���z�� ");
        printf("%d �~�ł��B\n", itemPrice[i] * amount);
    }
    else {
        printf("�f�[�^�G���[");
    }
}