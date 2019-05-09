#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<graphics.h>
using namespace std;

void bresenham_algorithm(int x0, int x1, int y0, int y1);

int main()
{
      int gd=DETECT,gm;
      int x0, y0, x1, y1;
      initgraph(&gd,&gm,"");
      printf("Enter X-axis coordinate of the initial point:\t");
      scanf("%d", &x0);
      printf("Enter Y-axis coordinate of the initial point:\t");
      scanf("%d", &y0);
      printf("Enter X-axis coordinate of the final point:\t");
      scanf("%d", &x1);
      printf("Enter Y-axis coordinate of the final point:\t");
      scanf("%d", &y1);
      bresenham_algorithm(x0, x1, y0, y1);
      getch();
      closegraph();
      return 0;
}

void bresenham_algorithm(int x0, int x1, int y0, int y1)
{
      int dx, dy;
      int temp, x, y;
      dx = x1 - x0;
      dy = y1 - y0;
      x = x0;
      y = y0;
      temp = 2 * dy - dx;
      while(x < x1)
      {
            if(temp < 0)
            {
                  temp = temp + 2 * dy;
            }
            else
            {
                  y = y + 1;
                  temp = temp + 2 * dy - 2 * dx;
            }
            putpixel(x, y, 6);
            x++;
      }
      //closegraph();
}
