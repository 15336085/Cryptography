#include <iostream>
#include <string>
using namespace std;

string encryption(int key1, int key2, string input){
	string output  = input;
	for(int i = 0; i < output.length(); i++){
		int t = (output[i] - 'a') * key1 + key2;
		output[i] = 'a' + t % 26;
	}
	return output;
}

string decryption(int key1, int key2, string input){
	string output  = input;
	for(int i = 0; i < output.length(); i++){
		int t = (output[i] - 'a'- key2);
		while(t%key1 != 0){
			t = t + 26;
		}
		t = t /key1;
		output[i] = 'a' + t ;
	}
	return output;
}

int main(){
	cout << "1 en 2 de" << endl;
	int ch; string input; string output;
	int key1, key2;
	cin >> ch;
	cout << "key:" ; cin >> key1 >> key2;
	cout << "input: "; cin >> input;
	for(int i = 0; i < input.length(); i++){
		input[i] = tolower(input[i]);
	}
	if(ch == 1){
		output = encryption(key1, key2, input);
		cout << output << endl;
	}
	else{
		output = decryption(key1, key2, input);
		cout << output << endl;
	}
	system("pause");
	return 0;
}