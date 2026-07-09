#include <iostream>
#include <stdio.h>
using namespace std;
class phanso {
public:
	int tu;
	int mau;
	int tich() {
		return tu * mau;
	}
	phanso nhanhaiso(phanso khac) {
		phanso moi;
		moi.tu = tu * khac.tu;
		moi.mau = mau * khac.mau; 
		return moi;
	}
	phanso() {
		cout << " da goi ham tao " << endl;
		tu = 0; mau = 0;
	}
	phanso(int _tu, int _mau) {
		tu = _tu; mau = _mau;
	}
	phanso operator*(phanso khac) {
		phanso ketqua;
		ketqua.tu = tu * khac.tu;
		ketqua.mau = mau * khac.mau;
		return ketqua;
	}
};

class mang {
public: 
	int* diachi;
	int length;
	mang(int len) {
		diachi = (int*)calloc(len, sizeof(int));
		length = len;
	}
	void set(int vitri, int giatri) {
		diachi[vitri] = giatri;
	}
	int get(int vitri) {
		return diachi[vitri];
	}
	int& operator[](int vitri) {
		return diachi[vitri];
	}
};

int main() {
	//phanso a;
	//a.tu = 5; a.mau = 7;
	//auto ketqua = a.tich();
	//cout << "tich " << ketqua << endl;
	//phanso b;
	//b.tu = 9; b.mau = 10;
	//phanso moi;
	////moi = a.nhanhaiso(b);
	////cout << "phan so moi " << "tu: " << moi.tu << " mau: " << moi.mau << endl;
	//phanso c (5,7);
	//moi = a * b;
	
	mang A(5); A.set(2, 9);
	cout << "A[2]: " << A.get(2) << endl;
	A[4] = 5;


	return 0;
}
// bt: xay dung class mieu ta doi tuong la MANG chua cac doi tuong la int 
//- memory: con trỏ chứa địa chỉ của vùng nhớ
//- length:số lượng đối tượng trong mảng
// ------
//- hàm tạo: +input: số lượng phần tử mà mảng này lưu 
//+ tạo ra vùng nhớ để chưa các đối tượng (dung calloc, malloc) 
//- hàm set giá trị: +input: vị trí, giá trị 
//+ ghi giá trị vào vùng nhớ được tạo ra bằng malloc, calloc 
// VD: mang.set(1,2);
//- hàm get giá trị: input: vị trí, output: giá trị đối tượng ở vị trí input
//- hàm hủy: free vùng nhớ được tạo ra bởi malloc, calloc 