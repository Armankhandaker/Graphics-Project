#include<graphics.h>
#include<iostream>
#include<conio.h>
#include<dos.h>
int main()
{
   initwindow(700,600,"Arman");

    for (int i=0; i<500; i++)
    {

setcolor(YELLOW);

    line(30,20,30,70);
    line(31,20,31,70);
    line(32,20,32,70);

    line(10,20,50,20);
    line(10,19,50,19);
    line(10,18,50,18);

    line(10,70,50,70);
    line(10,71,50,71);
    line(10,72,50,72);

    line(60,17,60,73);
    line(61,17,61,73);
    line(62,17,62,73);

    ellipse(61,45,270,90,38,29);
    ellipse(61,45,270,90,37,28);
    ellipse(61,45,270,90,36,27);

    setcolor(WHITE);
    circle(120,30,8);
    setfillstyle(SOLID_FILL,RED);
    floodfill(120,30,WHITE);

    setcolor(WHITE);
    circle(120,60,8);
    setfillstyle(SOLID_FILL,RED);
    floodfill(120,60,WHITE);

    // 9
    line(165,20,200,20);
    line(165,21,200,21);
    line(165,22,200,22);

    line(200,22,200,73);
    line(199,22,199,73);
    line(198,22,198,73);

    line(165,22,165,48);
    line(166,22,166,48);
    line(167,22,167,48);

    line(167,48,198,48);
    line(167,47,198,47);
    line(167,46,198,46);

    line(198,73,167,73);
    line(198,72,167,72);
    line(198,71,167,71);

    // 1
    line(220,20,220,75);
    line(221,20,221,75);
    line(222,20,222,75);


    // 2
    line(240,20,280,20);
    line(240,21,280,21);
    line(240,22,280,22);

    line(280,20,280,48);
    line(279,20,279,48);
    line(278,20,278,48);


    line(280,48,240,48);
    line(280,49,240,49);
    line(280,50,240,50);

    line(240,50,240,75);
    line(241,50,241,75);
    line(242,50,242,75);

    line(242,75,280,75);
    line(242,74,280,74);
    line(242,73,280,73);

    // 4
    line(300,20,300,48);
    line(301,20,301,48);
    line(302,20,302,48);

    line(302,48,335,48);
    line(302,47,335,47);
    line(302,46,335,46);

    line(335,20,335,75);
    line(336,20,336,75);
    line(337,20,337,75);

        // 1st crying
        setcolor(BLACK);
        ellipse(240,290+i,0,360,4,10);
        ellipse(240,290+i,0,360,3,10);

        ellipse(240,320+i,0,360,4,10);
        ellipse(240,320+i,0,360,3,10);

        ellipse(240,350+i,0,360,4,10);
        ellipse(240,350+i,0,360,3,10);

        ellipse(240,380+i,0,360,4,10);
        ellipse(240,380+i,0,360,3,10);

        // 2nd crying
        setcolor(BLACK);
        ellipse(360,290+i,0,360,4,10);
        ellipse(360,290+i,0,360,3,10);
        ellipse(360,320+i,0,360,4,10);
        ellipse(360,320+i,0,360,3,10);
        ellipse(360,350+i,0,360,4,10);
        ellipse(360,350+i,0,360,3,10);
        ellipse(360,380+i,0,360,4,10);
        ellipse(360,380+i,0,360,3,10);


        delay(30);
        cleardevice();


        setcolor(WHITE);
        circle(300,300,160);
        setfillstyle(SOLID_FILL,YELLOW);
        floodfill(274,284,WHITE);


        setcolor(WHITE);
        circle(301,301,161);
        circle(302,302,162);
        circle(303,303,163);
        circle(304,304,164);

        //1st eye
        setcolor(BLACK);
        circle(240,260,45);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(230,260,BLACK);

        setcolor(BLACK);
        circle(240,260,45);
        circle(240,260,46);
        circle(240,260,47);

        setcolor(BLACK);
        ellipse(240,280,0,360,20,25);
        setfillstyle(SOLID_FILL,BLACK);
        floodfill(240,280,BLACK);

        // 2nd eye
        setcolor(BLACK);
        circle(360,260,45);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(330,260,BLACK);


        setcolor(BLACK);
        circle(360,260,45);
        circle(360,260,46);
        circle(360,260,47);

        setcolor(BLACK);
        ellipse(360,280,0,360,20,25);
        setfillstyle(SOLID_FILL,BLACK);
        floodfill(360,260,BLACK);

        //lips
        setcolor(BLACK);
        ellipse(300,390,0,180,70,40);
        ellipse(300,390,0,180,69,39);
        ellipse(300,390,0,180,68,38);
        ellipse(300,390,0,180,67,37);
        ellipse(300,390,0,180,66,36);


    }


    getch();
    return 0;
}




