#include <graphics.h>
#include <conio.h>

// Нарисуйте радугу

int main() {
    
    initwindow(800, 600);

    setbkcolor(WHITE);
    cleardevice();
     
    int colors[7] = {RED, YELLOW, LIGHTGREEN, GREEN, LIGHTBLUE, BLUE, MAGENTA};
    
    int center_x = 400
    int center_y = 600
    
    for (int i = 0; i < 7; i++) {
        setcolor(colors[i]);
        int radius = 300 + (6 - i) * 40;
        arc(center_x, center_y + 100, 180, 360, radius);
    }

    getch();
    closegraph();
    return 0;
}