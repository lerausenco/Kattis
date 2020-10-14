#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
	int n = 0;
	cin >> n;

	vector<int> trees(n);
	for (int i = 0; i < n; i++){
		cin >> trees[i];
	}

	sort(trees.begin(), trees.end());
	int days = 2;

	vector<int> planted(n);
	for (int i = n-1; i >= 0; --i){

		planted.push_back(trees[i]);
		days++;

		for (auto it = planted.begin(); it < planted.end(); it ++){
			if (*it!=0) { (*it)--;}
		}

	}

	days += *max_element(planted.begin(), planted.end());

	cout << days;
}