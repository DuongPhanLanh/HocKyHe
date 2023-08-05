# include<iostream>
# include <cmath>
# define MAX 100
using namespace std;

int Nhap(int a[], int n) {
	for(int i=0; i<=n;i++) {
		cout<<"Nhap so a["<<i<<"] la: ";
		cin>>a[i];
	}
}

int Xuat(int a[], int n) {
	cout<<"Cac mang gom: "<<endl;
	for(int i=0; i<=n;i++) {
		cout<<a[i]<<endl;
	}
}

//int ViTriXCuoi(int a[],int n,int x)
//{
//	for(int i=n-1; i>=0; i--)
//	{
//		if(a[i]==x)
//			return i;
//	}
//	return -1;
//}

int TangDanKoSapXep(int a[], int n) {
	for(int i=0; i<=n;i++) {
		if(a[i]<a[i+1]) {
			cout <<"La sap xep tang"<<endl;
			break;
		}else {
			cout<<"La sap xep khong tang"<<endl;
			break;
		}
	}
}

int KTDoiXung(int a[], int n) {
	for(int i = 0; i < n/2;i++) {
		if(a[i] != a[n -i -1]) {
			return -1;
			break;
		}
	}
	return 1;
}

int LietKe1Lan(int a[], int n) {
	int dem=0;
	for(int i=0; i<=n;i++) {
		if(a[i]==a[i-1] || a[i]==a[i+1]) {
			dem++;
		}
		if(dem==0) {
			cout<<"so ko trung la: "<<a[i]<<endl;
		}
		else if(dem==1) {
			cout<<"so trung la: "<<a[i]<<endl;
		}	
	}	
}

int soAm(int a[], int n) {
	int min = a[0];
	for(int i=0; i<n;i++) {
			if(a[i]<min) {
				min=a[i];
			}	
	}
	return min;
}

int ViTriAmLonNhat(int a[], int n) {
	int min = soAm(a, n);
    for(int i = 0;i < n; i++)
    	{
        if(a[i] == min) {
           cout<<"Vi tri thu: "<<i<<endl;
        }
    }
}

void ThemPhanTu(int a[], int n, int val, int pos){
    // Mang da day, khong the them.
    if(n >= MAX){
        return;
    }
    // Neu pos <= 0 => Them vao dau
    if(pos < 0){
        pos = 0;
    }
    // Neu pos >= n => Them vao cuoi
    else if(pos > n){
        pos = n;
    }
    // Dich chuyen mang de tao o trong truoc khi them.
    for(int i = n; i > pos; i--){
        a[i] = a[i-1];
    }
    // Chen val tai pos
    a[pos] = val;
    // Tang so luong phan tu sau khi chen.
    ++n;
}

void XoaPhanTu(int a[], int n, int pos){
    // Mang rong, khong the xoa.
    if(n <= 0){
        return;
    }
    // Neu pos <= 0 => Xoa dau
    if(pos < 0){
        pos = 0;
    }
    // Neu pos >= n => Xoa cuoi
    else if(pos >= n){
        pos = n-1;
    }
    // Dich chuyen mang
    for(int i = pos; i < n - 1; i++){
        a[i] = a[i+1];
    }
    // Giam so luong phan tu sau khi xoa.
    --n;
}

int main() {
	int a[MAX], n;
//	cout<<"Nhap so n: ";cin>>n;
//	cout<<"Ta co: "<<endl;
	
	do {
		cout<<"Nhap so n: ";cin>>n;
	}while(n<=0);
		cout<<"Ta co: "<<endl;
		Nhap(a, n);
		Xuat(a, n);
		TangDanKoSapXep(a, n);
		
		if(KTDoiXung(a,n)== 1) {
			cout<<"Mang doi xung "<<endl;
		}else {
			cout<<"Mang khong doi xung "<<endl;
		}
		
		LietKe1Lan(a, n);
		ViTriAmLonNhat(a, n);
		
		cout<<"THEM PHAN TU"<<endl;
	    int val, pos;
	    cout<<"Nhap so can them: ";cin>>val;
	    cout<<"Nhap vi tri muon chen: ";cin>>pos;
	    ThemPhanTu(a, n, val, pos);
	   	cout<<"Mang sau khi them: "<<endl;
	    Xuat(a, n);
	    
	    cout<<"XOA PHAN TU"<<endl;
	    cout<<"Nhap vi tri muon xoa: ";cin>>pos;
	    XoaPhanTu(a, n, pos);
		cout<<"Mang sau khi xoa: "<<endl;
	    Xuat(a, n);
}
