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
	cleardevice();//清屏

	RECT C2 = { 60,60,640,790 };
	drawtext("\n\n\n\n    游戏介绍：每次可以选择上下左右其中一个方向去滑动，每滑动一次，所有数字方块都会往滑动方向靠拢，系统也会在空白地方随机出现一个数字方块，相同数字会在靠拢碰撞时相加。不断的叠加，当最终拼凑出2048这个数字就算成功\n\n\n\n\n   开发者：薛鸿槟 吴娟 张婷蕊 蒋林峰", &C2, DT_WORDBREAK);


	RECT R1 = { 2,HEIGHT - 200,WIDTH - 2,HEIGHT - 2 };
	drawtext("返回", &R1, DT_CENTER | DT_VCENTER | DT_SINGLELINE);

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