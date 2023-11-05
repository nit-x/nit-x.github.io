#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
void main()
{
   float  x1, y1, x2, y2, dx, dy, i, p, x, y;
   int gd=DETECT,gm;
    initgraph(&gd, &gm,"C:\\TurboC3\\bgi");
    printf("Enter x1 and y1");
    scanf("%f%f", &x1, &y1);
     printf("Enter x2 and y2");
    scanf("%f%f", &x2, &y2);
    dx= x2 - x1;
    dy= y2 - y1;
    p=(2*dy)-dx;
    x=x1;
    y=y1;
    clrscr();
    while(x<=x2)
    {
    if(p>=0)
    {
    putpixel(x,y,0);
    y=y+1;
    p=p+(2*dy)-dx;
    }
    else
    {
    putpixel(x,y,0);
    p=p+(2*dy);
    }
    x=x+1;
    delay(50);
    }
    getch();
    closegraph();
}
