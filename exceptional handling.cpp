#include <iostream>
using namespace std;

int main() {
    try {
        int a = 10, b = 0;

        if (b == 0)
            throw "Division by zero!";

        cout << "Result = " << a / b << endl;
    }
    catch (const char* msg) {
        cout << msg << endl;
    }
    catch (...) {
        cout << "Some other error!" << endl;
    }

    cout << "Program ended." << endl;
    return 0;
}
