// ===== FriendExample.h =====

#include <iostream>
using namespace std;

class FriendRectangle; // forward declaration

class FriendCircle {
private:
    int radius;

public:
    FriendCircle(int r) {
        this->radius = r;
    }

    // friend function declaration
    friend double totalArea(FriendCircle c, FriendRectangle r);
};

class FriendRectangle {
private:
    int length;
    int width;

public:
    FriendRectangle(int l, int w) {
        this->length = l;
        this->width = w;
    }

    // friend function declaration
    friend double totalArea(FriendCircle c, FriendRectangle r);
};

// Definition of friend function
double totalArea(FriendCircle c, FriendRectangle r) {
    return (3.14 * c.radius * c.radius) + (r.length * r.width);
}



