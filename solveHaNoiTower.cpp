#include<iostream>
#include<cmath>
#include <cctype>
using namespace std;
void solve(int n, int from, int to, int mid)
{
    if(n == 1) cout << "Dua dia tu chong " << from << " sang chong " << to << endl;
    else{
        solve(n - 1, from, mid, to);
        cout << "Dua dia tu chong " << from << " sang chong " << to << endl;
        solve(n - 1, mid, to, from);
    }
}
void welcome()
{
    string image;
    cout << "\n\n\n\n\n";
    cout << "\t\t====================CHUONG TRINH HUONG DAN GIAI THAP HA NOI====================\n";
    cout << "\t\t............~~....................:!^....................^!:.........." << endl;
    cout << "\t\t............BB....................~@J....................Y&^.........." << endl;
    cout << "\t\t............BB....................~@J....................Y&^.........." << endl;
    cout << "\t\t..........::GG::..................~@J....................Y&^.........." << endl;
    cout << "\t\t........:~77??77~:................~@J....................Y&^.........." << endl;
    cout << "\t\t.......:^!77?777!^:...............~@J....................Y&^.........." << endl;
    cout << "\t\t......!YYYYYYYYYYYY!..............~@J....................Y&^.........." << endl;
    cout << "\t\t....:7?JJJJJYJJJJJJ?7:........... ~@J .................. Y&^ ........." << endl;
    cout << "\t\t...:PBBGGGGGGGGGGGGBBP:...^???????Y&P???????!....!???????P&J???????^.." << endl;
    cout << "\t\t...:????????7?????????:...~J???????7???????J!....7????????7????????^.." << endl;
}
int main()
{
    char c;
    do
    {
        system("cls");
        welcome();
        cout << "\n\n\n";
        int n;
        cout << "Nhap so dia cua thap: ";
        cin >> n;
        cout << "Can " << pow(2, n) - 1 << " buoc de giai bai thap Ha Noi nay.";
        cout << "\nTiep tuc?(Y/N): ";
        cin >> c;
        c = toupper(c);
        switch(c)
        {
            case 'Y':
            {
                solve (n, 1, 3, 2);
                fflush(stdin);
                system("pause");
                break;
            }
            case 'N':
            {
                break;
            }
        }
        cout << "Thoat chuong trinh(Y/N): ";
        cin >> c;
        c = toupper(c);
    } while (c != 'Y');
}