//Find first non repeating character in the word
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string string = "geeksforgeeksfor";
	int index = -1;
	char fnc = ' ';
	
	if(string.size()==0){
	cout<<"EMPTY STRING"<<endl;
	}

	for (auto i : string) {
		if (count(string.begin(), string.end(), i) == 1) {
			fnc = i;
			break;
		}
		else {
			index += 1;
		}
	}
	if (index == string.size()-1) {
		cout << "All characters are repeating" << endl;
	}
	else {
		cout << "First non-repeating character is " << fnc
			<< endl;
	}
	return 0;
}

