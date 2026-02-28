// COMSC-210 | Lab 14 | Johnathan Perez Baltazar

#include <iostream>
#include <vector>
using namespace std;

const int COLOR_AMOUNT = 5;

class Color{
    private:
    // RGB values range from 0 to 255
        int red;
        int green;
        int blue;
    public:
    // Setters and getters for RGB values
        void setColor(int r, int g, int b){
            red = r;
            green = g;
            blue = b;
        }

        int getRed(){
            return red;
        }
        int getGreen(){
            return green;
        }
        int getBlue(){
            return blue;
        }

    // Method to display the color in RGB format
        void displayColor(){
            cout << "Red: " << red << ", Green: " << green 
                << ", Blue: " << blue << endl;
        }
};

/**
 * @brief The main function generates random colors, stores them in a vector, and 
 *        displays them.
*/
int main() {
    // Create a vector to store Color objects
    vector<Color> color;

    // Generate random colors and store them in the vector
    for (int i = 0; i < COLOR_AMOUNT; i++){
        int r = rand() % 256;
        int g = rand() % 256;
        int b = rand() % 256;

        Color c;
        c.setColor(r, g, b);
        color.push_back(c);
    }

    // Display the generated colors
    for (int i = 0; i < color.size(); i++){
        cout << "Color " << i + 1 << ": ";
        color[i].displayColor();
    }

    return 0;
}
