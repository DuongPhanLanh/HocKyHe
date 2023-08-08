# include <iostream>
# include <cmath>

using namespace std;

void Cau1() {
	int n, s=0, p=1;
	do {
		cout<<"Nhap so 5 < n < 100: ";cin>>n;	
	}while(n <5 || n>100);
		for(int i=1; i<=n;i++) {
			p*=i;
			s+=p;
		}
		cout<<"KQ la bai toan 1+1.2+1.2.3...."<<n<<" la: "<<s<<endl;
	
}

int Cau2() {
	int n, s=1, p=1;
	do {
		cout<<"Nhap so n: ";cin>>n;	
		
	}while(n<0 || n>20000);
		for(int i=1; i<=n;i++) {
			p%=10;
			n/=10;
			s+=p;
		}
// Bi loi phan nhap n no ko chiu xuat
		cout<<"So Vua nhap co "<<s<<" chu so"<<endl;

	
}
int main() {
	cout<<"KT"<<endl;
	int lc=0;
	
	do {
		cout<<"NHap 1 cho cau 1"<<endl;
		cout<<"NHap 2 cho cau 2"<<endl;
		

		cout<<"Nhap lua chon: ";
		cin>>lc;
		
		if(lc==1) {
			Cau1();	
		}else if(lc==2) {
			Cau2();
		}
	}while(lc !=0);
			
}
