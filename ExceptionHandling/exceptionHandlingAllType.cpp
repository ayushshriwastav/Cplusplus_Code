#include <iostream>
#include <exception>
#include <string>

using namespace std;

// User Defined Exception Class
class MyException : public exception
{
public:
    const char* what() const noexcept override
    {
        return "User Defined Exception Occurred!";
    }
};

// Function that throws different exceptions
void checkNumber(int num)
{
    if (num == 0)
        throw "Number cannot be zero.";      // const char*

    else if (num < 0)
        throw num;                           // int

    else if (num == 100)
        throw MyException();                 // User-defined exception

    else if (num == 999)
        throw runtime_error("Runtime Error"); // Standard exception

    cout << "Number is valid : " << num << endl;
}

int main()
{
    int n;

    cout << "Enter Number : ";
    cin >> n;

    try
    {
        try
        {
            checkNumber(n);
        }

        catch (int x)
        {
            cout << "Inner Catch : Negative Number = "
                 << x << endl;

            // Rethrow exception
            throw;
        }
    }

    catch (int x)
    {
        cout << "Outer Catch : Exception received again = "
             << x << endl;
    }

    catch (const char *msg)
    {
        cout << "Character Exception : "
             << msg << endl;
    }

    catch (MyException &e)
    {
        cout << e.what() << endl;
    }

    catch (exception &e)
    {
        cout << "Standard Exception : "
             << e.what() << endl;
    }

    catch (...)
    {
        cout << "Unknown Exception" << endl;
    }

    cout << "\nProgram Finished Successfully";

    return 0;
}