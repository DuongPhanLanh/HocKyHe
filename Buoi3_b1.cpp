# include <iostream>
# include <cmath>

using namespace std;;

int NhapMang(int a[][100], int m, int n) {
	for(int i=0; i<n; i++) {
		for(int j=0; j<m;j++) {
			cout<<"a["<<i<<"]["<<j<<"] : ";cin>>a[i][j];
		}
	}
}

int XuatMang(int a[][100], int m, int n) {
	for(int i=0; i<n; i++) {
		for(int j=0; j<m;j++) {
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main() {
	int a[100][100];
	int n, m;
	
	cout <<"Nhap so hang: ";cin>>n;
	cout <<"Nhap so cot: ";cin>>m;
	cout<<"Ta co: "<<endl;
	
	NhapMang(a, m, n);
	XuatMang(a, m, n);
}
