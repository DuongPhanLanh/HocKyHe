# include <iostream>
# include <cmath>

using namespace std;
int main() {
	cout <<"HMMM"<<endl;
	int lc=0;
	do{
		cout <<"Nhan 1 de chon Cau 1"<<endl;
		cout <<"Nhan 2 de chon Cau 2"<<endl;
		cout <<"Nhan 3 de chon Cau 3"<<endl;
		cout <<"Nhan 4 de chon Cau 4"<<endl;
		cout <<"Nhan 5 de chon Cau 5"<<endl;
		cout <<"Nhap cau muon tim: ";
		cin>>lc;
		
		if(lc==1) {
			int n;
			float s=0;
			cout <<"Nhap so n: ";cin>>n;
			for(int i=0;i<=n;i++) {
				s+=1/(2*i);
			}
			cout <<"Kq la: "<<s<<endl;
		}else if(lc==2) {
			int n;
			float s=0, p=1;
			cout <<"Nhap so n: ";cin>>n;
			for(int i=1;i<=n;i++) {
				p*=i;
				s+=p;
			}
			cout <<"Kq la: "<<s<<endl;
		}else if(lc==3) {
			int n;
			cout <<"Nhap so n: ";cin>>n;
			for(int i=0;i<=100;i++) {
				if(i<n) {
					cout <<"Kq nho hon n gom: "<<i<<endl;
				}
			}
			
		}else if(lc==4) {
			int n, tong=0;
			cout << "Nhap gia tri n: ";cin >> n;
		
			while(n!=0) {
				tong += n%10;
				n/=10;	
			}
			
			cout << "tong la: "<<tong<<endl;
		}else if(lc==5) {
			int a, b, max=0;
			cout <<"Nhap so n cua a: ";cin>>a;
			cout <<"Nhap so n cua b: ";cin>>b;
			for(int i=1;i<=100;i++) {
				if(a%i==0 && b%i==0 ) {
					if(i>max) {
						max=i;
					}	
				}
			}
				cout <<"UOC SO lon nht gom: "<<max<<endl;
		}
	}while(lc!=0);
}
