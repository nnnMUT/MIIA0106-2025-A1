#include <iostream>
#include <string>
using namespace std;

// นิยามโครงสร้าง Phone สำหรับเก็บเบอร์โทรศัพท์
struct Phone {
    string mobile;
    string home;
};
struct Parent {
    string name;
    string relationship;
    Phone contact; 
};
struct Student {
    string id;
    string nickname;
    string lineId;
    Phone myContact; 
    Parent myParent; 
};
int main() {
    Student s1;
    s1.id = "6811130002";
    s1.nickname = "Nah";
    s1.lineId = "2002";
    s1.myContact.mobile = "085-506-8937";
    s1.myContact.home = "02-123-4567";
    s1.myParent.name = "Som";
    s1.myParent.relationship = "mather";
    s1.myParent.contact.mobile = "082-360-7699";
    s1.myParent.contact.home = "02-123-4567";
    cout << "===== Student Information =====" << endl;
    cout << "ID: " << s1.id << endl;
    cout << "Nickname: " << s1.nickname << endl;
    cout << "Line ID: " << s1.lineId << endl;
    cout << "\n--- Student Contact ---" << endl;
    cout << "Mobile: " << s1.myContact.mobile << endl;
    cout << "Home: " << s1.myContact.home << endl;
    cout << "\n--- Parent Information ---" << endl;
    cout << "Parent Name: " << s1.myParent.name << endl;
    cout << "Relationship: " << s1.myParent.relationship << endl;
    cout << "Parent Mobile: " << s1.myParent.contact.mobile << endl;
    cout << "Parent Home: " << s1.myParent.contact.home << endl;

    return 0;
}