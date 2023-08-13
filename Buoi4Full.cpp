# include <iostream>
# include <cmath>

using namespace std;

void Nhap(int a[], int &n) {
	do {
		cout <<"Nhap so luong n: ";
		cin>>n;
	}while(n<=0);
		for(int i=0; i<=n;i++) {
			cout<<"Nhap so luong thu "<<i<<": ";
			cin>>a[i];
		}
}

void Xuat(int a[], int n) {
	cout<<"Ta co"<<endl;
	for(int i=0; i<=n;i++) {
			cout<<a[i]<<endl;
		}
}

//float TrungBinhCong(int a[], int n) {
//	float s=0;
//	int dem=0;
//	for(int i=0; i<=n;i++) {
//		s+=a[i];
//		dem++;
//	}
//	float tb = s/dem;
//	return tb;
//}

// Cau 1

void TrungBinhCong_DuongAm(int a[], int n) {
	float s=0, s1=0;
	int dem=0, dem1=0;
	cout<<"Cau 1 a"<<endl;
	int lc=0;
	do {
		cout <<"Nhap 1 theo duong"<<endl;
		cout<<"Nhap 2 theo am"<<endl;
		cout<<"Nhap 3 de thoat"<<endl;
		cout<<"Lua chon: ";
		cin>>lc;
		if(lc==1) {
			for(int i=0; i<=n;i++) {
				if(a[i]>0) {
					s+=a[i];
					dem++;
				}
			}
			if(dem==0) {
				cout<<"Ko co so duong"<<endl;
			}else {
				float tb = s/dem;
				cout <<"KQ la: "<<tb<<endl;
			}
			
		}else if(lc==2) {
			for(int i=0; i<=n;i++) {
				if(a[i]<0) {
					s1+=a[i];
					dem1++;
				}
			}
			if(dem1==0) {
				cout<<"Ko co so am"<<endl;
			}else {
				float tb = s1/dem1;
				cout <<"KQ la: "<<tb<<endl;
			}
		
		}else if(lc==3) {
			break;
		}
	}while(lc !=0); 		
}

bool SNT(int n) {
	if(n<2) 
		return false;
		
	for(int i=2; i<=sqrt(n); i++) {
		if(n%i==0) {
			return false;
		}	
	} 
	return true;
}

void demSL_SNT(int a[], int n) {
	int dem=0;
	for(int i=0; i<=n;i++) {
		if(SNT(a[i])) {
			dem++;
		}
	}
	cout<<"Co "<<dem<<"SNT"<<endl;
}

void XuatSNT(int a[], int n) {
	cout<<"Xuat SNT: "<<endl;
	for(int i=0; i<=n;i++) {
		if(SNT(a[i])) {
			cout<<a[i]<<endl;
		}
	}
	
}

void HoanVi(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}


void sapXepSoChan(int a[], int n) {
	cout<<"Cac so sau khi sap xep la: "<<endl;		
	for(int i=0;i<n;i++) {
		for(int j=i+1;j<n;j++) {
			if((a[i] % 2 == 0 && a[j] % 2 == 0)) { 
				 if(a[i]>a[j]) {
            		HoanVi(a[i], a[j]);
            	}	
			}
       
		}
	 cout<<a[i]<<endl;	
	}  
}

//  Cau2

void ThongBaoTim(int a[], int n) {
	int dem =0;
	int x;
	cout<<"NHap chu muon tim: ";cin>>x;
	for(int i=0; i<=n;i++) {
		if(a[i]==x) {
			dem++;
		}	
	}
	if(dem==0) {
		cout<<"Ko co so "<<x<<" trong mang"<<endl;
	}else {
		cout<<"Co so "<<x<<" trong mang"<<endl;
	}
}

void XoaPhanTu(int a[], int n, int x) {
	for(int i=x;i<=n;i++) {
		a[i] = a[i + 1];
	}
	 n--;
}
void Dem(int a[], int n) {
	int dem=0;
	int i;
	int x;
	cout<<"NHap so muon dem va xoa trong phan tu: ";cin>>x;
	for(int i=0; i<=n;i++) {
		if(a[i]==x) {
			dem++;
		}
	}
	cout<<"Ta co: "<<dem<<endl;	
}

// Cau 3
void DemVaXoa(int a[], int n) {
	int dem=0;
	int i;
	int x;
	cout<<"NHap so muon dem va xoa trong phan tu: ";cin>>x;
	for(int i=0; i<=n;i++) {
		if(a[i]==x) {
			XoaPhanTu(a, n, i);
			i--;
			dem++;
		}
		cout<<a[i]<<endl;
	}
	if(dem==0) {
		cout<<"Ko co"<<endl;
	}else {
		cout<<"Ta co: "<<dem<<endl;			
	}
}

void sapXepTang(int a[], int n) {
	for(int i=0; i<=n;i++) {
		for(int j=i+1; j<=n;j++) {
			if(a[i]>a[j]) {
				HoanVi(a[i], a[j]);
				}
			}	
		}
	}

void sapXepGiam(int a[], int n) {
	for(int i=0; i<=n;i++) {
				for(int j=i+1; j<=n;j++) {
					if(a[i]<a[j]) {
						HoanVi(a[i], a[j]);
					}
				}	
			}
}



void chenMangTangGiam(int a[], int &n) {
	int x;
	cout<<"Nhap so muon chen: "; 
	cin>>x;
    int i, j;
    for(i = 0; i <= n; i++)
    {
        if(x < a[i])
        {
            int temp = x;
            for(j = n; j > i; j--)
            {
                a[j] = a[j - 1];
            }
            a[i] = temp;
            break;
        }
    }
    n++;
}

int main() {
	cout<<"MENU"<<endl;
	cout<<"Nhap so lua chon cho tung cau hoi"<<endl;
	int lc=0;
	do {
		cout<<"Cau 1"<<endl;
		cout<<"Cau 2"<<endl;
		cout<<"Cau 3"<<endl;
		cout<<"Cau 4"<<endl;
		cout<<"Cau 5"<<endl;
		cout<<"Cau 6"<<endl;
		cout<<"Cau 7"<<endl;
		cout<<"Cau 8"<<endl;
		cout<<"Cau 9"<<endl;
		cout<<"Cau 10"<<endl;
		cout<<"Nhap so lua chon cho tung cau hoi: ";
		cin>>lc;
		if(lc==1) {
			int n;
		    int a[100];
		    Nhap(a, n);
		    Xuat(a, n);
		    
		    TrungBinhCong_DuongAm(a, n);
		    XuatSNT(a, n);
		    sapXepSoChan(a, n);
		
		}else if(lc==2) {
			int n;
		    int a[100];
		    Nhap(a, n);
		    Xuat(a, n);
		    ThongBaoTim(a, n);
//		    int x;
//			cout<<"NHap so muon dem va xoa trong phan tu: ";cin>>x;
		    DemVaXoa(a, n);
		}else if(lc==3) {
			int n, x;
		    int a[100];
		    Nhap(a, n);
		    Xuat(a, n);
		    
		    sapXepTang(a, n);
		    
		    chenMangTangGiam(a, n);
		    Xuat(a, n);
		    
			
		}else if(lc==4) {
			
		}else if(lc==5) {
			
		}else if(lc==6) {
			
		}else if(lc==7) {
			
		}else if(lc==8) {
			
		}else if(lc==9) {
			
		}else if(lc==10) {
			
		}
	}while(lc !=0);
}
