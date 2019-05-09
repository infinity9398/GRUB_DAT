#include <graphics.h>
#include <iostream.h>
#include <math.h>
#include <conio.h>
#include <dos.h>
class line1
{
public:
float x,y,x1,y1,x2,y2,dx,dy,step,c1,c2,p;
int i;


void dda( )
{
    cout<<"Enter the value of x1 and y1 : ";
	cin>>x1>>y1;
	cout<<"Enter the value of x2 and y2: ";
	cin>>x2>>y2;

	dx=abs(x2-x1);
	dy=abs(y2-y1);

	if(dx>=dy)
		step=dx;
	else
		step=dy;

	dx=dx/step;
	dy=dy/step;

	x=x1;
	y=y1;

	i=1;
	while(i<=step)
	{
		putpixel(x,y,5);
		x=x+dx;
		y=y+dy;
		i=i+1;
		delay(100);
	}
}

void bl()
{



cout<<"\n\n\tEnter the co-ordinates of first point : ";
cin>>x1>>y1;
cout<<"\n\n\tEnter the co-ordinates of second point : ";
cin>>x2>>y2;

dx = (x2 - x1);
dy = (y2 - y1);

c1=2*(dy-dx);
c2=2*dy;

p = 2 * (dy) - (dx);

x = x1;
y = y1;


putpixel(x,y,WHITE);

while(x <= x2)
{
x++;
if(p < 0)
{
p = p + c2 ;
}
else
{
p = p + c1;
y=y+1;
}
putpixel(x,y,WHITE);
}

}
};

void main()
{
int i,gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
line1 l;
l.dda();
closegraph();

//l.bl();
//return 0;

}
