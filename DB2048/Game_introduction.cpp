#include "stdafx.h"

#undef UNICODE
#undef _UNICODE
#include "Game_introduction.h"
#include "DB2048.h"
#include <stdlib.h>
#include <graphics.h>
#include <conio.h>

#define WIDTH 700
#define HEIGHT 900


void game_introduction()
{
	cleardevice();//����

	RECT C2 = { 60,60,640,790 };
	drawtext("\n\n\n\n    ��Ϸ���ܣ�ÿ�ο���ѡ��������������һ������ȥ������ÿ����һ�Σ��������ַ��鶼������������£��ϵͳҲ���ڿհ׵ط��������һ�����ַ��飬��ͬ���ֻ��ڿ�£��ײʱ��ӡ����ϵĵ��ӣ�������ƴ�ճ�2048������־���ɹ�\n\n\n\n\n   �����ߣ�Ѧ���� ��� ������ ���ַ�", &C2, DT_WORDBREAK);


	RECT R1 = { 2,HEIGHT - 200,WIDTH - 2,HEIGHT - 2 };
	drawtext("����", &R1, DT_CENTER | DT_VCENTER | DT_SINGLELINE);

    FlushBatchDraw();

	MOUSEMSG m;

	while (1)
	{
		m = GetMouseMsg();
		if (m.uMsg == WM_LBUTTONDOWN)
		{
			if (m.x > 2 && m.x<WIDTH - 2 && m.y>HEIGHT - 200 && m.y < HEIGHT - 2)

				lent();
		}
	}
}