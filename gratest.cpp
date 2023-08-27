#include <iostream.h>
#include <graphics.h>
#include <conio.h>


void main()
{
	int driver, mode;
	int orgx, orgy;

	driver = DETECT;
	initgraph(&driver,&mode, "c:\\tc\\bgi");
	// draw grid
	setcolor(DARKGRAY);
	setlinestyle(SOLID_LINE,0,NORM_WIDTH);
	for (int x=0; x < 500; x+=10) {
		line (x,0,x,480);
	}
	for (int y=0; y < 480; y+=10) {
		line (0,y,500,y);
	}

	setcolor(WHITE);
	setlinestyle(DASHED_LINE,0,NORM_WIDTH);
	line(500,0,500,480);
	setlinestyle(SOLID_LINE,0,NORM_WIDTH);
	rectangle(100,100,200,200);
	setcolor(LIGHTGRAY);
	setlinestyle(SOLID_LINE,0,NORM_WIDTH);
	line(0,0,0,478);
	moveto(510,0);
	outtext("Pempto CAD v0.1");
	getch();
	closegraph();
