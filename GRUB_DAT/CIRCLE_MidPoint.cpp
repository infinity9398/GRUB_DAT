# include <iostream>
# include <conio.h>
# include <iostream>
# include<graphics.h>
# include <math.h>

using namespace std;

void Circle(int Radius,int xC,int yC);

int main()
{
    int gDriver=DETECT, gMode;
    initgraph(&gDriver,&gMode,"NULL");

    int Radius, xR, yR;
    cout<< endl << "Enter Center point coordinates...";
    cout<<endl<<"  X Coordinates    : ";
    cin>>xR;
    cout<<endl<<"  Y Coordinates    : ";
    cin>>yR;
    cout<<endl<<"Radius  : ";
    cin>>Radius;
    cleardevice();
    Circle(Radius,xR,yR);
    getch();
    return 0;
}
void Circle(int Radius,int xR,int yR)
{
    int P;
    int x,y,yk;
    void Draw(int x,int y,int xR,int yR);
    P = 1 - Radius;
    x = 0;
    y = Radius;
    Draw(x,y,xR,yR);
    while (x<=y)
    {
        x++;
        if (P<0)
        {
            P += 2 * x + 1;
        }
        else
        {
              yk=y-1;
              P = P + (2 * x + ((yk*yk)-(y*y)) - (yk-y)+ 1);
              y--;
        }
        Draw(x,y,xR,yR);
    }

}
void Draw(int x,int y,int xR,int yR)
{
    putpixel(xR + x,yR + y,RED);
    putpixel(xR + x,yR - y,RED);
    putpixel(xR - x,yR + y,RED);
    putpixel(xR - x,yR - y,RED);
    putpixel(xR + y,yR + x,RED);
    putpixel(xR - y,yR + x,RED);
    putpixel(xR + y,yR - x,RED);
    putpixel(xR - y,yR - x,RED);
}







 //P += 2 * (x - y) + 1;
