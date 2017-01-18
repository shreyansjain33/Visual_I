/*Developed by: Bahauddin Kalyani
		Shreyans Jain
		Rishabh Jain
*/
#
include < dos.h > #include < graphics.h > #include < stdio.h > #include < stdlib.h > #include < conio.h >

    void snd() {
        int i = 20;
        while (i--) {
            sound(30 * random(100));
            delay(25);
            nosound();
        }
    }

void cir() {
    int i;
    for (i = 0; i < 15; i++)
        circle(320, 240, i * 10);
    setcolor(YELLOW);
    rectangle(240, 160, 400, 320);
}

void dot() {
    int i, j, of = 40, wid = 6;
    setcolor(8);
    setfillstyle(1, getcolor());

    for (i = of; i < getmaxx(); i += of)
        bar(i, 0, i + wid, getmaxy());

    for (i = of; i < getmaxy(); i += of)
        bar(0, i, getmaxx(), i + wid);

    for (i = of; i < getmaxx(); i += of)
        for (j = of; j < getmaxy(); j += of) {
            setcolor(15);
            setfillstyle(1, getcolor());
            circle(i + 3, j + 3, 5);
            floodfill(i + 2, j + 2, getcolor());
        }
}

int main() {
    char ch, ans;
    int gd = DETECT, gm, i;
    initgraph( & gd, & gm, "c:\\turboc3\\bgi");

    setcolor(GREEN);
    settextstyle(3, 0, 4);
    outtextxy(300, 80, "(1)");
    outtextxy(150, 240, "Count the 'Black Dots'");
    getch();
    cleardevice();

    dot();
    getch();
    cleardevice();

    settextstyle(3, 0, 4);
    setcolor(GREEN);
    outtextxy(50, 120, "How many were there ?");
    ans = getche();
    cleardevice();

    settextstyle(3, 0, 4);
    setcolor(GREEN);
    if (ans == '0')
        outtextxy(250, 120, "Correct !!");
    else
        outtextxy(100, 120, "You were Illusioned.!");
    snd();
    getch();
    cleardevice();

    setcolor(GREEN);
    settextstyle(3, 0, 4);
    outtextxy(300, 80, "(2)");
    outtextxy(50, 240, "How about the Rectangle's Lines...");
    getch();
    setcolor(YELLOW);
    cleardevice();
    setbkcolor(RED);
    cir();
    getch();
    cleardevice();
    setbkcolor(BLACK);
    setcolor(GREEN);
    settextstyle(3, 0, 4);
    outtextxy(50, 120, "Were they straight ? (y/n)");
    ch = getche();
    cleardevice();

    settextstyle(3, 0, 4);
    setcolor(GREEN);
    if (ch == 'y')
        outtextxy(250, 120, "Correct.!");
    else
        outtextxy(100, 120, "You were Illusioned.!");
    snd();
    getch();
    cleardevice();

    settextstyle(3, 0, 6);
    setcolor(CYAN);
    outtextxy(0, 100, "Developers:");
    outtextxy(30, 200, "Bahauddin Kalyani");
    outtextxy(30, 280, "Shreyans K. Jain");
    outtextxy(30, 360, "Rishabh Jain");
    getch();
    cleardevice();

    settextstyle(4, 0, 8);
    setcolor(BLUE);
    setbkcolor(GREEN);
    outtextxy(100, 200, "Thank You !!");
    snd();
    getch();
    closegraph();
    return 0;
}
