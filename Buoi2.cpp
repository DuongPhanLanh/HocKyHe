# include <iostream>
# include <cmath>

using namespace std;

int Cau1(int &n);
int Cau2(int &n);
void Cau3();
int Cau4(int &n);
int Cau5(int &n);
int Cau6(int &bd, int &kt);
int Cau7(int &soNgay, int &n );
// Cau 8
int soNgayCuaThang(int thang, int nam);
void inNgayKeDo(int ngay, int thang, int nam);
void inNgayTruocDo(int ngay, int thang, int nam);	
int kiemTraNgayNhap(int ngay, int thang, int nam);


void Cau9();
void Cau10();

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
		cout << "Nhap 7 tinh cau 7"<<endl;
		cout << "Nhap 8 tinh cau 8"<<endl;
		cout << "Nhap 9 tinh cau 9"<<endl;
		cout << "Nhap 10 tinh cau 10"<<endl;
		
		cout << "Nhap so de tinm cau: "; cin>> lc;
		
		if(lc==1) {	
			int n;
			cout << "Nhap so n tu 10 den 99: "; cin>>n;
			int a = Cau1(n);
			if(a==0) {
				cout << "Thoa dk"<<endl;
			}else
				cout << "Ko thoa dk"<<endl;
		
			
		}else if(lc==2) {
			int n;
			cout <<"Nhap so bat ki: "; cin>>n;
			int a = Cau2(n);
		}else if(lc==3) {
			Cau3();
		}else if(lc==4) {
			int n;
			cout <<"Nhap so bat ki: "; cin>>n;
			int a = Cau4(n);
			cout <<"KQ la: "<<a<<endl;
		}else if(lc==5) {
			int n;
			cout <<"Nhap so bat ki: "; cin>>n;
			int a = Cau5(n);
			cout <<"KQ la: "<<a<<endl;
		}else if(lc==6) {
			int bd, kt;
			cout <<"Nhap gio bat dau: "; cin>>bd;
			cout <<"Nhap gio ket thuc: ";cin>>kt;
			
			Cau6(bd, kt);
		}else if(lc==7) {
			int soNgay;
			int n;
			cout <<"Nhap soNgay: "; cin>>soNgay;
			cout <<"Nhap so  phong 65, 66, 67  theo loai phong A, B, C: ";cin>>n;
			Cau7(soNgay,n);
		}else if(lc==8) {
			int ngay, thang, nam;
			do {
				
				cout << "Nhap so ngay: ";cin >>ngay;
				cout << "Nhap so thang: ";cin>>thang;
				cout <<"Nhap so nam: ";cin>>nam;
			}while(!kiemTraNgayNhap(ngay, thang, nam));
				cout << "So ngay trong thang la: "<< soNgayCuaThang(thang, nam)<<endl;
				inNgayKeDo(ngay, thang, nam);
				inNgayTruocDo(ngay, thang, nam);
				cout <<endl;
		}else if(lc==9) {
			Cau9();
		}else if(lc==10) {
			Cau10();
		}
	}while(lc !=0);
}

int Cau1(int &n) {
	int i=10;
	while( i<100) {
		int a = n/10;
		int b = n%10;
		i++;
		if(a*b==2*(a+b))
		return i;
		break;
	}	
}

int Cau2(int &n) {
	for(int i=0; i<=n;i++) {
		if(i<n) {
			cout << "La mot so: "<<i<<endl;
		}
	}	
}

void Cau3() {
	for(int i =0; i<128; i++) {
		if(i==7) {
			continue;
		}
		cout << "So la: "<<i<<endl;
		cout << "Ki tu la: "<< char(i)<<endl;	
	}			
}

int Cau4(int &n) {
	int temp, res=0;
	while(n>0) {
		temp =n%10;
		res = res*10+temp;
		n=n/10;
	}
	
	return res;
}

int Cau5(int &n) {
	int temp=0, res=0;
	while(n != 0) {
		temp += n % 10;
		n /= 10;
		res++;
		}
	cout << "Tong la: "<<temp<<endl;
    return res;	
}

int Cau6(int &bd, int &kt ) {
	int bd1=bd;
	int kt1=kt;
	int h = kt1-bd1;
	float tien=0;
	
	
	if(bd1>7 || kt1<=17) {
		tien = h*60*400;
		if(h>6) {
			tien =tien-tien*0.1;
		}
		cout << "Tien la: "<<tien<<" dong"<<endl;
	}else if(bd1>17 || kt1<=24) {
		tien = h*60*350;
		if(h>4) {
			tien =tien-tien*0.12;
		}
		cout << "Tien la: "<<tien<<" dong"<<endl;
	}else if(bd1>=0 || kt1<=7) {
		 tien = h*60*300;
		if(h>7) {
			tien =tien-tien*0.15;
		}
		cout << "Tien la: "<<tien<<" dong"<<endl;
	}

}

int Cau7(int &soNgay, int &n ) {
	double tien = 0;
	if(n==65) {
		tien = 250000*soNgay;
		if(soNgay>12) {
			tien =tien-tien*0.1;
				cout << "Tien la: "<<tien<<" dong"<<endl;
		}
	}else if(n==66) {
		tien = 200000*soNgay;
		if(soNgay>12) {
			tien =tien-tien*0.08;
				cout << "Tien la: "<<tien<<" dong"<<endl;
		}
	}else if(n==67) {
		tien = 150000*soNgay;
		if(soNgay>12) {
			tien =tien-tien*0.08;
				cout << "Tien la: "<<tien<<" dong"<<endl;
		}
	}
}

// Cau 8
	int soNgayCuaThang(int thang, int nam){
	switch(thang){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
		case 2:
			return ((nam % 400 ==0)||(nam%4==0 && nam %100 !=0))?29:28;
		default:
			return -1;			
	}
}

	int ngayTrongNam(int ngay, int thang, int nam) {
		int ntn = 0;
		for(int i=1; i<thang; i++){
			ntn+=soNgayCuaThang(i, nam);
		}
		ntn+=ngay;
		return ntn;
	}
	
	void inNgayTruocDo(int ngay, int thang, int nam) {
		if (ngay==1){
			if (thang==1){
				ngay=31;
				thang=12;
				nam--;
			}else{
				thang--;
				ngay=soNgayCuaThang(thang, nam);
			}
		}else{
			ngay--;
		}
		cout <<" Ngay truoc do: "<<ngay<<" ,"<<thang<<" ,"<<nam;
	}
	
	void inNgayKeDo(int ngay, int thang, int nam) {
		int nct = soNgayCuaThang(thang, nam);
		if (ngay==nct){
			if(thang==12){
				ngay =1;
				thang =1;
				nam++;
			}else{
				ngay=1;
				thang++;
			}
		}else{
			ngay++;
		}
		cout <<"Ngay ke do: "<<ngay<<" ,"<<thang<<" ,"<<nam;
	}
	
	int kiemTraNgayNhap(int ngay, int thang, int nam) {
		if (ngay < 1 || thang <1 || nam < 1) return 0;
		if(thang>12)
			return 0;	
		
		int soNgay = soNgayCuaThang(thang, nam);
	
		if(ngay>soNgay)
			return 0;
		
		return 1;
	}


//

void Cau9() {
	double soKm, Tien, Tien1, Tien2, Them;
			cout << "Nhap so Km: "; cin >> soKm;
			if(soKm ==1) {
				Tien=15000;
				cout << "Phai tra: "<<Tien<<" dong"<<endl;
			}else if((soKm>=2 )|| (soKm <=5)) {
				Tien1 = 15000+13500 * (soKm-1);
				cout << "Phai tra: "<<Tien1<<" dong"<<endl;
			}else 
				if(soKm >120) {
					Tien2= 15000 + 13500 * 4 + 11000 * (soKm - 5);
					Them = Tien2*(90/100);
					cout << "Phai tra: "<<Tien1<<" dong"<<endl;
					cout << "Tra them: "<<Them<< " dong"<<endl;
				}else {
					Tien2= 15000 + 13500 * 4 + 11000 * (soKm - 5);
					cout << "Phai tra: "<<Tien1<<" dong"<<endl;
				}
				
}

void Cau10() {
	int toan, ly, hoa;
	cout <<"Nhap diem Toan: "; cin>>toan;
	cout <<"Nhap diem Ly: "; cin>>ly;
	cout <<"Nhap diem Hoa: "; cin>>hoa;
	
	float dtb = (toan+ly+hoa)/3;
	
	if(dtb>=9) {
		cout << "Loai Xuat Sac"<<endl;
	}else if(dtb>=8 && dtb <9) {
		cout <<" Gio"<<endl;
	}else if(dtb>=6.5 && dtb <8) {
		cout << "Kha"<<endl;
	}else if(dtb>=5 && dtb<6) {
		cout <<"Trung Binh"<<endl;
	}else if(dtb >=3 && dtb<5) {
		cout <<"Yeu"<<endl;
	}else if(dtb <3) {
		cout <<"Kem"<<endl;
	}else 
		cout <<"LOI"<<endl;
		
}


