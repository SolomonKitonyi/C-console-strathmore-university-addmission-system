#include <iostream>
#include <string>
#include <cstdlib>
#include <typeinfo>
using namespace std;

int main(){

    int marks,y_of_birth,m_of_birth,d_of_birth;
    string fname,mname,lname,religion,place_of_stay,email,parent1_fname,\
	parent1_mname,parent1_lname,parent2_fname,parent2_mname,parent2_lname;
    int ans1,ans2,ans3,ans4,ans5,an1,an2,an3,an4,an5,sum1,sum2,sum3,grade,choice,duration;
    cout << "\t###############################################################################" << endl;
    cout << "\t*******************************************************************************" << endl;
    cout <<"\tHello,welcome to Strathmore University,we are glad you are here,feel at home." <<endl;
    cout << "\t*******************************************************************************" << endl;
    cout << "\t###############################################################################" << endl;
   	cout << "What is your First Name: ";
    cin >> fname;
   // while( typeid (fname) !=typeid(char&&cha>65<122)) {
   	cout << "What is your First Name: ";
    cin >> fname;
   	cout <<fname;
   
   	cout <<fname;
   

    cout << "What is your Second Name: ";
    cin >> mname;
    cout << "What is your Last Name: ";
    cin >> lname;
    cout <<"You are loged in as "<<fname <<" " <<mname <<" " <<lname <<"."<<endl;
    
    bool gotint=false;
    string intext;
    int inval;
    
    while(!gotint){ 
        char*chk;
        char mn[10];
        cout <<fname<< " Enter your phone number which consists of numbers only:Hint 1,2,3..:";
        cin >>intext;
        
        inval =(int) strtol(intext.c_str (),&chk,10);
        
        if (*chk=='\0' ||isspace(*chk))
        {
            gotint=true;
        }
      cout <<intext<<endl;
   }

   gotint=false;
    string intext1;
    inval;
    
    while(!gotint){ 
        char*chk;
        char mn[10];
        cout <<fname<< " Enter your id number which consists of numbers only:Hint 1,2,3..:";
        cin >>intext1;
        
        inval =(int) strtol(intext1.c_str (),&chk,10);
        
        if (*chk=='\0' ||isspace(*chk))
        {
            gotint=true;
        }
      cout <<intext1<<endl;

   }

    cout <<"Enter your email:";
    cin >>email;
    cout <<email <<endl;
    
    cout <<fname<< " Enter your year of birth which consists of numbers only:Hint 1,2,3..:"<<endl;
    cin >>y_of_birth;
        while(y_of_birth <1985 || y_of_birth >2002 ){
    	cout <<"Enter valid year from 1985 to 2002:";
    	cin >>y_of_birth;
    	cout <<y_of_birth<<endl;
    }
    cout <<"Enter your month of birth which consists of numbers only:Hint 1,2,3..:";
    cin >>m_of_birth;
    while(m_of_birth <1 ||m_of_birth >12){
    	cout <<"Enter valid month from 1 to 12:";
    	cin >>m_of_birth;
    	cout <<m_of_birth<<endl;
	}
    
     cout <<"Enter your day of birth which consists of numbers only:Hint 1,2,3..:";
    cin >>d_of_birth;
    while(d_of_birth <1 ||d_of_birth >31){
    	cout <<"Enter valid date from 1 to 31:";
    	cin >>d_of_birth;
    	cout <<d_of_birth<<endl;
	}
    
    cout <<"Enter your religion:";
    cin >>religion;
     cout <<"\t" <<religion <<endl;
     
     cout <<"Enter your father's or guardian first name:";
     cin >>parent1_fname ;
     
     cout <<"Enter your father's or guardian second name:";
     cin >>parent1_mname ;
     
     cout <<"Enter your father's or guardian last name:";
     cin >>parent1_lname ;
     cout <<"\t" <<parent1_fname <<" "<<parent1_mname <<" " <<parent1_lname <<"."<<endl;
     gotint=false;
    string intext2;
    inval;
    
    while(!gotint){ 
        char*chk;
        char mn[10];
        cout <<fname<< " Enter your father's or guardian number which consists of numbers only:Hint 1,2,3..:";
        cin >>intext2;
        
        inval =(int) strtol(intext2.c_str (),&chk,10);
        
        if (*chk=='\0' ||isspace(*chk))
        {
            gotint=true;
        }
      cout <<intext2<<endl;
   }
    
      cout <<"Enter your mother's or guardian first name:";
     cin >>parent2_fname ;
     
     cout <<"Enter your mother's or guardian second name:";
     cin >>parent2_mname ;
     
     cout <<"Enter your mother's or guardian last name:";
     cin >>parent2_lname ;
     cout <<"\t" <<parent2_fname <<" "<<parent2_mname <<" " <<parent2_lname <<"."<<endl;
     gotint=false;
    string intext3;
    inval;
    
    while(!gotint){ 
        char*chk;
        char mn[10];
        cout <<fname<< " Enter your mother's or guardian number which consists of numbers only:Hint 1,2,3..:";
        cin >>intext3;
        
        
        inval =(int) strtol(intext3.c_str (),&chk,10);
        
        if (*chk=='\0' ||isspace(*chk))
        {
            gotint=true;
        }
      cout <<intext3<<endl;
   }
     
     cout <<fname <<" enter your residence:";
     cin >>place_of_stay;
     cout <<"\t" <<place_of_stay <<endl;
     
     cout <<fname <<" enter your KCSE or IGSE grade:Kindly Choose your grade in terms \
	 of 1,2,3...:\n1.A.\n2.A-.\n3.B+.\n4.B.\n5.B-.\n6.C+.\n7.C.\n8.C-.\n9.D+.\n10.D.\n11.D-.\n12.E.";
     cin >> grade;
     	while(grade <1|| grade>12){
     	cout <<"enter a valid KCSE or IGSE grade:Kindly Choose your grade in terms \
	 of 1,2,3...:\n1.A.\n2.A-.\n3.B+.\n4.B.\n5.B-.\n6.C+.\n7.C.\n8.C-.\n9.D+.\n10.D.\n11.D-.\n12.E.";
	 cin >> grade;     	
	 }
	
	 
     
	 
	 
     cout <<"\t" <<grade <<endl;
  
     cout <<"*************************************************************************************************\
	 ****************************************************";
     cout <<"We have an English and Maths entry Exam for you:\n\tYou are Going to start with English Exam below:\
	 \nStrathmore University Wishes you All the Best:";
     cout <<"###################################################################################################\
	 ##########################################"<<endl;
     
      
     cout <<"\t\<English Exam\> NB:Choose your Choices in Terms of 1,2...:\n" <<".fill in blank space with the correct\
	  preposition:\n  1.We know how proficient Jane is.........her work.choose one.\n1.at.\n2.in\n3.by:";cin >>ans1;
	 if (ans1==1)
	 {
	 	ans1=25;
	 }
	 else if(ans1!=1)
	 {
	 	ans1=0;
	 }
	 cout <<"\n 2.Many people are not accustomed.......such treament.Choose one.\n1.at\n2.to\n.3.has:";cin >>ans2; 
	 if (ans2==2)
	 {
	 	ans2=25;
	 }
	 else if(ans2!=2)
	 {
	 	ans2=0;
	 }
	 cout <<"\n 3.The accident victim  writhed......pain as we rushed him to hospistal.Choose one:\n1.in\n2.at\n3.on:";cin >>ans3;
	  if (ans3==1)
	  {
	 	ans3=10;
	 }
	 else if(ans3!=1)
	 {
	 	ans3=0;
	 }
	 cout <<"\n .Fill the blank space with the correct alternative from given choices:\n 4.The bank in\
	  conjuction with clubs....sponsored the event.Choose one\n1.has\n2.have.:";cin >>ans4;
	  if (ans4==1)
	  {
	 	ans4=20;
	 }
	 else if(ans4!=1)
	 {
	 	ans4=0;
	 }
	 cout<<"\n 5.Neither Karimi nor her friend....there.:Choose one:\n1.was\n2.were:";cin >>ans5;
	  if (ans5==1)
	  {
	 	ans5=20;
	 }
	 else if(ans5!=1)
	 {
	 	ans5=0;
	 }
	
	 sum1=ans1+ans2+ans3+ans4+ans5;
     cout <<"\n\t"<<fname <<" " <<"Your Total score in English Entry Exam is "<<sum1<<"%" <<endl;
     
     cout <<"*****************************************************************"<<endl;
     cout <<"\n\t\<Maths Entry Exam\> NB:Choose your Choices in Terms of 1,2...:"<<endl;
     cout <<"*****************************************************************"<<endl;
     cout <<"1.Given OA=3 and OB=5.Find the mid point M of AB:choice one:\n1.(-1,4)\n2.(7,60\n3.(1,4):";cin >>an1;
     if (an1==1)
     {
     	an1=25;
	 }
	 else if (an1!=1)
	 {
	 	an1=0;
	 }
	 
	 cout <<"2.Use matrix  method to solve:5x+3y=35  and 3x-4y=-8:choose one:\n1.x=2,y=8\n2.x=4,y=4\n3.x=4,y=5:";cin >>an2;
	 if (an2==3)
	 {
	 	an2=25;
	 }
	 else if(an2!=3)
	 {
	 	an2=0;
	 }
	 
	 cout <<"3.Find the area of the cicle whose diameter=20.use pie=3.14.Choose one:\n1.314\n2.44\n3.314cm squared: "; cin >>an3;
	 if (an3==3)
	 {
	 	an3=10;
	 }
	 else if(an3!=3)
	 {
	 	an3=0;
	 }
	 
	 cout <<"4.Solve X^2+2x-8=0:Choose one:\n1.x=-2 or -4\n2.x=2 or 4\n3.x=2 or -4:";cin >>an4;
      if (an4==3)
	 {
	 	an4=20;
	 }
	 else if(an4!=3)
	 {
	 	an4=0;
	 }
	 cout  <<"5.Find the height of a right angled triangle whose base is 14m and hypotenus=16m to the\
	  two decimal point:Choose one:\n1.7.74m\n2.7.75cm\n3.7.75m:";cin >>an5;
	  if (an5==3)
	 {
	 	an5=20;
	 }
	 else if(an5!=3)
	 {
	 	an5=0;
	 }
	 sum2=an1+an2+an3+an4+an5;
	 cout <<"\n\t"<<fname <<" " <<"Your Total score in Maths Entry Exam is "<<sum2<<"%" <<endl;
	 cout <<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
	 cout <<"Strathmore university offers the following courses:\n\tDEGREE\
	  COURSES\n1.BARCHELOR OF MEDICINE:6yrs\n2.BACHELOR OF INFORMATION TECHNOLOGY:4yrs\n3.BACHELOR OF HUMAN RESOURCE MANAGEMENT:4yrs\
	 \n\n\tDIPLOMA COURSES\n1.DIPLOMA IN BUSINESS INFORMATION TECHNOLOGY.:2yrs\n2.DIPLOMA IN BUSINESS MANAGEMENT: 2yrs\n\n\tCERTIFICATE \
	   COURSES\n1.CERTIFICATE IN HUMAN RESOURCE MANAGEMENT:1yr\n2.CERTIFICATE IN BUSINESS MANAGEMENT:1yr"<<endl;
	 cout <<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
		 if(sum1>=90&&sum1<=100&&sum2>=90&&sum2<=100&&grade >=1 &&grade <=2)
	{
		cout <<"\n\t"<<fname <<" According to your score and grade you can choose \n\n\tDEGREE \
		COURSES\n1.BARCHELOR OF MEDICINE\n2.BACHELOR OF INFORMATION TECHNOLOGY\n3.BACHELOR OF HUMAN RESOURCE MANAGEMENT:\n\n\tDIPLOMA\
		 COURSES\n4.DIPLOMA IN BUSINESS INFORMATION TECHNOLOGY.\n5.DIPLOMA IN BUSINESS MANAGEMENT\n\n\tCERTIFICATE COURSES\n6.CERTIFICATE IN HUMAN \
		 RESOURCE MANAGEMENT\n7.CERTIFICATE IN BUSINESS MANAGEMENT"<<endl;
	
	cin >>choice;
	while(choice <1 ||choice>7){
		cout <<"Enter valid choice from 1 to 7:";
		cin >>choice;
		cout <<choice;
	}
	if (choice ==1)
	duration=2019+6;
	else if (choice ==2||choice==3)
	duration=2019+4;
	else if (choice ==4 || choice==5)
	duration=2019+2;
	else if (choice ==6||choice==7)
	duration=2019+1;
	
	cout <<"\n\t"<< fname<<" " <<mname <<" "<<lname<<" your id_no is "<<intext1<<" born in " <<y_of_birth<<": "<<m_of_birth<<": "<<d_of_birth<<":  and a "<<religion<<" your phone number is "<<intext<<".You live in "\
	 <<place_of_stay<<" and you had grade choice "<<grade <<" in your Kcse/IGSE and your email is "<<email<<".Your father/guardian is "<<parent1_fname<<" "\
	  <<parent1_mname <<" " <<parent1_lname <<" whose phone number is " <<intext2 <<" and your mother/guardian is " <<parent2_fname <<" "\
	 <<parent2_mname <<" " <<parent2_lname <<" whose phone number is " <<intext3 <<"\n\t from choice\n\n\tDEGREE \
		COURSES\n1.BARCHELOR OF MEDICINE\n2.BACHELOR OF INFORMATION TECHNOLOGY\n3.BACHELOR OF HUMAN RESOURCE MANAGEMENT:\n\n\tDIPLOMA\
		 COURSES\n4.DIPLOMA IN BUSINESS INFORMATION TECHNOLOGY.\n5.DIPLOMA IN BUSINESS MANAGEMENT\n\n\tCERTIFICATE COURSES\n6.CERTIFICATE IN HUMAN \
		 RESOURCE MANAGEMENT\n7.CERTIFICATE IN BUSINESS MANAGEMENT you have choice "<<choice <<" which you will be admitted to and you will probably graduate in "<<duration; 
	} 
else if(sum1>=70&&sum1<=100&&sum2>=70 &&sum2<=100&&grade >=1 &&grade <=6 )
	{
		cout <<"\n\t"<<fname <<" According to your  grade and score you can choose \n\n\tDEGREE COURSES\n1.BACHELAR OF INFORMATION\
		 TECHNOLOGY\n2.BACHELAR OF HUMAN RESOURCE MANAGEMENT:\n\n\tDIPLOMA COURSES\n3.DIPLOMA IN BUSINESS INFORMATION \
		 TECHNOLOGY.\n4.DIPLOMA IN BUSINESS MANAGEMENT\n\n\tCERTIFICATE COURSES\n5.CERTIFICATE IN HUMAN RESOURCE MANAGEMENT\n6.\
		 CERTIFICATE IN BUSINESS MANAGEMENT"<<endl;
	
	cin >>choice;
	while(choice <1 ||choice>6){
		cout <<"Enter valid choice from 1 to 6:";
		cin >>choice;
		cout <<choice;
	}
	if (choice ==1||choice==2)
	duration=2019+4;
	else if (choice ==3 || choice==4)
	duration=2019+2;
	else if (choice ==5 || choice==6)
	duration=2019+1;
	cout <<"\n\t"<< fname<<" " <<mname <<" "<<lname<<" your id_no is "<<intext1<<" born in " <<y_of_birth<<": "<<m_of_birth<<": "<<d_of_birth<<":  and a "<<religion<<" your phone number is "<<intext<<".You live in "\
	 <<place_of_stay<<" and you had grade choice "<<grade <<" in your Kcse/IGSE and your email is "<<email<<".Your father/guardian is "<<parent1_fname<<" "\
	  <<parent1_mname <<" " <<parent1_lname <<" whose phone number is " <<intext2 <<" and your mother/guardian is " <<parent2_fname <<" "\
	 <<parent2_mname <<" " <<parent2_lname <<" whose phone number is " <<intext3 <<". From choice \n1.BACHELOR OF INFORMATION TECHNOLOGY\n2.BACHELOR OF HUMAN RESOURCE MANAGEMENT:\
	 \n\n\tDIPLOMA COURSES\n3.DIPLOMA IN BUSINESS INFORMATION TECHNOLOGY.\n4.DIPLOMA IN BUSINESS MANAGEMENT\n\n\tCERTIFICATE COURSES\n5.CERTIFICATE\
	  IN HUMAN RESOURCE MANAGEMENT\n6.CERTIFICATE IN BUSINESS MANAGEMENT\n\t you have made choice "<<choice <<" which you will be admitted to and you will probably graduate in "<<duration;
	}
	else if (sum1 >=70 &&sum1 <=100 &&sum2>=70 &&sum2<=100&&grade ==7)
	{
		cout <<"\n\t"<<fname <<" According to your score and grade you can choose:\n\tDIPLOMA COURSES\n1.DIPLOMA \
		IN BUSINESS INFORMATION TECHNOLOGY.\n2.DIPLOMA IN BUSINESS MANAGEMENT\n\n\tCERTIFICATE COURSES\n3.\
		CERTIFICATE IN HUMAN RESOURCE MANAGEMENT\n4.CERTIFICATE IN BUSINESS MANAGEMENT"<<endl;
	
	cin >>choice;
	while(choice <1 ||choice>4){
		cout <<"Enter valid choice from 1 to 4:";
		cin >>choice;
		cout <<choice;
	}
	if (choice ==1||choice==2)
	duration=2019+2;
	else if (choice ==3 || choice==4)
	duration=2019+1;
	
	cout <<"\n\t"<< fname<<" " <<mname <<" "<<lname<<" your id_no is "<<intext1 <<" born in " <<y_of_birth<<": "<<m_of_birth<<": "<<d_of_birth<<":  and a "<<religion<<" your phone number is "<<intext<<".You live in "\
	 <<place_of_stay<<" and you had grade choice "<<grade <<" in your Kcse/IGSE and your email is "<<email<<".Your father/guardian is "<<parent1_fname<<" "\
	  <<parent1_mname <<" " <<parent1_lname <<" whose phone number is " <<intext2 <<" and your mother/guardian is " <<parent2_fname <<" "\
	 <<parent2_mname <<" " <<parent2_lname <<"whose phone number is " <<intext3 <<". From choice: \n\tDIPLOMA COURSES\n1.DIPLOMA IN BUSINESS \
	 INFORMATION TECHNOLOGY.\n2.DIPLOMA IN BUSINESS MANAGEMENT\n\n\tCERTIFICATE COURSES\n3.CERTIFICATE IN HUMAN RESOURCE\
	  MANAGEMENT\n4.CERTIFICATE IN BUSINESS MANAGEMENT\n\t you have made choice "<<choice <<" which you will be admitted to and you will probably graduate in "<<duration;
	}
	else if (sum1 >=70 &&sum1 <=100 &&sum2>=70 &&sum2<=100&&grade >=1 &&grade<=9)
	{
		cout <<"\n\t"<<fname <<" According to your score and grade you can choose:\n\tCERTIFICATE COURSES\n1.CERTIFICATE IN HUMAN RESOURCE\
		 MANAGEMENT\n2.CERTIFICATE IN BUSINESS MANAGEMENT"<<endl;
	
	cin >>choice;
	while(choice <1 ||choice>2){
		cout <<"Enter valid choice from 1 to 2:";
		cin >>choice;
		cout <<choice;
	}
	if (choice ==1||choice==2)
	duration=2019+1;
	cout <<"\n\t"<< fname<<" " <<mname <<" "<<lname<<" your id_no is "<<intext1 <<" born in " <<y_of_birth<<": "<<m_of_birth<<": "<<d_of_birth<<":  and a "<<religion<<" your phone number is "<<intext<<".You live in "\
	 <<place_of_stay<<" and you had grade choice  "<<grade <<" in your Kcse/IGSE and your email is "<<email<<".Your father/guardian is "<<parent1_fname<<" "\
	  <<parent1_mname <<" " <<parent1_lname <<" whose phone number is " <<intext2 <<" and your mother/guardian is " <<parent2_fname <<" "\
	 <<parent2_mname <<" " <<parent2_lname <<"whose phone number is  " <<intext3 <<". From choice: \n\tCERTIFICATE COURSES\n1.CERTIFICATE IN HUMAN RESOURCE MANAGEMENT\n2.CERTIFICATE\
	  IN BUSINESS MANAGEMENT\n\t you have made choice "<<choice <<" which you will be admitted to and you will probably graduate in "<<duration;
	}
	

	else
	{
		cout <<"\n\t" << fname<<" " <<mname <<" "<<lname<<" your id_no is " <<intext1<<" born in " <<y_of_birth<<": "<<m_of_birth<<": "<<d_of_birth<<":  and a "<<religion<<" your phone number is "<<intext<<" n.You live in "\
	 <<place_of_stay<<" and you had grade choice  "<<grade <<" in your Kcse/IGSE and your email is "<<email<<".Your father/guardian is "<<parent1_fname<<" "\
	  <<parent1_mname <<" " <<parent1_lname <<" whose phone number is " <<intext2 <<" and your mother/guardian is " <<parent2_fname <<" "\
	 <<parent2_mname <<" " <<parent2_lname <<" whose phone number is " <<intext3 <<". According to your score and grade we regret that you have not qualified for our interview \
		 Kindly try in the next intake on July" <<endl;
	}

    return 0;
}
