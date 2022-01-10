#include<iostream>
using namespace std;
#include<string>
#include<fstream>

struct sinhvien
{
	string maso;
	string hoten;
	float diem;
};
typedef struct sinhvien SINHVIEN;
/*
// hàm nh?p thông tin 1 sinh viên
void Nhap_Thong_Tin_1_Sinh_Vien(SINHVIEN &sv)
{
	fflush(stdin);
	cout << "\nNhap ma so sinh vien: ";
	getline(cin, sv.maso);

	fflush(stdin);
	cout << "\nNhap ho ten sinh vien: ";
	getline(cin, sv.hoten);

	cout << "\nNhap diem sinh vien: ";
	cin >> sv.diem;

}

// hàm xu?t thông tin 1 sinh viên
void Xuat_Thong_Tin_1_Sinh_Vien(SINHVIEN sv)
{
	cout << "\nMa so sinh vien: " << sv.maso;
	cout << "\nHo ten sinh vien: " << sv.hoten;
	cout << "\nDiem sinh vien: " << sv.diem;
}
*/
// istream, ostream

// n?p ch?ng toán t? >> - d? nh?p d? li?u cho 1 sinh viên
// is và sv là 2 tham s? do ngu?i l?p trình t?o

istream& operator >> (istream& is, SINHVIEN &sv)
{
	fflush(stdin);
	cout << "\nNhap ma so sinh vien: ";
	getline(is, sv.maso);

	fflush(stdin);
	cout << "\nNhap ho ten sinh vien: ";
	getline(is, sv.hoten);

	cout << "\nNhap diem sinh vien: ";
	is >> sv.diem;

	return is;
}

// n?p ch?ng toán t? << - xu?t d? li?u trong strut SINHVIEN
ostream& operator << (ostream& os, SINHVIEN sv)
{
	os << "\nMa so sinh vien: " << sv.maso;
	os << "\nHo ten sinh vien: " << sv.hoten;
	os << "\nDiem sinh vien: " << sv.diem;

	return os;
}


int main()
{
	
	SINHVIEN sv;
	cout << "\n\n\t\t NHAP THONG TIN SINH VIEN\n";
	cin >> sv; // <=> Nhap_Thong_Tin_1_Sinh_Vien(sv);
	cout << "\n\n\t\t XUAT THONG TIN SINH VIEN\n";
	cout << sv; // <=> Xuat_Thong_Tin_1_Sinh_Vien(sv);
	

	system("pause");
	return 0;
}
