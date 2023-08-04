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
	int n, k;
	int a = n-k;
	float b=1, c=1, d=1;
	cout <<"NHap n: ";cin>>n;
	cout <<"NHap k: ";cin>>k;
	for(int i=1;i<=n;i++) {
		b*=i;
	}
	for(int i=1; i<=k; i++) {
		c*=i;
	}
	for(int i=1; i<=a; i++) {
		d*=i;
	}
	float kq =b/(d*c);
	cout <<b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;
	cout<<"KQ la: "<<kq<<endl;
}

void Cau6() {
	int d, r;
	cout <<"Nhap cd: ";cin>>d;
	cout<<"Nhap cr: ";cin>>r;
	if(d<r || d<=0 || r<=0) {
		cout <<"Nhap loi"<<endl;
	}else {
		for(int i=1; i<=r;i++) {
			for(int j=1; j<=d;j++) {
				if(i == 1 || j == 1 || i == r || j == d) {
					cout<<"*";
				}else {
					cout <<" ";
				}
			}
			cout <<"\n";
		}
	}
	// if(i == 1 || k == 1 || i == n(cho chieu rong) || k == m(cho chieu dai))
		
}

void Cau7() {
	int n, s=0;
	cout <<"Nhap n: ";cin>>n;
	for(int i=1; i<=n/2; i++) {
		if(n%i==0) 
			s+=i;
	}
	if(s==n) {
		cout<<s<<" Hoan thien"<<endl;
	}else {
		cout<<s<<" Ko hoan thien"<<endl;
	}	
}

void Cau8() {
	int n, k50, k20, k10,k5, k2, k1;
	cout <<"Nhap gia tien: ";cin>>n;
	k50=n/50000;
	k20=(n%50000)/20000;
	k10=((n%50000)%20000)/10000;
	k5=(((n%50000)%20000)%10000)/5000;
	k2=((((n%50000)%20000)%10000)%5000)/2000;
	k1=(((((n%50000)%20000)%10000)%5000)%2000)%1000;
		cout << "Phai tra "<< k50<<" to 50k, "<<k20<<" to 20k, "<<k10<<" to 10k, "<<k5<<" to 5k,"<<k2<<" to 2k,"<<k1<<" to 1k,"<<endl;
}

void Cau9() {
	int a, b, c=0;
			cout << "Nhap so nguyen : "; cin >> a;
			while(a > 0){
		        b = a % 10;
		        c = c * 10 + b;
		        a = a / 10;
		    }
			cout << "Gia tri nghich dao la: "<< c<<endl;
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
			Cau6();
		}else if(lc==7) {
			Cau7();
		}else if(lc==8) {
			Cau8();
		}else if(lc==9) {
			Cau9();
		}
	}while(lc!=0);
}
