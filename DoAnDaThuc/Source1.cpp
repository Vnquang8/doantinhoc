#include"Header.h"
#include"fstream"
void NhapDaThuc(DaThuc& p)
{
	do
	{
		cout << "\nNhap bac da thuc: "; cin >> p.Bac;
	} while (p.Bac<=-1);

	for (int i = p.Bac; i >= 0; i--)
	{
		cout << "\nNhap he so bac thu "<<i<<" : ";
		cin >> p.HeSo[i];
	}
}

int KTMangToan0(DaThuc p)
{
	for (int i = 0; i <= p.Bac ; i++)
	{
		if (p.HeSo[i]!=0)
		{
			return 1;
		}
	}
	return 0;
}

void XuatDaThuc(DaThuc p)
{
	if (p.Bac >= 1)
	{
		for (int i = p.Bac; i >= 0; --i)
		{
			if (KTMangToan0(p)==0)
			{
				cout << 0;
				break;
			}
			else
			{
				if (i > 1)
				{
					if (p.HeSo[i] > 0)
					{
						if (p.HeSo[i] != 1)
							cout << "+" << p.HeSo[i] << "x^" << i;
						else
						{
							cout << "+" << "x^" << i;
						}
					}
					else if (p.HeSo[i] < 0)
					{
						if (p.HeSo[i] != -1)
							cout << p.HeSo[i] << "x^" << i;
						else
						{
							cout << "-" << "x^" << i;
						}
					}
					else
					{
						continue;
					}
				}
				else if (i == 1)
				{
					if (p.HeSo[i] > 0)
					{
						if (p.HeSo[i] != 1)
							cout << "+" << p.HeSo[i] << "x";
						else
						{
							cout << "+" << "x";
						}

					}
					else if (p.HeSo[i] < 0)
					{
						if (p.HeSo[i] != -1)
							cout << p.HeSo[i] << "x";
						else
						{
							cout << "-" << "x";
						}
					}
					else
					{
						continue;
					}
				}
				else
				{
					if (p.HeSo[i] > 0)
					{
						if (p.HeSo[i] != 1)
							cout << "+" << p.HeSo[i];
						else
						{
							cout << "+" << p.HeSo[i];
						}

					}
					else if (p.HeSo[i] < 0)
					{
						if (p.HeSo[i] != -1)
							cout << p.HeSo[i];
						else
						{
							cout << p.HeSo[i];
						}
					}
					else
					{
						continue;
					}
				}
			}
		}
	}
	else
	{
		for (int i = p.Bac; i >= 0; i--)
		{
			cout << "+" << p.HeSo[i];
		}
	}
}

//void XuatDaThuc(DaThuc p)
//{
//	if (p.Bac>=1)
//	{
//		for(int i=p.Bac;i>=0;--i)
//			if (i>1)
//			{
//				if (p.HeSo[i] > 0)
//				{
//					if (p.HeSo[i] != 1)
//						cout << "+" << p.HeSo[i] << "x^" << i;
//					else
//					{
//						cout << "+" << "x^" << i;
//					}
//				}
//				else if (p.HeSo[i] < 0)
//				{
//					if (p.HeSo[i] != -1)
//						cout << p.HeSo[i] << "x^" <<i;
//					else
//					{
//						cout << "-" << "x^" << i;
//					}
//				}
//				else
//				{
//					continue;
//				}
//			}
//			else if (i==1)
//			{
//				if (p.HeSo[i]>0)
//				{
//					if (p.HeSo[i] != 1)
//						cout << "+" << p.HeSo[i] << "x";
//					else
//					{
//						cout << "+" << "x" ;
//					}
//
//				}
//				else if (p.HeSo[i] < 0)
//				{
//					if (p.HeSo[i] != -1)
//						cout << p.HeSo[i] << "x" ;
//					else
//					{
//						cout << "-" << "x";
//					}
//				}
//				else
//				{
//					continue;
//				}
//			}
//			else
//			{
//				if (p.HeSo[i] > 0)
//				{
//					if (p.HeSo[i] != 1)
//						cout << "+" << p.HeSo[i];
//					else
//					{
//						cout << "+" << p.HeSo[i];
//					}
//
//				}
//				else if (p.HeSo[i] < 0)
//				{
//					if (p.HeSo[i] != -1)
//						cout << p.HeSo[i];
//					else
//					{
//						cout << p.HeSo[i];
//					}
//				}
//				else
//				{
//					continue;
//				}
//			}
//	}
//	else
//	{
//		for (int i = p.Bac; i >= 0; i--)
//		{
//			cout << "+" << p.HeSo[i];
//		}
//	}
//}

void chuanhoaDT(DaThuc& dt1, DaThuc& dt2) {
	//int max = dt1.Bac >= dt2.Bac ? dt1.Bac : dt2.Bac;
	if (dt1.Bac > dt2.Bac) {
		while (dt2.Bac<=dt1.Bac) {
			dt2.Bac++;
			dt2.HeSo[dt2.Bac] = 0;
		}
	}
	else if (dt1.Bac < dt2.Bac) {
		while (dt1.Bac <= dt2.Bac) {
			dt1.Bac++;
			dt1.HeSo[dt1.Bac] = 0;
		}
	}
}

void CongDaThuc(DaThuc dt1, DaThuc dt2, DaThuc& Cong)
{
	Cong.Bac = dt1.Bac >= dt2.Bac ? dt1.Bac : dt2.Bac;
	chuanhoaDT(dt1, dt2);
	for (int i = 0; i <= Cong.Bac; i++)
	{
		Cong.HeSo[i] = dt1.HeSo[i] + dt2.HeSo[i];
	}
}

void TruDaThuc(DaThuc dt1, DaThuc dt2, DaThuc& Tru)
{
	Tru.Bac = dt1.Bac >= dt2.Bac ? dt1.Bac : dt2.Bac;
	chuanhoaDT(dt1, dt2);
	for (int i = 0; i <= Tru.Bac ; i++)
	{
		Tru.HeSo[i] = dt1.HeSo[i] - dt2.HeSo[i];
	}
}

void NhanDaThuc(DaThuc dt1, DaThuc dt2, DaThuc& Nhan)
{
	Nhan.Bac = dt1.Bac + dt2.Bac;
	for (int i = 0; i <= Nhan.Bac ; i++)
	{
		Nhan.HeSo[i] = 0;
	}
	for (int i = 0; i <= dt1.Bac ; i++)
	{
		for (int j = 0; j <= dt2.Bac; j++)
		{
			Nhan.HeSo[i + j] += dt1.HeSo[i] * dt2.HeSo[j];
		}
	}
}

DaThuc docdathuc()
{
	DaThuc dt;
	dt.Bac = 0;
	ifstream iff("dathuc.txt", ios::in);
	if (!iff)
	{
		cout << "Khong mo duoc file";
		return dt;
	}
	iff >> dt.Bac;
	for (int i = dt.Bac; i >= 0; i--)
	{
		iff >> dt.HeSo[i];
	}
	return dt;
}

int ghidathuc(DaThuc dt1 , DaThuc dt2,DaThuc kq)
{
	ofstream of("dathuc.txt", ios::out);
	if (!of)
	{
		cout << "Loi";
		return 0;
	}
	of << dt1.Bac << endl;
	for (int i = dt1.Bac; i >= 0; i--)
	{
		of << dt1.HeSo[i] << "\t";
	}
	of << endl;
	of << dt2.Bac << endl;
	for (int i = dt2.Bac; i >= 0; i--)
	{
		of << dt2.HeSo[i] << "\t";
	}
	of << endl;
	of << kq.Bac << endl;
	for (int i = kq.Bac; i >= 0; i--)
	{
		of << kq.HeSo[i] << "\t";
	}
	of << endl;
	return 0;
}

void ChiaDaThuc(DaThuc dt1, DaThuc dt2, DaThuc& Chia,DaThuc &duchia)
{
	if (dt1.Bac < dt2.Bac)
	{
		cout << "\nKhong the chia";		
	}
}


//void HienThimenu()
//{
//	cout << "Chon 1 trong nhung chuc nang sau:";
//	cout << "\n1. Nhap 2 Da thuc";
//	cout << "\n2. Xuat 2 Da thuc";
//	cout << "\n3. Cong 2 Da thuc";
//	cout << "\n4. Tru 2 Da thuc";
//	cout << "\n5. Nhan 2 Da thuc";
//	cout << "\n6. Chia 2 Da thuc";
//}

//void Chonmenu(DaThuc &dt1, DaThuc &dt2, DaThuc &kq)
//{
//	int chon;
//	HienThimenu();
//	do
//	{
//		cout << "\nNhap so de chon chuc nang (0 de out): ";
//		cin >> chon;
//		switch (chon)
//		{
//		case 1:
//			cout << "\nNhap da thuc 1: ";
//			NhapDaThuc(dt1);
//			cout << "\nNhap da thuc 2: ";
//			NhapDaThuc(dt2);
//			cout << "---------------------------------------------------------------------------------------------";
//			break;
//		case 2:
//			cout << "\nDa thuc 1: ";
//			XuatDaThuc(dt1);
//;
//			cout << "\nDa thuc 2: ";
//			XuatDaThuc(dt2);
//
//			cout << "\n---------------------------------------------------------------------------------------------";
//			break;
//		case 3:
//			CongDaThuc(dt1, dt2, kq);
//			cout << "\nCong 2 da thuc: ";
//			XuatDaThuc(kq);
//			ghidathuc(dt1,dt2,kq);
//			cout << "\n---------------------------------------------------------------------------------------------";
//			break;
//		case 4:
//			TruDaThuc(dt1, dt2, kq);
//			cout << "\nTru 2 da thuc: ";
//			XuatDaThuc(kq);
//
//			cout << "\n---------------------------------------------------------------------------------------------";
//			break;
//		case 5:
//			NhanDaThuc(dt1, dt2, kq);
//			cout << "\nNhan 2 da thuc: ";
//			XuatDaThuc(kq);
//
//			cout << "\n---------------------------------------------------------------------------------------------";
//			break;
//		default:
//			cout << "Nhap tu 1 den 6 ";
//			break;
//		}
//	} while (chon != 0);
//}