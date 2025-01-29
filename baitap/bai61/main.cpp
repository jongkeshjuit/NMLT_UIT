//Bài 61: Hãy kiểm tra các chữ số của số nguyên dương n có giảm dần từ trái sang phải hay không
#include <iostream>
using namespace std;
int KiemTraGiamDan(int n);
int main()
{
    int n;
    do
    {
        cout<<"\nNhap n: ";
        cin>>n;
    }while(n<0 && cout<<"Nhap lai n." );
    KiemTraGiamDan(n);
}
int KiemTraGiamDan(int n)
{
        bool CheckGiamDan = true;
        int m = n;
        int ChuSoCuoi = m % 10;  // lấy ra chữ số cuối
        m /= 10;
        while(m != 0)
        {
            int ChuSoKeCuoi = m % 10;
            m /= 10;
            if (ChuSoKeCuoi < ChuSoCuoi)
            {
                CheckGiamDan = false;
                break;
            }
            else
            {
                ChuSoCuoi = ChuSoKeCuoi;  // Cập nhật lại chữ số cho lần so sánh tiếp theo
            }
        }
        if(CheckGiamDan)
            cout<<"\nDung !!!";
        else
            cout<<"\nSai !!!";

}
