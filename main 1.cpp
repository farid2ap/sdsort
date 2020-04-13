#include <iostream>
#include<conio.h>
#include <stdio.h>
#include<string.h>

using namespace std;

int main()
{

    char nama[50], cari[10];

    cout<<"Masukkan nama : ";
    gets(nama);

    cout<<"Masukkan karakter yang ingin dicari : ";
    gets(cari);

    cout<<endl;

    if(strstr(nama, cari)){
        cout<<"Data Ditemukan!!!";
    } else {
        cout<<"Data Tidak Ditemukan!!!";
    }

    getch();

    return 0;

}
