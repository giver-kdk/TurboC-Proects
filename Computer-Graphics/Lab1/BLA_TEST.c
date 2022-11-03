#include <stdio.h>
#include <conio.h>              
#include <graphics.h>
#include <math.h>

int main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, y2, dx, dy, pk, x, y;
    initgraph(&gd, &gm, "C:\\TurboC3\\bgi");
    // initgraph(&gd, &gm, "C:\\TC\\bgi");          // Standard
    printf("Enter x1 and y1: ");
    scanf("%d%d", &x1, &y1);
    printf("Enter x2 and y2: ");
    scanf("%d%d", &x2, &y2);
    dx = abs((x2 - x1));
    dy = abs((y2 - y1));
    x = x1;
    y = y1;
	pk = 2 * dy - dx;
    while(x < x2)
    {
        // putpixel(x, y, 4);
        delay(50);
        if ((pk >= 0))
        {
        	putpixel(x, y, WHITE);
            y = y + 1;
            pk = pk + 2 * dy - 2 * dx;
        }
        else
        {
        	putpixel(x, y, WHITE);
            x = x + 1;
            pk = pk + 2 * dy;
        }
    }
    getch();
    closegraph();
    return 0;
}
