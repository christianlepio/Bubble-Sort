#include<iostream>
using namespace std;

int main(){
	//header
	for(int r = 1; r <= 12; ++r){
		for(int i = 1; i <= 8; i+=1){
			cout << "=";
		}
	}
	cout << "\n\tB\tU\tB\tB\tL\tE\t \tS\tO\tR\tT\n";
	for(int r = 1; r <= 12; ++r){
		for(int i = 1; i <= 8; i+=1){
			cout << "=";
		}
	}
	cout << "\n\n";
	//size of array
	int n;
	cout << "\n\nEnter storage size: ";
	cin >> n;
	int list[n];
	cout << "\n\n";
	//input of element
	for(int i = 0; i < n; i++){
		cout << "Enter element of index [" << i << "]: ";
		cin >> list[i];
	}
	//output of element
	cout << "\n\nUNSORTED LIST:\t";
	for(int i = 0; i < n; i++){
		cout << list[i] << "\t";
	}
	cout << "\n\n";
	//bubble sort
	int temp;
	for(int o = 0; o < n; o++){
		for(int i = 0; i < (n-1)-o; i+=1){
			if(list[i] > list[i+1]){
				temp = list[i];
				list[i] = list[i+1];
				list[i+1] = temp;
			}
			for(int i = 0; i < n; i++){
				cout << list[i] << "\t";
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}
