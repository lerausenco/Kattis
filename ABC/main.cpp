#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
	vector<int> nums(3);
	cin >> nums[0] >> nums [1] >> nums[2];
	sort(nums.begin(), nums.end());

	string order;
	cin >> order;

	for (auto it : order){
		char letter = it;
		switch (letter)
		{
		case 'A':
			cout << nums[0] << " ";
			break;
		case 'B':
			cout << nums[1] << " ";
			break;
		case 'C':
			cout << nums[2] << " ";
			break;
		default:
			break;
		}

	}
	cin.get();
}