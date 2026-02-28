// COMSC-210 | Lab 14 | Johnathan Perez Baltazar

#include <iostream>
using namespace std;

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
    return 0;
}
