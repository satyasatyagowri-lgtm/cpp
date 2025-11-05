#include <iostream>
using namespace std;

int main() {
    try {
        int x;
        cout << "Enter a number: ";
        cin >> x;

        if (x == 0)
            throw 0;              // integer exception
        else if (x == 1)
            throw 'A';            // character exception
        else if (x == 2)
            throw 3.14;           // double exception
        else
            cout << "No exception thrown!" << endl;
    }

    catch (int e) {
        cout << "Caught an integer exception: " << e << endl;
    }
    catch (char e) {
        cout << "Caught a character exception: " << e << endl;
    }
    catch (double e) {
        cout << "Caught a double exception: " << e << endl;
    }

    cout << "Program ended normally.";
    return 0;
}
