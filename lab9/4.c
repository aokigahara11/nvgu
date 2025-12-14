#include <graphics.h>
#include <conio.h>

int main() {
    char surname[] = "petrov";
    
    initwindow(800, 600);
    setbkcolor(WHITE);
    cleardevice();
    
    int x = 100;
    int y = 300;
    
    while (x < 700) {
        setcolor(WHITE);
        outtextxy(x, y, surname);
        x += 5;
        setcolor(RED);
        outtextxy(x, y, surname);
        delay(30);
    }
    
    while (y < 500) {
        setcolor(WHITE);
        outtextxy(x, y, surname);
        y += 5;
        setcolor(RED);
        outtextxy(x, y, surname);
        delay(30);
    }
    
    while (x > 100) {
        setcolor(WHITE);
        outtextxy(x, y, surname);
        x -= 5;
        setcolor(RED);
        outtextxy(x, y, surname);
        delay(30);
    }
    
    while (y > 300) {
        setcolor(WHITE);
        outtextxy(x, y, surname);
        y -= 5;
        setcolor(RED);
        outtextxy(x, y, surname);
        delay(30);
    }
    
    getch();
    closegraph();
    return 0;
}