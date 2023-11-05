#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void floodFill(int x, int y, int fillcolor, int oldcolor)
{
 if (getpixel(x, y) == oldcolor)
 {
 delay(5);
 putpixel(x, y, fillcolor);
 floodFill(x + 1, y, fillcolor, oldcolor);
 floodFill(x - 1, y, fillcolor, oldcolor);
 floodFill(x, y + 1, fillcolor, oldcolor);
 floodFill(x, y - 1, fillcolor, oldcolor);
 floodFill(x + 1, y + 1, fillcolor, oldcolor);
 floodFill(x - 1, y + 1, fillcolor, oldcolor);
 floodFill(x + 1, y - 1, fillcolor, oldcolor);
 floodFill(x - 1, y - 1, fillcolor, oldcolor);
 }
}
void main()
{
 int gd = DETECT, gm;
 initgraph(&gd, &gm, "C:\\turboc3\\bgi");
 line(50, 50, 110, 50);
 line(110, 50, 110, 110);
 line(110, 110, 50, 110);
 line(50, 110, 50, 50);
 floodFill(80, 80, 4, 0);
 getch();
 closegraph();
}
