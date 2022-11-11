#include <stdio.h>
#include <graphics.h>
#include <math.h>
int main()
{
	int x0, y0, x1, y1, x2, y2, x3, y3, gd = DETECT, gm;
	double u, a, b;
	printf("Enter the value of x0,y0:");
	scanf("%d%d", &x0, &y0);
	printf("Enter the value of x0,y0:");
	scanf("%d%d", &x1, &y1);
	printf("Enter the value of x0,y0:");
	scanf("%d%d", &x2, &y2;
	printf("Enter the value of x0,y0:");
	scanf("%d%d", &x3, &y3);
	initgraph(&gd, &gm, "C:\\TurboC3\\bgi");
	line(x0, y0, x1, y1);
	line(x1, y1, x2, y2);
	line(x2, y2, x3, y3);
	for (u = 0.0; u <= 1.0; u = u + 0.001)
	{
		a = x0 * pow((1 - u), 3) + x1 * 3 * u * pow((1 - u), 2) + x2 * 3 * pow(u, 2) * (1 - u) + x3 * pow(u, 3);
		b = y0 * pow((1 - u), 3) + y1 * 3 * u * pow((1 - u), 2) + y2 * 3 * pow(u, 2) * (1 - u) + y3 * pow(u, 3);
		putpixel(a, b, WHITE);
	}
	getch();
	delay(300);
	closegraph();
	return 0;
}