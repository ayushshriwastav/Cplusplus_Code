// #include <bits/stdc++.h>
// using namespace std;


// class Sport{
//     protected:
//     int score;

//     public:
    
//     void setScore(){
//         cout << "Enter the score: ";
//         cin >> score;
//     }

//     void displayScore(){
//         cout << "Score: " << score;
//     }
// };

// class Academy{
//     protected:
//     int marks;

//     public:

//     void setAcademy(){
//         cout << "\nEnter the marks of academy: ";

//         cin >> marks;
//     }

//     void displayAcademy(){
//         cout << "\nMarks: " << marks << endl;
//     }
// };

// class Result : public Sport, public Academy{
//     private:
//     int total;

//     public:

//     void displayResult(){
//         setScore();
//         setAcademy();
//         total = score + marks;
        
//         displayScore();
//         displayAcademy();

//         cout << "Total: " << total << endl; 
//     }

// };

// int main(){
//     Result r;
//     r.displayResult();
//     return 0;
// }


/////Using Getter

#include <bits/stdc++.h>
using namespace std;


class Sport{
    private:
    int score;

    public:
    
    void setScore(){
        cout << "Enter the score: ";
        cin >> score;
    }

    void displayScore(){
        cout << "Score: " << score;
    }

    int getScore(){
        return score;
    }
};

class Academy{
    protected:
    int marks;

    public:

    void setAcademy(){
        cout << "\nEnter the marks of academy: ";

        cin >> marks;
    }

    void displayAcademy(){
        cout << "\nMarks: " << marks << endl;
    }

    int getMarks(){
        return marks;
    }
};

class Result : public Sport, public Academy{
    private:
    int total;

    public:

    void displayResult(){
        setScore();
        setAcademy();
        total = getScore() + getMarks();
        
        displayScore();
        displayAcademy();

        cout << "Total: " << total << endl; 
    }

};

int main(){
    Result r;
    r.displayResult();
    return 0;
}

