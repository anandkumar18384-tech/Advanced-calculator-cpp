#include <iostream>
using namespace std;

class quiz
{
    string Question[5];
    string ans[5];
    int score=0;
    int corr=0;

public:
    void instructData();
    void setdata();
    void getdata();
    void displayData();

};
void quiz::instructData() {
    cout<<"🌟🌟🌟🌟INSTRUCTION🌟🌟🌟"<<endl;
    cout<<"READ CAREFULLY ALL THE STATEMENT"<<endl;
    cout<<endl;
    cout<<"1️⃣- write answer completely "<<endl;
    cout<<"2️⃣-Half answer will be treated as wrong answer"<<endl;
    cout<<"3️⃣-for example: Rohit Sharma is correct ans then Rohit , sharma not acceptable"<<endl;
    cout<<"4️⃣-but rohit sharma is acceptable . In case you missed capital letter in starting not to worry"<<endl;
    cout<<"5️⃣-each correct answer will get you +5  and incorrect reduce -1 mark "<<endl;
    cout<<endl;
    cout<<endl;
}
void quiz::setdata() {
    cout<<"Let's start the quiz...."<<endl;
    cout<<endl;
    cout<<"be ready,, let set go "<<endl;
    cout<<endl;
    cout<<"question is on your screen ......"<<endl;
    cout<<endl;
    cout<<endl;
    Question[0]="what is the name of our prime minister ";
    Question[1]="who is the current captain of team INDIAN TEST CRICKET TEAM ";
    Question[2]="who is the current newzeland test cricket captain ";
    Question[3]="who is the CEO of google ";
    Question[4]="who is the CEO of amazon ";

}

void quiz::getdata() {
    for(int i=0; i<5; i++) {
        cout<<"question: "<<i+1<<"-"<<Question[i]<<endl;
        cout<<"answer: "<<endl;
        getline(cin,ans[i]);
    }

    if(ans[0]=="Narendra Modi"||
            ans[0]=="Narendra Damodar Das Modi"||
            ans[0]=="narendra modi") {
        cout<<"correct answer ✅✅ "<<endl;
        score=score+5;
        corr+=1;
    }
    else
    {
        cout<<"incorrect answer ❌❌"<<endl;
        score-=1;
    }
    if(ans[1]=="subhman gill"||
            ans[1]=="Subhman Gill") {
        cout<<"correct answer ✅✅"<<endl;
        score+=5;
        corr+=1;
    }
    else
    {
        cout<<"incorrect answer ❌❌"<<endl;
        score-=1;
    }
    if(ans[2]=="Tom Latham"||
            ans[2]=="tom latham") {
        cout<<"correct answer ✅✅"<<endl;
        score+=5;
        corr+=1;
    }
    else
    {
        cout<<"incorrect answer ❌❌"<<endl;
        score-=1;
    }
    if(ans[3]=="Sundar Pichai"||
            ans[3]=="sundar pichai") {
        cout<<"correct answer ✅✅"<<endl;
        score+=5;
        corr+=1;
    }
    else
    {
        cout<<"incorrect answer ❌❌"<<endl;
        score-=1;
    }
    if(ans[4]=="Andy Jassy"||
            ans[4]=="andy jassy") {
        cout<<"correct answer ✅✅"<<endl;
        score+=5;
        corr+=1;
    }
    else
    {
        cout<<"incorrect answer ❌❌"<<endl;
        score-=1;
    }
}
void quiz::displayData() {
    cout<<endl;
    cout<<endl;
    cout<<"you get "<<corr<<" answer correctly "<<endl;
    cout<<"your score:"<<score<<"/25"<<endl;
    cout<<endl;
    if(score>=11) {
        cout<<" congrats !! you are quallified for next round "<<endl;
    }
    else
    {
        cout<<" sorry!! better luck next time "<<endl;
    }
    cout<<endl;
    cout<<"THANK YOU"<<endl;
    cout<<"END QUIZ"<<endl;
}


int main()
{
    quiz q;
    q.instructData();
    q.setdata();
    q.getdata();
    q.displayData();

    return 0;
}