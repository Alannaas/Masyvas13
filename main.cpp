#include <iostream> //pridedame bibliotek�, kuri atsakinga u� �vedim� ir i�vedim�

using namespace std; //eilut�, kuri leid�ia nera�yti std:: prie� cout, cin, endl, fl, df
int kiekis; //sukuriamas kintamasis
int main() //pagrindin� funkcija
{
    setlocale(LC_ALL, "Lithuanian");  //i�vedimui naudosime lietuvi� kalb�
    cout<<"Kiek skai�i� norite �vesti?"<<endl; //paklausiama, kiek skai�i� vartotojas nor�s �vesti
    cin>>kiekis; //�vedamas kiekis skai�i�, kiek bus �vesta
    int skaiciu_kiekis = kiekis - 1; //atimame i� skai�i� 1, nes masyvas prasideda nuo 0
    int skaiciai[skaiciu_kiekis]; //sukuriamas masyvas, kuris talpins tam tikr� kiek� skai�i�

    for(int i = 0; i <= skaiciu_kiekis; i++){ //ciklas, kurio metu vartotojas �veda skai�i� ir jis yra �ra�omas � masyv�
            int norimas;
        cout<<"�veskite norim� skai�i�: "<<endl;
        cin>>norimas;
        skaiciai[i]=norimas; //pirmas skai�ius bus �ra�ytas 0 pozicijoje masyve, nes i yra 0, v�liau kiekvienas skai�ius bus �ra�omas � kit� pozicij�
    }

    int atvirksciai[kiekis]; //sukuriamas masyvas, � kur� bus �ra�omi skai�iai atvirk�tine tvarka

    for(int j = 0 ; j<=skaiciu_kiekis; j++) { //ciklas, kuris � nauj� masyv� �ra�o skai�i� i� pirmojo masyvo, kuris yra paskutinis, v�liau prie� paskutinis ir t.t.
        atvirksciai[j]=skaiciai[skaiciu_kiekis - j];
    }

    for(int k = 0; k<=skaiciu_kiekis; k++){ //ciklas, kuris i�veda skai�ius i� masyvo ir juos atspausdina ekrane
        cout<<atvirksciai[k];
    }
}
