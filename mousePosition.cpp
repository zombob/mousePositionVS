#include <iostream>
#include<windows.h>

int main() {
    POINT p;
    p.x = 0;
    p.y = 0;
    while (1) {
        POINT cp;
        GetCursorPos(&cp);
        if ((cp.x != p.x) or (cp.y != p.y)) {
            p.x = cp.x;
            p.y = cp.y;
            std::cout << "X: " << p.x << "\tY: " << p.y << std::endl;
        }
        Sleep(10);
    }
    return 0;
}