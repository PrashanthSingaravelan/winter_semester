<<<<<<< HEAD
#include<graphics.h>

int main()
{
    int gd =DETECT;
    int gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    setlinestyle(SOLID_LINE,0,20);

    line(100,100,100,300);
    arc(100,150,270,90,50);

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
    setlinestyle(SOLID_LINE,0,20);

    line(100,100,100,300);
    arc(100,150,270,90,50);

    getch();
    closegraph();
}
>>>>>>> e9b11b521720e3d1b4f999e344dd740834cb7c44
