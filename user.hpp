#ifndef user_hpp
#define user_hpp

#include <stdio.h>
#include <string>
using namespace std;
class user
{
private:
    string UserName;;
    int CardNum;
    string email_address;
public:
    void set_name( string name);
    void setCard( int num);
    void EmailAddress(string email);
//    float CheckUser( int card);
};
#endif
