#ifndef products_hpp
#define products_hpp

#include <stdio.h>
#include <string>
using namespace std;
class products
{
private:
    int choice;
    int choice_2;
    int quan;
    float cost = 0.0;
    float total = 0.0;
    string vegetables [10];
    int vegetablesQuan[10];
    float vegetablesCost[10] = { 5.5 ,10.5, 8.234, 3.65, 9.54, 5.234, 4.8 , 5.98,10, 3.65 };
    string groceries [10];
    int groceriesQuan [10];
    float groceriescost[10]= { 8.9,9.9,5.8,6.7,8.3,7.8,6.5,3.9,6.6,8.9};
    string pharmacy [10];
    int pharmacyQuan[10];
    float pharmacycost[10]={4.3,6.5,7.8,9.8,7.8,6.7,5.7,4.5,3.4,2.3};
    string bakery [10];
    int bakeryQuan[10];
    float bakerycoast[10]={3.4,5.6,7.8,9.8,7.8,6.7,5.6,4.5,4.5,3.4};
    string skin_care [10];
    int skin_care_quan[10];
    float skincarecost[10]{1.2,3.4,5.6,7.8,9.8,8.7,6.5,5.4,4.3,5.6};
    string fruits [10];
    int fruitsQuan[10];
    float fruitscost[10]={2.3,3.4,5.6,7.8,9.0,9.8,7.6,5.4,4.3,8.9};
    void set_vegtables();
    void set_groceries();
    void set_pharmacy();
    void set_bakery();
    void set_skin_care();
    void set_fruits();
    void display_sectors();
public:
    
    void set_quan();
    void display_products();
    double get_total();
    void new_receipt ();
    void readjusting_files ();
    void SkinCareOffers();
    void checkquan();
};






#endif
