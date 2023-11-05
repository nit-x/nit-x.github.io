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
printf("\n***** Program for basic transformation");
printf("the right angle triangle");
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
getch();
clrscr();
 line(x1,y1,x2,y2);
 line(x2,y2,x3,y3);
 line(x3,y3,x1,y1);
 printf("Enter translation factor: ");
 scanf("%d%d",&xt,&yt);
 nx1=x1+xt;
 ny1=y1+yt;
 nx2=x2+xt;
 ny2=y2+yt;
 nx3=x3+xt;
 ny3=y3+yt;
 setcolor(6);
 line(nx1,ny1,nx2,ny2);
 line(nx2,ny2,nx3,ny3);
 line(nx3,ny3,nx1,ny1);
 getch();
closegraph();
}	
