#include <cstdlib>
#include <string>
#include <iostream>
#include "triangle.h"
#include <vector>

using namespace std;

void fill_up(Triangle tr1){
        cout << "Введите 3 стороны треугольника: ";
        cin >> tr1.a >> tr1.b >> tr1.c;

}
void print(Triangle tr1){
        cout << " Triangle_sides: " <<  tr1.a << " " << tr1.b << " " << tr1.c;
        cout << endl;

}
void menu(){
    cout << "Choose option\n" << endl;
    cout << "1. Edit size for percent" << endl
    << "2. Find middleLane\n\n"
    << "3. Type of triangle\n\n"
    << "4. Type of angles\n\n"
//    << "5. Выбрать другой треугольник\n"
       << "5. Exit\n\n" << endl;
}

int main() {
    string s = getenv("QUERY_STRING");
    int arr[6] = {0};
    sscanf(s.c_str(),"%d,%d,%d,%d,%d,%d", &arr[0],&arr[1],&arr[2],&arr[3],&arr[4],&arr[5]);
    cout << "Content-type:text/html\r\n\r\n";
    cout << "<html>\n";
    cout << "<head>\n";

    cout << "</head>\n";
    cout << "<body>\n";

    cout << "</body>\n";
    cout << "</html>\n";

    vector<double>reuslt(3);
    int number;
    int choise, newest;
    int k ,j;
    double koef;
    vector<double>reus(3);
    Triangle tr;
    int work;
//    fill_up(tr);

    tr.a = arr[0];
    tr.b = arr[1];
    tr.c = arr[2];

    switch (arr[3]) {
        case 1: {
//            cout << "Коэффициент: " << endl;
//            cin >> koef;
            koef = arr[4];
            tr.change_size(koef);
            cout << "Edited Triangle:  " << endl;
            print(tr);
            break;
        }
        case 2: {
//            cout << "Введите номера(0,1,2) сторон между которыми вычислить среднюю линию: " << endl;
//            cin >> k >> j;
           cout <<  tr.middle_lines(arr[4], arr[5]) << endl;
            break;
        }
        case 3: {
            if(tr.type_of_tr() == 1){
                cout << "Triangle is acute(<90) " << endl;}
            else if(tr.type_of_tr() == 2){
                cout << "Тriangle is obtuse(>90)" << endl;}
            else if(tr.type_of_tr() == 3){cout << "Triangle is right_tr" <<endl;}
            break;
        }
        case 4: {
            reus = tr.value_of_angl();
            cout << "The angle between a&b is: " << reus[0] << endl;
            cout << "The angle between a&c is: " << reus[1] << endl;
            cout << "The angle between b&c is: " << reus[2] << endl;
            break;
        }
        case 5: {
            cout << "Exit:" << endl;
            exit(EXIT_SUCCESS);
        }

        default: {
            cerr << "Wrong var! " << endl;
        }
    }
}