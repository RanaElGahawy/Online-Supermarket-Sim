#include "products.hpp"
#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;


void products :: set_vegtables ()
{
    ifstream in_stream;
    
    in_stream.open("vegetables.txt");
    if (in_stream.fail())
        exit(-1);
    
    for (int i=0; i< 10 ; i++)
    {
        in_stream >> vegetables [i];
    }
    in_stream.close();
}

void products :: set_groceries()
{
        ifstream in_stream;
        
        in_stream.open("groceries.txt");
        if (in_stream.fail())
            exit(-1);
        
        for (int i=0; i< 10 ; i++)
        {
            in_stream >> groceries [i];
        }
    in_stream.close();
    
}


void products :: set_pharmacy ()
{
        ifstream in_stream;
        
        in_stream.open("pharmacy.txt");
        if (in_stream.fail())
            exit(-1);
        
        for (int i=0; i< 10 ; i++)
        {
            in_stream >> pharmacy [i];
        }
    in_stream.close();
}

void products :: set_bakery()
{
    ifstream in_stream;
    
    in_stream.open("bakery");
    if (in_stream.fail())
        exit(-1);
    
    for (int i=0; i< 10 ; i++)
    {
        in_stream >> bakery [i];
    }
in_stream.close();
}

void products :: set_skin_care()
{
    ifstream in_stream;
    
    in_stream.open("SkinCare");
    if (in_stream.fail())
        exit(-1);
    
    for (int i=0; i< 10 ; i++)
    {
        in_stream >> skin_care [i];
    }
in_stream.close();
}

void products :: set_fruits()
{
    ifstream in_stream;
    
    in_stream.open("Fruits");
    if (in_stream.fail())
        exit(-1);
    
    for (int i=0; i< 10 ; i++)
    {
        in_stream >> fruits [i];
    }
in_stream.close();
}

void products:: set_quan()
{
    set_vegtables();
    set_groceries();
    set_pharmacy();
    set_bakery();
    set_fruits();
    set_skin_care();
//    so that we won't do all these function everytime before we get the quantities they are declared in this function
    ifstream in_stream;
    
    in_stream.open("veg_quan");
    if (in_stream.fail())
        exit(-1);
    for (int i=0; i< 10 ; i++)
    {
        in_stream >> vegetablesQuan [i];
    }
    in_stream.close();
    in_stream.open("groc_quan");
    if (in_stream.fail())
        exit(-1);
    for (int i=0; i< 10 ; i++)
    {
        in_stream >> groceriesQuan [i];
    }
    in_stream.close();
    in_stream.open("pharm_quan");
    if (in_stream.fail())
        exit(-1);
    for (int i=0; i< 10 ; i++)
    {
        in_stream >> pharmacyQuan [i];
    }
    in_stream.close();
    in_stream.open("bakery_quan");
    if (in_stream.fail())
        exit(-1);
    for (int i=0; i< 10 ; i++)
    {
        in_stream >> bakeryQuan [i];
    }
    in_stream.close();
    in_stream.open("skin_quan");
    if (in_stream.fail())
        exit(-1);
    for (int i=0; i< 10 ; i++)
    {
        in_stream >> skin_care_quan [i];
    }
    in_stream.close();
    in_stream.open("fruits_quan");
    if (in_stream.fail())
        exit(-1);
    for (int i=0; i< 10 ; i++)
    {
        in_stream >> fruitsQuan [i];
    }
    in_stream.close();
}

void products:: display_sectors()
{
    cout << "For the vegetables press: 1" << endl;
    cout << "For the groceries press: 2" << endl;
    cout << "For the pharmacy press: 3" << endl;
    cout << "For the bakery press: 4" << endl;
    cout << "For the Skin Care products press: 5" << endl;
    cout << "For the fruits press: 6 " << endl;
    cout << "To pay Press 0: " << endl;
}

void products::new_receipt()
{
    ofstream fouts;
    fouts.open("receipt");
    if (fouts.fail())
        exit(-1);
    fouts << "The receipt: " << endl;
    fouts.close();
}
// it opens a new receipt every time we run the program

void products:: display_products()
{
    ofstream fouts;
    do {
    display_sectors();
    cin >> choice;
    
    
       switch (choice) {
        case 1:
            for ( int i=0 ; i < 10 ; i++)
            {
                cout << "For " << vegetables [i] << " Press " << i;
                cout << endl;
            }
               cin >> choice_2;
               cout << "How many kilos do you want ?" << endl;
               cin >> quan;
               vegetablesQuan [ choice_2] -= quan;
               cout << quan << " " << vegetables [choice_2] << " are added to the cart." << endl;
               cost = vegetablesCost[choice_2]* quan;
               total += cost;
               cout << "That will be " << cost << " L.E for the " << vegetables [choice_2] << endl;
               cout << "The total equals: " << total << " L.E " << endl;
               fouts.open ("receipt" , ios::app );
               if (fouts.fail())
                   exit(-1);
               fouts << setw(5) << cost << "  " << vegetables [choice_2] << endl;
               fouts.close();
//               everything the user orders is stored in the receipt file until the end of the program where it is all displayed to the user
            break;
        case 2:
            for (int i=0; i< 10 ; i++)
            {
                    cout << "For " << groceries [i] << " press " << i << endl;
            }
               cin >> choice_2;
               cout << "How much do you want ?" << endl;
               cin >> quan;
               groceriesQuan [ choice_2] -= quan;
               cout << quan << " " << groceries [choice_2] << " are added to the cart." << endl;
               cost = groceriescost[choice_2]* quan;
               total += cost;
               cout << "That will be " << cost << " L.E for the " << groceries [choice_2] << endl;
               cout << "The total equals: " << total << " L.E " << endl;
               fouts.open ("receipt" , ios::app );
               if (fouts.fail())
                   exit(-1);
               fouts << setw(5) << cost << "  " << groceries [choice_2]<< endl;
               fouts.close();
               
            break;
        case 3:
            for (int i=0; i< 10 ; i++)
            {
                    cout << "For " << pharmacy [i] << " press " << i << endl;
            }
               cin >> choice_2;
               cout << "How much do you want ?" << endl;
               cin >> quan;
               pharmacyQuan [ choice_2] -= quan;
               cout << quan << " " << pharmacy [choice_2] << " are added to the cart." << endl;
               cost = 100* quan;
               total += cost;
               cout << "That will be " << cost << " L.E for the " << pharmacy [choice_2] << endl;
               cout << "The total equals: " << total << " L.E " << endl;
               fouts.open ("receipt" , ios::app );
               if (fouts.fail())
                   exit(-1);
               fouts << setw(5) << cost << "  " << pharmacy [choice_2]<< endl;
               fouts.close();
            break;
        case 4:
            for (int i=0; i< 10 ; i++)
            {
                    cout << "For " << bakery [i] << " press " << i << endl;
            }
               cin >> choice_2;
               cout << "How much do you want ?" << endl;
               cin >> quan;
               bakeryQuan [ choice_2] -= quan;
               cout << quan << " " << bakery [choice_2] << " are added to the cart." << endl;
               cost = 7.5* quan;
               total += cost;
               cout << "That will be " << cost << " L.E for the " << bakery [choice_2] << endl;
               cout << "The total equals: " << total << " L.E " << endl;
               fouts.open ("receipt" , ios::app );
               if (fouts.fail())
                   exit(-1);
               fouts << setw(5) << cost << "  " << bakery [choice_2]<< endl;
               fouts.close();
            break;
        case 5:
            for (int i=0; i< 10 ; i++)
            {
                    cout << "For " << skin_care [i] << " press " << i << endl;
            }
               cin >> choice_2;
               cout << "How much do you want ?" << endl;
               cin >> quan;
               skin_care_quan[ choice_2] -= quan;
               cout << quan << " " << skin_care [choice_2] << " are added to the cart." << endl;
               cost = 150* quan;
               total += cost;
               cout << "That will be " << cost << " L.E for the " << skin_care [choice_2] << endl;
               cout << "The total equals: " << total << " L.E " << endl;
               fouts.open ("receipt" , ios::app );
               if (fouts.fail())
                   exit(-1);
               fouts << setw(5) << cost << "  " << skin_care [choice_2]<< endl;
               fouts.close();
            break;
        case 6:
            for (int i=0; i< 10 ; i++)
            {
                    cout << "For " << fruits [i] << " press: " << i << endl;
            }
               cin >> choice_2;
               cout << "How many kilos do you want ?" << endl;
               cin >> quan;
               fruitsQuan[ choice_2] -= quan;
               cout << quan << " " << fruits [choice_2] << " are added to the cart." << endl;
               cost = 25.55* quan;
               total += cost;
               cout << "That will be " << cost << " L.E for the " << fruits [choice_2] << endl;
               cout << "The total equals: " << total << " L.E " << endl;
               fouts.open ("receipt" , ios::app );
               if (fouts.fail())
                   exit(-1);
               fouts << setw(5) << cost << "  " <<fruits [choice_2]<< endl;
               fouts.close();
            break;
           case 0:
               fouts.open ("receipt" , ios::app );
               if (fouts.fail())
                   exit(-1);
               fouts << "Total: " << setw(5) << total << "L.E" << endl;
               fouts.close();
               break;
        default:
            cout << "Not a valid input !!" << endl;
            break;
    }
        cout << endl << endl ;
   } while ( choice != 0);
}

void products:: readjusting_files()
{
    ofstream outs;
    outs.open("veg_quan");
    if (outs.fail())
        exit(-1);
    for ( int i = 0 ; i < 10 ; i++)
    {
        outs << vegetablesQuan[i] << endl;
        
    }
    outs.close();
//    put the new quantities in the array again in the files
    outs.open("groc_quan");
    if (outs.fail())
        exit(-1);
    for ( int i = 0 ; i < 10 ; i++)
    {
        outs << groceriesQuan[i] << endl;
    }
    outs.close();
    
    outs.open("groc_quan");
    if (outs.fail())
        exit(-1);
    for ( int i = 0 ; i < 10 ; i++)
    {
        outs << groceriesQuan[i] << endl;
    }
    outs.close();
    
    outs.open("pharm_quan");
    if (outs.fail())
        exit(-1);
    for ( int i = 0 ; i < 10 ; i++)
    {
        outs << pharmacyQuan[i] << endl;
    }
    outs.close();
    
    outs.open("bakery_quan");
    if (outs.fail())
        exit(-1);
    for ( int i = 0 ; i < 10 ; i++)
    {
        outs << bakeryQuan[i] << endl;
    }
    outs.close();
    
    outs.open("skin_quan");
    if (outs.fail())
        exit(-1);
    for ( int i = 0 ; i < 10 ; i++)
    {
        outs << skin_care_quan[i] << endl;
    }
    outs.close();
    
    outs.open("fruits_quan");
    if (outs.fail())
        exit(-1);
    for ( int i = 0 ; i < 10 ; i++)
    {
        outs << fruitsQuan[i] << endl;
    }
    outs.close();
}


double products:: get_total()
{
    return total;
}


void products:: SkinCareOffers()
{
    ofstream fouts;
    for (int i=0; i< 10 ; i++)
    {
            cout << "For " << skin_care [i] << " press " << i << endl;
    }
       cin >> choice_2;
       cout << "How much do you want ?" << endl;
       cin >> quan;
       skin_care_quan[ choice_2] -= quan;
       cout << quan << " " << skin_care [choice_2] << " are added to the cart." << endl;
       cost = 150* quan;
       total += cost;
       cout << "That will be " << cost << " L.E for the " << skin_care [choice_2] << endl;
       cout << "The total equals: " << total << " L.E " << endl;
       fouts.open ("receipt" , ios::app );
       if (fouts.fail())
           exit(-1);
       fouts << setw(5) << cost << "  " << skin_care [choice_2] << endl;
       fouts.close();
}

void products :: checkquan()
{
    ofstream fouts;
    int count=0;
    int temp;
    float sum;
    for (int i = 0; i< 10 ; i++)
    if (vegetablesQuan[i] < 0)
    {
        temp = vegetablesQuan[i];
//        if any quantity is lesss than zero then we will use the variable temp to increment it untill it reaches zero and the count will display how many times we incremented ( the number of products that weren't in the file)
        while (temp != 0) {
            count++;
            temp ++;
        }
        sum = count*vegetablesCost[i];
        cout << count << " kilos of " << vegetables[i] << " are not available! \n";
        cout << sum << " L.E are added to your wallet!! \n";
        fouts.open("user.txt", ios::app);
        if (fouts.fail())
            exit (-1);
        fouts << sum<< endl;
        fouts.close();
    }
    for (int i = 0; i< 10 ; i++)
    if (groceriesQuan[i] < 0)
    {
        temp = groceriesQuan[i];
        while (temp != 0) {
            count++;
            temp ++;
        }
        sum = count * groceriescost[i];
        cout << count << " of " << groceries[i] << " are not available !!\n";
        cout << sum << " L.E are aded to your wallet \n";
        fouts.open("user.txt", ios::app);
        if (fouts.fail())
            exit (-1);
        fouts << sum<< endl;
        fouts.close();
    }
    for (int i = 0; i< 10 ; i++)
    if (pharmacyQuan[i] < 0)
    {
        temp = pharmacyQuan[i];
        while (temp != 0) {
            count++;
            temp ++;
        }
        sum = count * pharmacycost[i];
        cout << count << " of " << pharmacy[i] << " are not available !!\n";
        cout <<  sum << " L.E are aded to your wallet \n";
        fouts.open("user.txt", ios::app);
        if (fouts.fail())
            exit (-1);
        fouts << sum<< endl;
        fouts.close();
    }
    for (int i = 0; i< 10 ; i++)
    if (bakeryQuan[i] < 0)
    {
        temp = bakeryQuan[i];
        while (temp != 0) {
            count++;
            temp ++;
        }
        sum = count * bakerycoast[i];
        cout << count << " of " << bakery[i] << " are not available !!\n";
        cout <<  sum << " L.E are aded to your wallet \n";
        fouts.open("user.txt", ios::app);
        if (fouts.fail())
            exit (-1);
        fouts << sum<< endl;
        fouts.close();
    }
    for (int i = 0; i< 10 ; i++)
    if (skin_care_quan[i] < 0)
    {
        temp = skin_care_quan[i];
        while (temp != 0) {
            count++;
            temp ++;
        }
        sum =count * skincarecost[i];
        cout << count << " of " << skin_care[i] << " are not available !!\n";
        cout << sum << " L.E are aded to your wallet \n";
        fouts.open("user.txt", ios::app);
        if (fouts.fail())
            exit (-1);
        fouts << sum<< endl;
        fouts.close();
    }
    for (int i = 0; i< 10 ; i++)
    if (fruitsQuan[i] < 0)
    {
        temp = fruitsQuan[i];
        while (temp != 0) {
            count++;
            temp ++;
        }
        sum = count * fruitscost[i];
        cout << count << " kilos of " << fruits[i] << " are not available !!\n";
        cout << sum << " L.E are aded to your wallet \n";
        fouts.open("user.txt", ios::app);
        if (fouts.fail())
            exit (-1);
        fouts << sum << endl;
        fouts.close();
    }
}
