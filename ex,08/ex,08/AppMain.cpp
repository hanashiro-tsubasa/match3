#include"DxLib.h"

int WINAPI WinMain(_In_ HINSTANCE hinstance, _In_opt_ HINSTANCE hPrevInstance, _In_
	LPSTR lpCmdLne, _In_ int nShowCmd)
{
	//���[�J���ϐ���`
	//int a = 100;
	//int data, b = 114514;
	//int*p_a, *p_b;
	//int num[5] = { 2,5,3,9,4 };
	/*int table[3][3] = {
		{10,20,30},
		{40,50,60},
		{70,80,90},
	};
	int i = 0;
	int* p;*/

	char str1[] = "Hello";
	const char* str2 = "Hello";

	//�E�B���h�E���[�h�ŋN��
	ChangeWindowMode(TRUE);

	//Dx���C�u�����̏���������
	if (DxLib_Init() == -1)
	{
		return-1;
	}

	//�|�C���^�ϐ��ɕϐ�a�̃A�h���X���i�[
	/*p_a = &a;
	p_b = &a*///;


	//�|�C���^�ϐ�p�ɔz��num�̐擪�A�h���X���i�[
	/*p = num;*/
	/*p = (int*)table;*/


	//�|�C���^�̒��g���o��
	
	/*for (i = 0; i < (3 * 3); i++)
	{
		DrawFormatString(20, (20 + (20 * i)), GetColor(255, 255, 255), "%d", *p);
			p++;
	}*/


	//while (i < 5)
	//{
	//	DrawFormatString(20, (20 + (20 * i)), GetColor(255, 255, 255), "%d", *(p+i));
	//	DrawFormatString(40, (20 + (20 * i)), GetColor(255, 255, 255), "%d", *p+i);
	//	    //p++;
	//		i++;
	//		
	//}


	/*DrawFormatString(20, 20, GetColor(255, 255, 255), "%d", *p_a);

	data = *p_a;
	DrawFormatString(20, 40, GetColor(255, 255, 255), "%d", data);

	*p_b = 200;
	DrawFormatString(20, 60, GetColor(255, 255, 255), "%d", *p_b);

	*p_a = b;
	DrawFormatString(20, 80, GetColor(255, 255, 255), "%d", *p_a);

	p_b = p_a;
	DrawFormatString(20, 100, GetColor(255, 255, 255), "%d", *p_b);

	a = *p_b;
	DrawFormatString(20, 120, GetColor(255, 255, 255), "%d", a);

	*p_b = *p_a;
	DrawFormatString(20, 140, GetColor(255, 255, 255), "%d", *p_b);

	(*p_a)++;
	DrawFormatString(20, 160, GetColor(255, 255, 255), "%d", *p_a);
*/

	//������̏o��
	DrawFormatString(20, 20, GetColor(255, 255, 255), "%s", str1);
	DrawFormatString(20, 40, GetColor(255, 255, 255), "%s", str2);

	//�|�C���^�����̒��g��ύX
	str2 = "World";

	//������̏o��
	DrawFormatString(20, 60, GetColor(255, 255, 255), "%s", str2);

	//���͑ҋ@
	WaitKey();

	//Dx���C�u�����g�p�I������
	DxLib_End();

	return 0;
}