# clock
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<math.h>
#include<time.h>
void main()
{
 int gmode=DETECT,gdriver;
 initgraph(&gmode, &gdriver, "c:\\turboc3\\bgi");
 int x=getmaxx()/2;
 int y=getmaxy()/2;
 settextstyle(0,0,1);
 outtextxy(200,50,"Collage of Communications Engineering");
 outtextxy(200,70,"Desigened and programed by");
 outtextxy(200,90,"Ahmed Atteyia");
 outtextxy(200,110,"https://t.me/AhmedAtteyia");
 delay(5000);
 cleardevice();
 int x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6;
 setfillstyle(1,15);
 circle(x,y,220);
 floodfill(1,1,15);

 circle(x,y,10);
 setfillstyle(SOLID_FILL,15);
 floodfill(x,y,15);
 settextstyle(1,0,4);
 outtextxy(x-20,y-190,"XII");
 outtextxy(x+160*cos(-M_PI/3.0),y+193*sin(-M_PI/3.0),"I");
 outtextxy(x+160*cos(-M_PI/6.0),y+210*sin(-M_PI/6.0),"II");
 outtextxy(x+158,y-20,"III");
 outtextxy(x+155*cos(M_PI/6.0),y+135*sin(M_PI/6.0),"IV");
 outtextxy(x+150*cos(M_PI/3.0),y+150*sin(M_PI/3.0),"V");
 outtextxy(x-15,y+150,"VI");
 outtextxy(x+210*cos(2*M_PI/3.0),y+150*sin(2*M_PI/3.0),"VII");
 outtextxy(x+200*cos(5*M_PI/6.0),y+135*sin(5*M_PI/6.0),"VIII");
 outtextxy(x-185,y-20,"IX");
 outtextxy(x+182*cos(-5*M_PI/6.0),y+205*sin(-5*M_PI/6.0),"X");
 outtextxy(x+200*cos(-2*M_PI/3.0),y+193*sin(-2*M_PI/3.0),"XI");
 settextstyle(4,0,5);
 outtextxy(x-75,y-100,"AHMED");
 int z = -1;
 float i, j, k;
 for(i=0; i<2*M_PI-0.1; i+=M_PI/6.0)
 {
  setlinestyle(0,0,3);
  x1=x+170*cos(i);y1=y+170*sin(i);
  x2=x+220*cos(i);y2=y+220*sin(i);
  circle(x1,y1,30);
  setlinestyle(0,0,1);
  circle(x2,y2,10);
 }
 for(i=-M_PI/2.0; i<3*M_PI/2.0; i+=M_PI/30.0)
 {
  z++;
  if(z%5==0)
  continue;
  x1=x+130*cos(i);y1=y+130*sin(i);
  x2=x+220*cos(i);y2=y+220*sin(i);
  circle(x1,y1,5);
  circle(x2,y2,10);
 }
 time_t t1=time(0), t2=t1;
 time_t s0=time(0);
 struct tm* now=localtime(&s0);
 time_t ti, tj, tk;
 ti=now->tm_sec;
 tj=now->tm_min;
 tk=now->tm_hour;
 i=-M_PI/2.0+ti*M_PI/30.0;
 j=-M_PI/2.0+tj*M_PI/30.0;
 k=-M_PI/2.0+tk*M_PI/6.0+tj/12*M_PI/30.0;
 x1=x+13*cos(i);y1=y+13*sin(i);
 x2=x+120*cos(i);y2=y+120*sin(i);
 x3=x+13*cos(j);y3=y+13*sin(j);
 x4=x+100*cos(j);y4=y+100*sin(j);
 x5=x+13*cos(k);y5=y+13*sin(k);
 x6=x+70*cos(k);y6=y+70*sin(k);
 setcolor(15);
 line(x1,y1,x2,y2);
 setlinestyle(0,0,3);
 line(x3,y3,x4,y4);
 line(x5,y5,x6,y6);
 setlinestyle(0,0,1);
 while(!kbhit())
 {
  t1=time(0);
  if(t1!=t2)
  {
   setcolor(0);
   line(x1,y1,x2,y2);
   setlinestyle(0,0,3);
   line(x3,y3,x4,y4);
   line(x5,y5,x6,y6);
   setlinestyle(0,0,1);
   setcolor(15);
   s0=time(0);
   now=localtime(&s0);
   ti=now->tm_sec;
   tj=now->tm_min;
   tk=now->tm_hour;
   i=-M_PI/2.0+ti*M_PI/30.0;
   j=-M_PI/2.0+tj*M_PI/30.0;
   k=-M_PI/2.0+tk*M_PI/6.0+tj/12*M_PI/30.0;
   x1=x+13*cos(i);y1=y+13*sin(i);
   x2=x+120*cos(i);y2=y+120*sin(i);
   x3=x+13*cos(j);y3=y+13*sin(j);
   x4=x+100*cos(j);y4=y+100*sin(j);
   x5=x+13*cos(k);y5=y+13*sin(k);
   x6=x+70*cos(k);y6=y+70*sin(k);
   setcolor(15);
   line(x1,y1,x2,y2);
   setlinestyle(0,0,3);
   line(x3,y3,x4,y4);
   line(x5,y5,x6,y6);
   setlinestyle(0,0,1);
   outtextxy(x-75,y-100,"AHMED");
   t2=t1;
  }
 }
}
