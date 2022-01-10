#include <iostream>
using namespace std;

int main()
{
	class Wall
	{
	public:
		enum
		{
			ROW = 25, //行数
			COL = 25  //列数
		};
		void initWall(); //墙壁初始化
		void drawWall(); //画出墙壁
		void setWall(int x, int y, char c);
		char getWall(int x, int y);
	private:
		char gameArray[ROW][COL];
	};

	system("pause");
	return 0;
}