#include <graphics.h>
#include <conio.h>
#include <math.h>

// Нарисуйте движущийся эллипс (r1 = 20, r2 = 50)

int main() {
    initwindow(800, 600);
    
    setbkcolor(WHITE);
    cleardevice();
    
    int r1 = 20, r2 = 50;
    
    for (int frame = 0; frame < 500; frame++) {
        int x = 100 + frame;
        int y = 300 + 200 * sin(frame * 0.05);
        
        setcolor(BLACK);
        ellipse(x, y, 0, 360, r1, r2);
        
        delay(30);
    }
    
    getch();
    closegraph();
    return 0;
}