/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<iomanip>
using namespace std;
 
int main()
{
    cout << "Hay chon menu sau:" << endl;
    cout << "Nhap 1: The tich dien tich hinh cau" << endl;
    cout << "Nhap 2: Toa do 2 diem" << endl;
    cout << "Nhap 3: Nhap vao ky tu" << endl;
    cout << "Nhap 4: Nhap vao so tu nhien" << endl;
    cout << "Nhap 5: tinh dien tro" << endl;
    cout << "Nhap 6: Nhap coa so tu nhien n tinh tong" << endl;
    cout << "Nhap 0: de thoat khoi ung dung" << endl;
 
    int control;
    cin >> control;
 
    switch (control){
        case 1:{
            cout << "Ban da chon tinh the tich dien tich hinh cau" << endl;
            double r , V, S;
            double pi = 3.14;
            cout<<"Ban kinh hinh cau";
            cin >> r;
            S = r*r*pi*4;
            V = (4/3)*pi*r*r*r;
            cout << "The tich hinh cau  " << V;
            cout << "\nDien tich hinh cau " <<S;
            break;
    }
        case 2:
            cout << "Ban da chon Toa do 2 diem" << endl;
            // Code them sinh vien
            break;
        case 3:{
            cout << "Ban da chon Nhap vao ky tu" << endl;
            //bai 3 a
            char m;
            cout<< " Nhap 1 ky tu ";
            cin >> m;
            cout << int(m);
            m++;
            cout << "\nKy tu tiep theo " <<m;
            break;
        }
        case 4:{
            cout << "Ban da chon Nhap vao so tu nhien" << endl;
            int n;
            cout<< "\n Nhap so tu nhien ";
            cin >> n;
            cout << char(n);
            n++;
            cout << "\n ky tu tiep theo "<<char(n);
            break;
        }
        case 5:
            cout << "Ban da chontinh dien tro" << endl;
            float R1, R2, R3, R;
            cout<< "\n Nhap dien tro R1";
            cin >> R1;
            cout<< "\n Nhap dien tro R2";
            cin >> R2;
            cout<< "\n Nhap dien tro R3";
            cin >> R3;
            R =((1/R1)+(1/R2)+(1/R3));
            cout << "\n tong tro tuong duong "<< R;
            break;
        case 6:
            cout << "Ban da chon tinh dien tro" << endl;
            
            float n, tong;
            cout<< "\n Nhap so tu nhien n ";
            cin >> n;
            tong = 0;
            for (float a = 1;a <= n; a++) 
            {
                tong = tong + (1/a);
            }
            cout << "\n tong "<< tong;
            break;
        default :
            cout << "Ban chon thoat khoi chuong trinh" << endl;
    }
     
    return 1;
}
