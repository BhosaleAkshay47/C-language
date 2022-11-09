#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm," ");
 line(150,50,150,1000);
 line(150,100,300,100);
 line(150,50,300,50);
 line(300,50,300,100);
 line(150,150,300,150);
 line(300,100,300,150);
 line(150,200,300,200);
 line(300,150,300,200);
 line(50,900,200,900);
 circle(230,125,20);
 getch();
 closegraph();
}