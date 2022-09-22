#include "user.hpp"
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
// it is mainly used to put every thing in user file
void user:: set_name(string name)
{
    UserName = name;
    ofstream fouts;
    fouts.open("user.txt", ios :: app);
    if (fouts.fail())
        exit (-1);
    fouts << UserName << endl;;
    fouts.close();
}

void user:: setCard(int num)
{
    CardNum = num;
    ofstream fouts;
    fouts.open("user.txt", ios :: app);
    if (fouts.fail())
        exit (-1);
    fouts << CardNum << endl;
    fouts.close();
}

void user:: EmailAddress (string email)
{
    email_address = email;
    ofstream fouts;
    fouts.open("user.txt", ios :: app);
    if (fouts.fail())
        exit (-1);
    fouts << email_address << endl;
    fouts.close();
}

//float user:: CheckUser( int card )
//{
//    int UserCard;
//    float wallet;
//    ifstream in_stream;
//    in_stream.open("user.txt");
//    while (!in_stream.eof())
//    {
//        in_stream >> UserCard;
//        cout << UserCard;
//        if ( UserCard == card)
//        {
//            in_stream >> wallet;
//            in_stream >> wallet;
//            return wallet;
//            break;
//        }
//    }
//    in_stream.close();
//    return 0;
//}
