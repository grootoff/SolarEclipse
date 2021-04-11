#include <stdio.h>
#include <conio.h>
#include <graphics.h>
int main (void)
{
    int sdriver=DETECT,smode;
    int i;
    initgraph(&sdriver,&smode," C:/TURBOC3/BGI/");
    printf("DEMONSTRATION OF SOLAR ECLIPSE");
        ellipse(300,200,0,360,300,50);
        setfillstyle(1,14);
        setcolor(14);
        pieslice(300,200,0,360,100);
        setcolor(15);
        ellipse(580,200,0,360,50,15);
        setfillstyle(1,1);
        setcolor(1);
        pieslice(580,200,0,360,20);
        setfillstyle(1,15);
        setcolor(15);
        pieslice(530,200,0,360,5);
        setfillstyle(1,8);
        setcolor(8);
        pieslice(565,200,0,360,5);
        setcolor(15);
        line(320,100,530,195);
        line(320,300,530,205);
        setcolor(15);
        line(535,195,560,195);
        line(535,205,560,205);
        getch();
}
