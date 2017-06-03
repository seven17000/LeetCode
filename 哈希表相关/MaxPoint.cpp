/*
*���⣺������άƽ���ϵ�n���㣬������ж��ٵ���ͬһ��ֱ���ϡ�
*���ߣ�Seven17000
*˼·����һ����Ϊ��׼�㣬�������ÿ������֮����ֱ�ߵ�б�ʣ������˵����Щ����һ��ֱ���ϡ�ÿ���㶼Ҫ��Ϊһ�λ�׼�㡣
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
		mp[INT_MIN] = 0;//���ù�ϣ��value��ֵΪ0��
		int self = 1;
		for (int j = 0; j < Points.size(); j++)
		{
			if (i == j)
				continue;
			if (Points[i].x == Points[j].x && Points[i].y == Points[j].y)
			{//�ж��������Ƿ���ȫһ��
				self++;
				continue;
			}
			float k = Points[i].x == Points[j].x ? INT_MAX : (float)(Points[j].y - Points[i].y)/(Points[j].x - Points[i].x);
			//���������ʱ˵����ʱ���㹹�ɵ�ֱ����y��ƽ�У�������������k
			//��������keyֵҪת��float�ͣ���Ȼ�ᵼ�¼�������׼ȷ
			mp[k]++;//kб�ʼ�����һ
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