#include <iostream>
using namespace std;
class num {
public:
    void display() {
        cout << "number will be displayed" << endl;
    }
};
class a : public num {
public:
    void displaya() {
        cout << "a will be displayed" << endl;
    }
};
class b : public num {
public:
    void displayb() {
        cout << "b will be displayed" << endl;
    }
};
class c : public num {
public:
    void displayc() {
        cout << "c will be displayed" << endl;
    }
};
int main() {
    a o1;
    o1.display();
    o1.displaya();
    b o2;
    o2.display();
    o2.displayb();
	c o3;
    o3.display();
    o3.displayc();
    return 0;
}
