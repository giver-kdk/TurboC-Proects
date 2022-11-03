// This program is written with a specific algorithm
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

int main()
{
	clrscr();
    int gd = DETECT,gm;
    int i,x, y, x1, y1, x2, y2, dx, dy, i1, i2, d, xend;
	printf("Enter x1 and y1: ");
	scanf("%d %d", &x1, &y1);
	printf("Enter x2 and y2: ");
	scanf("%d %d", &x2, &y2);
    dx = abs((x2-x1));
    dy = abs((y2-y1));
	i1 = 2 * dy;
	i2 = 2 * (dy - dx);
	d = i1 - dx;
    if(dx < 0)
	{
        x = x2;
    }
	else
	{
        y = y2;
		xend = x1;
    }
	if(dx > 0)
	{
		x = x1;
		y = y1;
		xend = x2;
	}
    initgraph(&gd, &gm, "C:\\TurboC3\\bgi");
    // initgraph(&gd, &gm, "C:\\TC\\bgi");				// Standard
    putpixel(x, y, WHITE);
	while(x < xend)
	{
		if(d < 0)
		{
			d = d + i1;
		}
		if(d > 0)
		{
			d = d + i2;
		}
			y = y + 1;
		x = x + 1;
		putpixel(x, y, WHITE);
		delay(50);
	}
    getch();
    closegraph();
    return 0;
}
