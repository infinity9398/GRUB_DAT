///Rectangle
#include <iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

void liness(int xc,int yc,int xe,int ye)
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

void boundaryFill(int x, int y, int fill_color, int boundary_color)
{
	if(getpixel(x, y) != boundary_color && getpixel(x, y) != fill_color)
	{
		putpixel(x, y, fill_color);
            boundaryFill(x + 1, y, fill_color, boundary_color);
        	boundaryFill(x, y + 1, fill_color, boundary_color);
        	boundaryFill(x - 1, y, fill_color, boundary_color);
       		boundaryFill(x, y - 1, fill_color, boundary_color);
	}

}
int main()
{
    int gd = DETECT,gm;
    initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
    liness(160,340,470,160);
    liness(470,160,390,20);
    liness(390,20,80,200);
    liness(80,200,160,340);

    int arr[]= {160,340,470,160,470,160,390,20,390,20,80,200,80,200,160,340};
    drawpoly(4,arr);
boundaryFill(355,220,15,15);
    getch();
    closegraph();
    return 0;
}

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
	putpixel(x,y,WHITE);
}

}

void boundaryFill(int x, int y, int fill_color, int boundary_color)
{
	if(getpixel(x, y) != boundary_color && getpixel(x, y) != fill_color)
	{
            putpixel(x, y, fill_color);
            boundaryFill(x + 1, y, fill_color, boundary_color);
        	boundaryFill(x, y + 1, fill_color, boundary_color);
        	boundaryFill(x - 1, y, fill_color, boundary_color);
       		boundaryFill(x, y - 1, fill_color, boundary_color);

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
	boundaryFill(40, 105, 10, 15);



    getch();
    closegraph();
    return 0;
}

///Triangle
#include <iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

void liness(int xc,int yc,int xe,int ye)
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

void boundaryFill(int x, int y, int fill_color, int boundary_color)
{
	if(getpixel(x, y) != boundary_color && getpixel(x, y) != fill_color)
	{
		putpixel(x, y, fill_color);
            boundaryFill(x + 1, y, fill_color, boundary_color);
        	boundaryFill(x, y + 1, fill_color, boundary_color);
        	boundaryFill(x - 1, y, fill_color, boundary_color);
       		boundaryFill(x, y - 1, fill_color, boundary_color);
	}

}

int main(){
int gd = DETECT , gm  , x1,y1,x2,y2,xy;
initgraph(&gd , &gm , "C:\\tc\\bgi");
liness(20,100,70,30);
liness(70,30,120,100);
liness(20,100,120,100);

int arr[]={20,100,70,30,70,30,120,100,20,100,120,100};
drawpoly(3,arr);
boundaryFill(40,90,15,15);
getch();
closegraph();
return 0;
}
