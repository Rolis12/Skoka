#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    // Programmu izveidoja Rolands Cîrulis 11. g klase

    char x;
    string klase;
    string skaits;

    ifstream mans_fails2; //definç mainîgo faila nolasîðanai
    mans_fails2.open("skola.dat",ios::in); //atver failu nolasîðanai
        int RinduSkaits = 0;
    string Dati_Rinda;
    while (getline(mans_fails2, Dati_Rinda) )
    {
         ++RinduSkaits;
    }
    cout << RinduSkaits << endl;
    mans_fails2.close(); //aizver failu
    int sk = 24;



    string mas_k[sk];
    int mas_sk[sk];
    ifstream mans_fails; //definç mainîgo faila nolasîðanai
    mans_fails.open("skola.dat",ios::in); //atver failu nolasîðanai
    for(int i = 0; i< (RinduSkaits ); i++)
    {
        if((i % 2) ==0)
        {
             mans_fails.get(x);
             klase = x;
             mans_fails.get(x);
             klase = klase + x;
             if(i>35)
             {
                 mans_fails.get(x);
             klase = klase + x;
             }
            cout << i << " Klase "<< klase << endl;
            mans_fails.get(x);


        }

        else
        {
             mans_fails.get(x);
             skaits = x;
            mans_fails.get(x);
             skaits = skaits + x;
            cout << i << " Skolenu skaits " << skaits <<endl;
            mans_fails.get(x);

        }

    }

     mans_fails.close(); //aizver failu


   // while(!mans_fails.eof()){ //ja nav sasniegtas faila beigas ...
       // cout << x; //nolasîto simbolu izdrukâ ekrânâ
       // mans_fails.get(x); //nolasa no faila vçl vienu simbolu



    //mans_fails.close(); //aizver failu


    cout << "\n\nProgramma darbu pabeidza!" ;

    return 0;
}

