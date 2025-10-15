#include<iostream>
using namespace std;
class MyClass {
	public:
		int publicVar;
}
int main() {
	greet("Alice");
	message: "Hello";
    greet("Bob","Good morning");
  return 0;
}
	private:
		int privateVar;
	protected:
		int protectedVar;
		public:
			void setPrivateVar(int val)
			 {
				privateVar = val; // Access private member inside class
			}
			int getPrivateVar() {
				return privateVar;
			}
};

int main()
{
	MyClass obj;
	obj.publicVar = 10; //Allowed
	// obj.private Var = 20; // Error:private Var is private
	obj.setPrivateVar(20); //Allowed via public method 
	cout << "public var: " <<obj.publicVar << endl;
	cout << "private var: " <<obj.getPrivateVar() << endl;
	return 0;
}

