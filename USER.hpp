//
// Created by 胡 on 2022/7/4.
//

#ifndef STUDENT_GRADE_SYSTEM_USER_H
#define STUDENT_GRADE_SYSTEM_USER_H
class user {
public:
    user(const char* U,int* I,const char* P);
    ~user();
private:
    char* username;
    int *id;
    char* password;
};
#endif //STUDENT_GRADE_SYSTEM_USER_H
