#include<iostream>
#include<string.h>
using namespace std;

class place{
	char place_name;
	char city_name;
	static char state_name;
	static char country_name;
	
	public :
	
	void saputara()
	{
		 cout<<"palace name is saputara "<<place_name<<endl
		 	 <<"saputara is in dang "<<city_name<<endl
		 	 <<"saputara is in gujarat"<<state_name<<endl
		 	 <<"saputara is in india"<<country_name<<endl;
	}
	
};


int main()
{
	place p;
	p.saputara();
	return 0;
}
