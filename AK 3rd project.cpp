#include <iostream>
#include <cmath>
using namespace std;

class calculator
{
public:
    void basic_operation();
    void math_function();
    void trigono();
    void logritm();
    void advance_conversion();
};
void calculator::basic_operation()
{
    float num;
    int choice;
    cout << "1-addition " << endl;
    cout << "2-subtraction " << endl;
    cout << "3-multiplication " << endl;
    cout << "4-division" << endl;
    cout << "5-remainder finding " << endl;
    cout << " 6-average " << endl;
    cout << "enter the choice " << endl;
    cin >> choice;
    if (choice == 1 || choice == 3 || choice == 6)
    {
        float n;
        cout << "enter the total number that you want to operate " << endl;
        cin >> n;
        float sum = 0;
        long long multiply = 1;
        for (int i = 1; i <= n; i++)
        {
            cout << "enter the " << i << " number" << endl;
            cin >> num;
            sum += num;
            multiply *= num;
        }
        if (choice == 1)
        {
            cout << "sum is : " << sum << endl;
        }
        else if (choice == 3)
        {
            cout << "multiplication of given number is : " << multiply << endl;
        }
        else
        {
            cout << "average of given number is " << sum / n << endl;
        }
    }
    else if (choice == 2 || choice == 4 || choice == 5)
    {
        float num1;
        float num2;
        cout << " Enter num1 and num2 " << endl;
        cin >> num1 >> num2;
        float division = num1 / num2;
        float subraction = num1 - num2;
        float rem = fmod(num1, num2);
        if (choice == 2)
        {
            cout << "subtraction: " << subraction << endl;
        }
        else if (choice == 4)
        {
            if (num2 != 0)
            {
                cout << "division: " << division << endl;
            }
            else
            {
                cout << "not defined " << endl;
            }
        }
        else
        {
            cout << "remainder after division is " << rem << endl;
        }
    }
    else
    {
        cout << "Invalid choice" << endl;
    }
}

void calculator::math_function()
{
    cout << "1- absolute value " << endl;
    cout << "2- square root " << endl;
    cout << "3- cube " << endl;
    cout << "4- power Findimg" << endl;
    cout << "5- GIF" << endl;
    cout << "6- factorial " << endl;
    int choice;
    cout << "Enter the choice " << endl;
    cin >> choice;
    if (choice == 4)
    {
        float n;
        float x;
        cout << "enter the base " << endl;
        cin >> x;
        cout << "enter the power " << endl;
        cin >> n;
        cout << "answer is " << pow(x, n) << endl;
    }
    else if (choice == 1 || choice == 2 || choice == 3 || choice == 5 || choice == 6)
    {
        float num;
        cout << " Enter the number " << endl;
        cin >> num;
        if (choice == 1)
        {
            cout << "absolute value is " << abs(num) << endl;
        }
        else if (choice == 2)
        {
            if (num >= 0)
            {
                cout << "square root is " << sqrt(num) << endl;
            }
            else
            {
                cout << "Imaginary output" << endl;
            }
        }
        else if (choice == 3)
        {
            cout << " Cube is " << num * num * num << endl;
        }
        else if (choice == 5)
        {
            int p = num;
            if (num >= 0)
            {
                cout << "GIF of [" << num << "] = " << p << endl;
            }
            else if (num == p)
            {
                cout << "GIF of [" << num << "] = " << p << endl;
            }
            else
            {
                cout << "GIF of [" << num << "] = " << p - 1 << endl;
            }
        }
        else
        {
            if (num == 0)
            {
                cout << "0! =" << 1 << endl;
            }
            if (num > 0)
            {
                int fact = 1;
                for (int i = 1; i <= num; i++)
                {
                    fact *= i;
                }
                cout << num << "! = " << fact << endl;
            }
        }
    }
    else
    {
        cout << "Invalid choice " << endl;
    }
}

void calculator::trigono()
{
    cout << "1- sine function " << endl;
    cout << "2- cosine funtion " << endl;
    cout << "3- tangent function " << endl;
    cout << "4- cot function " << endl;
    cout << "5- secant function " << endl;
    cout << "6- cosecant function " << endl;
    cout << "      ### NOTE---    ALL VALUES ARE IN RADIAN " << endl;
    int choice;
    cout << "Enter the choice " << endl;
    cin >> choice;
    float num;
    cout << "enter the number " << endl;
    cin >> num;
    if (choice == 1)
    {
        cout << sin(num) << endl;
    }
    else if (choice == 2)
    {
        cout << cos(num) << endl;
    }
    else if (choice == 3)
    {
        cout << tan(num) << endl;
    }
    else if (choice == 4)
    {
        cout << 1 / tan(num) << endl;
    }
    else if (choice == 5)
    {
        cout << 1 / cos(num) << endl;
    }
    else if (choice == 6)
    {
        cout << 1 / sin(num) << endl;
    }
    else
    {
        cout << "invalid choice " << endl;
    }
}

void calculator::logritm()
{
    int num;
    int n;
    cout << "Enter the number " << endl;
    cin >> num;
    cout << "Enter the base" << endl;
    cin >> n;
    if (n > 1 && num > 0)
    {
        cout << "log(" << num << ") = " << log(num) / log(n);
    }
    else
    {
        cout << "Invalid " << endl;
    }
}

void calculator::advance_conversion()
{
    cout << "   ##NOTE----ENTER CHOICE AS GIVEN BELOW CAREFULLY" << endl;
    cout << "choice=2 for Decimal to binary " << endl;
    cout << "choice=8 for decimal to octal " << endl;
    int choice;
    int num;
    cout << "Enter the choice " << endl;
    cin >> choice;
    if(choice==2||choice==8){
    cout << " Enter the number " << endl;
    cin >> num;
    if (num > 0)
    {
        int p = num;
        int ans = 0;
        int pow = 1;
        while (num > 0)
        {
            int r = num % choice;
            ans = ans + pow * r;
            pow *= 10;
            num /= choice;
        }
        cout << "(" << p << ")10" << " = (" << ans << ")" << choice << endl;
        
        }
        else{
            cout<<" invalid "<<endl;
        }
    }
    else
    {
        cout << "invalid choice" << endl;
    }
}

int main()
{
    cout << "##### PRESS THE CHOICE CAREFULLY " << endl;
    cout << "1- Basic operation(add,subtract,multiply,division,remainder,average )" << endl;
    cout << "2- mathematical function[absolute value(mod),cube,power , GIF,factorial]" << endl;
    cout << "3- Trigonomatric function" << endl;
    cout << "4- Log value finding " << endl;
    cout << "5- conversion(binary,octal)" << endl;
    int choice = 9;
    cout << " !!!!!!!!!!!!!! ENTER 0 FOR CLOSE THE CALCULATOR " << endl;
    calculator s;
    while (choice != 0)
    {
        cout << "Enter the choice " << endl;
        cin >> choice;
        if (choice == 0)
        {
            break;
        }
        if (choice == 1)
        {
            s.basic_operation();
        }
        else if (choice == 2)
        {
            s.math_function();
        }
        else if (choice == 3)
        {
            s.trigono();
        }
        else if (choice == 4)
        {
            s.logritm();
        }
        else if (choice == 5)
        {
            s.advance_conversion();
        }
        else
        {
            cout << "Invalid choice please enter the right one " << endl;
        }
    }
    cout << "THANK YOU FOR USING CALCULATOR !!!" << endl;

    return 0;
}