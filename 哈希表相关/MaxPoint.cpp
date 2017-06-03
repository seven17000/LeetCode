/*
*问题：给出二维平面上的n个点，求最多有多少点在同一条直线上。
*答者：Seven17000
*思路：以一个点为基准点，计算后面每个点与之构成直线的斜率，相等则说明这些点在一条直线上。每个点都要作为一次基准点。
*/

struct Point 
{
    int x;
    int y;
    Point() : x(0), y(0) {}
    Point(int a, int b) 
		: x(a)
		, y(b) 
	{}
};

int MaxPoint(vector<Point> Points)
{
	unordered_map<float, int> mp;
	int ret = 0;
	for (int i = 0; i < Points.size(); i++)
	{
		mp.clear();
		mp[INT_MIN] = 0;//设置哈希表value初值为0；
		int self = 1;
		for (int j = 0; j < Points.size(); j++)
		{
			if (i == j)
				continue;
			if (Points[i].x == Points[j].x && Points[i].y == Points[j].y)
			{//判断两个点是否完全一样
				self++;
				continue;
			}
			float k = Points[i].x == Points[j].x ? INT_MAX : (float)(Points[j].y - Points[i].y)/(Points[j].x - Points[i].x);
			//横坐标相等时说明此时两点构成的直线与y轴平行，不相等则计算其k
			//这里计算的key值要转成float型，不然会导致计算结果不准确
			mp[k]++;//k斜率计数加一
		}
		for (auto i = mp.begin(); i != mp.end(); i++)
		{
			if (i->second + self > ret)
			{
				ret = i->second + self;
			}
		}
	}
	return ret;
}

int main()
{

	Point p1(1, 2), p2(3, 6), p3(0, 0), p4(1, 3);
	vector<Point> p = {p1,p2,p3,p4};
	int i = MaxPoint(p);
	cout << i << endl;
	return 0;
}