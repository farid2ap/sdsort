#include <iostream>

using namespace std;

int main()
{
    int jml, i, tanda=-1;
    string cari, arr[50];

    cout<<"Masukkan banyaknya nama : ";
    cin>>jml;
    for(i=0; i<jml;i++) {
        cout<<i+1<<". "<<arr[i];
        cin>>arr[i];
    }
    cout<<"Masukkan nama yang ingin dicari : ";
    cin>>cari;
    for(i=0;i<jml;i++){
        if(cari==arr[i]){
            tanda=i;
            break;
        }

    }

    if(tanda!=-1){
        cout<<"Data Ditemukan!!!";
    } else {
        cout<<"Data Tidak Ditemukan!!!";
    }
    return 0;
}
