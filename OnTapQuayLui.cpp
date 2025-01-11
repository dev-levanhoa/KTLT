#inlcude <iostream>
#include <cmath>
#include <vector>
using namespace std;

void NhapMang(vector<int>& a){
	int n;
	cout << "Nhap so luong phan tu cua mang : ";
	do{
		cin >> n;
	}while(n<1);
	while(n--){
		int val;
		cin >> val;
		a.push_back();
	}
}

void InMang(const vector<int>& a){
	cout << "Gia tri trong mang hien co la : "
	for(int val : a)
		cout << val << " ";
}

void LietKeSon(vector<int>&a, int index, vector<int>& b, const int k, int currentSize){
	int n = a.size();
	if(!n) return;
	if(currentSize == k){
		InMang(b);
		return;
	}
	if(index == n) return;
	LietKeSon(a, index+1, b, k, currentSize);
	b.push_back(a[index]);
	LietKeSon(a, index+1, b, k, currentSize+1);
	b.pop_back();
}

int main(){
	
}