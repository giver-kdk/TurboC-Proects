// This code is needed to be executed using TurboC++ using Linux
#include <graphics.h>
#include <stdio.h>
#include <conio.h>

// Function to draw moving car
void draw(int i)
{
	// Upper Body of Car
	line(0 + i, 200, 200 + i, 200);
	line(200 + i, 200, 250 + i, 300);
	line(250 + i, 300, 215 + i, 300);
	// Front Tyre
	circle(200 + i, 300, 15);
	circle(200 + i, 300, 5);
	// Middle Base of Car
	line(185 + i, 300, 65 + i, 300);
	// Rear Tyre
	circle(50 + i, 300, 15);
	circle(50 + i, 300, 5);
	// Back Side of Car
	line(35 + i, 300, 0 + i, 300);
	line(0 + i, 300, 0 + i, 200);
}

// Driver code
int main()
{

	int i, gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TurboC3\\bgi");
	// initgraph(&gd, &gm, "C:\\TC\\bgi");			// Standard
	for (i = 0; i < 300; i++)
	{
		clrscr();
		draw(i);
		delay(50);
	}
	getch();
	closegraph();
	return 0;
}