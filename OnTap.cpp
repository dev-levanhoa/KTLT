#include <iostream>
#include <cmath>
#include <vector>
#include <string>
typedef char Chuoi[100];
using namespace std;
int ViTrung(int n, int a, int x){
	if(n==0) return a;
	return ViTrung(n-1,a*x,x);
}

float TiensauN(int m, float i, int n){
	if(n==0) return m;
	float TienLai = TiensauN(m, i, n-1);
	float TienSauNdo = TienLai * (1+i);
	return TienSauNdo;
}

int SearchBinary(int a[], int left, int right, int x){
	if(left > right) return -1;
	int mid = left + (right - left) / 2;
	if(a[mid] == x) return mid;
	else if(a[mid] > x) return SearchBinary(a, left, mid - 1, x);
	else return SearchBinary(a, mid + 1, right, x);
}

// Xac dinh chieu dai chuoi (Dung con tro)
int Lengh(Chuoi str){
	if(*str == '\0')
		return 0;
	return 1 + Lengh(str+1);
}

//Chuyen Thap phan -> Nhi Phan -> Hexa
void Change(int Number, int base){
	if(!Number) return; // Neo
	int temp = Number % base;
	Change(Number/base, base);
	if(temp < 10)
		cout << temp;
	else
		cout << char('A' + temp - 10);
}

int SumA(int a[], int n){
	if(!n) return 0;
	return a[n-1]+SumA(a,n-1);
}

int SumAD(int a[], int n){
	if(!n) return 0;
	return a[n-1] > 0 ? SumAD(a, n-1) + a[n-1] : SumAD(a, n-1);
}

int checkSNT(int n){
	if(n < 2) return 0;
	int i = 2;
	while(i <= sqrt(n)){
		if(n % i==0) return 0;
		++i;
	}
	return 1;
}

int SumSNT(int a[], int n){
	if(!n) return 0;
	int Sum = SumSNT(a, n-1);
	return checkSNT(a[n-1]) ? Sum + a[n-1]: Sum;
}

int SumChuSo(int n){
	if(n <= 0) return 0;
	if(n<10) return n;
	return n%10 + SumChuSo(n/10);
}

void rev(int n){
	if(n==0) return;
	int temp = n % 10;
	rev(n/10);
	cout << temp;
}

int UCLN(int a, int b){
	if(a <= b) return a;
	return UCLN(a-b, b);
}

void Move(char a, char b, int n){
	cout << "Di chuyen dia " << n << " tu " << a << " sang " << b <<" !" << endl;
}

void HaNoiTower(int a, int b, int c, int n){
	if(n==1){
		Move(a,c,n);
		return;
	}
	HaNoiTower(a, c, b, n-1);
	Move(a, c, n);
	HaNoiTower(b , c, a, n-1);
}

int main(){
//	int n, a, x;
//	cin >> n >> a >> x;
//	cout << ViTrung(n,a,x);
//	int m, n;
//	float i, kq;
//	kq = TiensauN(m,i,n);
//	cout << kq;
	Chuoi h;
	cin.getline(h,100);
	cout << Lengh(h);
}