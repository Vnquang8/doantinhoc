#include <iostream>
using namespace std;
#define MAX 100
struct DaThuc
{
	int Bac;
	int HeSo[MAX];
};
void NhapDaThuc(DaThuc& p);
void XuatDaThuc(DaThuc p);
void chuanhoaDT(DaThuc& dt1, DaThuc& dt2);
void CongDaThuc(DaThuc dt1, DaThuc dt2, DaThuc& Cong);
void TruDaThuc(DaThuc dt1, DaThuc dt2, DaThuc& Tru);
void NhanDaThuc(DaThuc dt1, DaThuc dt2, DaThuc& Nhan);
DaThuc docdathuc();
int ghidathuc(DaThuc dt);
void ChiaDaThuc(DaThuc dt1, DaThuc dt2, DaThuc& Chia, DaThuc& duchia);
void HienThimenu();
void Chonmenu(DaThuc& dt1, DaThuc& dt2, DaThuc& kq);
void SoChiaDau(DaThuc a, DaThuc b, DaThuc &c);