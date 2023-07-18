# include<iostream>
using namespace std;

// viet chuong trinh nhap vao tong so giay. chuyen doi sang gio, phut, giay
// tinh tien di taxi tu so km dadi duoc - 1 km dau gia 15k, - tu km2 ->5 gia 12k, - tu km 6 tro di gia 16km, - neu di hon 15km se giam 10% so tien
int main() {
	cout<< "HELLO"<<endl;
	
	char luaChon;
	
	do {
		cout << "Nhap 1 de tim cau 1"<<endl;
		cout << "Nhap 2 de tim cau 2"<<endl;
		cout << "Nhap 3 de tim cau 3"<<endl;
		cout << "Nhap 4 de tim cau 4"<<endl;
		cout << "Nhap 5 de tim cau 5"<<endl;
		cout << "Nhap x de thoat chuong trinh"<<endl;
		cout << "Nhap lua chon tai day: "<<endl;
		cin>> luaChon;
		
		if(luaChon=='1') {
			/* cau 1 */

			cout << "***************************\n";
			cout << "*	THAO CHUONG BANG  *\n";
			cout << "* 	   LAP TRINH C	  *\n";
			cout << "***************************\n";
		}else if(luaChon=='2') {
			/* cau 2  */

			int nam;
			cout << "Nhap nam sinh";
			cin>> nam;
			cout << "Ban sinh nam " << nam <<  " vay ban " <<  2023 - nam <<  " tuoi" ;
		}else if(luaChon=='3') {
			/* cau 3 */

			char n;
			int a;
			cout << "Nhap ky tu bat ki: "; cin >> n;
			cout << "So ASCII la: "<< n+0<< endl;
			cout << "Nhap so bat ky: "; cin >> a;
			cout << "Ky tu la: "<< char(a)<< endl;
		}else if(luaChon=='4') {
			/* cau 4 */
			
			int r;
			float  cv,dt;
			const float PI = 3.14;
			cout << "Nhap r: "; cin >> r;
			cv = 2*PI*r;
			cout << "Chu vi la:" << cv  << endl;
			dt = r*r*PI;
			cout << "Dien tich la: "<< dt << endl; 

		}else if(luaChon=='5') {
			/* cau 5 */

			int min, max, x, y;
			cout  << "nhap gia tri min: " ; cin >> min;
			cout  << "nhap gia tri max: " ; cin >> max;
			x = (min<max)?min:max;
			y = (min>max)?min:max;
			cout << "min la "<< x << ", max la  "<< y << endl;
		}else if(luaChon=='6') {
			/* cau 6 */

			cout << "Ho ten:................................................"<<endl;
			cout << "Ma so sih vien:........................................"<<endl;
			cout << "Lop:..................................................."<<endl;
			cout << "So dien thoa:....................Gio tinh:............."<< endl;


		}else if(luaChon=='7') {
			/* cau 7 */

			cout << "** BAI TAP LAP TRINH MON LAP TRINH C **"<<endl;
			cout << "***************TUAN 1******************"<<endl;
			string a, b, c, d;
			double q, w, e, r, d1,f2; 
			cout << "Ho va ten: ";cin >> a;
			cout << "Lop: ";cin >> a;
			cout << "Khoa: ";cin >> a;
			cout << "Nam hoc: ";cin >> a;
			cout << "** BANG DIEM **"<<endl;
			cout << "Mon 1: ";cin >> q;
			cout << "Mon 2: ";cin >> w;
			cout << "Mon 3: ";cin >> e;
			cout << "Mon 4: ";cin >> r;
			cout << "Mon 5: ";cin >> d1;
			f2 = ( q+w+e+r+d1)/4;
			cout << "Trung binh: "<< f2;

		}else if(luaChon=='8') {
			
			/* cau 8 */

			int  a, b;
			cout << "Nhap gia tri a: ";cin >> a;
			cout << "Nhap gia tri b: ";cin >> b;
			cout << "Ket qua phan nguyen la: "<< (a/b)<< endl;
			cout << "Ket qua phan du la: "<< (a%b);
			
		
		}else if(luaChon=='9') {
				/* cau 9 */
			
			int n, a, b, s;
			cout << "Nhap gia tri n: ";cin >> n;
			a = n/10;
			b = n%10;
			s = a+b;
			cout << "Nhap gia tri tong la: "<< s;
		}
	}while(luaChon !='x');

/* cau 1 */

//cout << "***************************\n";
//cout << "*	THAO CHUONG BANG  *\n";
//cout << "* 	   LAP TRINH C	  *\n";
//cout << "***************************\n";

/* cau 2  */

//int nam;
//cout << "Nhap nam sinh";
//cin>> nam;
//cout << "Ban sinh nam " << nam <<  " vay ban " <<  2023 - nam <<  " tuoi" ;

/* cau 3 */

//char n;
//int a;
//cout << "Nhap ky tu bat ki: "; cin >> n;
//cout << "So ASCII la: "<< n+0<< endl;
//cout << "Nhap so bat ky: "; cin >> a;
//cout << "Ky tu la: "<< char(a)<< endl;

/* cau 4 */
//int r;
//float  cv,dt;
//const float PI = 3.14;
//cout << "Nhap r: "; cin >> r;
//cv = 2*PI*r;
//cout << "Chu vi la:" << cv  << endl;
//dt = r*r*PI;
//cout << "Dien tich la: "<< dt << endl; 

/* cau 5 */

//int min, max, x, y;
//cout  << "nhap gia tri min: " ; cin >> min;
//cout  << "nhap gia tri max: " ; cin >> max;
//x = (min<max)?min:max;
//y = (min>max)?min:max;
//cout << "min la "<< x << ", max la  "<< y << endl;

/* cau 6 */

//cout << "Ho ten:................................................"<<endl;
//cout << "Ma so sih vien:........................................"<<endl;
//cout << "Lop:..................................................."<<endl;
//cout << "So dien thoa:....................Gio tinh:............."<< endl;

/* cau 7 */

//cout << "** BAI TAP LAP TRINH MON LAP TRINH C **"<<endl;
//cout << "***************TUAN 1******************"<<endl;
//string a, b, c, d;
//double q, w, e, r, d1,f2; 
//cout << "Ho va ten: ";cin >> a;
//cout << "Lop: ";cin >> a;
//cout << "Khoa: ";cin >> a;
//cout << "Nam hoc: ";cin >> a;
//cout << "** BANG DIEM **"<<endl;
//cout << "Mon 1: ";cin >> q;
//cout << "Mon 2: ";cin >> w;
//cout << "Mon 3: ";cin >> e;
//cout << "Mon 4: ";cin >> r;
//cout << "Mon 5: ";cin >> d1;
//f2 = ( q+w+e+r+d1)/4;
//cout << "Trung binh: "<< f2;

/* cau 8 */

//int  a, b;
//cout << "Nhap gia tri a: ";cin >> a;
//cout << "Nhap gia tri b: ";cin >> b;
//cout << "Ket qua phan nguyen la: "<< (a/b)<< endl;
//cout << "Ket qua phan du la: "<< (a%b);

/* cau 9 */

//int n, a, b, s;
//cout << "Nhap gia tri n: ";cin >> n;
//a = n/10;
//b = n%10;
//s = a+b;
//cout << "Nhap gia tri tong la: "<< s;




}
