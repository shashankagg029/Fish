#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>
void main()
{
    int gd = DETECT, gm, i = 0;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    for (i = 0; i < 100; i = i + 2)
    {
        if (i == 98)
        {
            setlinestyle(0, 0, 3);
            setfillstyle(1, 6);
            floodfill(3, 3, 15);
            setcolor(0);
        }

        //aquarium
        //stones
        ellipse(100, 425, 0, 360, 20, 13);
        ellipse(150, 430, 0, 360, 30, 10);
        ellipse(200, 430, 0, 360, 20, 10);
        ellipse(250, 425, 0, 360, 20, 15);
        ellipse(180, 415, 0, 360, 15, 10);
        ellipse(219, 411, 0, 360, 15, 15);
        ellipse(300, 420, 0, 360, 15, 20);
        ellipse(335, 425, 0, 360, 20, 15);
        ellipse(390, 430, 0, 360, 30, 10);
        ellipse(435, 425, 0, 360, 15, 15);
        ellipse(368, 412, 0, 360, 15, 10);
        ellipse(268, 404, 0, 360, 20, 10);
        ellipse(500, 420, 0, 360, 50, 20);
        ellipse(580, 425, 0, 360, 30, 15);
        ellipse(625, 424, 0, 360, 15, 16);
        ellipse(602, 396, 0, 360, 25, 15);
        ellipse(553, 404, 0, 360, 12, 10);
        ellipse(630, 375, 0, 360, 10, 20);
        ellipse(566, 385, 0, 360, 15, 10);
        ellipse(585, 372, 0, 360, 12, 10);
        ellipse(608, 360, 0, 360, 12, 22);
        ellipse(630, 347, 0, 360, 10, 6);

        //fish
        line(400 - i, 230 + i / 3, 455 - i, 245 + i / 3);
        line(350 - i, 280 + i / 3, 400 - i, 230 + i / 3);
        line(380 - i, 250 + i / 3, 435 - i, 255 + i / 3);
        line(455 - i, 245 + i / 3, 465 - i, 265 + i / 3);
        line(435 - i, 255 + i / 3, 500 - i, 275 + i / 3);
        line(350 - i, 280 + i / 3, 355 - i, 295 + i / 3);
        line(355 - i, 295 + i / 3, 365 - i, 295 + i / 3);
        line(355 - i, 295 + i / 3, 365 - i, 305 + i / 3);
        line(365 - i, 305 + i / 3, 430 - i, 308 + i / 3);
        line(430 - i, 308 + i / 3, 500 - i, 275 + i / 3);
        line(430 - i, 308 + i / 3, 455 - i, 315 + i / 3);
        line(455 - i, 315 + i / 3, 475 - i, 303 + i / 3);
        line(475 - i, 303 + i / 3, 470 - i, 286 + i / 3);
        line(395 - i, 305 + i / 3, 403 - i, 320 + i / 3);
        line(403 - i, 320 + i / 3, 415 - i, 328 + i / 3);
        line(415 - i, 328 + i / 3, 420 - i, 320 + i / 3);
        line(420 - i, 320 + i / 3, 415 - i, 308 + i / 3);
        line(470 - i, 266 + i / 3, 535 - i, 250 + i / 3);
        line(535 - i, 250 + i / 3, 515 - i, 276 + i / 3);
        line(515 - i, 276 + i / 3, 525 - i, 305 + i / 3);
        line(525 - i, 305 + i / 3, 485 - i, 282 + i / 3);
        line(380 - i, 250 + i / 3, 400 - i, 272 + i / 3);
        line(400 - i, 272 + i / 3, 375 - i, 306 + i / 3);
        line(400 - i, 272 + i / 3, 415 - i, 270 + i / 3);
        line(415 - i, 270 + i / 3, 430 - i, 278 + i / 3);
        line(430 - i, 278 + i / 3, 420 - i, 294 + i / 3);
        line(420 - i, 294 + i / 3, 385 - i, 292 + i / 3);
        circle(375 - i, 270 + i / 3, 5);
        circle(330, 280 - i, 5);
        if (i > 60)
        {
            circle(270, 340 - i, 5);
        }
        if (i > 80)
        {
            circle(240, 380 - i, 5);
        }
        delay(75);
        if (i == 98)
        {
            break;
        }
        cleardevice();
    }

    getch();
    closegraph();
}
