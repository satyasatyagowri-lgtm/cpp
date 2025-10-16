#include<iostream>
using namespace std;
class a{
	public:
		void displaya(){
			cout<<"class a"<<endl;
		}
};
class b:public a{
  public:
  	void displayb(){
  		cout<<"class b"<<endl;
	  }
};
class c:public b{
	public:
		void displayc(){
			cout<<"class c"<<endl;
		}
};
int main()
{
	c obj;
	obj.displaya();
	obj.displayb();
	obj.displayc();
	return 0;
}
