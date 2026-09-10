#include <iostream>
#include <cstring>
using namespace std;

class string1{
    private:
    int length;
    char *buffer;

    public:
    ////Default constructor

    string1(){
        length = 0;
        buffer = new char[1];
        buffer[0] = '\0';
    }

   ///parameterized constructor
   string1(const char* str){
    length = strlen(str);
    buffer = new char[length+1];
    strcpy(buffer,str);
   }

   ////copy constructor 

   string1(const string1 &other){

    length = other.length;
    buffer = new char[length+1];
    strcpy(buffer, other.buffer);
   }


   //////destructor

   ~string1(){
    delete[] buffer;
   }


    ///Display the result
    void display() const {
        cout << "String: " << buffer << endl;
        cout << "Length: " << length << endl;
    }
};


int main(){
    string1 s1;
    s1.display();

    string1 s2("Hello");
    s2.display();

    string1 s3 = s2;
    s3.display();
    return 0;
}