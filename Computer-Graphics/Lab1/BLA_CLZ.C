// This program is written with a generic algorithm
#include <stdio.h>
#include <conio.h>              
#include <graphics.h>
#include <math.h>

int main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, y2, dx, dy, pk, x, y, a, b;
    initgraph(&gd, &gm, "C:\\TurboC3\\bgi");
    // initgraph(&gd, &gm, "C:\\TC\\bgi");          // Standard
    printf("Enter x1 and y1: ");
    scanf("%d%d", &x1, &y1);
    printf("Enter x2 and y2: ");
    scanf("%d%d", &x2, &y2);
    dx = abs((x2 - x1));
    dy = abs((y2 - y1));
    if (x2 > x1)  a = 1;
    else a = -1;
    if (y2 > y1) b = 1;
    else  b = -1;
    if (dx >= dy)
        pk = 2 * dy - dx;
    else
        pk = 2 * dx - dy;
    x = x1;
    y = y1;
    while(x != x2 && y != y2)
    {
        putpixel(x, y, 4);
        delay(50);
        if ((dx >= dy) && (pk <= 0))
        {
            x = x + a;
            y = y;
            pk = pk + 2 * dy;
        }
        else
        {
            x = x + a;
            y = y + b;
            pk = pk + 2 * dy - 2 * dx;
        }
        if ((dx < dy) && (pk <= 0))
        {
            x = x;
            y = y + b;
            pk = pk + 2 * dx;
        }
        else
        {
            x = x + a;
            y = y + b;
            pk = pk + 2 * dx - 2 * dy;
        }
    }
    getch();
    closegraph();
    return 0;
}
