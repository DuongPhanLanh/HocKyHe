# include <iostream>
# include <cmath>

using namespace std;

void Cau1() {
	cout <<"SO SANH"<<endl;
	int lc=0;
	
	do {
		cout<<"nhap 1 de so sanh 2 so nguyen"<<endl;
		cout<<"nhap 2 de so sanh 3 so nguyen"<<endl;
		cin>>lc;
		
		if(lc==1) {
			int a, b;
			cout <<"Nhap a: ";cin>>a;
			cout <<"Nhap b: ";cin>>b;
			int min=a;
			if(a>b) {
				min=b;
			}
			cout <<"Min la: "<<min<<endl;
			break;
		}else if(lc==2) {
			int a, b, c, min;
			cout <<"Nhap a: ";cin>>a;
			cout <<"Nhap b: ";cin>>b;
			cout <<"Nhap c: ";cin>>c;
			
			if(a>b && c>b) {
				min=b;
			}else if(b>c && a>c) {
				min=c;
			}else if(b>a && c>a) {
				min=a;
			}
			cout <<"Min la: "<<min<<endl;
			break;
		}	
	}while(lc!=0);	
}

int c2_UCLN(int a, int b) {
    while ( a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    	return a; 
}
int c2_BCNN(int a, int b) {
	int ucln = c2_UCLN(a, b);
    return a * b / ucln;
}

void Cau3() {
	int n, s=0;
	cout <<"NHap n: ";cin>>n;
	for(int i=1;i<=n;i++) {
		s*=i;
	}
	cout <<"KQ: "<<s<<endl;
}

void Cau4() {
	int x, n;
	cout<<"Nhap gt x: ";cin>>x;
	cout<<"Nhap gt n: ";cin>>n;
	
	long kq=pow(x, n);
	cout<<"KQ la: "<<kq<<endl;
}

void Cau5() {
	int n, s=0, k=0, a, b, c;
	cout <<"NHap n: ";cin>>n;
	cout <<"NHap k: ";cin>>k;
	for(int i=1;i<=n;i++) {
		a=s*i;
		b=k*i;
		c = (s-k)*i;
	}
	float tu = a;
	float mau =b*c;
	float kq = tu/mau;
	cout<<"KQ la: "<<kq<<endl;
}

void Cau6() {
	
}

int main() {
	cout <<"MEMU"<<endl;
	int lc=0;
	
	do {
		cout<<"NHap 1 cho cau 1"<<endl;
		cout<<"NHap 2 cho cau 2"<<endl;
		cout<<"NHap 3 cho cau 3"<<endl;
		cout<<"NHap 4 cho cau 4"<<endl;
		cout<<"NHap 5 cho cau 5"<<endl;
		cout<<"NHap 6 cho cau 6"<<endl;
		cout<<"NHap 7 cho cau 7"<<endl;
		cout<<"NHap 8 cho cau 8"<<endl;
		cout<<"NHap 9 cho cau 9"<<endl;
		cin>>lc;
		
		if(lc==1) {
			Cau1();
		}else if(lc==2) {
			int a, b, n;
			cout <<"Nhap a: ";cin>>a;
			cout <<"Nhap b: ";cin>>b;
			int x = c2_UCLN(a, b);
		    cout << "UCLN : "<<x<<endl;
		    x = c2_BCNN(a, b);
		    cout << "BCNN : " << x << endl;
		}else if(lc==3) {
			Cau3();
		}else if(lc==4) {
			Cau4();
		}else if(lc==5) {
			Cau5();
		}else if(lc==6) {
			
		}else if(lc==7) {
			
		}else if(lc==8) {
			
		}else if(lc==9) {
			
		}
	}while(lc!=0);
}
