#include"GameOverScene.h"
#include"DxLib.h"
#include"SceneManager.h"

/****************************************************
*�ϐ��錾
****************************************************/

int GameOverImage;
int GameOverSE;
int GameOverFlag;

/****************************************************
*�v���g�^�C�v�錾
****************************************************/

/****************************************************
*�Q�[���I�[�o�[��ʁF����������
* ���@���F�Ȃ�
* �߂�l�F�G���[���
****************************************************/

int GameOverScene_Initialize(void)
{
	int ret = 0;

	//�摜�ǂݍ���
	GameOverImage = LoadGrapph("images/gameover.png");
	//�����ǂݍ���
	GameOverSE = LoadSoundMem("sounds/gameover_se.mp3");

	GameOverFALSE;

	//�G���[�`�F�b�N
	if (GameOverImage == D_ERROR)
	{
		ret = D_ERROR;
	}
	if (GameOverSE == D_ERROR)
	{
		ret = D_ERROR;
	}

/****************************************************
*�Q�[���I�[�o�[��ʁF�X�V����
* ���@��
* �߂�l�F�Ȃ�
****************************************************/

	void GameOverScene_Update(void)
	{
		//�Q�[���I�[�o�[���ʉ��Đ��`�F�b�N
		if (CheckSoundMem(GameOverSE) == 0)
		{
			if (GameOverFlag == TRUE)
			{
				Change_Scene(E_GAME_OVER);
			}
			else
			{
				PlaySoundMem(GameOverSE, DX_PLAYPE_BACK);
				GameOverFlag = TRUE;
			}
		}
}
	/****************************************************
*�Q�[���I�[�o�[��ʁF�X�V����
* ���@��
* �߂�l�F�Ȃ�
****************************************************/
	
void GameOverScene_Draw(void)
	{
		//�Q�[���I�[�o�[��ʕ\��
		DrawGraph(0, 0, GameOverImage, FALSE);
}

