#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//功能描述：
//map容器进行插入数据和删除数据
//
//函数原型：
//insert(elem);     //在容器中插入元素。
//clear();                    //清除所有元素
//erase(pos);               //删除pos迭代器所指的元素，返回下一个元素的迭代器。
//erase(beg, end);     //删除区间[beg,end)的所有元素 ，返回下一个元素的迭代器。
//erase(key);             //删除容器中值为key的元素。

#include <map>

void printMap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << " value = " << it->second << endl;
	}
	cout << endl;
}

void test01()
{
	//插入
	map<int, int> m;
	//第一种插入方式
	m.insert(pair<int, int>(1, 10));

	//第二种插入方式
	m.insert(make_pair(2, 20));

	//第三种插入方式（不推荐） 
	m.insert(map<int, int>::value_type(3, 30));

	//第四种插入方式
	m[4] = 40;

	//cout << m[5] << endl;;//如果访问不到，它会创建一个出来，实值为0
	printMap(m);

	//删除
	m.erase(m.begin());
	printMap(m);

	m.erase(3);//删除指定键值的队组
	printMap(m);

	//清空
	m.erase(m.begin(), m.end());
	m.clear();
	printMap(m);
}

int main() 
{

	test01();
	return 0;
}
