#include <iostream>
using namespace std;

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

void printList(Student *head)
{
    while (head != NULL)
    {
        cout << "Age: " << head->age << endl;
        cout << "Name: " << head->name << endl;
        cout << "School: " << head->school << endl;
        head = head->next;
    }
}

int countNodes(Student *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}

Student *searchNode(Student *head, int age)
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

void addNodeToTail(Student *&head, int age, string name, string school)
{
    Student *new_node = new Student(age, name, school);

    if (head == nullptr)
    {
        head = new_node;
        return;
    }

    Student *current_node = head;
    while (current_node->next != nullptr)
    {
        current_node = current_node->next;
    }

    current_node->next = new_node;
}

int main()
{
    Student *s1 = new Student(18, "Mary", "RCA");
    Student *s2 = new Student(20, "Peter", "RCA");
    Student *s3 = new Student(22, "Divine", "RCA");
    s1->next = s2;
    s2->next = s3;
    Student *head = s1;

    printList(head);

    int count = countNodes(head);
    cout << "Number of nodes in the linked list: " << count << endl;

    int age = 22;
    Student *foundNode = searchNode(head, age);
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

    addNodeToTail(head, 25, "John", "ABC");

    cout << "Linked list after adding a new node:" << endl;
    printList(head);

    return 0;
}
