#include <iostream>

// Forward declarations
void rectangle (int width, int height, char fill = ' ');

int main() {
    rectangle(10, 5, '1');
    rectangle(8, 4, '2');
    rectangle(6, 3, '3');
    rectangle(4, 2, '4');
    rectangle(2, 1, '5');
}

// Prints a rectangle either filled with a character of choice or empty in the middle. 
void rectangle (int width, int height, char fill) {
    using namespace std;
    for (int row = 0; row < height; row += 1) {
        for(int column = 0; column < width; column += 1) { 
            if (row == 0 || row == height - 1 || column == 0 || column == width - 1) {
                cout << "*";
            } else {
                cout << fill;
            }
        }
        cout << "\n";    
    }
} 


