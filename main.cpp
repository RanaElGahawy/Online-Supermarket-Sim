#include <iostream>
#include <fstream>
#include <string>
#include "products.hpp"
#include "payment.hpp"
using namespace std;
//lala
int main()
{
    cout << "WELCOME TO THE SUPERMARKET !!" << endl;
    float total;
//    to ge the total from class product to class payment
    products r;
    r.new_receipt();
//    new receipt at the begining of each program
    r.set_quan();
    r.display_products();
    total = r.get_total();
    payment r1;
    r1.set_total(total);
    r1.rush_order();
    r.readjusting_files();
    r1.special_client();
    r1.display_receipt();
    r1.MethodOfCheckout();
    r1.Email_Address();

    return 0;
}
