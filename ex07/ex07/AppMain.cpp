#include"DxLib.h"

//�O���[�o���ϐ���`
int global=30;

////2�̒l�̍��v�l�����߂�֐�
//int Sum(int para1, int para2)
//{
//	return para1 + para2;
//}

//�v���g�^�C�v�錾
/*int Sum(int para1, int para2);*/    //2�̒l�̍��v�l�����߂�֐�
//�v���g�^�C�v�錾
void Func1(int a[]);      //�l�n���p�֐�
void Func2(int* a);       //�A�h���X�n���p�֐�

//���C���֐�
int WINAPI WinMain(_In_ HINSTANCE hinstance, _In_opt_ HINSTANCE hPrevInstance, _In_
	LPSTR lpCmdLne, _In_ int nShowCmd)
{
	//���[�J���ϐ���`
	/*int num = 10;*/
	int num[] = { 1,2,3 };
	//�ϐ���`
	/*int num = Sum(2, 3);*/

	//�E�B���h�E���[�h�ŋN��
	ChangeWindowMode(TRUE);

	//Dx���C�u�����̏���������
	if (DxLib_Init() == -1)
	{
		return -1;

	}

	//�֐��̌Ăяo��
	Func1(num);

	//�ϐ��̒l���o��
	/*DrawFormatString(20, 60, GetColor(255, 255, 255),*//* "%d",num);*/
	/*DrawFormatString(20, 40, GetColor(255, 255, 255), "%d", Sum(10,30));*/
	
	//�֐��̌Ăяo��
	Func2(num);

	//�ϐ��̒l���o��
	/*DrawFormatString(20, 80, GetColor(255, 255, 255), "%d", num);*/



	//���͑ҋ@
	WaitKey();



	//Dx���C�u�����g�p�̏I������
	DxLib_End();


	return 0;

}

//�z��̃A�h���X�n���p�֐�
void Func1(int a[])
{
	int i;

	//�����̒��g���o��
	for (i = 0; i < 3; i++)
	{
		DrawFormatString(20, (20 + (20 * i)), GetColor(255, 255, 255), "%d", a[i]);
	}
}

//�|�C���^�̃A�h���X�n���p�֐�
void Func2(int* a)
{
	int i;

	//�����̒��g���o��
	for (i = 0; i < 3; i++)
	{
		DrawFormatString(20, (20 + (20 * i)), GetColor(255, 255, 255), "%d", *(a + i));
	}
}


//�l�n���p�֐�
//void Func1(int a)
//{
//	//�����̒l���o��
//	DrawFormatString(20, 20, GetColor(255, 255, 255), "%d", a);
//
//	//�����̒l���X�V
//	a += 10;
//
//	//�����̒l���o��
//	DrawFormatString(20, 40, GetColor(255, 255, 255), "%d", a);
//}
//
////�A�h���X�n���p�֐�
//void Func2(int* a)
//{
//	//�����̒l���o��
//	DrawFormatString(20, 80, GetColor(255, 255, 255), "%d", *a);
//	//�����̒l���X�V
//	*a += 10;
//	//�����̒l���X�V
//	DrawFormatString(20, 100, GetColor(255, 255, 255), "%d", *a);
//
//}

//void Func(void)
//{
//	//���[�J���ϐ���`
//	int num = 20;
//
//   //�ϐ��̒l���o��
//	DrawFormatString(20, 40, GetColor(255, 255, 255), "Func�֐��̃��[�J���ϐ�num:%d", num);
//   //�ϐ��̒l���o��
//	DrawFormatString(20, 60, GetColor(255, 255, 255), "�O���[�o���ϐ�global:%d", global);
//

//�Q�̒l�̍��v�l�����߂�֐�
//int Sum(int para1, int para2)
//{
//	return para1 + para2;
//}

//�O���[�o���ϐ��̒l��ύX
//global = 40;
//}