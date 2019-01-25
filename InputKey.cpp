#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// 확장키
#define EXTENDED_KEY 224

#define KEYCODE_LEFT 75
#define KEYCODE_RIGHT 77
#define KEYCODE_UP 72
#define KEYCODE_DOWN 80
// ------------------- //
// ASCII KeyCode
#define KEYCODE_SPACE 32
#define KEYCODE_ESC 27



void Input_Key()
{
	int getKey = 0;
	while (true)
	{
		if (kbhit())
		{
			getKey = getch();
			// 확장키는 224 리턴후 키값 리턴
			if (getKey == EXTENDED_KEY)
			{
				getKey = getch();
				switch (getKey)
				{
				case KEYCODE_UP:
					printf("UP");
					break;

				case KEYCODE_DOWN :
					printf("Down");
					break;

				case KEYCODE_RIGHT:
					printf("Right");
					break;

				case KEYCODE_LEFT:
					printf("Left");
					break;

				default:
					break;
				}
			}
			// ASCII KeyCode
			else
			{
				switch (getKey)
				{
				case KEYCODE_SPACE:
					printf("Space");
					break;
				case KEYCODE_ESC:
					printf("Exit");
					exit(0);
				default:
					break;
				}
			}
			printf("\n");
		}

	}
}