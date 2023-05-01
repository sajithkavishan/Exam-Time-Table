#include <iostream>

using namespace std;

int main()
{

    char subject;

    cout << "Maths = 1 \nScience = 2\nEnglish = 3\nIT = 4\nSinhala = 5\ncommerece = 6\nMusic = 7\nHistory = 8\nBuddhism = 9\n";
    cout << "Subject Number? ";
    cin >> subject;

        switch(subject){
            case '1':
                cout << "Thursday,April 13 at 8.30 A.M - 11.30 A.M \n";
                break;
            case '2':
                cout << "Friday,April 14 at 9.30 A.M - 12.30 P.M \n";
                break;
            case '3':
                cout << "Saturday,April 15 at 12.30 P.M - 3.30 P.M \n";
                break;
            case '4': 
                cout << "Monday,April 17 at 8.00 A.M - 11.00 A.M \n";
                break;
            case '5':
                cout << "Tuesday,April 18 at 9.00 A.M - 11.00 A.M \n";
                break;
            case '6':
                cout << "Wendsday,April 19 at 1.30 P.M - 3.00 P.M \n";
                break;
            case '7':
                cout << "Thursday,April 20 at 1.00 P.M - 2.30 P.M \n";
                break;
            case '8':
                cout << "Friday,April 21 at 9.00 A.M - 10.30 A.M \n";
                break;
            case '9':
                cout << "Saturday,April 22 at 11.00 A.M - 2.00 P.M \n";
                break;
            default:
                cout << "No exam schedule found for this subject. \n";

        } 

    return 0;
}
