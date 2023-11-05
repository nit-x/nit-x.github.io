#include<stdio.h>
#include<conio.h>
#include <graphics.h>
#include <math.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm,ch;
initgraph(&gd,&gm,"c:\\turboc3\\bgi ");
line(100,100,100,300);
line(100,100,150,300);
line(150,100,150,300);
getch();
closegraph();

}
