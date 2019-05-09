#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<iostream>

using namespace std;

int maxx,maxy,midx,midy;
void axis()
{
getch();
cleardevice();
line(midx,0,midx,maxy);
line(0,midy,maxx,midy);
}

int main()
{
int x,y,z,o,x1,x2,y1,y2;
int gd=DETECT,gm;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"NULL");

maxx=getmaxx();
maxy=getmaxy();
midx=maxx/2;
midy=maxy/2;

axis();

bar3d(midx+50,midy-100,midx+60,midy-90,10,1);
//bar
//bar
//bar(midx+250,midy-150,midx+160,midy-190,10,1);
cout<<"Enter translation factor";
cin>>x>>y;
//axis();
cout<<"After translation:";
bar3d(midx+x+50,midy-(y+100),midx+x+60,midy-(y+90),10,1);
getch();
closegraph();
return 0;
}
