#include<iostream>
using namespace std;
class education;
class staff{
    protected:
    int code;
     char name[30];
     public:
     void get_staff()
     {

     }
};
class teacher:protected staff{
    char subject[10],publication[10];
    public:
    void get_
};
class typist:protected staff{
    int speed;
    public:
    void get_
}
class officer:protected staff{
char grade[10];
public:
void get_
};
class casual:protected typist{
float daily_wages;
public:
void get_
};
class rwgular:protected typist{

};