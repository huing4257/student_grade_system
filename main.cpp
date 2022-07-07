#include <iostream>
#include <utility>

#include <fstream>
#include "USER.hpp"
using namespace std;
class Node{
public:
    user A;
    Node *next;
};
bool Read_data(Node* & head){
    fstream inf("grade_data.txt");

    return false;
};
int main() {
    Node *Head;
    Read_data(Head);
    user *current;
    string current_id;
    string current_password;
    cout << "**********学生成绩管理查询系统***********" << endl;
    cout<<"请选择查询（S）/登录（L）/注册（R）";
    char user_purpose;
    cin>>user_purpose;
    if (user_purpose=='S'){

    }
    if (user_purpose=='L') {
        cout << "请输入ID" << endl;
        cin >> current_id;
        cout << "请输入密码" << endl;
        cin >> current_password;
    }

    return 0;
}
