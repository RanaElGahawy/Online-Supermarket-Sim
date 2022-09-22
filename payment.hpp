#ifndef payment_hpp
#define payment_hpp
#include "products.hpp"
#include "user.hpp"

#include <stdio.h>
#include <string>

class payment
{
private:
    float total;
    bool rush;
    bool special;
    float specialSkinCare = 0.0;
    float discount = 0.0;
    products r;
    bool checkout;
    int Card_number;
    string Name;
    int pass;
    string data;
    bool subscribe;
    string email;
    user u;
public:
    void set_total (float t);
    void rush_order();
    void special_client();    
    void MethodOfCheckout ();
    void display_receipt();
    void Email_Address();
    
};
#endif
