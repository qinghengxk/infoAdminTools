#ifndef _USER_H_
#define _USER_H_
#include<list>
#include<map>
#include<string>

using namespace std;

//BasicUser class.
class BasicUser {
    public:
        string userName;
        string userType;
        string userId;
        string BrithDate;

        //get the BasicUser infomation.
        string getName(){return userName;};
        string getId(){return userId;};
        string getUserType(){return userType;};
        string getBrithDate(){return BrithDate;};
};

//studentUser class.
class stuUser : public BasicUser {
    public:
        string userType = "student";
        string stuClass;
        string getstuClass(){return stuClass;};
};

//teacherUser class.
class teaUser : public BasicUser {
    public:
        string userType = "teacher";
        list<string> TeachClass;
};

//AdminUser class.
class AdminUser : public BasicUser {
    public:
        string userType = "administrator";
        map<string, string> SearchStuUser(string userId, stuUser&);
        map<string, string> SearchTeaUser(string userId, teaUser&);
};
#endif