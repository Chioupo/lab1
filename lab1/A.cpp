#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num;
	cout << "Please enter a number.\n";
	cin >> num;
	while(num!=1){
		cout << num;
		cout << " ";
		if(num%2==1)
		num=3*num+1;
		else
		num=num/2;
	}
	cout << num;
	cout << " ";
	return 0;
}
