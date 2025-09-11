#include <stdio.h>
#include <iostream>  // c?n d? dùng cout, cin
using namespace std;
//class phan_so
//{
//private: // Thuoc tinh
//      int iTuso,iMauso;
//public:  // Khai bao
//      void Nhap();
//	  void Xuat();	
//	  phan_so Tinh_tong(phan_so a);
//};
//void phan_so::Nhap() //phuong thuc
//{
//	cout << "Nhap tu so";
//	cin >> iTuso;
//	cout << "Nhap mau so";
//	cin >> iMauso;
//}
//void phan_so :: Xuat()
//{
//	cout << "tu so";
//	cout << iTuso;
//	cout << "\nmau so";
//	cout << iMauso;
//}
//phan_so phan_so::Tinh_tong(phan_so a)
//{
//	phan_so kp;
//	kp.iMauso = iMauso*a.iMauso;
//	kp.iTuso = iTuso*a.iMauso + a.iTuso * iMauso;
//	return kp;
//}
class chu_nhat
{
	private:
		int dai,rong;
	public: 
		void nhap();
		void xuat();
		int chu_vi();
		void ktra_vuong();
		void so_sanh_chu_vi(chu_nhat a);
};
void chu_nhat::nhap()
{
	cout << "\nChieu dài là: ";
	cin >> dai;
	cout <<"Chieu rông là: ";
	cin >>rong;
}
void chu_nhat::xuat()
{
	cout << "\nChieu dài là: "<<dai;
	cout <<"\nChieu rông là: "<<rong;
	
}
int chu_nhat::chu_vi()
{
	int a = 2 * (dai + rong);
	cout <<"\nChu vi là: " << a;
	return a;
}
void chu_nhat::so_sanh_chu_vi(chu_nhat a)
{
	int x,y;
	x = a.chu_vi();
	y = chu_vi();
	if(x>y)
	{
	 cout << "\nChu vi hon là x = "<<x;
	}
	else if(y>x)
	{
	 cout << "\nChu vi hon là y = "<<y;
	}
	else 
	{
	 cout << "\nbang nhau";
	}
}
void chu_nhat::ktra_vuong()
{
	if(dai == rong)
	{
	 cout << "\nVuong";
	}
	else if(dai != rong)
	{
	 cout <<"\nKhong vuong";
	}
}
int main()
{
chu_nhat x,y;
x.nhap();
//x.xuat();
y.nhap();
//y.xuat();
x.ktra_vuong();
y.so_sanh_chu_vi(x);

//x.chu_vi();
}
