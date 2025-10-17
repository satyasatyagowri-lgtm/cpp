#include<iostream>
using namespace std;

class A {
    public:
        void display(){
            cout << "class A display()" << endl;
        }
};

class B: virtual public A {
    void show(){
        cout << "class B show()" << endl;
    }
};

class C: virtual public A {
    void show(){
        cout << "class C show()" << endl;
    }
};

class D: public B, public C {
    void show(){
        cout << "class D show()" << endl;
    }
};

int main() {
    B b;  
    C c;  
    D d;

    b.display();  
    c.display();
    d.display();

    return 0;
}













































/*#include<iostream>
using namespace std;
class A {
	public:
		void display(){
			cout<<"class A display()"<<endl;
		}
};
class B: virtual public A{
	void show(){
		cout<<"class B show()"<<endl;
	}
};
class C: virtual public A{
	void show(){
		cout<<"class C show()"<<endl;
	}
};
class D: public B, public C{
	void show(){
		cout<<"class D show()"<<endl;
	}
};
int main(){
	B.b;
	C.c;
	D d;
	b.display();
	c.display();
	d.display();
	return 0;	
	}*/
