#include<vector>
#include<set>
vector < int > sortedArray(vector < int > a, vector < int > b) {
    vector<int> v;
    set<int> s;
    for(int i=0;i<a.size();i++){
        s.insert(a[i]);
    }
    for(int i=0;i<b.size();i++){
       s.insert(b[i]);
    }
    for(int x :s){
      v.push_back(x);
    }
    return v;
