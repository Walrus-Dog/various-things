#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <windows.h>
using namespace std;

const int BLUE = 1;
const int GREEN = 2;
const int RED = 3;
const int WHITE = 15;

void clearScreen(int characterLength) {
    for (int i = 0; i < characterLength; i++) {
        cout << "\b";
    }
}

void changeColor(int color) {
    HANDLE hConsole;

    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

void showLoadingScreen() {
    int i;
    string closed = "- - -", open = "* * *";
    int color[] = { RED, GREEN, BLUE };

    cout << closed;

    for (i = 0; i < 3; i++) {
        Sleep(1000);

        clearScreen(5);
        changeColor(color[i]);

        cout << open;

        Sleep(1000);

        clearScreen(5);
        changeColor(WHITE);

        cout << closed;
    }
}

void showBlinkingLights() {
        changeColor(RED);
        cout << "BLINK";
        Sleep(1000);

        changeColor(GREEN);
        cout << "ING";
        Sleep(1000);

        changeColor(BLUE);
        cout << " LIGHTS";
        Sleep(1000);

        changeColor(WHITE);
}

int main()
{
    cout << "\n\n\n";
    cout << "      ";

    showLoadingScreen();
    showBlinkingLights();

    cout << "\n\n\n";

    return 0;
}
