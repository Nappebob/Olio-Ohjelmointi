#include "loginform.h"

#include <iostream>

using namespace std;

int main()
{

    //Luodaan sovellus, jossa käytetään perintää
    //ja koostetta
    //kantaluokka Form sisältää kakille Formeille
    //yhteiset ominaisuudet

    LoginForm objLoginform;
    objLoginform.setLabelLogin("Login Label");
    cout<<objLoginform.getLabelLogin()<<endl;
    objLoginform.initialzeForm();

    return 0;
}
