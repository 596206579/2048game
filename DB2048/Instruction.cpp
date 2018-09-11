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
    cleardevice();//清屏
	RECT C1 = { 60,60,640,790 };
	drawtext("\n\n\n操作说明：\n\n左移：A键/方向键←\n\n右移：D键/方向键→\n\n上移：W键/方向键↑\n\n下移：S键/方向键↓\n\n(返回：作者:你想得美 (￣^￣)ゞ)", &C1, DT_WORDBREAK);


	RECT R1 = { 2,HEIGHT - 200,WIDTH - 2,HEIGHT - 2 };
	drawtext("返回", &R1, DT_CENTER | DT_VCENTER | DT_SINGLELINE);

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
