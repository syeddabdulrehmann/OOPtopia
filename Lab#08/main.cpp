// ===== main.cpp =====
#include "Shape.h"
#include "Area.h"

int main() {
    cout << "----- Task 1: Pure Virtual Function Example -----" << endl;

    CircleShape c1;
    RectangleShape r1;

    c1.draw();
    r1.draw();

    cout << endl;

    cout << "----- Task 2: Friend Function Example -----" << endl;

    FriendCircle c2(10);
    FriendRectangle r2(20, 10);

    cout << "Total area = " << totalArea(c2, r2) << endl;

    return 0;
}

