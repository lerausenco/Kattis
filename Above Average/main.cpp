#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <vector>



using namespace std;

double average(vector<int> vec, int size){
	int total = 0;
	for (auto v: vec){
		total += v;
	}
	return static_cast<double>(total)/size;
}

double aboveAverage(vector<int> vec, double avg, int size){
	int numAboveAverage = 0;

	for (auto v: vec){
		if (v > avg ){
			numAboveAverage++;
		}
	}

	return static_cast<double>(numAboveAverage)/size * 100.0;
}

int main(){
	string nStr;
	getline(cin,nStr);
	int n = stoi(nStr);

	vector<int> results;
	

	for (int i = 0; i < n; i++){
		string line;
		getline(cin, line);
		istringstream iss(line);
		
		
		int size = 0;
		iss >> size;
		
		for (int j = 0; j < size; j ++){
			int score = 0;
			iss >> score;
			results.push_back(score);
		}

	float averageNum = average(results, size);
	float percentage = aboveAverage(results, averageNum, size);
	cout << fixed << setprecision(3) << percentage << "%" <<endl;
	results.clear();
	}
}