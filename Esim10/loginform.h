#ifndef LOGINFORM_H
#define LOGINFORM_H
#include<iostream>
using namespace std;

#include "form.h"


class LoginForm
{
    Form objF;
    string labelLogin;
public:
    LoginForm();
    string getLabelLogin() const;
    void initialzeForm();
    void setLabelLogin(const string &newLabelLogin);
};

#endif // LOGINFORM_H
