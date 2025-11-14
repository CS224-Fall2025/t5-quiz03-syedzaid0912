#include <iostream>
using namespace std;
class Employee{
    protected:
        string name;
        double salary;
        static int employeeCount=0;
    public:
        Employee(string n,double s){
            name=n;
            salary=s;
            
            employeeCount+=1;
        }
        virtual void displayInfo(){
            cout<<n<<salary<<endl;
            
        }
        static void showTotalEmployees(){
            cout<<"Total employee created: "<<static int employeeCount<<endl;
        }
        virtual ~Employee(){
            delete obj;

        }
        

};
class Staff : public Employee{
    private: 
        string department;
    public:
        void displayInfo(){
            cout<<"Name: "n<<" (Staff), "<<"Salary: "salary<<endl;;
        }
    

};
class Faculty : public Employee{
    private: 
        string department;
    public:
        void displayInfo(){
            cout<<"Name: "n<<" (Faculty), "<<"Salary: "salary<<endl;;
        }

};

int main() {
    int n;
    cin>>n;
    
    *obj = new int(n);
    Employee*arr[n];
        
    for(int i=0;i<n;i++){
        char c; //staff or faculty;
        cin>>c;
        if(c==s"Staff"){

            cin>>*obj;
        }
       
    }

    for(int i=0;i<n;i++){
        Employee*arr[i]->displayInfo();

    }
    Employee::showTotalEmployees() 
    delete arr;

}