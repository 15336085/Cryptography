#include <iostream>
#include <string>
using namespace std;

int modulo(int n){
	int res = n;
	if(n > 0)
		while( res >= 26) res-=26;
	else if(n < 0)
		while(res < 0) res+=26;
	return res;
}
string encryption(string inp, int key){
	int size = inp.length();
	for(int i = 0; i < size; i++){
		if(inp[i] >= 'a' && inp[i] <= 'z'){
			int dif = inp[i] - 'a';
			inp[i] = 'a' + modulo(dif + key);
		}
		else if(inp[i] >= 'A' && inp[i] <= 'Z'){
			int dif = inp[i] - 'A';
			inp[i] = 'A' + modulo(dif + key);
		}
		else{
			inp = "invalid input!";
			return inp;
		}
	}
	return inp;
}
string decryption(string inp, int key){
	int size = inp.length();
	for(int i = 0; i < size; i++){
		if(inp[i] >= 'a' && inp[i] <= 'z'){
			int dif = inp[i] - 'a';
			inp[i] = 'a' + modulo(dif - key);
		}
		else if(inp[i] >= 'A' && inp[i] <= 'Z'){
			int dif = inp[i] - 'A';
			inp[i] = 'A' + modulo(dif - key);
		}
		else{
			inp = "invalid input!";
			return inp;
		}
	}
	return inp;
}

void list(){
	cout << "************************************************" << endl;
	cout << "*      Caesar Cryption System by 15336085      *" << endl;
	cout << "*[1] Encryption                                *" << endl;
	cout << "*[2] Decryption                                *" << endl;
	cout << "*[0] Exit                                      *" << endl;
	cout << "************************************************" << endl;
}

int main(){
	list();
	int num;
	cin >> num;
	while(num!=0){
		if(num == 1){
			string inp; int key;
			cout << "请输入明文:" ; cin >> inp; cout << endl;
			cout << "请设置密钥:"; cin >> key; cout << endl;
			string result = encryption(inp, key);
			cout << "密文为:" << result << endl;
		}
		if(num == 2){
			string inp; int key;
			cout << "请输入密文:" ; cin >> inp; cout << endl;
			cout << "请输入密钥:"; cin >> key; cout << endl;
			string result = decryption(inp, key);
			cout << "明文为:" << result << endl;	
		}
		list();
		cin >> num;
	}
	cout << "已退出。" << endl;
	return 0;
}