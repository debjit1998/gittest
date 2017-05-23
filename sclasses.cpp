#include <sstream>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void f(const string& s){
	istringstream is(s);
	vector<char> v;

	char tmp;
	while(is>>tmp){
		v.push_back(tmp);
	}

	for (vector<char>::iterator it=v.begin();it!=v.end();it++)
		cout<<*it;
}

string f1(vector<char>& v){
	ostringstream os;
	for (vector<char>::iterator it=v.begin();it!=v.end();it++)
		os<<*it;
	string s=os.str();
	return s;
}

int main(){
	string s="hello world..123mike testing 456";
	f(s);
	vector<char> v;
	char tmp;
	for(int i=0;i<10;i++){
		cin>>tmp;
		v.push_back(tmp);
	}
	string s1=f1(v);
	cout<<s1<<endl;
	return 0;
}
