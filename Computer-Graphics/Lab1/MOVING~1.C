// This code is needed to be executed using TurboC++ using Linux
#include <graphics.h>
#include <stdio.h>
#include <conio.h>

// Function to draw moving car
void draw(int i)
{
	// body of car
	line(0 + i, 300, 210 + i, 300);
	line(50 + i, 300, 75 + i, 270);
	line(75 + i, 270, 150 + i, 270);
	line(150 + i, 270, 165 + i, 300);
	line(0 + i, 300, 0 + i, 330);
	line(210 + i, 300, 210 + i, 330);

	// For left wheel of car
	circle(65 + i, 330, 15);
	circle(65 + i, 330, 2);

	// For right wheel of car
	circle(145 + i, 330, 15);
	circle(145 + i, 330, 2);

	// Line left of left wheel
	line(0 + i, 330, 50 + i, 330);

	// Line middle of both wheel
	line(80 + i, 330, 130 + i, 330);

	// Line right of right wheel
	line(210 + i, 330, 160 + i, 330);

	// Lines for bonnet and body of car
	line(0 + i, 300, 210 + i, 300);
	line(50 + i, 300, 75 + i, 270);
	line(75 + i, 270, 150 + i, 270);
	line(150 + i, 270, 165 + i, 300);
	line(0 + i, 300, 0 + i, 330);
	line(210 + i, 300, 210 + i, 330);

	// For left wheel of car
	circle(65 + i, 330, 15);
	circle(65 + i, 330, 2);

	// For right wheel of car
	circle(145 + i, 330, 15);
	circle(145 + i, 330, 2);

	// Line left of left wheel
	line(0 + i, 330, 50 + i, 330);

	// Line middle of both wheel
	line(80 + i, 330, 130 + i, 330);

	// Line right of right wheel
	line(210 + i, 330, 160 + i, 330);
}

// Driver code
int main()
{

	int i, gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TurboC3\\bgi");
	for (i = 0; i < 400; i++)
	{
		clrscr();
		draw(i);
		delay(50);
	}
	getch();
	closegraph();
	return 0;
}