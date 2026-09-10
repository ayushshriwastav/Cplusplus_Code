#include <iostream>
#include <cstring>
using namespace std;

class String{
  private:
  char str[100];

   public:
   String(){
    str[0] = '\0';
   }

   String(const char* s){
       strcpy(str,s);
   }

   bool operator==(const String &s){
    if(strcmp(str, s.str) ==0){
        return true;
    }
    else{
        return false;
    }
}
 
};

int main(){
    String s1("Hello");
    String s2("Hello");
    String s3("Welcome");
    if(s1 == s2){
        cout << "String is equal" << endl;
    }
    else{
        cout << "String is not equal" << endl;
    }

    if(s1 == s3){
        cout << "String is equal" << endl;
    }
    else{
        cout << "String is not equal" << endl;
    }
    return 0;
}