#include<stdio.h>
#include<conio.h> 
#include<graphics.h> 

void main(){
int gd=DETECT,gm,i,j; int a[7][9]={
{0,0,0,0,0,0,0,0,0},
{0,0,1,0,0,0,1,0,0},
{0,0,1,1,0,1,1,0,0},
{0,0,1,0,1,0,1,0,0},
{0,0,1,0,0,0,1,0,0},
{0,0,1,0,0,0,1,0,0},
{0,0,1,0,0,0,1,0,0},
};

initgraph(&gd,&gm,"C:\\TURBOC3\\BGI"); 
for(i=0;i<7;i++){
  for(j=0;j<9;j++)
  { 
    putpixel(200+j, 200+i, 15*a[i][j]);
  }  
}
getch(); 
closegraph();
 
}
