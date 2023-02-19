//************** MOBILE PACKAGES DETAILING APP**********
#include<iostream>
#include<fstream>
#include<String>
using namespace std;
//network selection function
void network_selection();
//function for networks
void jazz();
void telenor();
void zong();
void Ufone();
//functions for jazz
void jazzdaily();
void jazzweekly();
void jazzdailymessage();
void jazzmonthly();
void jazzdailycall();
void jazzdailyinternet();
void jazzdailyhybride();
void jazzweeklymessage();
void jazzweeklycall();
void jazzweeklyhybride();
void jazzweeklyinternet();
void jazzmonthlymessage();
void jazzmonthlycall();
void jazzmonthlyhybrid();
void jazzmonthlyinternet();
void jazzadvance();
///zong packages detail functions
void zongdaily();
void zondweekly();
void zongmonthly();
void zongdailymessage();
void zongdailycall();
void zongdailyinternet();
void zongdailyhybrid();
void zongweekly();
void zongweeklymessage();
void zongweeklycall();
void zongweeklyinternet();
void zongweeklyhybride();
void zongmonthlycall();
void zongmonthlymessage();
void zongmonthlyinternet();
void zongmonthlyhybride(); 
void zongadvance();
/////telenor packages detail functions
void telenordaily(); 
void telenordailymessage();
void telenordailycall();
void telenordailyinternet();
void telenordailyhybride();
void telenorweeklymessage();
void telenorweeklycall();
void telenorweeklyinternet();
void telenorweeklyhybride(); 
void telenormonthlymessage();
void telenormonthlycall();
void telenormonthlyhybride();
void telenormonthlymessage();
void telenormonthlyinternet();
void telenorweekly();
void telenormonthly();
void telenoradvance();
/////Ufone packages detail functions
void Ufonedaily();
void Ufonedailyhybrid();
void Ufonedailymessage();
void Ufonedailycall();
void Ufonedailyinternet();
void Ufonedailyhybride();
void Ufoneweeklymessage();
void Ufoneweeklycall();
void Ufoneweeklyinternet();
void Ufoneweeklyhybride();
void Ufonemonthlymessage();
void Ufonemonthlycall(); 
void Ufonemonthlyinternet();
void Ufonemonthlyhybride();
void Ufoneadvance();
void Ufoneweeklypackage();
void Ufonemonthlypackage();

int main()
{        
char c;
int g;
	//Display menu
	char name[20]={};
	string email;
	char phone[11];
	cout<<"Enter your name please:\t";
	cin.getline(name,100);
	ofstream outfile;
   outfile.open("userdata.txt",ios::out | ios::in |ios::app);
   outfile <<"name:\t" << name << endl;
   outfile.close();
   do{
   	cout<<endl<<"Do you already have an account(y\\n):\t";
   	cin>>c;
   	if(c=='y'||c=='Y'){
   		cout<<endl<<"Enter your email please:\t";
   		cin>>email;
  	ofstream outfile;
   outfile.open("userdata.txt",ios::out | ios::in |ios::app);
   outfile <<"Email:\t" << email << endl;
    outfile.close();
	   }
	else if(c=='n'||c=='N'){
		cout<<endl<<"Dear "<<name<<"! please create one";
		cout<<endl<<"Enter your phone number please:\t";
		cin.ignore();
   		cin.getline(phone,11);
   		outfile.open("userdata.txt",ios::app);
   		outfile <<"Phone:\t" << phone << endl;
   		cout<<endl<<"Enter your email please:\t";
   		cin>>email;
  	ofstream outfile;
   outfile.open("userdata.txt",ios::app);
   outfile <<"Email:\t" << email << endl;
    outfile.close();
	}
	else{
		cout<<endl<<"Invalid input!";
	}
	if(c=='n'||c=='N'||c=='y'||c=='Y'){
		g=2;
	}
   }while(g!=2);
//Display menu
                                       // display                                 1

	
         //network selection main 2          
int p_press,category,w_press,m_press;
cout<<endl<<"\nWe are having package details of following networks right now!:"<<endl<<endl;
 cout<<"press 1 for jazz"<<endl;                             
 cout<<"press 2 for zong"<<endl;                          
 cout<<"press 3 for telenor"<<endl;                          
 cout<<"press 4 for Ufone"<<endl;     
 cout<<endl<<"Make a choice "<<name<<":\t";                       
 cin>>p_press;   
  
 switch(p_press){    // outer switch
 case 1:     
 
 jazz();
 int option;
 //selection for jazz networking
 cout<<"press 1 for daily packages"<<endl;
 cout<<"press 2 for weekly packages"<<endl;
 cout<<"press 3 for monthly packeges"<<endl;
 cout<<"press 4 for jazz advance"<<endl;
 cout<<endl<<"Select one of the followings:\t";
 cin>>option;
 // if choose 1 then 
 
 
if(option==1)
 {                            //outer if
 jazzdaily(); 
 int press;
                    // if with in switch     nested if in option 1 
 cout<<"press 1 for daily message packages"<<endl;
 cout<<"press 2 for daily call packages"<<endl;
 cout<<"press 3 for daily internet packages"<<endl;
 cout<<"press 4 for daily hybrid packages"<<endl;
 cout<<endl<<"Select one of the followings:\t";
 cin>>press;
 
 if(press==1)                                   //inner if 
 {jazzdailymessage();}

if(press==2)
 {jazzdailycall();} 
 
 if(press==3)
 {jazzdailyinternet();} 
 
 if(press==4)
 {jazzdailyhybride();} }
//daily packages end
 if(option==2)	
 {jazzweekly();
 cout<<"press 1 for weekly jazz message packages"<<endl;
 cout<<"press 2 for weekly jazz call packages"<<endl;
 cout<<"press 3 for weekly jazz internet packages"<<endl;
 cout<<"press 4 for weekly jazz hybrid packages"<<endl;
 cout<<endl<<"Select one of the followings:\t";
 cin>>w_press;
if(w_press==1)
{ jazzweeklymessage();
}
if(w_press==2)
{ jazzweeklycall();
}
if(w_press==3)
{ jazzweeklyinternet();
}
if(w_press==4)
{ jazzweeklyhybride();
} }
 if(option==3)	
 
 {jazzmonthly();
 cout<<"press 1 for monthly jazz message packages"<<endl;
 cout<<"press 2 for  monthly jazz call packages"<<endl;
 cout<<"press 3 for  monthly jazz internet packages"<<endl;
 cout<<"press 4 for  monthly  jazz hybrid packages"<<endl;
 cout<<endl<<"Select one of the followings:\t";
 cin>>m_press;
 if(m_press==1)
 {
 	jazzmonthlymessage();
 }
 if(m_press==2)
 {
 	jazzmonthlycall();
 }
 if(m_press==3)
 {
 	jazzmonthlyinternet();
 }

 if(m_press==4)
 {
 	jazzmonthlyhybrid();
 }
}
 if(option==4)
 { jazzadvance();
 }
 //end of monthly



//end jazz
///////
break;
 case 2: 
 zong();     
int category;
 //selection for networking
 cout<<"press 1 for daily packages"<<endl;
 cout<<"press 2 for weekly packages"<<endl;
 cout<<"press 3 for monthly packeges"<<endl;
 cout<<"press 4 for zong advance"<<endl;
 cout<<endl<<"Make a choice "<<name<<":\t";   
 cin>>category;
 
	 if(category==1)  
	   {
	   	zongdaily();
int z_daily;
cout<<"press 1 for  daily   zong message packages"<<endl;
 cout<<"press 2 for daily zong  call packages"<<endl;
 cout<<"press 3 for  daily zong  internet packages"<<endl;
 cout<<"press 4 for  daily zong  hybrid packages"<<endl;
 cout<<endl<<"Select one of the followings:\t";
 cin>>z_daily;
 if(z_daily==1)//zong daily packages option
 { zongdailymessage(); }	  
 else if(z_daily==2)
{ zongdailycall(); 	}
 else if(z_daily==3)
{ zongdailyinternet(); 	}
else if(z_daily==4)
{ zongdailyhybrid();	}	   	
	   	
	   }
else if(category==2)  //zong weekly packages option
   {	zongweekly();
   int z_weekly;
 cout<<"press 1 for  weekly   zong message packages"<<endl;
 cout<<"press 2 for weekly zong  call packages"<<endl;
 cout<<"press 3 for  weekly zong  internet packages"<<endl;
 cout<<"press 4 for  weekly zong  hybrid packages"<<endl;
 cout<<endl<<"Select one of the followings:\t";
 cin>>z_weekly;
 if(z_weekly==1)
{ zongweeklymessage(); }	  
 else if(z_weekly==2)
{ zongweeklycall(); 	}
 else if(z_weekly==3)
{ zongweeklyinternet(); 	}
else if(z_weekly==4)
{ zongweeklyhybride(); 	}	   	
}	   

else if(category==3)  //zong monthly packages option
   {	zongmonthly();
   int z_monthly;
cout<<"press 1 for monthly   zong message packages"<<endl;
 cout<<"press 2 for  monthly zong  call packages"<<endl;
 cout<<"press 3 for   monthly zong  internet packages"<<endl;
 cout<<"press 4 for   monthly zong  hybrid packages"<<endl;
 cout<<endl<<"Select one of the followings:\t";
cin>>z_monthly;
 if(z_monthly==1)
{ zongmonthlymessage(); }	  
 if(z_monthly==2)
{ zongmonthlycall(); 	}
 if(z_monthly==3)
{ zongmonthlyinternet(); 	}
if(z_monthly==4)
{ zongmonthlyhybride(); 	}	   	
}	   
if(category==4)//zong advance packages option
{ zongadvance();
 }    			                       
 break;                                                        
 case 3	:  // in the case if selection option is telenor                                             
 telenor();     
 int division;
 
  //selection for telenor networking
 cout<<"press 1 for daily packages"<<endl;
 cout<<"press 2 for weekly packages"<<endl;
 cout<<"press 3 for monthly packeges"<<endl;
 cout<<"press 4 for telenor advance"<<endl;
 cout<<endl<<"Make a choice "<<name<<":\t";   
 cin>>division;
 if(division==1)
 {                            //outer if
 telenordaily(); //telenor daily packages
 int te_daily;
                    // if with in switch     nested if in option 1 
 cout<<"press 1 for daily message packages"<<endl;
 cout<<"press 2 for daily call packages"<<endl;
 cout<<"press 3 for daily internet packages"<<endl;
 cout<<"press 4 for daily hybrid packages"<<endl;
 cout<<endl<<"Select one of the following:\t";   
 
 cin>>te_daily;
 
 if(te_daily==1)                                   //inner if 
 {telenordailymessage();}

else if(te_daily==2)
 {telenordailycall();} 
 
 else if(te_daily==3)
 {telenordailyinternet();} 
 
 else if(te_daily==4)
 {telenordailyhybride();} }
 
 else if (division==2) //telenor weekly packages
 { telenorweekly();
 int te_weekly;
 	cout<<"press 1 for weekly message  packages"<<endl;
 	cout<<"press 2 for weekly call packages "<<endl;
 	cout<<"press 3 for weekly internet packages"<<endl;
 	cout<<"press 4 for weekly hybrid packages"<<endl;
 	 cout<<endl<<"Select one of the following:\t";  
 	cin>>te_weekly;
 if(te_weekly==1)	
 	{
 		telenorweeklymessage();
	 }
else if(te_weekly==2)
	 {
	 	telenorweeklycall();
	 }
else if(te_weekly==3)	 
	 {
	 	telenorweeklyinternet();
	 }
else if(te_weekly==4)
{
	telenorweeklyhybride();
} 
 }// weekly telonor packages end

else if(division==3) //telenor monthly packages
 { telenormonthly();
 	int te_monthly;
 	cout<<"press 1 for monthly message  packages"<<endl;
 	cout<<"press 2 for monthly call packages "<<endl;
 	cout<<"press 3 for monthly internet packages"<<endl;
 	cout<<"press 4 for monthly hybrid packages"<<endl;
 	 cout<<endl<<"Select one of the following:\t";  
 	cin>>te_monthly;
   if(te_monthly==1)
 	{
 		telenormonthlymessage();
	 }
 	else if(te_monthly==2)
 	{
 	telenormonthlycall();
	 }
 	else if(te_monthly==3)
 	{
 			telenormonthlyinternet();
	 }
	else if(te_monthly==4)
	 {
	 	telenormonthlyhybride();
	 }
 	
 }
 else if(division==4)
 {
 	telenoradvance();
 }

 break;	                                                         
 case 4:    /////ufone                                                        
 Ufone();
 int choice;
 cout<<"press  1 for daily Ufone packages"<<endl;
 cout<<"press 2 for weekly Ufone  packages"<<endl;
 cout<<"press 3 for  monthly   packages"<<endl;
 cout<<"press 4 for  Ufone advance "<<endl;
 cout<<name<<" Make a choice:\t";
 cin>>choice;
 
 if(choice==1) //ufone daily packages
 	{Ufonedaily();
int u_daily;
cout<<"press 1 for  daily   Ufone  message packages"<<endl;
 cout<<"press 2 for daily Ufone call packages"<<endl;
 cout<<"press 3 for  daily Ufone  internet packages"<<endl;
 cout<<"press 4 for  daily Ufone hybrid packages"<<endl;
  cout<<endl<<"Select one of the following:\t";  
 cin>>u_daily;
 if(u_daily==1)
{ Ufonedailymessage(); }	  
 else if(u_daily==2)
{ Ufonedailycall(); 	}
 else if(u_daily==3)
{ Ufonedailyinternet(); 	}
 else if(u_daily==4)
{ Ufonedailyhybrid();	}	   		
	 }
 	
 else if(choice==2)//ufone weekly packages
 	{
 		Ufoneweeklypackage();
 		int u_weekly;
 	cout<<"press 1 for weekly message  packages"<<endl;
 	cout<<"press 2 for weekly call packages "<<endl;
 	cout<<"press 3 for weekly internet packages"<<endl;
 	cout<<"press 4 for weekly hybrid packages"<<endl;
 	 cout<<endl<<"Select one of the following:\t";  
 	cin>>u_weekly;
 if(u_weekly==1)	
 	{
 		Ufoneweeklymessage();
	 }
 else if(u_weekly==2)
	 {
	 	Ufoneweeklycall();
	 }
 else if(u_weekly==3)	 
	 {
	 	Ufoneweeklyinternet();
	 }
else if(u_weekly==4)
{
	Ufoneweeklyhybride();
 		 }
 		 
 	}
 	
else if(choice==3)//ufone monthly packages
 	{
 	Ufonemonthlypackage();
 	int u_monthly;
 	cout<<"press 1 for monthly message  packages"<<endl;
 	cout<<"press 2 for monthly call packages"<<endl;
 	cout<<"press 3 for monthly internet packages"<<endl;
 	cout<<"press 4 for monthly hybrid packages"<<endl;
 	 cout<<endl<<"Select one of the following:\t";  
 	cin>>u_monthly;
 if(u_monthly==1)	
 	{
 		Ufonemonthlymessage();
	 }
 else if(u_monthly==2)
	 {
	 	Ufonemonthlycall();
	 }
 else if(u_monthly==3)	 
	 {
	 	Ufonemonthlyinternet();
	 }
else if(u_monthly==4)
{
	Ufonemonthlyhybride();
 		 }

	 }
 	else if(choice==4)
 	{
 		Ufoneadvance();
	 }
 
 break;                                                       
default:    //invalid selection                                                          
	cout<<"invalid input"<<endl;                                          
break;                                                           

}
// feedback
char y;
cout<<endl<<endl<<"Dear "<<name<<"! do you have a suggestion for us!(y\\n):\t";
cin>>y;
if(y=='y'){
	char feedback[1000];
	cout<<endl<<endl<<"Please write down your suggestion:\t";
	cin.ignore();
	cin.getline(feedback,1000);
	ofstream outfile;
   outfile.open("Feedback.txt",ios::out | ios::in |ios::app);
   outfile <<"name:\t" << name <<endl<<"email:"<<email<< endl<<"phone:"<<phone<<endl<<"Suggestion:\t"<<feedback<<endl<<endl;
   outfile.close();
   cout<<endl<<endl<<"Dear "<<name<<"! Thanks for your suggestion we will work on it soon";
}
cout<<endl<<endl<<name<<"! Thanks for using our app\n\nwe hope to see you soon";


}///int main ends here
//functions definations



void jazz()
{
	cout<<"\nwelcome to jazz network packages:"<<endl;

}
void zong()
{
cout<<"\nwelcome to zong network packages:"<<endl;

}
void telenor()
{
	cout<<"\nwelcome to telenor network packages:"<<endl;
}

void Ufone()
{
	cout<<"\nwelcome to ufone network packages:"<<endl;
}

void jazzdaily()
{
	cout<<"\nwelcome to daily offers:"<<endl;
}

void jazzweekly()
{
		cout<<"\nwelcome to weekly offers:"<<endl;
}

void jazzmonthly()
{
		cout<<"\nwelcome to monthly offers:"<<endl;
}
void zongdaily()
{
	cout<<"\nwelcome to zong daily offers:"<<endl;
}
void zongweekly()
{
	cout<<"\nwelcome to zong weekly offers:"<<endl;
}
void zongmonthly()
{
	cout<<"\nwelcome to zong monthly offers:"<<endl;
}
 void telenordaily()
 {cout<<"\nwelcome to telenor daily offers:"<<endl;
 }
void telenormonthly()
 {cout<<"\nwelcome to telenor monthly offers:"<<endl;
 }
void telenorweekly()
 {cout<<"\nwelcome to telenor weekly offers:"<<endl;
 }
 
 void telenoradvance()
 {
 	cout<<"\n       dial *1214# of telenor advance"<<endl;
 }
 void zongadvance()
 {
 	cout<<"\n       dial *999# for zong advance"<<endl;
 }
 void Ufonedaily(){
 cout<<"\nwelcome to Ufone daily offers"<<endl;
 }
void Ufoneweekly(){
 cout<<"\nwelcome to Ufoneweekly offers"<<endl;
 }
void Ufonemonthly(){
 cout<<"\nwelcome to Ufone monthly offers"<<endl;
 }
void Ufoneadvance()
{
	cout<<"\n       dial *1279# for ufone advance"<<endl;
}
void Ufoneweeklypackage()
{
	
	cout<<"\nwelcome to Ufone weekly packages:"<<endl;
}
void Ufonemonthlypackage()
{cout<<"\nwelcome to Ufone monthly packages:"<<endl;
}
void jazzdailymessage()
{
	
	cout<<"\nWelcome to jazz daily message packages:"<<endl;
	cout<<"\n       Jazz 1800 message on other networks Rs 7.5 (with taxes )for 6 hours\n       you will get this offer by dialing *124# on your device!"<<endl;
	cout<<"\n       Jazz 1800 message on other networks Rs 10.5 for 24 hours\n       you will get this offer by dialing *125# on your device!"<<endl;
	cout<<"\n       Jazz 1800 message on other networks Rs 4.5 for 2 hours\n       you will get this offer by dialing *126# on your device!"<<endl;
		
		
		
}

void jazzdailycall()
{
	cout<<"\nWelcome to Jazz Daily Call Packages:"<<endl;
	cout<<"\n       call on any network for 6 hours Rs 10 \n       you will get this offer by dialing *127# on your devices!"<<endl;
	cout<<"\n       call on same network for 2 hours Rs 5.5\n       you will get this offer by dialing *128# on your devices!"<<endl;
	cout<<"\n       call on same network for hours 24 hours in 12\n       you will get this offer by dialing *129# on your devices! (with taxes):"<<endl;

		
}

void jazzdailyinternet()
{ 
cout<<"\nWelcome to Jazz Daily Internet Packages:"<<endl;
	cout<<"\n       8 GB for 1 hour in Rs 4.4\n       you will get this offer by dialing *1211#"<<endl;
	cout<<"\n       1 MB for for 2 hours in Rs 6\n       you will get this offer by dialing *1212# "<<endl;
	cout<<"\n       10 MB for 24 hours in Rs 11\n       you will get this offer by dialing *1213#"<<endl;

		
	
}

void jazzdailyhybride()

{cout<<"\nWelcome to Jazz Daily Hybrid Packages:"<<endl;
	cout<<"\n       20 MB DATA,300 Jazz Mins,300 SMS,Rs.20 (Incl. Tax) with free facebook for 24 hours\n       you will get this offer by dialing *1215# on your devices!"<<endl;
	cout<<"\n       50 MB DATA,30 Jazz Mins,30 SMS,Rs.14 (Incl. Tax) for 24 hours\n       you will get this offer by dialing *1216# on your devices!"<<endl;
	cout<<"\n       75 MB DATA,300 Jazz Mins,20 SMS,Rs.16 (Incl. Tax) with free whatsapp for 24 hours\n       you will get this offer by dialing *1217# on your devices!"<<endl;

}
void jazzweeklymessage()
{cout<<"\nWelcome to Jazz Weekly SMS Packages:"<<endl;
	cout<<"\n       Jazz 2500 message on other networks Rs 13 (with taxes)\n       you will get this offer by dialing *1220# on your device!"<<endl;
	cout<<"\n       Jazz 3000 message on other networks Rs 19 (with taxes)\n       you will get this offer by dialing *1222# on your device!"<<endl;
	cout<<"\n       Jazz 3500 message on other networks Rs 26 for 2 hours\n       you will get this offer by dialing *1224# on your device!"<<endl;
		
	
}
void jazzweeklycall()
{
	cout<<"\nWelcome to Jazz Weekly Call Packages:"<<endl;	
	cout<<"\n       call on any network  Rs 35 with 1 hour free call \n       you will get this offer by dialing *1225# on your devices!"<<endl;
	cout<<"\n       call on same network  Rs 29\n       you will get this offer by dialing *1226# on your devices!"<<endl;
	
}
void jazzweeklyinternet(){
	cout<<"\nWelcome to Jazz Weekly Internet Packages:"<<endl;
	cout<<"\n       800 MB  in Rs 45\n       you will get this offer by dialing *1227# on your!"<<endl;
	cout<<"\n       2000 MB  in Rs 60\n       you will get this offer by dialing *1228# on your!"<<endl;
	cout<<"\n       3000 MB for 1 hours free in Rs 70\n       you will get this offer by dialing *1229# on your!"<<endl;

}

void jazzweeklyhybride(){
cout<<"\nWelcome to Jazz Weekly Hybrid Packages:"<<endl;
	cout<<"\n       200 MB DATA,300 Jazz Mins,300 SMS,60 (Incl. Tax) with free facebook\n       you will get this offer by dialing *1213# on your devices!"<<endl;
	cout<<"\n       100 MB DATA,30 Jazz Mins,30 SMS,Rs 50.(Incl. Tax)\n       you will get this offer by dialing *1231# on your devices!"<<endl;
	cout<<"\n       1500 MB DATA,3000 Jazz Mins,200 SMS,Rs.75 (Incl. Tax) with free whatsapp for 24 hours\n       you will get this offer by dialing *1232# on your devices!"<<endl;
}

void jazzadvance()
{cout<<"\n       to get Jazz advance press*112#"<<endl;

}
//weekly end
void jazzmonthlymessage()
{
	cout<<"\nWelcome to Jazz Monthly SMS Packages:"<<endl;
	cout<<"\n       Jazz 25000 message on other networks Rs 80 (with taxes )\n       you will get this offer by dialing *1233# on your device!"<<endl;
	cout<<"\n       Jazz 30000 message on other networks Rs 95 (with taxes )\n       you will get this offer by dialing *1234# on your device!"<<endl;
	cout<<"\n       Jazz 35000 message on other networks Rs 95 (with taxes)\n       you will get this offer by dialing *1341# on your device!"<<endl;
}
void jazzmonthlycall()
{
	cout<<"\nWelcome to Jazz Monthly Call Packages:"<<endl;
	cout<<"\n       call on any network  Rs 80 with 2 hour free call\n       you will get this offer by dialing *1235# on your devices!"<<endl;
	cout<<"\n       call on same network  Rs 79\n       you will get this offer by dialing *1236# on your devices!"<<endl;
	
}
void jazzmonthlyinternet(){
	cout<<"\nWelcome to Jazz Monthly Internet Packages:"<<endl;
	cout<<"\n       8GB  in Rs 159\n       you will get this offer by dialing *1241#"<<endl;
	cout<<"\n       12GB in Rs 189\n       you will get this offer by dialing *1242#"<<endl;
	cout<<"\n       20GB for 70 hours in Rs 300\n       you will get this offer by dialing *1243#"<<endl;

}



void jazzmonthlyhybrid()
{
	cout<<"\nWelcome to Jazz Monthly Hybrid Packages:"<<endl;
	cout<<"\n       55200 MB DATA,300 Jazz Mins,3000 SMS,5.99(Incl. Tax) with free facebook  whatsapp\n       you will get this offer by dialing *12137 on your devices!"<<endl;
	cout<<"\n       30000 MB DATA,3000Jazz Mins,2000 SMS,Rs 500.(Incl. Tax) with free instagram\n       you will get this offer by dialing *1239# on your devices!"<<endl;
	cout<<"\n       15000 MB DATA,3000 Jazz Mins,SMS,Rs400. (Incl. Tax) with free whatsapp\n       you will get this offer by dialing *1238# on your devices!"<<endl;
}
    void zongdailymessage()
	{	
	cout<<"\nWelcome to Zong Daily Message Packages:"<<endl;
	cout<<"\n       50 message on other networks Rs 3 (with taxes )for 2 hours\n       you will get this offer by dialing *124# on your device!"<<endl;
	cout<<"\n       50 message on other networks Rs 4+tax for 24 hours\n       you will get this offer by dialing *125#on your device!"<<endl;
	cout<<"\n       100 message on other networks Rs 5 for 24 hours\n       you will get this offer by dialing *126# on your device!"<<endl;
		
											 }                                         
void zongdailycall()
{	
	cout<<"\nWelcome to  Zong Daily Call Packages:"<<endl;
	cout<<"\n       call on any network for 6 hours Rs 6 \n       you will get this offer by dialing *127# on your devices!"<<endl;
	cout<<"\n       call on same network for 2 hours Rs 4 \n       you will get this offer by dialing *128# on your devices!"<<endl;
	cout<<"\n       call on same network for hours 24 hours in Rs 10\n       you will get this offer by dialing *129# on your devices!"<<endl;
}
void zongdailyinternet()
{
	cout<<"\nWelcome to  Zong Daily Internet Packages:"<<endl;
	cout<<"\n       10 GB for 1 hour in Rs 4.4\n       you will get this offer by dialing *1211# on your"<<endl;
	cout<<"\n       10 MB for for 2 hours in Rs 11\n       you will get this offer by dialing *1212# on your"<<endl;
	cout<<"\n       14 MB for 24 hours in Rs 15\n       you will get this offer by dialing *1213# on your"<<endl;
}
void zongdailyhybrid()
{
	cout<<"\nWelcome to Zong Daily Hybrid Packages:"<<endl;
	cout<<"\n       20 MB DATA,300 zong Mins,30 SMS,Rs.17 (Incl. Tax) with free facebook+whatsapp for 24 hours\n       you will get this offer by dialing *31215# on your devices"<<endl;
	cout<<"\n       10 MB DATA,30 zong Mins,30 SMS,Rs.20 (Incl. Tax) for 24 hours\n       you will get this offer by dialing *1216# on your devices"<<endl;
	cout<<"\n       15 MB DATA,300 z0ng mins,20 SMS,Rs.16 (Incl. Tax) with free whatsapp for 24 hours\n       you will get this offer by dialing *1217# on your devices"<<endl;
	
}
void zongweeklymessage()
{
	cout<<"\nWelcome to Zong Weekly Message Packages:"<<endl;
	cout<<"\n       zong 2500 message on other networks +free 3000 mins Rs 13 (with taxes)\n       you will get this offer by dialing *1220# on your device!"<<endl;
	cout<<"\n       zong 3000 message on other networks Rs 19+tex (with taxes)\n       you will get this offer by dialing *1222# on your device!"<<endl;
	cout<<"\n       zong 3500 message on other networks Rs 20 +200 zong mins\n       you will get this offer by dialing *1224# on your device!"<<endl;

}
void zongweeklycall()
{	
	cout<<"\nWelcome to Zong Weekly Call Packages:"<<endl;
	cout<<"\n       call on any network  Rs 25 with 1 hour free call\n       you will get this offer by dialing *1225# on your devices!"<<endl;
	cout<<"\n       call on same network  Rs 30\n       you will get this offer by dialing *1226# on your devices!"<<endl;
}
void zongweeklyhybride()
{
	cout<<"\nWelcome to Zong Weekly Hybrid Packages:"<<endl;
	cout<<"\n       200 MB DATA,300 zongMins,300 SMS,40 (Incl. Tax) with free facebook \n       you will get this offer by dialing *12130# on your devices!"<<endl;
	cout<<"\n       100 MB DATA,30 zong Mins,30 SMS,Rs 50.(Incl. Tax) \n       you will get this offer by dialing *1231# on your devices!"<<endl;
	cout<<"\n       1500 MB DATA,3000 zong Mins,200 SMS,Rs.60 (Incl. Tax) with free whatsapp for 24 hours\n       you will get this offer by dialing *1232# on your devices!"<<endl;
}
void zongweeklyinternet()
{
	cout<<"\nWelcome to Zong Weekly Internet Packages:"<<endl;
	cout<<"\n       800 MB  in Rs 40\n       you will get this offer by dialing *1227#"<<endl;
	cout<<"\n       2000 MB  in Rs 55\n       you will get this offer by dialing *1228#"<<endl;
	cout<<"\n       3000 MB for 60 hours in Rs 15\n       you will get this offer by dialing *1229#"<<endl;
	
	
}

void zongmonthlymessage()
{
	cout<<"\nWelcome to Zong Monthly Message Packages:"<<endl;
	cout<<"\n       2500 message in Rs 70 (with taxes)\n       you will get this offer by dialing *1233# on your device"<<endl;
	cout<<"\n       3000 message in networks Rs 80 (with taxes)\n       you will get this offer by dialing *1234# on your device"<<endl;
	cout<<"\n       3500 message in networks Rs 90(with taxes)\n       you will get this offer by dialing *1134# on your device"<<endl;

}

void zongmonthlycall()
{
	cout<<"\nWelcome to Zong Monthly Call Packages:"<<endl;
	cout<<"\n       120 on-net minutes daily just in 65 Rs\n       you will get this offer by dialing *1134# on your device"<<endl;	
}

void zongmonthlyinternet()
{
	cout<<"\nWelcome to Zong Monthly Internet Packages:"<<endl;
	cout<<"\n       8000 MB  in Rs 150\n       you will get this offer by dialing *1241# on your"<<endl;
	cout<<"\n       7000 MB  in Rs 120+tax\n       you will get this offer by dialing *1242# on your"<<endl;
	cout<<"\n       16000 MB  in Rs 200\n       you will get this offer by dialing *1243# on your"<<endl;

}

void zongmonthlyhybride()
{
	cout<<"\nWelcome to Zong Monthly Hybrid Packages:"<<endl;
	cout<<"\n       3500 MB DATA, 300 zong minutes,3000 SMS,2(Incl. Tax) with free facebook+whatsapp in RS 300\n       you will get this offer by dialing *12137# on your devices"<<endl;
	cout<<"\n       5000 MB DATA,300 zong minutes, 2000 SMS Rs 500.(Incl. Tax) with free instagram\n       you will get this offer by dialing *1239# on your devices"<<endl;
	cout<<"\n       8000 MB DATA,3000 zong minutes,SMS,Rs400. (Incl. Tax) with free whatsapp\n       you will get this offer by dialing *1238# on your devices"<<endl;
	
}
void telenordailymessage()
{
cout<<"\nWelcome to Telenor Daily SMS Packages:"<<endl;
cout<<"\n       100  massages in Rs 5\n       dial #123* for activation"<<endl;
cout<<"\n       200  messages in Rs 8\n       dial #124* for activation"<<endl;
cout<<"\n       800  massages in Rs 20\n       dial *125# for activation"<<endl;
cout<<"\n       1200 massages in Rs 24\n       dial *126# for activation"<<endl;
}
void telenordailycall()
{
	cout<<"\nWelcome to Telenor Daily Call Packages:"<<endl;
	cout<<"\n       Full day offer 50mbs+100mbs whatsapp in RS 13 and on net calls\n       dial *127# for activation!"<<endl;
	cout<<"\n       Telenor super day offer 20 mintutes off net in RS 0.8\n       dial *128# for activation!"<<endl;
	cout<<"\n       Telenor good time offer 2 hours call on any network  in RS 7\n       dial *129# for activation!"<<endl;
}

void telenordailyinternet()
{
	cout<<"\nWelcome to Telenor Daily Internet Packages:"<<endl;
	cout<<"\n       Full day offer 50mbs in RS 10\n       dial *1211# for activation!"<<endl;
	cout<<"\n       Telenor super day offer includes 500 mbs for youtube tax in RS 17\n       dial *1218# for activation!"<<endl;
	cout<<"\n       Telenor good time offer includes 50 mbs for 2 hours in RS 5\n       dial *1219# for activation!"<<endl;
}
void telenordailyhybride()
{
	cout<<"\nWelcome to Telenor Daily Hybrid Packages:"<<endl;
	cout<<"\n       Full day offer includes 50mbs+free whatsapp in RS 20\n       dial *1217# for activation!"<<endl;
	cout<<"\n       Full day offer includes 100mbs+free whatsapp and instagram for 1 hour in RS 24\n       dial *1227# for activation!"<<endl;
	cout<<"\n       Full day offer includes 100mbs+free whatsapp+1hours call on any network for 1 hour in RS 30\n       dial *1917# for activation!"<<endl;
}

void telenorweeklymessage()
{
cout<<"\nWelcome to Telenor Weekly SMS Packages:"<<endl;
cout<<"\n       500  massages in Rs 18\n       dial #1233* for activation!"<<endl;
cout<<"\n       1000 messages in Rs 25\n       dial *1284# for activation!"<<endl;
cout<<"\n       1500 massages in Rs 28\n       dial *1295# for activation!"<<endl;
cout<<"\n       1300 massages in Rs 32\n       dial *1306# for activation!"<<endl;
}

void telenorweeklycall()
{
	cout<<"\nWelcome to Telenor Weekly Call Packages:"<<endl;
	cout<<"\n       340 on-net and 60 off-net minutes daily + unlimuted messeges in Rs 40\n       dial *1294# for activation!"<<endl;
	cout<<"\n       500 on-net and 100 off-net minutes daily + unlimuted messeges in Rs 60\n       dial *1394# for activation!"<<endl;
	
}
void telenorweeklyinternet()
{
cout<<"\nWelcome to Telenor Weekly Internet Packages:"<<endl;
cout<<"\n       Weekly 500mb for zoom pack with free 2 hour whatsapp after activation in Rs 24\n       dial *1394# for activation!"<<endl;
cout<<"\n       Week to Week offer 2000mbs +tax with free facebook for 3 hour after activation Rs 30\n       dial *1304# for activation!"<<endl;
cout<<"\n       Week to Week offer 6000mbs +tax with free facebook for 3 hour after activation Rs 35\n       dial *1781# for activation!"<<endl;
}

void telenorweeklyhybride()
{
	cout<<"\nWelcome to Telenor Weekly Hybrid Packages:"<<endl;
	cout<<"\n       Weekly 500mb for zoom pack with free 2 hour whatsapp+1000 masages +call on other networkin Rs 60\n       dial *1374#  for activation!"<<endl;
	cout<<"\n       Week to Week offer 2000mbs, 800 massages + calls +tax with youtube  for 3 hour after activation Rs 65\n       dial *1304# for activation!"<<endl;
	cout<<"\n       Week to Week offer 6Gb + 10K SMS +on-net call free facebook for 2 hour after activation Rs 100\n       dial *9904# for activation!"<<endl;
}

void telenormonthlymessage()
{
cout<<"\nWelcome to Telenor Monthly SMS Packages:"<<endl;
cout<<"\n       5000 SMS+ whatsapp + tax in Rs 170\n       dial #17233* for activation!"<<endl;
cout<<"\n       10000 SMS+ whatsapp +tax in Rs 100\n       dial *1284# for activation!"<<endl;
cout<<"\n       15000 SMS + whatsapp free facebook + tax in Rs 140\n       dial *1295# for activation!"<<endl;
cout<<"\n       30000 SMS + whatsapp + free instagram +tax in Rs 155\n       dial *1306#  for activation!"<<endl;
}
void telenormonthlycall(){
	cout<<"\nWelcome to Telenor Monthly Call Packages:"<<endl;
	cout<<"\n       Unlimited Calls on any network with 500 free messages + for weeks in Rs 100\n       dial *16294# for activation!"<<endl;
} 
void telenormonthlyinternet()
{
cout<<"\nWelcome to Telenor Monthly Internet Packages:"<<endl;
cout<<"\n       monthly 10Gb  with free whatsapp after activation in Rs 150\n       dial *13948# for activation!"<<endl;
cout<<"\n       monthly 16Gb + tax with  facebook Rs 180\n       dial *1304# for activation!"<<endl;
cout<<"\n       monthly 3Gb + tax with free facebook for 3 hour after activation Rs 35\n       dial *1214# for activation!"<<endl;
}
void telenormonthlyhybride()
{
cout<<"\nWelcome to Telenor Monthly Hybrid Packages:"<<endl;
cout<<"\n       30Gb for zoom pack with free 2 hour whatsapp+1000 masages +call on other networkin Rs 60\n       dial *1374# for activation!"<<endl;
cout<<"\n       50Gb, 8000 massages + calls +tax with youtube  for 3 hour after activationRs 80\n       dial *1304# for activation!"<<endl;
cout<<"\n       80Gb+tax + 10000 massages + call on any network with free facbook for 2 hour Rs 100\n       dial *9904# for activation!"<<endl;
}

void Ufonedailymessage()
{
	cout<<"\nWelcome to Ufone Daily SMS Packages:"<<endl;
	cout<<"\n       100 message on other networks Rs 5 (with tax)\n       you will get this offer by dialing *1240# on your device!"<<endl;
	cout<<"\n       150 message on other networks Rs 8+tax\n       you will get this offer by dialing *1285# on your device!"<<endl;
}

void Ufonedailyinternet()
{
	cout<<"\nWelcome to Ufone Daily internet Packages:"<<endl;
	cout<<"\n       Power hour (60-net minutes+60 SMS+60 MB) in Rs 6 Rs\n       you will get this offer by dialing *1340# on your device!"<<endl;
	cout<<"\n       Ufone streaming package(500mbs) for 1hour 10 Rs\n       you will get this offer by dialing *1290# on your device!"<<endl;
	cout<<"\n       Ufone Daily Light 3G package(40mbs) 12 Rs\n       you will get this offer by dialing *15240# on your device!"<<endl;
	cout<<"\n       Ufone Daily Heavy 3G package(75mbs) 18 Rs\n       you will get this offer by dialing *1440# on your device!"<<endl;
	cout<<"\n       Ufone mega internet(2000mbs) 15 Rs\n       you will get this offer by dialing *12404# on your device!"<<endl;
}

void Ufonedailycall()
{
	cout<<"\nWelcome to Ufone Daily Call Packages:"<<endl;
	cout<<"\n       Daily Pakistan Offer (100-net minutes+10 MB)\n       you will get this offer by dialing *1274# on your device!"<<endl;
	cout<<"\n       Beyhisaab Offer (Unlimited On-net Minutes)\n       you will get this offer by dialing *1245# on your device!"<<endl;
}
void Ufonedailyhybrid()
{  
	cout<<"\nWelcome to Ufone Daily Hybrid Packages:"<<endl;
	cout<<"\n       (60-net minutes+500mbs) for 1hour in Rs15\n       you will get this offer by dialing *12940# on your device!"<<endl;
	cout<<"\n       (40mbs)+(Unlimited On-net Minutes) in Rs 17\n       you will get this offer by dialing *1840# on your device!"<<endl;
}
void Ufoneweeklymessage()
{
cout<<"\nWelcome to Ufone Weekly SMS Packages:"<<endl;
cout<<"\n       100sms 7 Rs\n       you will get this offer by dialing *1999# on your device!"<<endl;
cout<<"\n       380Sms 14 Rs\n       you will get this offer by dialing *1888# on your device!"<<endl;
cout<<"\n       1500sms 25 Rs\n       you will get this offer by dialing *1777# on your device!"<<endl;
}
void Ufoneweeklycall()
{
	cout<<"\nWelcome to Ufone Weekly Call Packages:"<<endl;
	cout<<"\n       500 onnet minutes in13 Rs \n       you will get this offer by dialing *1996# on your device!"<<endl;
	cout<<"\n       1000 onnet +100 off net minutes 25 Rs\n       you will get this offer by dialing *1994# on your device!"<<endl;
	cout<<"\n       Unlimited onnet minutes +50 offnet minutes 30 Rs\n       you will get this offer by dialing *1997# on your device!"<<endl;
    cout<<"\n       5000onnet minute 18 Rs\n       you will get this offer by dialing *1998# on your device!"<<endl;

}
void Ufoneweeklyinternet()
{
	cout<<"\nWelcome to Ufone Weekly Internet Packages:"<<endl;
	cout<<"\n       Weekly Pakistan offer (100mbs+ 700 offnet minutes)50 Rs\n       you will get this offer by dialing *1976# on your device!"<<endl;
	cout<<"\n       Ufone super internet plus (6000mbs) 175 Rs\n       you will get this offer by dialing *1986# on your device!"<<endl;
	cout<<"\n       Ufone super internet(1200mbs) 130 Rs\n       you will get this offer by dialing *1956# on your device!"<<endl;
	cout<<"\n       Ufone WeeklyHeavy 3G package(500mbs) 125 Rs\n       you will get this offer by dialing *1926# on your device!"<<endl;
}
void Ufoneweeklyhybride()
{
	cout<<"\nWelcome to Ufone Weekly Hybrid Packages:"<<endl;
	cout<<"\n       1500sms,1000 onnet minutes+ whatsapp in Rs 200\n       you will get this offer by dialing *1976# on your device!"<<endl;
	cout<<"\n       Heavy 3G package(500mbs) Unlimited onnet minutes free facebook Rs 250 \n       you will get this offer by dialing *1786# on your device!"<<endl;
	cout<<"\n       (40mbs)+(Unlimited On-net Minutes)+1000 onnet +1000 offnet mintutes Rs 350 \n       you will get this offer by dialing *1456# on your device!"<<endl;
}
void Ufonemonthlymessage()
{
	cout<<"\nWelcome to Ufone Monthly SMS Packages:"<<endl;
	cout<<"\n       Unlimited sms 100 Rs\n       you will get this offer by dialing #1976 on your device!"<<endl;
	cout<<"\n       1500Sms 45 Rs\n       you will get this offer by dialing *1971# on your device!"<<endl;
	cout<<"\n       800Sms 35 Rs\n       you will get this offer by dialing *1276# on your device!"<<endl;
	cout<<"\n       500sms 25 Rs\n       you will get this offer by dialing *7976# on your device!"<<endl;
}
void Ufonemonthlycall()
{
	cout<<"\nWelcome to Ufone Monthly Call Packages:"<<endl;
	cout<<"\n       1000 onnet minutes\n       you will get this offer by dialing in 30 Rs *1976# on your device!"<<endl;
	cout<<"\n       2000 onnet +100 off net minutes\n       you will get this offer in 35 Rs by dialing *1946# on your device!"<<endl;
	cout<<"\n       5000onnet minute \n       you will get this offer by dialing *19786# in 58 Rs on your device!"<<endl;
	cout<<"\n       Unlimited onnet minutes +500 offnet minutes in 50 Rs\n       you will get this offer by dialing *19746# on your device!"<<endl;
}
void Ufonemonthlyinternet()
{
	cout<<"\nWelcome to Ufone Monthly Internet Packages:"<<endl;
	cout<<"\n       Ufone social Monthly packsges(1000mbs) 60 Rs\n       you will get this offer by dialing *1946# on your device!"<<endl;
	cout<<"\n       Ufone Lite cashback offer(1000mbs) 350 Rs\n       you will get this offer by dialing *1948#  on your device!"<<endl;
	cout<<"\n       Ufone monthly Pakistan offer(400mbs+4000on-net minutes) 418 Rs\n       you will get this offer by dialing *1996# on your device!"<<endl;
	cout<<"\n       Ufone max monthly (10GB) 1500 Rs\n       you will get this offer by dialing *1846# on your device!"<<endl;
}
void Ufonemonthlyhybride()
{
	cout<<"\nWelcome to Ufone Monthly Hybrid Packages:"<<endl;
	cout<<"\n       Ufone sim lagao offer(6000mbs)\n       you will get this offer by dialing *1986# on your device!"<<endl;
	cout<<"\n       Ufone monthly Pakistan offer(400mbs+4000on-net minutes)+Ufone max monthly (10GB)in Rs500\n       you will get this offer by dialing *1668# on your device!"<<endl;
	cout<<"\n       5000onnet minute Unlimited onnet minutes +500 offnet minutes in Rs\n       you will get this offer by dialing *1556# on your device"<<endl;
	cout<<"\n       Ufone monthly Pakistan offer(400mbs+4000on-net minutes) in Rs 699 \n       you will get this offer by dialing *1836# on your device"<<endl;
	
	
}


