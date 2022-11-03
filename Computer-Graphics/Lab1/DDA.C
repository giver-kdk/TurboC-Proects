#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <math.h>

void draw(int x, int y)
{
    putpixel(x, y, WHITE);
    delay(50);
}
int main()
{
    int x, y, x1, y1, x2, y2, dx, dy, step;
    int gd = DETECT, gm;
    float xi, yi;
    printf("Enter x1 and y1: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter x2 and y2: ");
    scanf("%d %d", &x2, &y2);

    dx = x2 - x1;
    dy = y2 - y1;
    if(fabs(dx) > fabs(dy))
    {
	step = fabs(dx);
    }
    else
    {
	step = fabs(dy);
    }
    xi = dx / step;
    yi = dy / step;
    x = x1;
    y = y1;
    initgraph(&gd, &gm, "C:\\TurboC3\\bgi");
    // initgraph(&gd, &gm, "C:\\TC\\bgi");              // Standard
    draw(x, y);
    while(x != x2)
    {
	x = x + xi;
	y = y + yi;
	draw(x, y);
    }
    getch();
    closegraph();
    return 0;
}