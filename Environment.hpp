#ifndef __ENVIRONMENT__
#define __ENVIRONMENT__

#include"IntVec2D.hpp"

class Environment
{
	private:
		static const int MAX_ACTION_TYPE_ = 4;
		IntVec2D robo_coord_;
		IntVec2D good_point_;
		IntVec2D move_vec_[MAX_ACTION_TYPE_];
	public:
		Environment()
		{
			robo_coord_.init(1,1);
			good_point_.init(5,5);
			move_vec_[0].init(1,0);
			move_vec_[1].init(-1,0);
			move_vec_[2].init(0,1);
			move_vec_[3].init(0,-1);
		}

		void recive_action(int action)
		{
			if(action>=0&&action<=3)
			{
				IntVec2D next_coord=robo_coord_+move_vec_[action];
				if(next_coord.in_area(0,0,10,10))
				{
					robo_coord_=next_coord;
				}
			}
		}

		IntVec2D get_robo_coord()
		{
			return robo_coord_;
		}

		double return_reward()
		{
			if(robo_coord_==good_point_)
				return 1;
			else if(!robo_coord_.in_area(1,1,9,9))
				return -1;
			else
				return 0;
		}
};
#endif

