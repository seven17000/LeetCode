
/*
*���⣺дһ���㷨���ж�һ�����ǲ���"������"��
һ�����ǲ��ǿ�������ô����ģ�
����һ����������ÿһ�ν������滻Ϊ��ÿ��λ���ϵ����ֵ�ƽ���ͣ�Ȼ���ظ�
�������ֱ���������Ϊ1����������ѭ����ʼ�ձ䲻��1��������Ա�Ϊ1����ô
��������ǿ�������
*���ߣ�Seven17000
*ע�⣺ѡȡ���ʵ�����
*/
#include<iostream>
#include<unordered_set>
using namespace std;

bool isHappy(int n)
{
	if (n == 1)
	{
		return true;
	}

	if (n < 1)
	{
		return false;
	}

	unordered_set<int> num;
	num.insert(n);

	while (1)
	{
		int s = 0;
		while (n)
		{
			s += (n) * (n);
			n = n / 10;
		}

		if (s == 1)
		{
			return true;
		}
		else if (num.find(s) != num.end())
		{
			return false;
		}
		n = s;
		num.insert(s);
	}

}