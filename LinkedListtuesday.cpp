#include <iostream>
using namespace std;
struct Student {
    int age;
    string name;
    Student(int age, string name){
        this->age = age;
        this->name = name;
    }
    Student(){
    }
};
int main(){
    Student st;
    st.age = 14;
    cout << st.age << " " << endl;
    Student *st2 = new Student(3, "jingo");
    cout << st2->age << " " << endl;
    Student st3(19, "maned");
    cout << st3.age << " " << st3.name << " " << endl;
    Student st4 = {34, "jingoes"};
    cout << st4.age << " " << st4.name << " " << endl;
    Student *st5 = new Student(78, "maned");
    cout << (*st5).age << " " << (*st5).name << " " << endl;
    return 0;
}