#include"Header.h"
void main()
{
	DaThuc dt1, dt2, kq/*, du*/;
	cout << "\nNhap da thuc 1: ";
	NhapDaThuc(dt1);
	cout << "\nDa thuc 1: ";
	XuatDaThuc(dt1);


	cout << "\nNhap da thuc 2: ";
	NhapDaThuc(dt2);
	cout << "\nDa thuc 2: ";
	XuatDaThuc(dt2);
	
	
	CongDaThuc(dt1, dt2,kq);
	cout << "\nCong 2 da thuc: ";
	XuatDaThuc(kq);

	TruDaThuc(dt1, dt2, kq);
	cout << "\nTru 2 da thuc: ";
	XuatDaThuc(kq);


	NhanDaThuc(dt1, dt2, kq);
	cout << "\nNhan 2 da thuc: ";
	XuatDaThuc(kq);

}