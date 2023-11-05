#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>
#include <dos.h>
void main()
{
    float x, y, x1, y1, x2, y2, dx, dy, step;
    int i, gd = DETECT, gm, ch;
    initgraph(&gd, &gm, "C:\\TurboC3\\bgi");
    printf("Enter coordinate x1 & y1:\n");
    scanf("%f%f", &x1, &y1);
    printf("Enter coordinate x2 & y2:\n");
    scanf("%f%f", &x2, &y2);
    dx = abs(x2 - x1);
    dy = abs(y2 - y1);
    if (dx >= dy)
        step = dx;
    else
        step = dy;
    dx = dx / step;
    dy = dy / step;
    x = x1;
    y = y1;
    i = 1;
    clrscr();
      while (i <= step)
        {
            putpixel(x, y, 0);
            x = x + dx;
            y = y + dy;
            i = i + 1;
            delay(50);
	}

	  getch();
    closegraph();
}
