#include <iostream>
#include <string>

using namespace std;
int main(){
	string text;
	cin >> text;

string ans;

for (auto c: text){
	if (c == '<'){
		ans.pop_back();
	} else {
		ans.push_back(c);
	}
}
cout << ans;
cin.get();
}