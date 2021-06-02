#include<graphics.h>
#include<conio.h>
int main()
{
	int gd=DETECT, gm;
	initgraph(&gd,&gm,"c://turboc3/bgi");
	 outtextxy(20, 20 + 20, "Prashanth.S 19MID0020");
                arc(100,100,0,270,50);
                arc(150,150,0,270,50);

            circle(200,200,50);
            circle(180,200,10);
            circle(220,200,10);

	getch();
	closegraph();
	return 0;
}
