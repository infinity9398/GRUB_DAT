#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void drawline(int x1,int y1 , int x2,int y2 )
{
    int dx , dy , m ,s;
    float xi , yi , x, y;
    dx = x2-x1;
    dy = y2-y1;

    if(dx>dy){
	s = (dx);
    }else{
    s = (dy);
    }

    xi = dx/(float) s;
    yi = dy/(float) s;

    x = x1;
    y = y1;

    putpixel(x1 , y1, WHITE);

    for(m = 0 ; m< s ; m++){
	x = x + xi;
	y = y + yi;
	putpixel(x,y,WHITE);
    }
}

int main(){
int gd = DETECT , gm  , x1,y1,x2,y2 ,x , y;

//clrscr();

initgraph(&gd , &gm , "C:\\turboc3\\bgi");
drawline(100,100,200,100);
drawline(200,100,200,200);
drawline(200,200,100,200);
drawline(100,200,100,100);
drawline(100,200,150,250);
getch();
closegraph();
return 0;
}


