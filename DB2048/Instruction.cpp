#include "stdafx.h"


#undef UNICODE
#undef _UNICODE
#include <stdlib.h>
#include <graphics.h>
#include <conio.h>
#include "Instruction.h"
#include "DB2048.h"

#define WIDTH 700
#define HEIGHT 900

void instruction()
{
    cleardevice();//����
	RECT C1 = { 60,60,640,790 };
	drawtext("\n\n\n����˵����\n\n���ƣ�A��/�������\n\n���ƣ�D��/�������\n\n���ƣ�W��/�������\n\n���ƣ�S��/�������\n\n(���أ�����:������� (��^��)�g)", &C1, DT_WORDBREAK);


	RECT R1 = { 2,HEIGHT - 200,WIDTH - 2,HEIGHT - 2 };
	drawtext("����", &R1, DT_CENTER | DT_VCENTER | DT_SINGLELINE);

	FlushBatchDraw();

	MOUSEMSG m;

	while (1)
	{
		m = GetMouseMsg();
		if (m.uMsg == WM_LBUTTONDOWN)
		{
			if (m.x>2 && m.x<WIDTH - 2 && m.y>HEIGHT - 200 && m.y<HEIGHT - 2)

				lent();
		}
	}
	FlushBatchDraw();
}
