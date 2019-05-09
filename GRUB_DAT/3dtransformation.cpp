#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<math.h>
using namespace std;
void trans();
void scale();
int midx=200,midy=300,x,y,z;

int main()
{
            int ch;
            int gd=DETECT,gm;
            detectgraph(&gd,&gm);
            initgraph(&gd,&gm,"c:\\tc\\bgi");
            cout<<"\n 1.Translation \n 2.Scaling\n 3.Exit\n "<<endl;;
            cout<<"Enter your choice"<<endl;
            cin>>ch;
            do
            {
                        switch(ch)
                        {
                                    case 1: trans();
                                            getch();
                                            closegraph();
                                            break;

                                    case 2: scale();
                                            getch();
                                            closegraph();
                                            break;

                                    case 3: break;
                        }
                        cout<<"Enter your choice";
                        cin>>ch;
            } while(ch<3);
            return 0;
}
void trans()
{
            bar3d(midx+50,midy-100,midx+100,midy-50,20,1);
            cout<<"Enter translation factor"<<endl;;
            cin>>x>>y;
            cout<<"After translation:"<<endl;
            bar3d(midx+x+50,midy-(y+100),midx+x+100,midy-(y+50),20,1);
}
void scale()
{
            bar3d(midx+50,midy-100,midx+100,midy-50,20,1);
            cout<<"Enter scaling factors:"<<endl;;
            cin>>x>>y>>z;
            cout<<"After scaling:"<<endl;;
            bar3d(midx+(x*50),midy-(y*100),midx+(x*100),midy-(y*50),20*z,1);
}
