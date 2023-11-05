#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void Boundary_fill(int x, int y, int fillcolor, int boundarycolor)
{
 if (getpixel(x, y) != boundarycolor && getpixel(x, y) != fillcolor)
 {
 delay(5);
 putpixel(x, y, fillcolor);
 Boundary_fill(x + 1, y, fillcolor, boundarycolor);
 Boundary_fill(x, y + 1, fillcolor, boundarycolor);
 Boundary_fill(x - 1, y, fillcolor, boundarycolor);
 Boundary_fill(x, y - 1, fillcolor, boundarycolor);
 }
}
void main()
{
 int gd = DETECT, gm;
 initgraph(&gd, &gm, "C:\\turboc3\\bgi");
 line(50, 110, 80, 50);
 line(80, 50, 110, 80);
 line(110, 80, 50, 110);
 Boundary_fill(80, 80, 6, 15);
 getch();
 closegraph();
}
