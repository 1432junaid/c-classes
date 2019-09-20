#include<iostream.h>
class student{
int roll_no;
public:
void get_data();
void put_data();


void student::get_data(){
cout<<"Enter roll no"<<endln;
cin>>roll_no;
}

