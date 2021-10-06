#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dos.h>
#include <iomanip>
using namespace std;


int main (){
	
	string line;
	int rentfee;
	int days;
	int cash;
	int change;
	string fullname;
	string ebike;
	
	
	int login();
	login();
	

	cout << "\t\t\t\t\tENTER CUSTOMER'S FULL NAME: ";
    getline (cin,fullname);
    cout<<endl;
	
    
    	cout<<"\t\t	 .:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:"<<endl;
        cout<<"\t\t\t\t ENTER NUMBER OF YOUR CHOSEN EBIKE"<<endl;
        cout<<"\t\t	 +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-"<<endl;
		cout<<"\t\t\t\t=> INPUT [1] FOR Honda PCX Electric."	<<endl;
        cout<<"\t\t\t\t=> INPUT [2] FOR Motorstar Viber."		<<endl;
        cout<<"\t\t\t\t=> INPUT [3] FOR GXSUN Zoomer."			<<endl;
        cout<<"\t\t\t\t=> INPUT [4] FOR Aima AA101 Discovery."	<<endl;
        cout<<"\t\t\t\t=> INPUT [5] FOR GOGO Metro E-Bike ."	<<endl;
        cout<<"\t\t	-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-"<<endl;
        cout<<"\t\t\t CHOOSE BIKE FROM THE SELECTION ABOVE: "<<"\t\t| ";
        cin >>ebike;
        cout<<endl;
 		cout<<"\t\t\t-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-"<<endl;
 if(ebike=="1")
 {
 
 
		cout<<"\t\t\tYOU HAVE CHOSEN: Honda PCX Electric"<<endl;
		 ifstream inA("1.txt");
         char str[200];
         while(inA) {
         inA.getline(str, 200);  
         if(inA) cout << str << endl;
}

  }
  if(ebike=="2")
  {
  	
		cout<<"\t\t\tYOU HAVE CHOSEN: Motorstar Viber"<<endl;
		 ifstream inB("2.txt");
         char str[200];
         while(inB) {
         inB.getline(str, 200);  
         if(inB) cout << str << endl;
         
     }
   
 }
 if(ebike=="3")
 {
 
	     cout<<"\t\t\tYOU HAVE CHOSEN: GXSUN Zoomer"<<endl;
		 ifstream inC("3.txt"); 
         char str[200];
         while(inC) {
         inC.getline(str, 200);  
         if(inC) cout << str << endl;
 }
}
if(ebike=="4")
 {
 
	     cout<<"\t\t\tYOU HAVE CHOSEN: Aima AA01 Discovery"<<endl;
		 ifstream inC("4.txt"); 
         char str[200];
         while(inC) {
         inC.getline(str, 200);  
         if(inC) cout << str << endl;
}
}
if(ebike=="5")
 {
 
	     cout<<"\t\t\tYOU HAVE CHOSEN: GOGO Metro EBike"<<endl;
		 ifstream inC("5.txt"); 
         char str[200];
         while(inC) {
         inC.getline(str, 200);  
         if(inC) cout << str << endl;
     }
 }
     
      
if(ebike !="1" && ebike !="2" &&  ebike !="3" && ebike !="4" && ebike!="5")
     
      cout<<"\n\t\t\t\tEBIKE NUMBER INCORRECT. PLEASE TRY AGAIN" <<endl;
      
      
while(ebike !="1" && ebike !="2" &&  ebike !="3" && ebike!="4" && ebike!="5" );
    cout<<"\t\t\t-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-"<<endl;
    cout<<"\t\t\t INPUT DETAILS OF RENTAL: "<<endl; 
    cout<<"\t\t\t DAYS YOU WANT TO RENT: ";
    cin >> days;
    cout<<"\t\t\t PAYMENT: ";
    cin >> cash;
    cout<<endl;
	{
	
		if(ebike == "1"||ebike=="1")
        rentfee=days*950;
        change=cash-rentfee;
        
        if(ebike == "2" ||ebike=="2")
        rentfee=days*1000;
        change=cash-rentfee;
        
        if(ebike == "3" ||ebike=="3")
        rentfee=days*800;
        change=cash-rentfee;
        
        if(ebike == "4" ||ebike=="4")
        rentfee=days*700;
        change=cash-rentfee;
        
        if(ebike == "5" ||ebike=="5")
        rentfee=days*750;
        change=cash-rentfee;
        
        
    	
}


    cout << "\n\t\t                       EBike Rental - Customer Invoice                  "<<endl;
    cout << "\t\t	^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^^v^v^v^v^v^v^v^v^v^v^v^v^"<<endl;
    cout << "\t\t	| Ebike No. :"<<"--------------------|"<<setw(10)<<ebike<<"		|"<<endl;
    cout << "\t\t	| Number of days :"<<"---------------|"<<setw(10)<<days<<"		|"<<endl;
    cout << "\t\t	| Total Rental Amount is :"<<"-------|"<<setw(10)<<rentfee<<"		|"<<endl;
    cout << "\t\t	 ________________________________________________________"<<endl;
    cout <<"\n";
    cout << "\t\t	| Rented by:"<<"---------------------|"<<setw(10)<<fullname<<"		|"<<endl;
	cout << "\t\t	| Cash :"<<"-------------------------|"<<setw(10)<<cash<<"		|"<<endl;
    cout << "\t\t	| Change :"<<"-----------------------|"<<setw(10)<<change<<"		|"<<endl;
    cout << "\t\t	 ________________________________________________________"<<endl;
    cout <<" "<<endl;
    cout << "\t\t	| Permit No.---------------------|"<<setw(10)<<"  P3323-225(01)"<<"	|"<<endl;
    cout << "\t\t	  7th Floor Conan Tower, Ortigas Ave. Mandaluyong City."<<endl;
    cout << "\t\t\t	  Invoice valid for five (5) years"<<endl;
    cout << "\t\t	 ________________________________________________________"<<endl;
    cout << "\n\n\t\t ----------------8<-------------[ cut here ]------------------------------"<<endl;

	return 0;

}
int login(){
   string pass ="";
   char ch;
   system("COLOR 4");
                                                           
 cout<<" \t  	 _____  _____  _  _           _____            _         _  " << endl;
 cout<<" \t  	|   __|| __  ||_|| |_  ___   | __  | ___  ___ | |_  ___ | | " << endl;
 cout<<" \t  	|   __|| __ -|| || '_|| -_|  |    -|| -_||   ||  _|| .'|| | " << endl;
 cout<<" \t  	|_____||_____||_||_,_||___|  |__|__||___||_|_||_|  |__,||_| " << endl;
 cout<<" \t  	         _____            _                                 " << endl; 
 cout<<" \t                |   __| _ _  ___ | |_  ___  _____                " << endl;
 cout<<" \t  	        |__   || | ||_ -||  _|| -_||     |                  " << endl;
 cout<<" \t  	        |_____||_  ||___||_|  |___||_|_|_|                  " << endl;
 cout<<" \t  	               |___|                                        " << endl;

   cout<<"\n\n\t\t\t^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^";
   cout<<"\n\t\t\t\t   LOGIN PROMPT \n";	
   cout<<"\t\t\t^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^\n\n";	
   cout << "\t\t\tPASSWORD: ";
   ch = _getch();
   while(ch != 13){
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "pass"){
   	  cout << "\n\n\t\t 	LOGGING IN......" <<endl;
   	  sleep(1);
      cout << "\n\n\t\t\tLOGGED IN SUCCESSFULLY.... \n";
      system ("CLS");
   }else{
   	cout << "\n\n\t\t 	LOGGING IN......" <<endl;
   	  sleep(1);
      cout <<"\n\t\t\t\tLOGGING IN FAILED\n\n\t\t\t\tPLEASE TRY AGAIN\n\n\t\t\t";
	  system("PAUSE");
      system("CLS");
      login();
   }
}
