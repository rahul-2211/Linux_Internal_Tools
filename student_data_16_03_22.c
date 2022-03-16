#include<iostream>
#include<fstream>
using namespace std;
class student
{
  public:
  int roll;
  char name[25];
  float marks;

void display()
{
    fstream f; student s;
    f.open("student.dat",ios::in|ios::binary);
    f.read((char*)&s,sizeof(s));
    cout<<" Roll "<<s.roll<<" name  "<<s.name<<" marks: "<<s.marks<<endl;
    f.close();
}
void getdata()
{
    cout<<"enter rollno ane name"<<endl;
    cin>>roll >>name;
    cout<<"marks"<<endl;
    cin>>marks;
    
}
void AddRecord()
{
    fstream f;
    student stu;
    f.open("satudent.dat",ios::app|ios::binary);
    stu.getdata();
    f.write((char*)&stu,sizeof(stu));
    f.close();
}
};
int main()
{
    student s;
    // s.getdata();
    s.AddRecord();
    s.display();
}

// };
// int main()
// {
//     student s;
//     // s.getdata();
//     s.AddRecord();
    
//     char ch='n';
//     do{
//         s.AddRecord();
//         cout<<"want add more?(y/n)"<<endl;
//         cin>>ch;
//     }while(ch=='y' || ch=='n');
// }

