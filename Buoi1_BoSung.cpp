#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout<< "HELLO"<<endl;
	
	char luaChon;
	
	do{
		cout << "Nhap 1 de lam BAITAP 1"<<endl;	
		cout << "Nhap 2 de lam BAITAP 2"<<endl;	
		cout << "Nhap 3 de lam BAITAP 3"<<endl;	
		cout << "Nhap 4 de lam BAITAP 4"<<endl;	
		cout << "Nhap 5 de lam BAITAP 5"<<endl;	
		cout << "Nhap 6 de lam BAITAP 6"<<endl;	
		cout << "Nhap b de lam BAITAP 1.4.8"<<endl;	
		cout << "Nhap 7 de lam BAITAP 7"<<endl;	
		cout << "Nhap 8 de lam BAITAP 8"<<endl;	
		cout << "Nhap 9 de lam BAITAP 9"<<endl;	
		cout << "Nhap a de lam BAITAP 10"<<endl;	
		cout << "Nhap x de thoat"<<endl;
		cin >> luaChon;
		if(luaChon=='1') {
			int r;
			const float PI = 3.14;
			float  cv,dt;
			cout << "Nhap r: "; cin >> r;
			cv = 4*PI*r*r;
			cout << "Chu vi hinh cau la:" << cv  << endl;
			dt = (4/3)*PI*r*r*r;
			cout << "Dien tich hinh cau la: "<< dt << endl; 
		}else if(luaChon=='2')  {
			double x1, x2, y1, y2, hs1, hs2;
			cout << "Nhap gia tri x1: "; cin>>x1;
			cout << "Nhap gia tri y1: "; cin>>y1;
			cout << "Nhap gia tri x2: "; cin>>x2;
			cout << "Nhap gia tri y2: "; cin>>y2;
			cout << "Toa do diem 1 la"<< "(" << x1 << "," << y1 << ")"<<endl;
			cout << "Toa do diem 2 la"<< "(" << x2 << "," << y2 << ")"<<endl;
			
			hs1 = (y2-y1)/(x2-x1);
			hs2 = sqrt(pow((y2-y1),2)+pow((x2-x1),2));
			cout << "He so 1 la: "<< hs1<<endl;
			cout << "He so 2 la: "<< hs2<<endl;
			
			
		}else if(luaChon=='3')  {
			char i ;
			cout << "Nhap 1 tim Cau a"<<endl;
			cout << "Nhap 2 tim Cau b"<<endl;
			cin >>i;
			do {
				if(i=='1'){
				char n;
				cout << "Nhap ky tu bat ki: "; cin >> n;
				cout << "1.So ASCII la: "<< n+0<< endl;
				cout << "2.Ky tu tiep theo la: "<< char(n+1)<< endl;
				break;
			}else if(i=='2') {
				int a;
				if(a>=0 || a<=255) {
					
					cout << "Nhap so bat ki: "; cin >> a;
					cout << "1.Ky tu ASCII la: "<< char(a)<< endl;
					cout << "2.Ky tu tiep theo la: "<< char(a+1)<< endl;
					break;
				}else {
					cout << "LOI";
					break;
					}	
				}
			}while(i!='3');
			
			
		}else if(luaChon=='4')  {
			float r1, r2, r3, rss, rnt;
			cout << "Nhap gia tri r1: ";cin>>r1;
			cout << "Nhap gia tri r2: ";cin>>r2;
			cout << "Nhap gia tri r3: ";cin>>r3;
			
			rss= (1/r1) +(1/r2)+(1/r3);
			rnt = (r1+r2+r3);
			cout << "Tong tro song song "<< rss<<endl;
			cout << "Tong tro noi tiep "<< rnt<<endl;
			
		}else if(luaChon=='5')  {
			char o ;
			cout << "Nhap 1 tim Cau A01"<<endl;
			cout << "Nhap 2 tim Cau A02"<<endl;
			cout << "Nhap 3 tim Cau A03"<<endl;
			cout << "Nhap 4 tim Cau A04"<<endl;
			cout << "Nhap n de thoat"<<endl;
			cin >>o;
			do {
				if(o=='1'){
				int n;
				float s=0, i=1;
				cout << "Nhap gia tri n: "; cin>>n;
				 while(i <= n)
			    {
			        s = s + 1.0 / i;  
			        i++;
			    }
			    
					cout << "Tong la  1+1/2+1/3+...+1/n = "<<s<<endl;
					break;
			}else if(o=='2') {
				int n;
				float s=0, s1=0, s2=0, i=1;
				cout << "Nhap gia tri n: "; cin>>n;
				while(i <= n)
			    {
			        s = s + 1.0 / i;  
			        s1 = s1 + 1.0 / (2 * i);
			        s2 = s2 + 1.0 / ((2 * i) + 1);
			        i++;
			    }
			    
					cout << "Tong cac so tu nhien ko lon hon n = "<<s<<endl;
					cout << "Tong cac so tu nhien le ko lon hon n = "<<s1<<endl;
					cout << "Tong cac so tu nhien chan ko lon hon n = "<<s2<<endl;
					break;
			}else if(o=='3') {
				int n;
				float s=0;
				cout << "Nhap gia tri n: "; cin>>n;
				
				for(int i=1; i<=n; i++) {
					if(i%7==0)
					s = s + 1.0 / i;  
			        i++;
				}
			    
			    
			    
					cout << "Tong la  cac so tu nhien nho hon n va chia het cho 7 = "<<s<<endl;
					break;
			}
			else if(o=='4') {
				int n;
				float s=0, i=1;
				cout << "Nhap gia tri n: "; cin>>n;
				 for(int i=1; i<=n; i++) {
					if(i%7!=0)
					s = s + 1.0 / i;  
			        i++;
				}
			    
					cout << "Tong la  cac so tu nhien nho hon n va khong chia het cho 7 = "<<s<<endl;
					break;
			}	
			}while(o!='n');
		}else if(luaChon=='6')  {
			int a;
			float cv, dt;
			cout << "Nhap so thuc a bat ki = "; cin >> a;
			cv = float(a)*3;
			dt = float(a)*sqrt(3)/3;
			cout << "Chu vi la: "<< cv << " va Dien tich la :" << dt<< endl; 
		}else if(luaChon=='7')  {
			int a, b;
			float tu, mau, kq;
			cout << "Nhap so thuc a bat ki = "; cin >> a;
			cout << "Nhap so thuc b bat ki = "; cin >> b;
			tu = 2*pow(a,2) + 3*pow(b, 3) + 4;
			mau = a+ b;
			kq = tu/mau;
			cout << "KQ la = "<< kq << endl;
		}else if(luaChon=='b') {
			int giay, phut, gio, kq;
			cout << "Nhap giay bat ki = "; cin >> giay;
			cout << "Nhap phut bat ki = "; cin >> phut;
			cout << "Nhap gio bat ki = "; cin >> gio;
			kq = giay + phut*60 + gio*pow(60, 2);
			cout << "KQ la = "<< kq << endl;
		}else if(luaChon=='8')  {
			int giay, phut, gio;
			cout << "Nhap so giay lam viec = "; cin >> giay;
			gio=giay/3600;
        	phut=giay/60;
			cout << "Vay ton : "<< gio << " gio lam viec" << endl; 
			cout << "Vay ton : "<< phut << " phut lam viec" << endl;
		}else if(luaChon=='9')  {
			int giay,  phut, gio;
			cout << "Nhap tong so giay bat ki = "; cin >> giay;
			gio=(giay-giay%3600)/3600;
        	phut=((giay%3600)-(giay%3600)%60)/60;
        	giay=giay-phut*60-gio*3600;
			cout << "KQ la: "<< gio << ":" << phut << ":" << giay <<endl;
				
		}else if(luaChon=='a')  {
			int a, b, c=0;
			cout << "Nhap so nguyen duong co 3 chu so: "; cin >> a;
			while(a > 0){
		        b = a % 10;
		        c = c * 10 + b;
		        a = a / 10;
		    }
			cout << "Gia tri nghich dao la: "<< c<<endl;
		}	
	}while(luaChon !='x');
}
