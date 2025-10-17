#include<iostream>
using namespace std;
class animal{
	public:
		animal()
		{
			cout<<"animalss constructor"<<endl;
		}
		~animal(){
			cout<<"animalss destructor"<<endl;
		}
};
class dog:public animal{
	public:
		dog()
		{
			cout<<"dog constructor"<<endl;
		}
		~dog(){
			cout<<"dog destructor"<<endl;
		}
};
int main()
{
	dog obj;
	return 0;
}
