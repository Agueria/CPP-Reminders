#include <iostream>
using namespace std;

class rectangle {
    public:
        int width;
        int height;
        int area_of_rectangle() {
            return width * height;
        }
        int perimeter_of_rectangle() {
            return 2 * (width + height);
        }
};

int main(){
    rectangle r;
    r.width = 50;
    r.height = 100;
    cout << "Area of rectangle is " << r.area_of_rectangle() << endl;
    cout << "Perimeter of rectangle is " << r.perimeter_of_rectangle() << endl;
    rectangle t;
    cout << "Second rectangle" << endl;
    t.width = 150;
    t.height = 200;
    cout << "Area of rectangle is " << r.area_of_rectangle() << endl;
    cout << "Perimeter of rectangle is " << r.perimeter_of_rectangle() << endl;
    return 0;
}