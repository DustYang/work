#include<iostream>
#include<list>
#include<vector>
#include<random>
#include"ArcNode.h"
using namespace std;
template <typename T>
int mian()
{
	list<T> ll;
	for(int i=0;i<8;i++){
		ll.insert(new ArcNode(new rand(10),null));
		cout<<ll.pop_front(i);
	}
	
	return 0;
}