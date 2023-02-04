#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<algorithm>
using namespace std;
int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	/*
	STL ARRAY

	array<int, 4> a = { 1,2,3,4 };
	int size = a.size();
	for (int i = 0; i < size; i++)
		cout << a[i] << endl;
	/*some operation on array stl*/
	/*cout << "enter an 2nd index " << a.at(2) << endl;
	cout << "Emptry or not " <<  a.empty()
		<< endl;
	cout << "first elment " <<  a.front() << endl;
	cout << "last element " <<  a.back() << endl;
	*/

	//vector

	vector<int> v; //inititlasation

	vector<int>b(5, 1);			// when size is known and want to repeat particular element
	for (int i : b) {
		cout << "elements " << i << endl;
	}cout << endl;




	//when to copy another vector
	vector<int>copied(b);
	for (int i : copied) {
		cout << "Copied elements " << i << endl;
	}cout << endl;


	cout << "capacity" << v.capacity() << endl;
	v.push_back(1);
	cout << "capacity" << v.capacity() << endl;
	v.push_back(2);
	cout << "capacity" << v.capacity() << endl;
	v.push_back(3);
	cout << "capacity" << v.capacity() << endl;
	cout << "size" << v.size() << endl;

	cout << "element at index 2 = " << v.at(2) << endl;

	cout << "front" << v.front() << endl;
	cout << "back" << v.back() << endl<<endl;

	cout << "before loop" << endl;
	for (int i : v) {
		cout << i << " ";
	}cout << endl;
	v.pop_back();

	cout << "after loop" << endl;

	for (int i : v) {
		cout << i << " ";
	}cout << endl;


	cout << "before clear size and capcity " << v.size() << " " << v.capacity() << endl;
	v.clear();
	cout << "after clear sizea and capaity" << v.size() << " " << v.capacity() << endl;

	//-------------------------------------
				//ITERATOR

	{
		//                               VECTOR                
	   // VECTOR DECLARATON
		int size = 6;
		vector<int> p(size);
		vector<int> P = { 10,34,45,6,64,65 };

		//operation
		P.push_back(11);      //b={10,34,45,6,64,64,11};
		P.pop_back();      //b={10,34,45,6,64,64};



	   //ITERATOR
		for (auto i : P)
		{
			std::cout << i << " ";
		}cout << endl;

		vector<int>::iterator itr;
		for (itr = P.begin(); itr!=P.end(); itr++)
		{
			cout << "USING ITERATOR"<<*itr<<"\n	";
		}

	}

	

	// deque

cout<<"\n"<<"               DEQUE"<<endl;
	deque<int> d;

	d.push_back(1);
	d.push_front(2);

	for (int i : d) {
		cout << i << " ";
	}
	d.pop_front();
	cout << endl;
	for (int i : d) {
		cout << i << " ";
	}

	d.push_back(1);
	d.push_front(2);
	cout << "print first index Element= " << d.at(1) << endl;
	cout << "Front " << d.front()<<endl;
	cout << "back "<<d.back()<<endl;
	cout << "Empty " << d.empty()<<endl;

	cout << "before erase size" << d.size() << endl;

	d.erase(d.begin(), d.begin() + 1);

	cout << "after erase size " << d.size() << endl;
	for (int i : d) {
		cout << "left element " << i << endl;
	}



/*

	///////list////////

list<int>l;// initialisation
list<int>copied(l);
cout << "copied elements from l ";
for (int i : copied) {
	cout << i << " ";
}cout << endl;
list<int>multiple(5, 100);
cout << "printing same element multiple times ";
for (int i: multiple) {
	cout  << i << " ";
}cout << endl;

cout << "puschback and push front ";
l.push_back(1);
l.push_front(2);

for (int i : l) {
	cout << i << " ";
}cout<<endl;
l.erase(l.begin());
cout << "After erase " ;
for (int i : l) {
	cout << i << " ";
}cout << endl;
cout << "size of list " << l.size();




		////STACK(LIST: IN FIRST OUT CONCEPT)////

	stack<string> s;
	s.push("suraj");
	s.push("kumar");
	s.push("mourya");
	cout << "Top elements = " << s.top() << endl;

	s.pop();
	cout << "top element after pop = " << s.top() << endl;
	cout << "size of stack " << s.size() << endl;
	cout << "empty or not "<<s.empty()<<endl;


		////Queue(line :first in first out)

	queue<string> q;

	q.push("suraj");
	q.push("kumar");
	q.push("mourya");

	cout << "size before pop = " << q.size()<<endl;
	cout << "first element  = " << q.front() << endl;
	q.pop();
	cout << "after pop = " << q.front()<<endl;
	cout <<"size after pop = " << q.size()<<endl;


	/////Priority queue

//max heap
priority_queue<int> maxi;
//min heap
priority_queue<int, vector<int>, greater<int>> mini;

cout << "for maximum first(max heap) "<<endl;
maxi.push(1);
maxi.push(3);
maxi.push(2);
maxi.push(0);
int n = maxi.size();
for (int i = 0; i < n; i++) {
	cout << maxi.top() << " ";
	maxi.pop();
}cout << endl;

// for mini
cout << "for minimum (mini heap) " << endl;
mini.push(1);
mini.push(3);
mini.push(2);
mini.push(0);
int m = mini.size();
for (int i = 0; i < m; i++) {
	cout <<mini.top() << " ";
	mini.pop();
}cout << endl;



//////set(store only uniqe element and cant be modified and sorted elements)

set<int> s;
s.insert(5);
s.insert(4);
s.insert(5);
s.insert(2);
s.insert(9);
s.insert(6);
s.insert(3);
cout << "size of set before printing  " << s.size() <<" same elements are combined to one elmenet " << endl;
for (auto i : s) {
	cout << i << endl;
 }
cout << "size of set = " << s.size()<<endl;

set<int>::iterator it = s.begin();
it++; // deleting 2nd element

s.erase(it);
for (auto i : s) {
	cout << i << endl;
}cout << "2nd element deleted which is 3 "<<endl<<endl;

cout << "9 present or not = " << s.count(9)<<endl;

set<int>::iterator itr = s.find(4);
cout<<"elements after 4 =:";
for (auto it = itr; it != s.end(); it++) {
	cout << *it << " ";
}cout << endl;




			/////MAP/{KEY AND VALUE and results in sorted order}/

map<int, string>m;
m[1] = "suraj";
m[7] = "kumar";
m[3] = "Mourya";


m.insert({ 5,"skm" });

for (auto i : m) {
	cout << i.first << " = " << i.second << endl;
}
cout << "finding 7 = " << m.count(7)<<endl;

m.erase(3);
cout << "after erase of 3" << endl;
for (auto i : m) {
	cout << i.first << " = " << i.second << endl;
}
cout << "from here iterator"<<endl;
auto it = m.find(5);
for (auto i = it; i != m.end(); i++)
{
	cout << (*i).first << endl;
}



			////ALGORITHM/////

vector<int> v;
v.push_back(3);
v.push_back(1);
v.push_back(4);
v.push_back(7);

cout << "Finding 4 = " << binary_search(v.begin(), v.end(),4) << endl;

cout << "lower bound = " << lower_bound(v.begin(), v.end(), 4) - v.begin() << endl;

*/



}