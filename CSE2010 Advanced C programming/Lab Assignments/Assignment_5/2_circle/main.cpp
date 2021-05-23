<<<<<<< HEAD
#include<graphics.h>

int main()
{
    int gd =DETECT;
    int gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    setfillstyle(XHATCH_FILL, RED);  // pattern,color
    circle(300, 200, 100);
    floodfill(350, 250, WHITE); // x,y,border_color
    getch();
    closegraph();
}
=======
#include<graphics.h>

int main()
{
    int gd =DETECT;
    int gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    setfillstyle(XHATCH_FILL, RED);  // pattern,color
    circle(300, 200, 100);
    floodfill(350, 250, WHITE); // x,y,border_color
    getch();
    closegraph();
}
>>>>>>> e9b11b521720e3d1b4f999e344dd740834cb7c44
