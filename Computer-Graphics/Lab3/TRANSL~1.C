#include <stdio.h>
#include <graphics.h>
#include <math.h>
int main()
{
	int x0, y0, x1, y1, x2, y2, x3, y3, gd = DETECT, gm;
	int cx0, cx1, cx2, cx3, cy0, cy1, cy2, cy3;
	int tx = 100, ty = 30;
	double u, a, b;
	initgraph(&gd, &gm, "C:\\TurboC3\\bgi");
	printf("Enter point for a polygon\n");
	printf("Enter the value of x0,y0:");
	scanf("%d%d", &x0, &y0);					// Use 100, 100
	printf("Enter the value of x1,y1:");
	scanf("%d%d", &x1, &y1);					// Use 300, 120
	printf("Enter the value of x2,y2:");
	scanf("%d%d", &x2, &y2);					// Use 300, 320
	printf("Enter the value of x3,y3:");
	scanf("%d%d", &x3, &y3);					// Use 100, 300

	// Actual Polygon
	line(x0, y0, x1, y1);
	line(x1, y1, x2, y2);
	line(x2, y2, x3, y3);
	line(x3, y3, x0, y0);
	delay(300);
	// Translation
	cx0 = x0 + tx;
	cx1 = x1 + tx;
	cx2 = x2 + tx;
	cx3 = x3 + tx;
	cy0 = y0 + ty;
	cy1 = y1 + ty;
	cy2 = y2 + ty;
	cy3 = y3 + ty;
	// Translated Polygon
	line(cx0, cy0, cx1, cy1);
	line(cx1, cy1, cx2, cy2);
	line(cx2, cy2, cx3, cy3);
	line(cx3, cy3, cx0, cy0);
	delay(300);
	// Corresponding Vertices Connected 
	line(x0, y0, cx0, cy0);
	line(x1, y1, cx1, cy1);
	line(x2, y2, cx2, cy2);
	line(x3, y3, cx3, cy3);
	getch();
	closegraph();
	return 0;
}