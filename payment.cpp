#include "payment.hpp"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

void payment :: set_total (float t)
{
    total= t;
}

void payment:: rush_order()
{
    cout << "Do you want to rush your order to arrive today and add 50 L.E to your total \n" ;
    cout << "If yes press 1\n" << "To proceed without a rushing the order press 0" << endl;
    cin >> rush;
    if (rush)
    {
        total += 50;
    ofstream fouts;
    fouts.open ("receipt" , ios::app );
    if (fouts.fail())
        exit(-1);
        fouts<< setw(5) << 50 << " Rush order" << endl;
    fouts << "The Total after rushing will be: " << setw(5) << total << "L.E" << endl;
    fouts.close();
    }
}

void payment :: special_client ()
{
    if ( total > 10000)
    {
        ofstream fouts;
        cout << "YOU ARE A SPECIAL CLIENT !!" << endl;
        cout << "You can have 20% discount on any of our skin care product" <<  endl;
        cout << "To go to the Skin Care section: press 1 \n" << "To proceed to checkout: press 0 \n";
        cin >> special;
        if (special)
        {    r.set_quan();
//            it get all the quantities in the files
            r.SkinCareOffers();
//            display the skin care products
        specialSkinCare = r.get_total();
//            get the total of the skin care products
        discount = specialSkinCare *(20.0/100.0);
            specialSkinCare -= discount;
        total += specialSkinCare;
        fouts.open ("receipt" , ios::app );
        if (fouts.fail())
            exit(-1);
        fouts << setw(5) << specialSkinCare << " Special client offer" << endl;
        fouts << "The total: "<< total << " L.E" << endl;
        fouts.close();
            r.readjusting_files();
//            to write the new quantities again in the files after the user take from them
        }
    }
}

void payment:: MethodOfCheckout()
{
    cout << endl;
    cout << "Press 1: to pay cash on delivery" << endl;
    cout << "Press 0: to pay using credit card \n";
    cin >> checkout;
    
    if (checkout)
    {
        cout << endl;
        cout << "HAVE A NICE DAY !! \n";
        cout << endl;
}
    else
    {
        cout <<"Enter the card number: \n";
        cin >> Card_number;
        u.setCard(Card_number);
//        put it in files using user class
        cout << "Enter the password \n";
        cin >> pass;
        cout << "Enter your name: \n";
        cin >> Name;
        u.set_name(Name);
//        put it in files using user class
        cout << endl;
        r.set_quan();
        r.checkquan();
//        check all the quantities file if there is any thing less than 0
        cout << "HAVE A NICE DAY !! \n";
        cout << endl;
//        cout << total << " - " << u.CheckUser(Card_number) << endl;
//        we were hoping to do it, but we got the code wrong
    }
}

void payment:: display_receipt()
{
    cout << endl;
    cout << endl;
    ifstream in_stream;
    in_stream.open("receipt");
    if (in_stream.fail())
        exit(-1);
    
    while(getline (in_stream, data))
    {
        cout << data << endl;
    }
    in_stream.close();
    cout << endl;
}

void payment:: Email_Address()
{
    cout << "Subscribe to our channel to get notifications for new offers: \n";
    cout <<"To subscribe press: 1 \n";
    cout << "To exit press: 0 \n";
    cin >> subscribe;
    if (subscribe)
    {
        cout << "Enter yout email address \n";
        cin >> email;
        u.EmailAddress(email);
//        put it in files using user class
        cout << "Wait for our new offers \n" << "THANK YOU FOR CHOOSING OUR STORE !! \n";
    }
    else
        cout << "THANK YOU FOR CHOOSING OUR STORE !! \n";
}
