#include<graphics.h>
#include<conio.h>

int main()
{
	//initilizing graphic driver and
	//graphic mode variable
	int graphicdriver=DETECT,graphicmode;

	//calling initgraph
	initgraph(&graphicdriver,&graphicmode,"c:\\turboc3\\bgi");

	//Printing message for user
	//outtextxy(10, 10 + 10, "Program to draw cubes of diffrent sizes in C graphics");

	//creating both the cubes using bar3d function.

	bar3d(200, 200, 300, 300, 50, 1);
	//bar3d

//	bar3d(100, 100, 200, 200, 25, 1);

	getch();
	return 0;
}
