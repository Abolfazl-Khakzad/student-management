#include <iostream>

using namespace std;


struct {
    string name;
    string lastName;
    int studentNumber;
    int year;
    double average;
    int passCredits;
}st[1000];

 void menu (){
     cout<<"please choose a number of operation"<<endl;
    cout<<" 1 : Add new student"<<endl;
    cout<<" 2 : Edit a student's information"<<endl;
    cout<<" 3 : Show a specific student's information"<<endl;
    cout<<" 4 : Show all student's information"<<endl;
    cout<<" 5 : Exit"<<endl;
    }

    void addNewStudent(){
        for(int i=0 ; i<1000 ; i++){
                char yesoNo;

        cout<<"student name : "<<endl;
        cin>>st[i].name;
        cout<<"student last name : "<<endl;
        cin>>st[i].lastName;
        cout<<"student number : "<<endl;
        cin>>st[i].studentNumber;
        cout<<"year of entry : "<<endl;
        cin>>st[i].year;
        cout<<"student's average"<<endl;
        cin>>st[i].average;
        cout<<"total passed credits : "<<endl;
        cin>>st[i].passCredits;
        cout<<"want to add another N/Y"<<endl;
        cin>>yesoNo;
        if(yesoNo=='n'){
            cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
            i=11;
        }
        }

    }

    void editInformation(){
        cout<<"please enter student number"<<endl;
        int number;
        cin>>number;
        for(int i = 0 ; i<1000 ; i++){
            if (st[i].studentNumber == number){

                cout<<"please enter new name : ";
                cin>>st[i].name;
                cout<<"please enter new last name : ";
                cin>>st[i].lastName;
                cout<<"please enter new student number : ";
                cin>>st[i].studentNumber;
                cout<<"please enter new entry year : ";
                cin>>st[i].year;
                cout<<"please enter new passed credits : ";
                cin>>st[i].passCredits;
                cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
            }
        }
    }

    void showInformation(){
     cout<<"please enter student number"<<endl;
        int number;
        cin>>number;
        for(int i = 0 ; i<1000 ; i++){
            if (st[i].studentNumber == number){
                cout<<"name : "<<st[i].name<<endl;
                cout<<"last name : "<<st[i].lastName<<endl;
                cout<<"student number : "<<st[i].studentNumber<<endl;
                cout<<"year of entry : "<<st[i].year<<endl;
                cout<<"average : "<<st[i].average<<endl;
                cout<<"passed credits : "<<st[i].passCredits<<endl;
                cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
            }

    }
    }

    void showAllInformation(){
        for(int i =0 ; i<1000 ; i++){
            cout<<"name : "<<st[i].name<<endl;
                cout<<"last name : "<<st[i].lastName<<endl;
                cout<<"student number : "<<st[i].studentNumber<<endl;
                cout<<"year of entry : "<<st[i].year<<endl;
                cout<<"average : "<<st[i].average<<endl;
                cout<<"passed credits : "<<st[i].passCredits<<endl;
                cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
        }
    }

int main()
{
    int number;
    menu();
    cin>>number;
    cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
    switch(number){
        case 1 :
        addNewStudent();
        main();


        case 2:
        editInformation();
        main();

        case 3 :
        showInformation();
        main();

        case 4 :
        showAllInformation();
        main();


        default : exit(0);
    }

    return 0;
}
