///Pentagon

#include <iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

void drawline(int xc,int yc,int xe,int ye)
{
    float step,x,y,xi,yi,k;
    float dx=xe-xc;
float dy=ye-yc;
if(abs(dx)>=abs(dy))
{
	step=abs(dx);
}
else
{
	step=abs(dy);
}
xi=dx/step;
yi=dy/step;
x=xc;
y=yc;
for(k=1;k<=step;k++)
{
	x=x+xi;
	y=y+yi;
	putpixel(x,y,GREEN);
}

}

void floodFill(int x,int y,int interiorColor,int fillColor)
{
	if(getpixel(x,y) == interiorColor)
	{
		putpixel(x,y,fillColor);
		floodFill(x-1,y,interiorColor,fillColor);
		floodFill(x+1,y,interiorColor,fillColor);
		floodFill(x,y-1,interiorColor,fillColor);
		floodFill(x,y+1,interiorColor,fillColor);

	}
}

int main()
{
    int gd = DETECT,gm , x , y , xc , yc , xe , ye , xi , yi;
    initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
    drawline(10,90,40,120);
    drawline(40,120,70,90);
    drawline(70,90,50,40);
    drawline(50,40,30,40);
    drawline(30,40,10,90);

    int arr[] = {10,90,40,120,40,120,70,90,70,90,50,40,30,40,10,90};
 drawpoly(5,arr);
	floodFill(40,110,0,15);



    getch();
    closegraph();
    return 0;
}



/*
///Rectangle
#include <iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

void drawline(int xc,int yc,int xe,int ye)
{
    float step,x,y,xi,yi,k;
    float dx=xe-xc;
float dy=ye-yc;
if(abs(dx)>=abs(dy))
{
	step=abs(dx);
}
else
{
	step=abs(dy);
}
xi=dx/step;
yi=dy/step;
x=xc;
y=yc;
for(k=1;k<=step;k++)
{
	x=x+xi;
	y=y+yi;
	putpixel(x,y,WHITE);
}

}

void floodFill(int x,int y,int interiorColor,int fillColor)
{
	if(getpixel(x,y) == interiorColor)
	{
		putpixel(x,y,fillColor);
		floodFill(x+1,y,interiorColor,fillColor);
		floodFill(x-1,y,interiorColor,fillColor);
		floodFill(x,y-1,interiorColor,fillColor);
		floodFill(x,y+1,interiorColor,fillColor);
	}
}

int main()
{
    int gd = DETECT,gm , x , y , xc , yc , xe , ye , xi , yi;

   initgraph(&gd , &gm , "C:\\tc\\bgi");
    drawline(160,340,470,160);
    drawline(470,160,390,20);
    drawline(390,20,80,200);
    drawline(80,200,160,340);

 int arr[] = {160,340,470,160,470,160,390,20,390,20,80,200,80,200,160,340};
 drawpoly(4,arr);
	floodFill(275, 105, 0, 15);



    getch();
    //closegraph();
    //return 0;
}
*/

/*
///Triangle:
#include <iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

void drawline(int xc,int yc,int xe,int ye)
{
    float step,x,y,xi,yi,k;
    float dx=xe-xc;
float dy=ye-yc;
if(abs(dx)>=abs(dy))
{
	step=abs(dx);
}
else
{
	step=abs(dy);
}
xi=dx/step;
yi=dy/step;
x=xc;
y=yc;
for(k=1;k<=step;k++)
{
	x=x+xi;
	y=y+yi;
	putpixel(x,y,GREEN);
}

}

void floodFill(int x,int y,int interiorColor,int fillColor)
{
	if(getpixel(x,y) == interiorColor)
	{
		putpixel(x,y,fillColor);
		floodFill(x-1,y,interiorColor,fillColor);
		floodFill(x+1,y,interiorColor,fillColor);
		floodFill(x,y-1,interiorColor,fillColor);
		floodFill(x,y+1,interiorColor,fillColor);

	}
}

int main()
{
    int gd = DETECT,gm , x , y , xc , yc , xe , ye , xi , yi;
    initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
    drawline(20,100,70,30);
    drawline(70,30,120,100);
    drawline(20,100,120,100);

    int arr[] = {20,100,70,30,70,30,120,100,20,100,120,100};
     drawpoly(3,arr);

	floodFill(40, 90 , 0, 15);



    getch();
    closegraph();
    return 0;
}
*/
