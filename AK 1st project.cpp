#include <iostream>
using namespace std;

class school
{
    string name;
    int Roll_No;
    int marks[5];
    int sum;
    float percentage;
    string grade;
public:
    void setData();
    void getdata();

};

void school::setData() {
    cout<<"Enter the name of Student: "<<endl;
    getline(cin, name);
    cout<<"Enter the Roll number of student: "<<endl;
    cin>>Roll_No;
    cout<<"Enter the marks in individual subject: "<<endl;
    sum=0;
    for(int i=0; i<5; i++) {
        cin>>marks[i];
        sum+=marks[i];
    }
    percentage=sum/5.0;

    if(percentage>90) {
        grade="AA";
    }
    else if(percentage>80) {
        grade="AB";
    }
    else if(percentage>65) {
        grade="BB";
    }
    else if(percentage>50) {
        grade="BC";
    }
    else if(percentage>35) {
        grade ="CC";
    }
    else
    {
        grade="FAIL";

    }



}
void school::getdata() {
    cout<<"name of student is: "<<name<<endl;
    cout<<"Roll number: "<<Roll_No<<endl;
    for(int i=0; i<5; i++) {
        cout<<"Marks in "<<i+1<<"st subject: "<<marks[i]<<endl;
    }
    cout<<"Total aggeregate number: "<<sum<<endl;
    cout<<"percentage marks: "<<percentage<<endl;
    cout<<"grade or result: "<<grade<<endl;
}
int main()
{
    school s;
    s.setData();
    s.getdata();
    return 0;
}