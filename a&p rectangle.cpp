#include<iostream>
using namespace std;
class rectangle
{
	int length;
	int width;
	public:
		rectangle(int l=5,int w=2)
		{
			length=l;
			width=w;
			cout<<"area is:"<<(length*width)<<endl;
			cout<<"perimeter is: "<<2*(length+width);
		}
};
int main()
{
	rectangle rec;
	return 0;
}
