#include <iostream>

using namespace std;

int odp;

int wysokosc;
int wysokosc_igiel;
int liczba_spacji;
int liczba_gwiazdek = 1;

int main()
{
    cout <<"Chcesz normalna choinke czy do gory nogami?"<<endl;
    cout <<"[1] NORMALNA"<<endl;
    cout <<"[2] DO GORY NOGAMI"<<endl;
    cin>>odp;
    cout<<"Jakiej wysokosci choinke"<<endl;
    cin>>wysokosc;
    switch(odp) {
        case 1:
            wysokosc_igiel = wysokosc-1;
            liczba_spacji = wysokosc - 2;
            for (int i=0; i<wysokosc_igiel; i++){
                for (int i=0; i<liczba_spacji; i++){
                    cout<<" ";
                }
                for (int i=0; i<liczba_gwiazdek; i++){
                    cout<<"*";
                }
                liczba_spacji--;
                liczba_gwiazdek++;
                liczba_gwiazdek++;
                cout<<endl;
            }
            liczba_spacji = (wysokosc)-2;
            for (int i=0; i<liczba_spacji; i++){
                cout<<" ";
            }
            cout<<"#";
            break;
        case 2:
            liczba_spacji = wysokosc-2;
            for (int i=0; i<liczba_spacji; i++){
                cout<<" ";
            }
            cout<<"#"<<endl;
            liczba_spacji = 0;
            wysokosc_igiel = wysokosc-1;
            liczba_gwiazdek = (wysokosc-2)*2 ;
            liczba_gwiazdek++;
            for (int i=0; i<wysokosc_igiel; i++){
                for (int i=0; i<liczba_spacji; i++){
                    cout<<" ";
                }
                for (int i=0; i<liczba_gwiazdek; i++){
                    cout<<"*";
                }
                liczba_spacji++;
                liczba_gwiazdek--;
                liczba_gwiazdek--;
                cout<<endl;
            }
            break;
        default:
            cout<<"Nie ma takich choinek";
            break;
    }
}
