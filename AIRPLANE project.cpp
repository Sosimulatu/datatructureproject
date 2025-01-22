#include <iostream>
#include <cstdlib>


using namespace std;
struct Hostess{
string name;
char sex;
int age;
float height;
string status;
float grade;
string level;
Hostess	*next;
Hostess *pre;
};
Hostess *start=NULL;
Hostess *end=NULL;
void insert(){
	Hostess *newnode=new Hostess;
	cout<<"Enter the  your name";
	cin>>newnode->name;
	cout<<"Enter the sex";
	cin>>newnode->sex;
	cout<<"Enter age";
	cin>>newnode->age;
	cout<<"Enter the Height";
	cin>>newnode->height;
	cout<<"Enter the status";
	cin>>newnode->status;
	if(newnode->status=="student"  || newnode->status=="Student"  || newnode->status=="STUDENT"){
		cout<<"Enter your grade";
		cin>>newnode->grade;
	}
else	if(newnode->level=="Employee" ||newnode->level=="employee"){
		cout<<"IN colleage learning level does you like\n ";
		cout<<
"->Bachelor's Degrees\n"<<
"->Master's Degrees\n"
<<"->Transferring Credits\n"
<<"->Request Information\n"
<<"->Admission Application\n";
		cin>>newnode->level;
	}
	
	if(start==NULL){
		start=newnode;
		end=newnode;
	}
	else {
        end->next = newnode;
        newnode->pre = end;
        end = newnode;
    }
    cout << "your are added successfully.\n";
}

void display(){
	Hostess *temp=start;
	
	while(temp!=NULL){
	
				if(temp->height <1.60 || temp->grade<3.0 || temp->age<19)	{
			cout<<"****************SORRY"<<"  "<<temp->name<<endl<<"****************you havenot complete the rule to be hostess "<<endl;
		}
		else{
			cout<<"[][][][][][][]CONGRA TULATION you are pass for Hostees [][][][][][][][]"<<endl;
		
		}
		
	temp=temp->next;
		
	}

}
void sort(){
	int count=0;
	Hostess *temp=start;
	while(temp!=NULL){
		if(temp->age > temp->next->age){
		int x=count++;
			cout<<temp->name<<"  "<<"flightNumber"<<x<<endl;
		}
		
	temp=temp->next;
	
	}
cout<<"there is no employeee hostess or register you must be registerr"<<endl;	
}

	

int main(){
	 
	int choice;

    do {
    	
        cout << "\n \tThis is a Student Airline Hostess Registration System";
        cout << "\n \t=====================================\n";
        cout<<"\n\t\t MENU\n";
        cout << "1. Add Employee information \n";
        cout << "2. online checking for hostess\n";
        cout << "3. Scedule of Hostess by inserting Hostess\n";
        cout << "4. Sort Students by ID\n";
        cout << "5. Display All Students\n";
        cout << "6. Reverse Student List\n";
        cout << "7. Display Grade Report\n";
        cout << "8. Exit\n";
        cout<< "9. clear the Terminal\n";
        cout << "*************Enter your choice:************ \n";
        cout<<"choice=";
        cin >> choice;
system("cls");
        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
     cout << "Waiting for 5 seconds...\n";
    for (int i = 0; i < 500000000; ++i) {
       
    }
    display();
                 break;
            case 3:
                sort();
                break;
            // case 4:
            //     sortStudentsById();
            //     break;
            // case 5:
            //     displayStudents();
            //     break;
            // case 6:
            //     reverseStudentList();
            //     break;
            // case 7:
            //     displayGradeReport();
            //     break;
            case 8:
                cout << "exiting...\n";
                break;
            // case 9:
            // 	clearTerminal();
            // 	break;
            default:
                cout << "Invalid choice!\n";
                cout<<"please enter  the number 1-8 ";
        }
    } while (choice!=8);
    
		
	

    return 0;
}