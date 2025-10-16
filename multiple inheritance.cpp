#include<iostream>
using namespace std;
class A{
	public:
		void dispalyA(){
			cout<<"classA"<<endl;
		} 
		
};
class B{
	public:
		void displayB(){
			cout<<"classB"<<endl;
		}
};
class C:public A, public B{
	public:
		void displayC(){
		cout<<"classc"<<endl;
		}
};
int main()
{
	C objc;
	objc.dispalyA();
	objc.displayB();
	objc.displayC();
	return 0;
}
