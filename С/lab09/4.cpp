#include <graphics.h>
#include <conio.h>

// Фамилия

void draw_full_surname(int start_x, int start_y) {
    int letter_spacing = 25;
    setcolor(BLACK);

    // Буква А
    line(start_x, start_y + 30, start_x + 10, start_y);
    line(start_x + 10, start_y, start_x + 20, start_y + 30);
    line(start_x + 5, start_y + 15, start_x + 15, start_y + 15);

    // Буква Л
    int x2 = start_x + letter_spacing;
    line(x2, start_y + 30, x2 + 10, start_y);
    line(x2 + 10, start_y, x2 + 20, start_y + 30);

    // Буква Ь
    int x3 = x2 + letter_spacing;
    line(x3, start_y, x3, start_y + 30);
    line(x3, start_y + 20, x3 + 15, start_y + 20);
    line(x3 + 15, start_y + 20, x3 + 15, start_y + 30);
    line(x3, start_y + 30, x3 + 15, start_y + 30);

    // Буква М
    int x4 = x3 + letter_spacing;
    line(x4, start_y + 30, x4, start_y);
    line(x4, start_y, x4 + 10, start_y + 15);
    line(x4 + 10, start_y + 15, x4 + 20, start_y);
    line(x4 + 20, start_y, x4 + 20, start_y + 30);

    // Буква У
    int x5 = x4 + letter_spacing;
    line(x5, start_y, x5 + 15, start_y + 17);
    line(x5 + 20, start_y, x5 + 10, start_y + 30);

    // Буква Х
    int x6 = x5 + letter_spacing;
    line(x6, start_y, x6 + 15, start_y + 30);
    line(x6 + 15, start_y, x6, start_y + 30);

    // Буква А
    int x7 = x6 + letter_spacing;
    line(x7, start_y + 30, x7 + 10, start_y);
    line(x7 + 10, start_y, x7 + 20, start_y + 30);
    line(x7 + 5, start_y + 15, x7 + 15, start_y + 15);

    // Буква М
    int x8 = x7 + letter_spacing;
    line(x8, start_y + 30, x8, start_y);
    line(x8, start_y, x8 + 10, start_y + 15);
    line(x8 + 10, start_y + 15, x8 + 20, start_y);
    line(x8 + 20, start_y, x8 + 20, start_y + 30);

    // Буква Е
    int x9 = x8 + letter_spacing;
    line(x9, start_y, x9, start_y + 30);
    line(x9, start_y, x9 + 15, start_y);
    line(x9, start_y + 15, x9 + 12, start_y + 15);
    line(x9, start_y + 30, x9 + 15, start_y + 30);

    // Буква Т
    int x10 = x9 + letter_spacing;
    line(x10 + 10, start_y, x10 + 10, start_y + 30);
    line(x10, start_y, x10 + 20, start_y);

    // Буква О
    int x11 = x10 + letter_spacing;
    ellipse(x11 + 10, start_y + 15, 0, 360, 10, 15);

    // Буква В
    int x12 = x11 + letter_spacing;
    line(x12, start_y, x12, start_y + 30);
    line(x12, start_y, x12 + 10, start_y);
    line(x12, start_y + 15, x12 + 10, start_y + 15);
    line(x12, start_y + 30, x12 + 10, start_y + 30);
    line(x12 + 10, start_y, x12 + 10, start_y + 15);
    line(x12 + 10, start_y + 15, x12 + 10, start_y + 30);
}

int main() {
    initwindow(1200, 600);
    setbkcolor(WHITE);

    // 1. Левый верхний → правый нижний
    int x1 = 50, y1 = 50;
    int x2 = 900, y2 = 500;

    for (int i = 0; i <= 100; i++) {
        cleardevice();

        setcolor(BLACK);
        int cur_x = x1 + i*(x2-x1)/100;
        int cur_y = y1 + i*(y2-y1)/100;
        draw_full_surname(cur_x, cur_y);
        delay(30);
    }

    // 2. Правый нижний → правый верхний
    int x3 = 900, y3 = 50;

    for (int i = 0; i <= 100; i++) {
        cleardevice();
        setcolor(BLACK);
        int cur_x = x2 + i*(x3-x2)/100;
        int cur_y = y2 + i*(y3-y2)/100;
        draw_full_surname(cur_x, cur_y);
        delay(30);
    }

    // 3. Правый верхний → левый нижний
    int x4 = 50, y4 = 550;

    for (int i = 0; i <= 100; i++) {
        cleardevice();
        setcolor(BLACK);
        int cur_x = x3 + i*(x4-x3)/100;
        int cur_y = y3 + i*(y4-y3)/100;
        draw_full_surname(cur_x, cur_y);
        delay(30);
    }

    // 4. Левый нижний → середина верха
    int x5 = 300, y5 = 50;

    for (int i = 0; i <= 100; i++) {
        cleardevice();
        setcolor(BLACK);
        int cur_x = x4 + i*(x5-x4)/100;
        int cur_y = y4 + i*(y5-y4)/100;
        draw_full_surname(cur_x, cur_y);
        delay(30);
    }

    getch();
    closegraph();
    return 0;
}
