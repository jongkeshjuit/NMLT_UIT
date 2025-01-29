//Bài 60: Hãy kiểm tra các chữ số của số nguyên dương n có tăng dần từ trái sang phải hay không
#include <iostream>
using namespace std;
int KiemTraTangDan(int n);
int main()
{
    int n;
    do
    {
        cout<<"\nNhap n: ";
        cin>>n;
    }while(n<0 && cout<<"Nhap lai n." );
    KiemTraTangDan(n);
}
int KiemTraTangDan(int n)
{
        bool CheckTangDan = true;
        int m = n;
        int ChuSoCuoi = m % 10;  // lấy ra chữ số cuối
        m /= 10;
        while(m != 0)
        {
            int ChuSoKeCuoi = m % 10;
            m /= 10;
            if (ChuSoKeCuoi > ChuSoCuoi)
            {
                CheckTangDan = false;
                break;
            }
            else
            {
                ChuSoCuoi = ChuSoKeCuoi;  // Cập nhật lại chữ số cho lần so sánh tiếp theo
            }
        }
        if(CheckTangDan)
            cout<<"\nDung !!!";
        else
            cout<<"\nSai !!!";

}
