#include <graphics.h>
#include <conio.h>

// Нарисуйте радугу

int main() {
    initwindow(800, 800);
    setbkcolor(WHITE);
    cleardevice();

    int colors[7] = {RED, 12, YELLOW, GREEN, 9, BLUE, 13};

    int center_x = 400;
    int center_y = 600;

    for (int i = 0; i < 7; i++) {
        setcolor(colors[i]);
        for (int j = 0; j < 25; j++) {
            int radius = 350 - i * 25 - j;
            setlinestyle(SOLID_LINE, 0, 1);
            arc(center_x, center_y, 360, 180, radius);
        }
    }

    getch();
    closegraph();
    return 0;
}