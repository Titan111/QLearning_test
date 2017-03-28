#ifndef __INTVEC2D__
#define __INTVEC2D__

class IntVec2D
{
	private:
	public:
		int x;
		int y;

		IntVec2D()
		{
			init(0,0);
		}
		IntVec2D(int tmp_x,int tmp_y)
		{
			init(tmp_x,tmp_y);
		}

		void init(int tmp_x,int tmp_y)
		{
			x=tmp_x;
			y=tmp_y;
		}

		bool in_area(int xmin,int ymin,int xmax,int ymax){
			return (
					x>=xmin && x<=xmax&&
					y>=ymin && y<=ymax
					);
		}

		void operator += (IntVec2D add)
		{
			this->x+=add.x;
			this->y+=add.y;
		}

		IntVec2D operator + (IntVec2D add)
		{
			return IntVec2D(this->x+add.x , this->y+add.y);
		}

		void operator = (IntVec2D copy)
		{
			this->x=copy.x;
			this->y=copy.y;
		}

		bool operator == (IntVec2D comparison)
		{
			return (this->x==comparison.x&&
							this->y==comparison.y);
		}


};
#endif
