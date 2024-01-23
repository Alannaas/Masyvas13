#include <iostream> //pridedame bibliotekà, kuri atsakinga uþ ávedimà ir iðvedimà

using namespace std; //eilutë, kuri leidþia neraðyti std:: prieð cout, cin, endl, fl, df
int kiekis; //sukuriamas kintamasis
int main() //pagrindinë funkcija
{
    setlocale(LC_ALL, "Lithuanian");  //iðvedimui naudosime lietuviø kalbà
    cout<<"Kiek skaièi¸ norite ávesti?"<<endl; //paklausiama, kiek skaièiø vartotojas norës ávesti
    cin>>kiekis; //ávedamas kiekis skaièiø, kiek bus ávesta
    int skaiciu_kiekis = kiekis - 1; //atimame ið skaièiø 1, nes masyvas prasideda nuo 0
    int skaiciai[skaiciu_kiekis]; //sukuriamas masyvas, kuris talpins tam tikrà kieká skaièiø

    for(int i = 0; i <= skaiciu_kiekis; i++){ //ciklas, kurio metu vartotojas áveda skaièiø ir jis yra áraðomas á masyvà
            int norimas;
        cout<<"Áveskite norimà skaièiø: "<<endl;
        cin>>norimas;
        skaiciai[i]=norimas; //pirmas skaièius bus áraðytas 0 pozicijoje masyve, nes i yra 0, vëliau kiekvienas skaièius bus áraðomas á kità pozicijà
    }

    int atvirksciai[kiekis]; //sukuriamas masyvas, á kurá bus áraðomi skaièiai atvirkðtine tvarka

    for(int j = 0 ; j<=skaiciu_kiekis; j++) { //ciklas, kuris á naujà masyvà áraðo skaièiø ið pirmojo masyvo, kuris yra paskutinis, vëliau prieð paskutinis ir t.t.
        atvirksciai[j]=skaiciai[skaiciu_kiekis - j];
    }

    for(int k = 0; k<=skaiciu_kiekis; k++){ //ciklas, kuris iðveda skaièius ið masyvo ir juos atspausdina ekrane
        cout<<atvirksciai[k];
    }
}
