#include <graphics.h>
#include <conio.h>

// Нарисуйте мишень

int main() {
    initwindow(800, 600);

    setbkcolor(WHITE);
    cleardevice();

    int center_x = 400;
    int center_y = 300;

    for (int i = 0; i < 10; i++) {

        if (i % 2 == 0) {
            setcolor(BLACK);
        } else {
            setcolor(RED);
        }

        int radius = 250 - i * 25;
        circle(center_x, center_y, radius);
    }

    getch();
    closegraph();
    return 0;
}