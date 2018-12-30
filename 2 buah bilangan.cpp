#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
int main()
{
    char coba;
    do
    {
        int bill;
        cout<<"MASUKAN BILANGAN KE-1 :";
        cin>>bill;cout<<endl;
        int bil2;
        cout<<"MASUKAN BILANGAN KE-2 :";
        cin>>bil2;cout<<endl;
        double hasil=0;
        for(int i=1;i<=bil2;i++)
        {
            hasil = hasil+bill;
        }
        cout<<"t/t/t "<<bill<<" x "<<bil2<<" = "<<hasil<<"\n"<<endl;
        cout<<"coba sukses ?(y) "<<endl;
        coba = getch();
        system("cls");
    }
    while (coba=='y');
    char a=3;
    getch();
    system("exit");
    return 0;
}
