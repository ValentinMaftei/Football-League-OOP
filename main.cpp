#include <bits/stdc++.h>
using namespace std;


class Meciuri {
    unsigned int zi;
    unsigned int luna;
    unsigned int an;
    unsigned int ora;
    string locatie;
public:
    Meciuri(unsigned int zi, unsigned int luna, unsigned int an, unsigned ora, string locatie);
    Meciuri(const Meciuri &);
    Meciuri();

    void setzi(unsigned int);
    unsigned int getzi();

    void setluna(unsigned int);
    unsigned int getluna();

    void setan(unsigned int);
    unsigned int getan();

    void setora(unsigned int);
    unsigned int getora();

    void setlocatie(string);
    string getlocatie();

    friend istream& operator >> (istream& citire, Meciuri& meciuri);
    friend ostream& operator << (ostream& afisare, Meciuri& meciuri);
    friend bool operator == (Meciuri, Meciuri);
};

    Meciuri::Meciuri (unsigned int zi, unsigned int luna, unsigned an, unsigned ora, string locatie){
        this -> zi = zi;
        this -> luna = luna;
        this -> an = an;
        this -> ora = ora;
        this -> locatie = locatie;
    }

    Meciuri::Meciuri (const Meciuri& meciuri) {
        zi = meciuri.zi;
        luna = meciuri.luna;
        an = meciuri.an;
        ora = meciuri.ora;
        locatie = meciuri.locatie;
    }

    Meciuri::Meciuri() {}

    void Meciuri::setzi(unsigned int zimeci){
        this -> zi = zi;
    }

    void Meciuri::setluna(unsigned int lunameci) {
        this -> luna = luna;
    }

    void Meciuri::setan(unsigned int anmeci) {
        this -> an = an;
    }

    void Meciuri::setora(unsigned int orameci) {
        this -> ora = ora;
    }

    void Meciuri::setlocatie(string locatie) {
        this -> locatie = locatie;
    }

class Echipa {
    string nume;
    unsigned int cod;
    int jucatori;
    int staf_tehnic;
    int victorii;
    int egaluri;
    int infrangeri;
public:
    Echipa(string nume, unsigned int cod, int jucatori, int staf_tehnic, int victorii, int egaluri, int infrangeri);
    Echipa(const Echipa&);
    Echipa();

    void setnume(string);
    string getnume();

    void setcod(int);
    unsigned int getcod();

    void setjucatori(int);
    int getjucatori();

    void setstaf_tehnic(int);
    int getstaf_tehnic();

    void setvictorii(int);
    int getvictorii();

    void setegaluri(int);
    int getegaluri();

    void setinfrangeri(int);
    int getinfrangeri();

    friend istream& operator >> (istream& citire, Echipa& echipa);
    friend ostream& operator << (ostream& afisare, Echipa& echipa);
    friend bool operator != (Echipa, Echipa);
    float operator / (Echipa echipa);
    Echipa operator /= (int val);
    int operator - (Echipa echipa);
    int operator -= (Echipa echipa);

    int verifcod();
    int verifjucatori();
    int verifstaff();
    int calculpuncte();
};

Echipa::Echipa(string nume, unsigned int cod, int jucatori, int staf_tehnic, int victorii, int egaluri, int infrangeri) {
    this -> nume = nume;
    this -> cod = cod;
    this -> jucatori = jucatori;
    this -> staf_tehnic = staf_tehnic;
    this -> victorii = victorii;
    this -> egaluri = egaluri;
    this -> infrangeri = infrangeri;
}

Echipa::Echipa(const Echipa& echipa) {
    nume = echipa.nume;
    cod = echipa.cod;
    jucatori = echipa.jucatori;
    staf_tehnic = echipa.staf_tehnic;
    victorii = echipa.victorii;
    egaluri = echipa.egaluri;
    infrangeri = echipa.infrangeri;
}

Echipa::Echipa() {};

void Echipa::setnume(string numele) {
    this -> nume = nume;
}

void Echipa::setcod(int codul) {
    this -> cod = cod;
}

void Echipa::setjucatori(int jucator) {
    this -> jucatori = jucatori;
}

void Echipa::setstaf_tehnic(int staf) {
    this -> staf_tehnic = staf_tehnic;
}

void Echipa::setvictorii(int victorie) {
    this -> victorii = victorii;
}

void Echipa::setegaluri(int egal) {
    this -> egaluri = egaluri;
}

string Echipa::getnume() {
    return this -> nume;
}

unsigned int Echipa::getcod() {
    return this -> cod;
}

int Echipa::getjucatori() {
    return this -> jucatori;
}

int Echipa::getstaf_tehnic() {
    return this -> staf_tehnic;
}

int Echipa::getvictorii() {
    return this -> victorii;
}

int Echipa::getegaluri() {
    return this -> egaluri;
}

int Echipa::getinfrangeri() {
    return this -> infrangeri;
}

class Campionat {
private:
    Echipa echipa;
    Meciuri meciuri;
};

int Echipa::verifcod() {
    if (this->cod > 16)
        return 0;
    return 1;
}

int Echipa::verifjucatori() {
    if(this -> jucatori < 15)
        return 0;
    return 1;
}

int Echipa::verifstaff() {
    if(this -> staf_tehnic < 5)
        return 0;
    return 1;
}

int Echipa::calculpuncte() {
    int puncte = 0;
    puncte = (this -> victorii) * 3 + (this -> egaluri);
    return puncte;
}

istream& operator >> (istream& citire, Echipa& echipa) {
    citire >> echipa.nume >> echipa.cod >> echipa.jucatori >> echipa.staf_tehnic >> echipa.victorii >> echipa.egaluri >> echipa.infrangeri;
    return citire;
}

istream& operator >> (istream& citire, Meciuri& meciuri) {
    citire >> meciuri.zi >> meciuri.luna >> meciuri.an >> meciuri.ora >> meciuri.locatie;
    return citire;
}

ostream& operator << (ostream& afisare, Echipa& echipa) {
    afisare << "Echipa: " << echipa.nume << endl << " Cod echipa: " << echipa.cod << endl << " Jucatori legitimati: "
            << echipa.jucatori << endl << " Oameni in staff-ul tehnic " << echipa.staf_tehnic << endl << " Victorii: "
            << echipa.victorii << endl << " Egaluri: " << echipa.egaluri << endl << " Infrangeri: " << echipa.infrangeri << endl;
    return afisare;
}

ostream& operator << (ostream& afisare, Meciuri& meciuri) {
    afisare << "Meci programat pe data de: " << meciuri.zi << "/" << meciuri.luna << "/" << meciuri.an << ", la ora: " << meciuri.ora << ", pe stadionul: " << meciuri.locatie << endl;
    return afisare;
}

bool operator!=(Echipa echip1, Echipa echip2) {
    if (echip1.nume != echip2.nume && echip1.cod != echip2.cod)
        return true;
    return false;
    }

float Echipa::operator/(Echipa echipa) {
    return ((float)this -> calculpuncte() / echipa.calculpuncte());
}

Echipa Echipa::operator/=(int val) {
    victorii = victorii / val;
    egaluri = egaluri / val;
    return *this;
};

int Echipa::operator-(Echipa echipa) {
    return (this -> calculpuncte() - echipa.calculpuncte());
}

int Echipa::operator-=(Echipa echipa) {
    return (this -> calculpuncte() - echipa.calculpuncte());
}

bool operator == (Meciuri meci1, Meciuri meci2) {
    if(meci1.zi == meci2.zi && meci1.luna == meci2.luna && meci1.an == meci2.an && meci1.ora == meci2.ora)
        return true;
    return false;
}

int main()
{
    int ok = 0;

    Echipa echipa1 = Echipa("CFR_1907_Cluj", 1, 37, 5, 24, 4, 2);
    Echipa echipa2 = Echipa("Fotbal_club_FCSB", 2, 29, 5, 18, 8, 4);
    Echipa echipa3 = Echipa("Universitatea_Craiova", 3, 28, 5, 16, 6, 8);
    Echipa echipa4 = Echipa("Dinamo_Bucuresti", 14, 28, 5, 4, 5, 21);
    Echipa echipa5 = Echipa("Rapid_Bucuresti", 8, 36, 5, 9, 13, 8);

    Echipa echipa6;
    cin >> echipa6;
    cout << echipa6;

    if (echipa1 != echipa6 && echipa2 != echipa6 && echipa3 != echipa6 && echipa4 != echipa6 && echipa5 != echipa6)
        cout << "Echipa introdusa de la tastatura nu a fost inca inscrisa in campionat" << endl;
    else
        cout << "Echipa introdusa de la tastatura este deja inscrisa in campionat" << endl;
    if (echipa6.verifcod() == 0) {
        cout << "Codul echipei introduse este invalid" << endl;
        ok = 1;
    }
    if (echipa6.verifjucatori() == 0) {
        cout << "Numarul de jucatori legitimati este prea mic" << endl;
        ok = 1;
    }
    if (echipa6.verifstaff() == 0) {
        cout << "Staff-ul tehnic este prea mic" << endl;
        ok = 1;
    }
    if(ok == 1)
        cout << "Echipa nu poate fi inscrisa in campionat" << endl;
    if (echipa6.verifcod() != 0 && echipa6.verifjucatori() != 0 && echipa6.verifstaff() != 0)
        cout << "Echipa " << echipa6.getnume() << " are " << echipa6.calculpuncte() << " puncte" << endl << endl;

    cout << "Echipa introdusa de la tastatura a obtinut performante mai bune decat:" << endl;
    if (echipa1 / echipa6 < 1)
        cout << echipa1.getnume() << endl;
    if (echipa2 / echipa6 < 1)
        cout << echipa2.getnume() << endl;
    if (echipa3 / echipa6 < 1)
        cout << echipa3.getnume() << endl;
    if (echipa4 / echipa6 < 1)
        cout << echipa4.getnume() << endl;
    if (echipa5 / echipa6 < 1)
        cout << echipa5.getnume() << endl;

    cout << endl;

    cout << "Echipa introdusa de la tastatura a obtinut performante mai slabe decat: " << endl;
    if (echipa1 / echipa6 > 1)
        cout << echipa1.getnume() << endl;
    if (echipa2 / echipa6 > 1)
        cout << echipa2.getnume() << endl;
    if (echipa3 / echipa6 > 1)
        cout << echipa3.getnume() << endl;
    if (echipa4 / echipa6 > 1)
        cout << echipa4.getnume()<< endl;
    if (echipa5 / echipa6 > 1)
        cout << echipa5.getnume() << endl;

    cout << endl;

    cout << "Diferenta de puncte dintre echipa introdusa de la tastatura si celelalte echipe este: " << endl;
    cout << echipa1.getnume() << ": " << echipa1 - echipa6 << endl;
    cout << echipa2.getnume() << ": " << echipa2 - echipa6 << endl;
    cout << echipa3.getnume() << ": " << echipa3 - echipa6 << endl;
    cout << echipa4.getnume() << ": " << echipa4 - echipa6 << endl;
    cout << echipa5.getnume() << ": " << echipa5 - echipa6 << endl;

    echipa1 -= echipa6;
    echipa2 -= echipa6;
    echipa3 -= echipa6;
    echipa4 -= echipa6;
    echipa5 -= echipa6;

    cout << endl;

    cout << "Echipa dupa injumatatirea rezultatelor: " << endl;
    echipa6 /= 2;
    cout << echipa6;
    cout << endl;



    Meciuri meci1 = Meciuri(19, 3, 2022, 15, "National_arena");
    Meciuri meci2 = Meciuri(19, 3, 2022, 17, "Ion_Oblemenco");
    Meciuri meci3 = Meciuri(19, 3, 2022, 15, "Constantin_Radulescu");
    Meciuri meci4 = Meciuri(19, 3, 2022, 20, "Stefan_cel_Mare");
    Meciuri meci5 = Meciuri(20, 3, 2022, 16, "Giulesti");
    Meciuri meci6 = Meciuri(16, 4, 2022, 20, "National_arena");
    Meciuri meci7 = Meciuri(30, 4, 2022, 20, "National_arena");
    Meciuri meci8 = Meciuri(7, 5, 2022, 20, "Constantin_Radulescu");
    Meciuri meci9 = Meciuri(14, 5, 2022, 20, "Giulesti");
    Meciuri meci10 = Meciuri(21, 5, 2022, 21, "Ion_Oblemenco");
    Meciuri meci11= Meciuri(30, 6, 2022, 22, "Stefan_cel_Mare");
    Meciuri meci12 = Meciuri(20, 7, 2022, 18, "National_arena");

    Meciuri meci13;
    cin >> meci13;
    cout << meci13;

    if(meci1 == meci13 || meci2 == meci13 || meci3 == meci13 || meci4 == meci13 || meci5 == meci13 || meci6 == meci13 || meci7 == meci13
    || meci8 == meci13 || meci9 == meci13 || meci10 == meci13 || meci11 == meci13 || meci12 == meci13)
        cout << "Meciul introdus de la tastatura este programat" << endl;
    else
        cout << "Meciul introdus de la tastatura nu este programat" << endl;

    return 0;
}

