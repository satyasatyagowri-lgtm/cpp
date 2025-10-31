//outside
#include <iostream>
#include <cstring>
using namespace std;
class student 
{
	private:
    		int id;
    		char *sname;
	public:
   		 void read(int, char *);
    		 void print();
};
void student::read(int a, char *s) 
{
id = a;
    sname = s;
}
void student::print() {
    cout << "id = " << id << endl;
    cout << "name = " << sname << endl;
}
int main() 
{
    student s;
    s.read(54,"satya");
	 s.print();  
}
