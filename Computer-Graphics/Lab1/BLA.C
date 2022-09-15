#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

int main()
{
    int gd = DETECT,gm;
    int i,x0,y0,x1,y1,dx,dy,pk,k,x,y,a,b;
    initgraph(&gd, &gm, "C:\\TC\\bgi");
    printf("Enter the two end points of the line (x0,y0) and (x1,y1)\n");
    scanf("%d%d%d%d",&x0,&y0,&x1,&y1);
    dx = abs((x1-x0));
    dy = abs((y1-y0));
    if(x1>x0)
        a = 1;
    else
        a = -1;
    if(y1>y0)
        b = 1;
    else
        b = -1;
    if(dx>=dy){
        pk = 2*dy-dx;
    }else{
        pk =2*dx-dy;
    }
    x = x0;
    y = y0;
    for(k=0;(x!=x1 && y!=y1);k++)
    {
	putpixel(x,y,4);
	delay(50);
        if((dx>=dy)&&(pk<=0)){
            x = x+a;
            y =y;
            pk=pk+2*dy;
        }else{
           x =x+a;
           y=y+b;
           pk=pk+2*dy-2*dx;
        }
        if((dx<dy) && (pk<=0)){
            x=x;
            y=y+b;
            pk=pk+2*dx;
        }else{
            x=x+a;
            y=y+b;
            pk=pk+2*dx-2*dy;
        }

    }
    getch();
    closegraph();
    return 0;
}
