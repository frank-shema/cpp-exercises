#include <iostream>
using namespace std;

template <typename T>
struct Student
{
    int age;
    string name;
    string school;
    Student *next;

    Student() {}

    Student(int a, string n, string s)
    {
        age = a;
        name = n;
        school = s;
        next = nullptr;
    }
};

template <typename T>
void printList(Student<T> *head)
{
    while (head != NULL)
    {
        cout << "Age: " << head->age << endl;
        cout << "Name: " << head->name << endl;
        cout << "School: " << head->school << endl;
        head = head->next;
    }
}

template <typename T>
int countNodes(Student<T> *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}


// this is the search function of the node 

template <typename T>
Student<T> *searchNode(Student<T> *head, int age)
{
    while (head != NULL)
    {
        if (head->age == age)
        {
            return head;
        }
        head = head->next;
    }
    return nullptr;
}


template <typename T>
void addNodeToTail(Student<T> *head, int age, string name, string school)
{
    Student<T> *new_node = new Student<T>(age, name, school);

    if (head == nullptr)
    {
        head = new_node;
        return;
    }

    Student<T> *current_node = head;
    while (current_node->next != nullptr)
    {
        current_node = current_node->next;
    }

    current_node->next = new_node;
}

int main()
{
    Student<int> *s1 = new Student<int>(18, "Mary", "RCA");
    Student<int> *s2 = new Student<int>(20, "Peter", "RCA");
    Student<int> *s3 = new Student<int>(22, "Divine", "RCA");
    s1->next = s2;
    s2->next = s3;
    Student<int> *head = s1;

    printList(head);

    int count = countNodes(head);
    cout << "Number of nodes in the linked list: " << count << endl;

    int age = 22;
    Student<int> *foundNode = searchNode(head, age);
    if (foundNode != nullptr)
    {
        cout << "Node found:" << endl;
        cout << "Age: " << foundNode->age << endl;
        cout << "Name: " << foundNode->name << endl;
        cout << "School: " << foundNode->school << endl;
    }
    else
    {
        cout << "Node not found." << endl;
    }
    return 0;
}