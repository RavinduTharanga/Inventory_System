#include<iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include <fstream>
#include <ostream>

using namespace std;

int productsub[100];
int productadd[100];
ofstream file;
int out;
float itemtotal;
string itemspurchased;
string date;
int productid;
int itemsnum;
int totalproducts;
int defaultamount;
int newamount;
int price[9];
int subproductsnum[100];
int productsnum[100];
int newproductsnum[100];
string products[100] = {"Milk", "Rice", "Sugar", "Butter", "Bread", "Meat", "Fish", "Cereal", "Candy"};

void menu();
void addproducts();
void addmoreproducts();
// void viewstock();
int main(){
 menu();



}

void menu(){
    int menunum;
    cout << "             Menu             \n";
    cout << "            ******";
    cout << "\n\n1.Add Products to Stock\n";
    cout << "2.Add Sales Made(This would Make changes in your number of units)\n";
    cout << "3.Generate bill(Can only Generate a Bill for one Item purchased)\n";
    cout << "4.Display Current Stock & save Data to file\n";
    cout << "5.Display Old Stock and Display Last Data saved\n";
    cout << "6.Search Item in Stock\n";
    cout << "7.Exit Program\n\n";

    cout << "Enter your choice here:";
    cin >> menunum;

    switch (menunum)
    {
    case 1:
        addproducts();
        break;
    
    default:
        break;
    }

}
void addproducts(){

    int choice;

		cout << "1. Add products to stock" << endl;
		cout << "2. Go to menu  " << endl;
		cout << "3. View Stock" << endl;
		cout << "4. Add more products" << endl;

		cout << "Enter here: ";
		cin >> choice;

        switch(choice){

            case 1:
                system("cls");
                for (int p = 0; p < 9; p++)
                {
                    cout << "\nEnter Amount of " << products[p] << ": ";
                    cin >> productsnum[p];
                    cout << "Enter price of " << products[p] << ": Php";
                    cin >> price[p];
                }
            case 2:
                menu();
            case 3:
                // viewstock();
            case 4:
                addmoreproducts();
                
        }



}
void addmoreproducts(){

    system("cls");
    cout << "\nWhich Product do you want to add? example:milk  ";
	cin >> productid;
    switch (productid){
        case 0 :
		
        cout << "Enter amount of Milk: ";
        cin >> productsnum[0];
       

        addproducts();
		
    }


}
