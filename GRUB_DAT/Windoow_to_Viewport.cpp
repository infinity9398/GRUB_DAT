#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<stdlib.h>
#include<graphics.h>

using namespace std;

int main()
{
    float xwmin,xwmax,ywmax,ywmin;
    float xvmin,xvmax,yvmax,yvmin;

    float x[10],y[10],yv,xv,sx,sy;

    int gd=DETECT,gm,i;
    printf("\n enter window port coordinates:\n(xwmin,ywmin,xwmax,ywmax): ");
    scanf("%f%f%f%f",&xwmin,&ywmin,&xwmax,&ywmax);
    printf("\n enter view port coordinates:\n(xvmin,yvmin,xvmax,yvmax): ");
    scanf("%f%f%f%f",&xvmin,&yvmin,&xvmax,&yvmax);
    printf("\n enter vertices for line ");
    for(i=0;i < 2;i++)
    {
    printf("\n enter(x%d,y%d):",i,i);
    scanf("%f%f",&x[i],&y[i]);
    }
    sx=((xvmax-xvmin)/(xwmax-xwmin));
    sy=((yvmax-yvmin)/(ywmax-xwmin));

    initgraph(&gd,&gm," ");
    outtextxy(80,5,"window port");

    rectangle(xwmin,ywmin,xwmax,ywmax);

   // for(i=0;i <2;i++)
    //{
    //line(x[i],y[i],x[i+1],y[i+1]);
   // }
    line(x[1],y[1],x[0],y[0]);
    //getch();
   // cleardevice();

    for(i=0;i <2;i++)
    {
    x[i]=xvmin+((x[i]-xwmin)*sx);
    y[i]=yvmin+((y[i]-ywmin)*sy);
    }

    outtextxy(450,5,"view port");
    rectangle(xvmin,yvmin,xvmax,yvmax);

   // for(i=0;i <2;i++)
   // {
   // line(x[i],y[i],x[i+1],y[i+1]);
   // }
    cout<<"x0 : "<<x[0]<<endl;
    cout<<"y0 : "<<y[0]<<endl;

    line(x[1],y[1],x[0],y[0]);
    getch();
    closegraph();
return 0;
}
