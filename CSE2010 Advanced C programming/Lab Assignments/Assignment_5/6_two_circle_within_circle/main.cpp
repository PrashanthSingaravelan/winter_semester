<<<<<<< HEAD
#include<graphics.h>
int main()
{
        int gd =DETECT;
        int gm;
        initgraph(&gd,&gm,"C:\\TC\\BGI");
        setcolor(2);

        // void setlinestyle(int linestyle, unsigned upattern,int thickness);
        setlinestyle(DOTTED_LINE, 0, 4);
        circle(110,130,50);
        circle(95,113,15);
        circle(130,130,15);

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
        setcolor(2);

        // void setlinestyle(int linestyle, unsigned upattern,int thickness);
        setlinestyle(DOTTED_LINE, 0, 4);
        circle(110,130,50);
        circle(95,113,15);
        circle(130,130,15);

        getch();
        closegraph();
}
>>>>>>> e9b11b521720e3d1b4f999e344dd740834cb7c44
