//food delivery system

#include<iostream>
using namespace std;

int main()
{
	cout<< "\xb2\xb2\xb2\xb2 food delivery system \xb2\xb2\xb2\xb2 \n\n\n";
	
	int order,quantity,total,alltotal=0;
	char choice;
	
	do{
	
	cout<<"----Menu----\n\n";
	
	cout<<"1. Pizz --- Rs.180\n";
	cout<<"2. Burger --- Rs.100\n";
	cout<<"3. Sandwich --- Rs.50\n";
	cout<<"4. ice lemon tea --- Rs.120\n\n\n";
	
	
		cout<<"Select you order :- ";
		cin>>order;
	
	    cout<<"Select you quantity :- ";
		cin>>quantity;
	    
	switch(order)
	{
		case 1:
			cout<<"\n Pizz :- "<<quantity;
			total = 180*quantity;
			break;
		
		case 2:
			cout<<"\n Burger :- "<<quantity;
			total = 100*quantity;
			break;
		
		case 3:
			cout<<"\n Sandwich :- "<<quantity;
			total = 50*quantity;
			break;
		
		case 4:
			cout<<"\n ice lemon tea :- "<<quantity;
			total = 120*quantity;
			break;			
		
		default:
            cout<<"Enter a valid choice";
	}
	
	alltotal+=total;
	
	cout<<"\n total bill :- "<<alltotal <<"\n\n";
	
	
    cout<< "Do you want to continue? (yes or no): ";
    cin >> choice;

	} while (choice == 'Y' || choice =='y');

    cout<< "Thank you for using the food delivery system!\n";
	

}
