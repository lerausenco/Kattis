#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int countChar(string s){
	int n = 0;
	for (auto i : s){
		if (i == 'a'){
			n++;
		}
	}
	return n;
}
int main(){
	string jonStr, doctorStr;
	cin >> jonStr;
	cin >> doctorStr;

	if (countChar(jonStr) >= countChar(doctorStr)){
		cout << "go";
	} else {
		cout << "no";
	}
	

}