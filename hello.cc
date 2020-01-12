#include<bits/stdc++.h>
using namespace std;
int main() {
    string s,s2;
	cin>>s;
	vector<int> steps;
	int n = s.length();
	while(n > 1) {
		for(int i=0;i<n/2;i++) {
			if(s[i]!=s[n-1-i]) {
				s2.push_back(max(s[i],s[n-1-i]));
			}
		}
		if(n%2) {
			s2.push_back(s[n/2]);
		}
		if(s2 != "") {
			steps.push_back(stoi(s2));
		}
		s=s2;
		s2="";
		n=s.length();
	}
	int ans=steps.back();
	steps.pop_back();
	cout<<ans<<endl;
	for(int i = 0; i < steps.size(); i++) {
		cout<<steps[i]<<" ";
	}
}