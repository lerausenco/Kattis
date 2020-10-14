#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>


using namespace std;

int calculateTotal(vector<int> priceList){
	int total = 0;
	for (int i = priceList.size()-3; i > -1; i = i - 3){
		total += priceList[i];
	}
	return total;
}

int main(){
	string nStr;
	getline(cin, nStr);
	int n = stoi(nStr);

	string prices;
	getline(cin, prices);
	istringstream iss (prices);
	
	
	int price;
	vector<int> priceList;
	
	for (int i = 0; i < n; i++){
		iss >> price;
		priceList.push_back(price);
	}

	if (n >= 3){
		sort(priceList.begin(), priceList.end());

		int total = calculateTotal(priceList);

		int remainder = n % 3;

		switch (remainder)
		{
		case 0:
			cout << total;
			break;
		case 1:
			cout << total + priceList[0];
			break;
		case 2:
			cout << total + priceList[0] + priceList[1];
			break;
		default:
			break;
	} 
	} else {
		cout << "0";
	}
}