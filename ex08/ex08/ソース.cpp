#include"DxLib.h"

//���C���֐�
int WINAPI WinMain(_In_HINSTANCE hInstance, _In_opt_HINSTANCE hPrevInstance, _In_
	LPSTR lpCmdLine, _In_int nShowCmd)
{
	//���[�J���ϐ���`
	int a = 100;
	int* p;

	//�E�B���h�E���[�h�ŋN��
	ChangeWindowMode(TRUE);

//Dx���C�u�����̏���������
	if (DxLib_Init() == -1)

	{
		return-1:
	}

	//�|�C���^�ϐ��ɕϐ�a�̃A�h���X���i�[
	p = &a;


	//�|�C���^�̒��g���o��
	DrawFormatString(20, 20, GetColor(255, 255, 255), "%d", *p);


	//���͑ҋ@
	WaitKey();

	//Dx���C�u�����g�p�I������
	DxLib_End();

	return 0;
}




