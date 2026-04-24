#include <iostream>

using namespace std;

enum Difficulty {
    EASY,    // 0
    MEDIUM,  // 1
    HARD     // 2
};

int main() {
    Difficulty gameLevel = MEDIUM;

    if (gameLevel == EASY) {
        cout << "Level is set to Easy." << endl;
    } else if (gameLevel == MEDIUM) {
        cout << "Level is set to Medium." << endl;
    }

    cout << "The underlying integer value is: " << gameLevel << endl;

    return 0;
}
