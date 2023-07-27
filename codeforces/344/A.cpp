#include<iostream>
using namespace std;
int main(){
	int size;
	cin >> size;
	int c = 1;
	int* arr = new int[size];
	for (int i = 0; i < size; i++) 
    {
		cin >> arr[i];
	}
	for (int i = 0; i < size-1; i++)
    {
		if (arr[i] != arr[i + 1])
			c++;
	}
	cout << c;

}