#include <iostream>
using namespace std;

int main()
{
	class Wall
	{
	public:
		enum
		{
			ROW = 25, //����
			COL = 25  //����
		};
		void initWall(); //ǽ�ڳ�ʼ��
		void drawWall(); //����ǽ��
		void setWall(int x, int y, char c);
		char getWall(int x, int y);
	private:
		char gameArray[ROW][COL];
	};

	system("pause");
	return 0;
}