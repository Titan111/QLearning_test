#include<iostream>

using namespace std;
int main()
{
	Agent agent(); 
	for(int i=0;i<1000;i++)
	{
		int count=0;
		Environment env();
		do
		{
			int next_act = agent.decide_action(env.get_state());
			env.recive_action( next_act );
			agent.recive_reward( env.return_reward() );
		}while(env.is_end())
		cout<<count<<endl;
	}
}
