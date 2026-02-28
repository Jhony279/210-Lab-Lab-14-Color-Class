// COMSC-210 | Lab 14 | Johnathan Perez Baltazar

#include <iostream>
#include <vector>
using namespace std;

const int COLOR_AMOUNT = 5;

class Color{
    private:
        int red;
        int green;
        int blue;
    public:
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
        void displayColor(){
            cout << "Red: " << red << ", Green: " << green 
                << ", Blue: " << blue << endl;
        }
};

/**
 * @brief - Description of main
 * @return 
*/
int main() {
    vector<Color> color;

    for (int i = 0; i < COLOR_AMOUNT; i++){}

    return 0;
}
