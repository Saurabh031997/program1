#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x,y,t;
	cin>>n>>x>>y>>t;
	vector<int> v1;
	vector<int> v2;
	for(int i=1;i<n;i++){
	    if(i*x<=n){
	        cout<<i*x<<" ";
	        v1.push_back(i*x);
	    }
	    else{
	        break;
	    }
	}
	cout<<"\n";
	for(int i=1;i<n;i++){
	    if(i*y<=n){
	        cout<<i*y<<" ";
	        v2.push_back(i*y);
	    }
	    else{
	        break;
	    }
	}
	cout<<"\n";
	set<int> s;
	vector<int> v3;
	for(int i=0;i<v1.size();i++){
	    if(s.find(v1[i])!=s.end()){
	        continue;
	    }
	    else{
	        v3.push_back(v1[i]);
	        s.insert(v1[i]);
	    }
	}
	for(int i=0;i<v2.size();i++){
	    if(s.find(v2[i])!=s.end()){
	        continue;
	    }
	    else{
	        v3.push_back(v2[i]);
	        s.insert(v2[i]);
	    }
	}
	set<int> s1;
	for(int i=0;i<v3.size();i++){
	    if(v3[i]>=t){
	        break;
	    }
	    else{
	        if(s1.find(t-v3[i])!=s1.end()){
	            cout<<min(v3[i],t-v3[i])<<" "<<max(v3[i],t-v3[i])<<"\n";
	        }
	        else{
	            s1.insert(v3[i]);
	        }
	    }
	}
	return 0;
}