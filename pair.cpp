#include<bits/stdc++.h>
using namespace std;


int main(){
	pair<int,string> p;
	p = make_pair(1,"Ruhul Amin");
	cout << p.first << " " << p.second;
	int a[3] = {1,2,3};
	string b[3] = {"Ruhul","Sakib","Sajid"};
	cout << endl;
	pair<int,string> nameInfo[3];
	for(int i = 0;i<3;i++){
		nameInfo[i] = {a[i],b[i]};	
	}
	
	swap(nameInfo[0],nameInfo[2]);
	
	for(int i = 0;i<3;i++){
		cout << nameInfo[i].first << " " << nameInfo[i].second << endl;
	}
	
	
	
	
	
	return 0;
}
