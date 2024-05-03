#include <iostream>

using namespace std;

class cFunkMast{

private:
    double Antennen;
    double Reichweite;
    double Hoehe;
    double Latitude;
    double Longitude;

public:
    cFunkMast(double uAntennen= 0, double uReichweite= 0.0, double uHoehe= 0.0, double uLatiude= 49.7, double uLongitude= 8.3){
        Antennen = uAntennen;
        Reichweite = uReichweite;
        Hoehe = uHoehe;
        Latitude = uLatiude;
        Longitude = uLongitude;
    }

    void eingabe(){
        cout<<"Geben sie die Anzahl der Antennen ein"<<endl;
        cin>>Antennen;
        cout<<"Geben sie die Reichweite an"<<endl;
        cin>>Reichweite;
        cout<<"Geben sie die Höhe an"<<endl;
        cin>>Hoehe;
        cout<<"Geben sie die Latitude an"<<endl;
        cin>>Latitude;
        cout<<"Geben sie die Longitude an"<<endl;
        cin>>Longitude;
        korrhoehe();
    }
    void ausgabe(){
        if(Antennen != 0){
            cout<<"Die Anzahl der Antennen beträgt" << Antennen << endl;
            cout<<"Die Reichweite beträgt" << Reichweite << endl;
            cout<<"Die Höhe beträgt" << Hoehe << endl;
            cout<<"Die Latitude beträgt" << Latitude << endl;
            cout<<"Die Lonitude beträgt" << Longitude << endl;
        }
    }

    void korrhoehe(){
        if(Antennen <= 4 && Hoehe > 30.0){
            Hoehe = 30.0;
        }

        if(Antennen > 4 && Hoehe > 50.0){
            Hoehe = 50.0;
        }
    }

};



int main(){

    cFunkMast arrayFunkmast[100];

    for(int i=0; i<5; i++){
        arrayFunkmast[i].eingabe();
    }

    for(int i=0; i<5; i++){
        arrayFunkmast[i].ausgabe();
    }
}