#include <iostream>
using namespace std;

class myclass
{	public:
		int get_x(void){return m_x;}
		int get_y(void){return m_y;}
		myclass(int x, int y)
		{
			m_x = x;
			m_y = y;
		}
	private:
		int m_x;
		int m_y;

};


int main()
{
	myclass my(1,2);

	cout<<"x="<<my.get_x()<<endl;
	cout<<"y="<<my.get_y()<<endl;

	return 0;
}
