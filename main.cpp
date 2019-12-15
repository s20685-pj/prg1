#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    char op;
    int a,a2,b,b2,c,c2,d,e,f,g,h,i;
    cout << "Wybierz Opcje: " << endl;
    cout << "1.Kalkulator zwykly" << endl;
    cout << "2.Silnia" << endl;
    cout << "3.Obliczenia na figurach" << endl;
    cin >> g;

    switch (g)
    {

    case 1:
        cin >> a;
        while (b != 'q')
        {
            cin >> op;
            switch (op)
            {
            case '+':
                cin >> b;
                cout << "=" << a + b << endl;
                a = a + b;
                break;
            case '-':
                cin >> b;
                cout << "=" << a - b << endl;
                a = a - b;
                break;
            case '*':
                cin >> b;
                cout << "=" << a * b << endl;
                a = a * b;
                break;
            case '/':
                cin >> b;
                cout << "=" << a / b << endl;
                a = a / b;
                break;
            case 'q':
                return 0;
            }
        }
    case 2:
    {
        int N, i=0, silnia = 1;

        cout << "Podaj N: ";
        cin >> N;
        if(i>=N)
        {
            cout << "Silnia: " << silnia << endl;
        }
        else if(i<N)
        {
            while(i<N)
            {
                i++;
                silnia*=i;

            }
            cout << "Silnia: " << silnia << endl;

        }
    }
    case 3:
    {
        int f;
        cout << "Wybierz figure:" << endl;
        cout << "1. Kwadrat" << endl;
        cout << "2. Prostokat" << endl;
        cout << "3. Trojkat" << endl;
        cout << "4. Kolo" << endl;
        cin >> f;
        switch (f)
        {

        case 1:
        {
            cout << "co chcesz obliczyc?" << endl;
            cout << "1.Pole" << endl;
            cout << "2.Obwod" << endl;
            cin >> d;
            switch (d)
            {
            case 1:
                cout << "JEDNOSTKI NIE SA BRANE POD UWAGE PO WYLICZNIU I NAPISANIU WYNIKU NALEZY DODAC JEDNOSTKE PODNIESIONA DO ^2" << endl;
                cout << "Podaj bok kwadratu: ";
                cin >> e;
                cout << "Pole kwadratu wynosi:";
                cout << e*e;
                break;
            case 2:
                cout << "JEDNOSTKI NIE SA BRANE POD UWAGE PO WYLICZNIU I NAPISANIU WYNIKU NALEZY DODAC JEDNOSTKE PODNIESIONA DO ^2" << endl;
                cout << "Podaj bok kwadratu: ";
                cin >> e;
                cout << "Obwod wynosi: ";
                cout << e*4;
                break;
            }
        }
        case 2:
        {
            {
            cout << "co chcesz obliczyc?" << endl;
            cout << "1.Pole" << endl;
            cout << "2.Obwod" << endl;
            cin >> d;
            break;
            }
            switch (d)
            {
            case 1:
                {
                cout << "JEDNOSTKI NIE SA BRANE POD UWAGE PO WYLICZNIU I NAPISANIU WYNIKU NALEZY DODAC JEDNOSTKE PODNIESIONA DO ^2" << endl;
                cout << "Podaj a: ";
                cin >> a;
                cout << "Podaj b: ";
                cin >> h;
                cout << "Pole prostokatu rownobocznego wynosi: " << a*h;
                break;
                }
            case 2:
                {
                cout << "JEDNOSTKI NIE SA BRANE POD UWAGE PO WYLICZNIU I NAPISANIU WYNIKU NALEZY DODAC JEDNOSTKE PODNIESIONA DO ^2" << endl;
                cout << "Podaj a: ";
                cin >> a;
                cout << "Podaj b: ";
                cin >> b;
                c = a*2 + b*2;
                cout << "Obwod wynosi:" << c;
                break;
                }
            }

        }
        case 3:
        {
            cout << "Na jakim trojkacie chcesz wykonac zadania: "<< endl;
            cout << "1.Rownoboczny" <<endl;
            cout << "2.Prostokatny" <<endl;
            cin >> h;
            switch (h)
            {
            case 1:
            {
                {
                cout << "co chcesz obliczyc?" << endl;
                cout << "1.Pole" << endl;
                cout << "2.Obwod" << endl;
                cin >> d;
               } switch (d)

                {
                case 1:
                    {
                    cout << "JEDNOSTKI NIE SA BRANE POD UWAGE PO WYLICZNIU I NAPISANIU WYNIKU NALEZY DODAC JEDNOSTKE PODNIESIONA DO ^2" << endl;
                    cout << "Podaj bok: ";
                    cin >> a;
                    cout << "Podaj wysokosc: ";
                    cin >> h;
                    cout << "Pole prostokatu rownobocznego wynosi: " << a*h/2;
                    break;
                    }
                case 2:
                    {
                    cout << "JEDNOSTKI NIE SA BRANE POD UWAGE PO WYLICZNIU I NAPISANIU WYNIKU NALEZY DODAC JEDNOSTKE PODNIESIONA DO ^2" << endl;
                    cout << "Podaj a: ";
                    cin >> a;
                    cout << "Obwod wynosi:" << a*3 << endl;
                    break;
                    }
                }
            }
            case 2:
            {
                cout << "co chcesz obliczyc?" << endl;
                cout << "1.Pole" << endl;
                cout << "2.Obwod" << endl;
                cin >> d;
                switch (d)
                {
                case 1:
                    {
                    cout << "JEDNOSTKI NIE SA BRANE POD UWAGE PO WYLICZNIU I NAPISANIU WYNIKU NALEZY DODAC JEDNOSTKE PODNIESIONA DO ^2" << endl;
                    cout << "Podaj podstawe: ";
                    cin >> a;
                    cout << "Podaj wysokosc: ";
                    cin >> h;
                    cout << "Pole prostokatu rownobocznego wynosi: " << a*h/2;
                    break;
                    }
                case 2:
                    {
                    double liczba1, liczba2;
                    cout << "JEDNOSTKI NIE SA BRANE POD UWAGE PO WYLICZNIU I NAPISANIU WYNIKU NALEZY DODAC JEDNOSTKE PODNIESIONA DO ^2" << endl;
                    cout << "Podaj a: ";
                    cin >> a;
                    cout << "Podaj b: ";
                    cin >> b;
                    a2 = a*a;
                    b2 = b*b;
                    liczba1 = a2+b2;
                    liczba2 = 2 ;

                    cout << "a^2 wynosi: " << a2 <<endl;
                    cout << "b^2 wynosi: " << b2 <<endl;
                    cout << "c^2 wynosi: " << liczba1 <<endl;
                    cout << "c wynosi: " << sqrt(liczba1) << endl;
                    cout << "Obwod wynosi: " << a+b+sqrt(liczba1) << endl;
                    break;
                    }
                }
            }
            }
        }
        case 4:
            cout << "co chcesz obliczyc?" << endl;
            cout << "1.Pole" << endl;
            cout << "2.Obwod" << endl;
            cin >> d;
            switch (d)
                {
                case 1:
                    cout << "JEDNOSTKI NIE SA BRANE POD UWAGE PO WYLICZNIU I NAPISANIU WYNIKU NALEZY DODAC JEDNOSTKE PODNIESIONA DO ^2" << endl;
                    cout << "Podaj r ";
                    cin >> a;
                    b = pow(a,2);
                    cout << "Pole prostokatu rownobocznego wynosi: " <<3,14*b;
                    break;

            case 2:
                cout << "JEDNOSTKI NIE SA BRANE POD UWAGE PO WYLICZNIU I NAPISANIU WYNIKU NALEZY DODAC JEDNOSTKE PODNIESIONA DO ^2" << endl;
                cout << "Podaj a: ";
                cin >> a;
                cout << "Podaj b: ";
                cin >> b;
                c = a*2 + b*2;
                cout << "Obwod wynosi:" << c;
                break;
            }
        }
    }
    }
    return 0;
    }
