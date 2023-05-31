#include <graphics.h>
#include <conio.h>
#include <stdio.h>

void basic();
void redfill();
void yellowfill();
void greenfill();
void main()
{
   int gd = DETECT, gm=0;
   int i;

   initgraph(&gd, &gm, "C:/TURBOC3/BGI");

for(i=0;i<1;i++)
{
   basic();
   redfill();
   delay(3000);
   cleardevice();
   basic();
   yellowfill();
   delay(3000);
   cleardevice();
   basic();
   greenfill();
   delay(3000);

}

   getch();
   closegraph();
}

void basic()
{  setcolor(15);
   rectangle(220,0,420,479);
   setcolor(4);
   circle(320,80,75);
   setcolor(14);
   circle(320,240,75);
   setcolor(2);
   circle(320,400,75);
}

void redfill()
{
   setfillstyle(1,4);
   floodfill(321,81,4);
}

void yellowfill()
{
   setfillstyle(1,14);
   floodfill(321,241,14);
}

void greenfill()
{
   setfillstyle(1,2);
   floodfill(321,401,2);
}
