# include <iostream>
# include <cmath>

using namespace std;

void Cau1();
int Cau2(int &n);
int Cau3(int &n);
void Cau4();
void Cau5();


int main() {
	cout << "HELLO WORLD"<<endl;
	
	int lc = 0;
	
	do {
		cout << "Nhap 1 tinh cau 1"<<endl;
		cout << "Nhap 2 tinh cau 2"<<endl;
		cout << "Nhap 3 tinh cau 3"<<endl;
		cout << "Nhap 4 tinh cau 4"<<endl;
		cout << "Nhap 5 tinh cau 5"<<endl;
		cout << "Nhap 6 tinh cau 6"<<endl;
		
		cout << "Nhap so de tim cau: "; cin>> lc;
		
		if(lc==1) {
			Cau1();
		}else if(lc==2) {
			int n;
			cout << "Nhap gia tri n: ";cin>>n;
			// float s =
			int s = Cau2(n);
			cout << "KQ la: "<<s<<endl;
			
		}else if(lc==3) {
			int n;
			cout << "Nhap gia tri n: ";cin>>n;
			Cau3(n);
		}else if(lc==4) {
			Cau4();
		}else if(lc==5) {
			Cau5();
		}else if(lc==6) {
			
		}else if(lc==7) {
			
		}else if(lc==8) {
			
		}else if(lc==9) {
			
		}else if(lc==10) {
			
		}
	}while(lc !=0);
}

void Cau1() {
	int i; // 23, 47, 70, 93, 116, 138
	for(i=0; i<=23;i++) {
		cout << "Ma so la: "<<i<<endl;
		cout <<"Ki tu la: "<<char(i)<<endl;
		getchar();
	}
	
	for(i=23; i<=47;i++) {
		cout << "Ma so la: "<<i<<endl;
		cout <<"Ki tu la: "<<char(i)<<endl;
		getchar();
	}
	for(i=47; i<=70;i++) {
		cout << "Ma so la: "<<i<<endl;
		cout <<"Ki tu la: "<<char(i)<<endl;
		getchar();
	}
	for(i=70; i<=93;i++) {
		cout << "Ma so la: "<<i<<endl;
		cout <<"Ki tu la: "<<char(i)<<endl;
		getchar();
	}
	for(i=93; i<=116;i++) {
		cout << "Ma so la: "<<i<<endl;
		cout <<"Ki tu la: "<<char(i)<<endl;
		getchar();
	}
	for(i=116; i<=137;i++) {
		cout << "Ma so la: "<<i<<endl;
		cout <<"Ki tu la: "<<char(i)<<endl;
		getchar();
	}
	
}

int Cau2(int &n) {
	int tu=1;
	
	for(int i=1; i<=n;i++) 
		
		tu = (tu+i)/tu*i;
		
	return tu;
	//cout << "KQ la: "<<tu<<endl;
}

int Cau3(int &n) {
	int k10, k5, k2, k1;
	
//			k10=(n-n%100000)/100000;
//        	k5=((n%100000)-(n%100000)%50000)/50000;
//        	k2=((n%100000)-(n%100000)%50000)-(((n%10000)%50000)%20000)/20000;
//        	k1=n-k2*20000-k5*50000-k10*100000;
	k10=n/100000;
	k5=(n%100000)/50000;
	k2=((n%100000)%50000)/20000;
	k1=((n%100000)%50000)%20000;
			cout << "Phai tra "<< k10<<" 100k, "<<k5<<" 50k, "<<k2<<" 20k, "<<k1<<" 10k"<<endl;
}


void Cau4() {
	char ten[10];
	int luong, soNgay;
	char cv;
	// int n;
	int i=0;
	//cout <<"Nhap so luong nhan vien: "; cin>>n;
	fflush(stdin);
	cout << "Nhap ten: ";
	gets(ten);
	cout <<"Nhap luong: ";cin>>luong;
	cout<<"Nhap soNgay: ";cin>>soNgay;
	cout<<"Nhap so 1, 2, 3, 4 lan luoc theo chuc vu gom GD, PGD, TP, NV: ";cin>>cv;
	
	int thuong=0;
	if(soNgay>=25) {
		thuong=luong+luong*0.2;
	}else if(soNgay>=22 && soNgay<25) {
		thuong=luong+luong*0.1;
	}else  {
		thuong=luong;
	}
	int pc=0;
	if(cv=='1') {
		pc=thuong+250000;	
	}else if(cv=='2') {
		pc=thuong+200000;
	}else if(cv=='3') {
		pc=thuong+180000;
	}else if(cv=='4') {
		pc=thuong+150000;
	}
	cout <<"NV0"<<i+1<<endl;
	cout <<ten<<", "<<thuong<<", "<<thuong<<", "<<pc<<endl;
	
//	for(int i=0; i<=n; i++){
//		
//	}
	
}

void Cau5() {
	char kv;
	char ma[10], ten[10];
	double toan, ly, hoa;
	
	fflush(stdin);
	cout << "Nhap ma: ";
	gets(ma);
	cout << "Nhap ten: ";
	gets(ten);
	cout<<"Nhap so 1, 2, 3 lan luoc theo Khu vuc gom KV1, KV2, KV3: ";cin>>kv;
	cout <<"Nhap diem Toan: ";cin>>toan;
	cout<<"Nhap diem Ly: ";cin>>ly;
	cout<<"Nhap diem Hoa: ";cin>>hoa;
	double tb = toan*2 + ly+ hoa;
	int them=0;
	if(kv=='1') {
		them=tb+0.5;
	}else if(kv=='2') {
		them=tb+1;
	}else if(kv=='3') {
		them=tb+2.5;
	}
	
	if(them>21) {
		cout <<ma<<", "<<ten<<", "<<kv<<", "<<them<<", TRUNG TUYEN"<<endl;
	}else {
		cout <<ma<<", "<<ten<<", "<<kv<<", "<<them<<", ROT"<<endl;
	}
	
}

void Cau6() {
	
}
