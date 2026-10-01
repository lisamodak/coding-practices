//Problem: Voting Eligibility
//Write a C++ program that takes a person’s age as input.
 //If the age is 18 or more, print:
  //Eligible to vote
 //Otherwise, print:
  //Not eligible to vote
  
  
  
  //____________________________________________________________________________________________________________
 #include <iostream>
 using namespace std;
 int main(){
     int age;
     cout<<"Enter the age:";
     cin>>age;
     if (age >=18){
         cout<<"Eligible to vote";
     }
     else{
         cout<<"Not eligible to vote";
      }
     return 0;
 }