# include <iostream>
# include <cmath>
# include <cstring>

using namespace std;
int n;
void Cau1();
void Cau2();
void cau3();
void Cau4();
void Cau5();
void Cau6();

void Cau1a();
void Cau2a();
void Cau3a();
void Cau4a();
int Cau5a(int &n);

int main() {
	cout <<"BT"<<endl;
	int chon=0;
	do {
		cout<<"1. Lam lai cac bai tap chuong cau lenh dieu kien va re nhanh duoi dang ham"<<endl;
		cout<<"2. Viet ham nhan vao so nguyen duong n va thuc hien"<<endl;
		cout <<"Nhap cau muon tim: ";
		cin>>chon;
		
		if(chon==1) {
			cout<<"1. Lam lai cac bai tap chuong cau lenh dieu kien va re nhanh duoi dang ham"<<endl;
			int lc=0;
			
			do {
				cout <<"Nhan 1 de chon Cau a"<<endl;
				cout <<"Nhan 2 de chon Cau b"<<endl;
				cout <<"Nhan 3 de chon Cau c"<<endl;
				cout <<"Nhan 4 de chon Cau d"<<endl;
				cout <<"Nhan 5 de chon Cau e"<<endl;
				cout <<"Nhan 6 de chon Cau f"<<endl;
				cout <<"Nhap cau muon tim: ";
				cin>>lc;
				
				if(lc==1) {
					Cau1();
					break;
				}else if(lc==2) {
					Cau2();
					break;
				}else if(lc==3) {
					cau3();
					break;
				}else if(lc==4) {
					Cau4();
					break;
				}else if(lc==5) {
					Cau5();
					break;
				}else if(lc==6) {
					Cau6();
					break;
				}
			}while(lc!=0);
				}else if(chon==2) {
					cout<<"2. Viet ham nhan vao so nguyen duong n va thuc hien"<<endl;
					int lc=0;
					
					do {
						cout<<"Nhap 1 tim cau a: "<<endl;
						cout<<"Nhap 2 tim cau a: "<<endl;
						cout<<"Nhap 3 tim cau a: "<<endl;
						cout<<"Nhap 4 tim cau a: "<<endl;
						cout<<"Nhap 5 tim cau a: "<<endl;
						cout <<"Nhap cau muon tim: ";
						cin>>lc;
						
						if(lc==1) {
							Cau1a();
							break;
						}else if(lc==2) {
							Cau2a();
							break;
						}else if(lc==3) {
							Cau3a();
							break;
						}else if(lc==4) {
							Cau4a();
							break;
						}else if(lc==5) {
							int n;
							cout <<"Nhap so bat ki: "; cin>>n;
							int a = Cau5a(n);
							cout <<"KQ la: "<<a<<endl;
							break;
						}
					}while(lc!=0);
				}
			}while(chon !=0);
	
}

void Cau1() {
	char n;
	cout<<"Chu thuong: ";cin>>n;
	int a = int(n);
	if(a>97 || a<122) {
		a-=32;
	}
	cout <<"Chu hoa: "<<char(a)<<endl;
}

void Cau2() {
	float  b, c,x;
	cout << "NHap gia tri b: "; cin>>b;
	cout << "NHap gia tri c: "; cin>>c;
			if(b==0 ){
				cout << "VSN"<<endl;
			}else {
				if(c==0) {
					cout << "VSN"<<endl;
				}else {
					x =  -b/c;
					cout << "PT 1 an co gia tri la: "<<x<<endl;
				}	
			}
}


void cau3() {
	float a, b, c, del, x, x1, x2;
			cout << "NHap gia tri a: "; cin>>a;
			cout << "NHap gia tri b: "; cin>>b;
			cout << "NHap gia tri c: "; cin>>c;
			
			
			if(a==0) {
				if(b==0 ){
					cout << "VSN"<<endl;
				}else {
					if(c==0) {
						cout << "VSN"<<endl;
					}else {
						x =  -b/c;
						cout << "PT 1 an co gia tri la: "<<x<<endl;
					}	
				}
			}else {
				del = pow(b, 2)-4*a*c;
				if(del <0) {
					cout << "VN"<<endl;
				}else if(del =0) {
					x = b/2*a;
					cout << "PT 1 AN LA: "<< x<< endl;
				}else if(del >0) {
					x1 = (-b +sqrt(del)) /(2*a);
					x2 = (-b -sqrt(del)) /2*a;
					cout << "x1 = "<<x1<<endl;
					cout << "x2 = "<<x2<<endl;
				}
					
			}
}

void Cau4() {
	int a, b, c, d, min;
	cout <<"Nhap gia tri a: ";cin>>a;
	cout <<"Nhap gia tri b: ";cin>>b;
	cout <<"Nhap gia tri c: ";cin>>c;
	cout <<"Nhap gia tri d: ";cin>>d;
	
	min=a;
	if(b>a && c>a && d>a) {
		min=a;
	}else if(a>b && c>b && d>b) {
		min=b;
	}else if(a>c && c>a && d>c) {
		min=c;
	}else if(a>d && b>d && c>d) {
		min=d;
	}
	
	cout <<"MIN LA: "<<min<<endl;
}

void Cau5() {
	int a, b, temp;
	cout <<"Nhap gia tri a: ";cin>>a;
	cout <<"Nhap gia tri b: ";cin>>b;
	
	temp =a;
	a=b;
	b=temp;
	
	cout <<"Hoan vi la: "<<a<<", "<<b<<endl;
	
}

void Cau6() {

	int a, b, c, d, temp;
		cout <<"Nhap gia tri a: ";cin>>a;
		cout <<"Nhap gia tri b: ";cin>>b;
		cout <<"Nhap gia tri c: ";cin>>c;
		cout <<"Nhap gia tri d: ";cin>>d;
	if(a>b) {
		temp =a;
		a=b;
		b=temp;
	}else if(a>c) {
		temp =a;
		a=c;
		c=temp;
	}else if(a>d) {
		temp =a;
		a=d;
		d=temp;
	}else if(b>c) {
		temp =b;
		b=c;
		c=temp;
	}else if(b>d) {
		temp =b;
		b=d;
		d=temp;
	}else if(c>d) {
		temp =c;
		c=d;
		d=temp;
	}	
		
		
		cout <<"Hoan vi la: "<<a<<", "<<b<<",  "<<c<<", "<<d<<endl;
		
}

void Cau1a() {
	int n, tong=0;
			cout << "Nhap gia tri n: ";cin >> n;
		
			while(n!=0) {
				tong += 1;
				n/=10;	
			}
			cout << "tong la: "<<tong<<endl;
}

void Cau2a() {
	int n, tong=0;
			cout << "Nhap gia tri n: ";cin >> n;
		
			while(n!=0) {
				tong += n%10;
				n/=10;	
			}
			cout << "tong la: "<<tong<<endl;
}

void Cau3a() {
	int n, tong=0;
	cout <<"Nhap so n vao bang phim: ";cin>>n;
	
	for(int i=1; i<=n;i++) {
		if(i%2!=0) {
			tong+=i;	
		}
	}
	cout <<"tong so le la: "<<tong<<endl;
}

void Cau4a() {
	int n, tong=0;
	cout <<"Nhap so n vao bang phim: ";cin>>n;
	
	for(int i=1; i<=n;i++) {
		if(i%2==0) {
			tong+=i;	
		}
	}
	cout <<"tong so chan la: "<<tong<<endl;
}

int Cau5a(int &n) {
	int temp, res=0;
	while(n>0) {
		temp =n%10;
		res = res*10+temp;
		n=n/10;
	}
	
	return res;
}


