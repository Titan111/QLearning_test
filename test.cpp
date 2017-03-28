#include<iostream>
#include"IntVec2D.hpp"
#include"Environment.hpp"

using namespace std;

void vec_out(IntVec2D vec)
{
	cout<<vec.x<<","<<vec.y<<endl;
}

int main()
{
	Environment env;
	while(true)
	{
		int input;
		cin>>input;
		if(input==-1)
			break;
		env.recive_action(input);
		vec_out(env.get_robo_coord());
		cout<<env.return_reward()<<endl;
	}
}
