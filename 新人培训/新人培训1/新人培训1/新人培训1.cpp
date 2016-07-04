// 新人培训1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "functionT_classT.h"
#include <vector>
#include <list>
#include <deque>
#include <map>
#include <set>



using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
/*
1.模板使用:类模板,函数模板
写一个简单的小例子程序
*/
	//模板函数测试
	int a=1,b=2;
	std::cout<<compare(a,b)<<std::endl;
    //模板类测试
	int test_a[]={1,2,3};
	std::vector<int> iv(test_a,test_a+3);
	St<int> test_ts(iv);
	std::cout<<test_ts[0]<<std::endl;
	test_ts[0]=4;
	std::cout<<test_ts[0]<<std::endl;

/*
2.STL容器使用: vector, list, map, set，deque明白排序的容器的排序规则    
写一个例子程序:
添加,删除,遍历,指定访问元素等操作;
并在For遍历循环中进行删除操作
熟悉Forward iterators，Bidirectional iterators，Random access iterators，并各写一个列子。
*/
	vector<int> two_v;
	list<int> two_l;
	map<int,int> two_m;
	set<int> two_s;
	deque<int> two_d;
	for(int i=0;i<10;i++){
		two_v.push_back(i); //0,1,2,...,10
		two_l.push_front(i);//10,9,...,0
		two_m[i]=i;         //(0,0),(1,1),...
		two_s.insert(i);    //0,1,2,...
		two_d.insert(two_d.begin(),i);//10,9,8,...
	}
	two_v.pop_back();
	two_l.pop_front();
	two_m.erase(5);
	two_s.erase(two_s.begin());
	two_d.erase(two_d.begin(),two_d.end()-1);
    cout<<endl<<"vector"<<endl;
	for(vector<int>::size_type i=0;i<two_v.size();i++) cout<<two_v[i];
	//for(auto i:two_v) cout<<i;
	cout<<endl<<"list"<<endl;
	for(list<int>::iterator  i=two_l.begin();i!=two_l.end();i++) cout<<(*i);
    cout<<endl<<"map"<<endl;
	for(map<int,int>::iterator i=two_m.begin();i!=two_m.end();i++) cout<<"("<<i->first<<","<<i->second<<")"<<" ";
	cout<<endl<<"set"<<endl;
	for(set<int>::iterator i = two_s.begin();i!=two_s.end();i++) cout<<(*i);
	//for(auto i:two_s) cout<<i;
	cout<<endl<<"deque"<<endl;
	for(deque<int>::reverse_iterator i= two_d.rbegin();i!=two_d.rend();i++) cout<<(*i);
	//for(auto i:two_d) cout<<i;






	return 0;
}

