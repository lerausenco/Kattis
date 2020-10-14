#include <string>
#include <iostream>

using namespace std;

bool isvowel(char c) {
    switch(c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'y':
            return true;
        default:
            return false;
    }
}
int main(){

	int n = -1;
	while (cin >> n && n!=0){
	
	
	int max = 0;

	string word;
	string favouriteWord;

	
	for (int i = 0; i < n; i++){
		
		cin >> word;
		int occurences = 0;
		for (int j = 0; j < word.length() - 1; j++){
			if (word[j] == word[j+1] && isvowel(word[j])){
				occurences++;
			}
		} 
		if (occurences > max){
			max = occurences;
			favouriteWord = word;
		}
		
		
	}
		
	cout << favouriteWord << endl;
	} 
}