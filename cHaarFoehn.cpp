#include <iostream>

using namespace std;

class cHaarFoehn{

private:
    string bezeichnung;
    double watt;
    double schaltstufe;
    string farbe;

public:
    cHaarFoehn(){
        bezeichnung= "unbestimmt";
        watt= 0.0;
        schaltstufe= 0.0;
        farbe= "unbestimmt";
    }

    cHaarFoehn(string ubezeichnung, float watt, float uschaltstufe, string ufarbe){
        bezeichnung = ubezeichnung;
        watt = watt;
        schaltstufe = uschaltstufe;
        farbe = ufarbe;
    }

    void eingabe(){
        cout<<"Geben Sie die Bezeichnung ein"<<endl;
        cin>>bezeichnung;
        cout<<"Geben Sie die Wattzahl ein"<<endl;
        cin>>watt;
        cout<<"Geben Sie die Schaltstufe ein"<<endl;
        cin>>schaltstufe;
        cout<<"Geben Sie die Farbe ein"<<endl;
        cin>>farbe;
    }
    void ausgabe(){
        cout<<"Die Bezeichnung lautet"<< bezeichnung << endl;
        cout<<"Die Wattanzahl lautet"<< watt << endl;
        cout<<"Die Schaltstufe lautet"<< schaltstufe << endl;
        cout<<"Die Farbe lautet"<< farbe << endl;
    }

    ~cHaarFoehn(){
        cout<<"Das Objekt wird Zerstört"<<endl;
        ausgabe();
    }

};

int main(){

    cHaarFoehn HaarFoehn1;
    cHaarFoehn HaarFoehn2;
    cHaarFoehn HaarFoehn3;

    HaarFoehn1.eingabe();
    HaarFoehn2.eingabe();

}