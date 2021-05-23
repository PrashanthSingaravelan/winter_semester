<<<<<<< HEAD
#include<graphics.h>

int main()
{
    int gd =DETECT;
    int gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    setcolor(RED);           // setting the red border color
    circle(250,200,70);   // (x , y) --> center of the circle , z --> radius
                                        //  (250,200)                                   , 50
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
    setcolor(RED);           // setting the red border color
    circle(250,200,70);   // (x , y) --> center of the circle , z --> radius
                                        //  (250,200)                                   , 50
    getch();
    closegraph();
}
>>>>>>> e9b11b521720e3d1b4f999e344dd740834cb7c44
