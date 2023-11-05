#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<stdlib.h>
void main()
{
int gd =DETECT, gm;
int x1=210,y1=50,x2=310,y2=150,x3=210,y3= 150;
int nx1,nx2,nx3,ny1,ny2,ny3,c;
int sx, sy,xt,yt,shx,shy,r;
float t;
initgraph(&gd,&gm, "C:\\TurboC3\\bgi");
clrscr();
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
printf("Enter scaling factor: ");
 scanf("%d%d",&sx,&sy);
 nx1=x1*sx;
 ny1=y1*sy;
 nx2=x2*sx;
 ny2=y2*sy;
 nx3=x3*sx;
 ny3=y3*sy;
 setcolor(4);
 line(nx1,ny1,nx2,ny2);
 line(nx2,ny2,nx3,ny3);
 line(nx3,ny3,nx1,ny1);
 getch();
closegraph();
}
