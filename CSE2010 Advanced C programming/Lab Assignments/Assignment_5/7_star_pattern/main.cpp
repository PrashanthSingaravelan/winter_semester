<<<<<<< HEAD
#include<graphics.h>

int main()
{
    int gd =DETECT;
    int gm;

     initgraph(&gd,&gm,"C:\\TC\\BGI");

     line(315,33,279,170);            //    left vertical
     line(215,407,255,270);          //    left vertical

     line(315,33,351,170);            //    right
     line(415,407,375,270);         //     right

     line(215,406,316,300);         //      cross
     line(415,407,314,300);         //      cross
     line(512,191,373,272);
     line(119,191,257,272);

     line(119,191,279,170);          //     horizontal
     line(351,170,512,191);         //      horizontal

     floodfill(400,233,WHITE);
     setfillstyle(SOLID_FILL,BLUE);

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

     line(315,33,279,170);            //    left vertical
     line(215,407,255,270);          //    left vertical

     line(315,33,351,170);            //    right
     line(415,407,375,270);         //     right

     line(215,406,316,300);         //      cross
     line(415,407,314,300);         //      cross
     line(512,191,373,272);
     line(119,191,257,272);

     line(119,191,279,170);          //     horizontal
     line(351,170,512,191);         //      horizontal

     floodfill(400,233,WHITE);
     setfillstyle(SOLID_FILL,BLUE);

     getch();
     closegraph();
}

>>>>>>> e9b11b521720e3d1b4f999e344dd740834cb7c44
