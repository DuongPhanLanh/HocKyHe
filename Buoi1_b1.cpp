# include <iostream>
# include <cmath>
using namespace std;

int main() {
	cout << "HELLO_Buoi_1"<<endl;
	cout <<"###############"<<endl;
	int luaChon=0;
	do {
		cout << "Nhap 1 de tim cau 1"<<endl;
		cout << "Nhap 2 de tim cau 2"<<endl;
		cout << "Nhap 3 de tim cau 3"<<endl;
		cout << "Nhap 4 de tim cau 4"<<endl;
		cout << "Nhap 5 de tim cau 5"<<endl;
		cout << "Nhap so bat ki de thoat"<<endl;
		cout << "Nhap lua chon: "<<endl;
		cin>>luaChon;
		if(luaChon==1) {
			int a, b, c, tmp;
			cout << "NHap gia tri a: "; cin>>a;
			cout << "NHap gia tri b: "; cin>>b;
			cout << "NHap gia tri c: "; cin>>c;
			if(a>b) {
				tmp=a;
				a=b;
				b=tmp;
			}
			if(a>c) {
				tmp=a;
				a=c;
				c=tmp;
			}
			if(b>c) {
				tmp=b;
				b=c;
				c=tmp;
			}
			cout << "Thu tu lan luoc la: "<<a<<", "<<b<<", "<<c<<endl;
		}else if(luaChon==2) {
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
		}else if(luaChon==3) {
			float a, b, c;
			cout << "NHap gia tri a: "; cin>>a;
			cout << "NHap gia tri b: "; cin>>b;
			cout << "NHap gia tri c: "; cin>>c;
			if( a<b+c && b<a+c && c<a+b ) {
				if( a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b) {
					cout<<"Day la tam giac vuong"<< endl;
				}else if(a==b && b==c) {
					cout<<"Day la tam giac deu"<< endl;
				}else if(a==b || a==c || b==c) {
					cout<<"Day la tam giac can"<< endl;
				}else if(a*a > b*b+c*c || b*b > a*a+c*c || c*c > a*a+b*b) {
					cout<<"Day la tam giac tu"<<endl;
				}else {
					cout<<"Day la tam giac nhon"<<endl;
				}
			
			}else 
				cout<<"Ba canh a, b, c khong phai la ba canh cua mot tam giac";
		}else if(luaChon==4) {
			double soKm, Tien, Tien1, Tien2, Them;
			cout << "Nhap so Km: "; cin >> soKm;
			if(soKm ==1) {
				Tien=15000;
				cout << "Phai tra: "<<Tien<<" dong"<<endl;
			}else if((soKm>=2 )|| (soKm <=5)) {
				Tien1 = 15000+13500 * (soKm-1);
				cout << "Phai tra: "<<Tien1<<" dong"<<endl;
			}else 
				if(soKm >12) {
					Tien2= 15000 + 13500 * 4 + 11000 * (soKm - 5);
					Them = Tien2*(90/100);
					cout << "Phai tra: "<<Tien1<<" dong"<<endl;
					cout << "Tra them: "<<Them<< " dong"<<endl;
				}else {
					Tien2= 15000 + 13500 * 4 + 11000 * (soKm - 5);
					cout << "Phai tra: "<<Tien1<<" dong"<<endl;
				}
				
		}else if(luaChon==5) {
			int thang, nam;
			cout << "Nhap thang: "; cin>>thang;
			cout << "Nhap nam: "; cin>>nam;
			
			switch(thang) {
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					printf("Co 31 ngay");
					break;
				
				case 4:
				case 6:
				case 9:
				case 11:
					printf("Co 30 ngay");
					break;
					
				case 2:
						if ((nam%400==0)|| (nam%4==0 && nam%100!=0)){
							printf("Co 29 ngay");
						}else{
							printf("Co 28 ngay");
						}
						break;
				default:
					printf("Nhap du lieu khong dung!");
					}
		}	
	}while(luaChon!=0);
}

