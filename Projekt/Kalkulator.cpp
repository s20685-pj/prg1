#include <iostream>
#include <string>
#include <math.h>
#include <cstdlib>

using namespace std;
// Średnia Arytmetyczna
int Aryt()
{
    int a,a2,b,b2,c,c2,d,e,f,g,j,i,h,o,p,PI,n,m;
    float sum=0.0, average;
    int tab[100];
    cout << "Podaj ilosc liczb: ";
    cin >> n;
    cout << "Podaj liczby: "<< endl;
    for (int i=0; i<= n-1; i++)
    {
        cout << "Nastepna liczba ";
        cin >> tab[i];
        sum += tab[i];
    }
    average = sum /n;
    cout << "Podane liczby: " << endl;
    for (int i=0; i<n; i++)
    {
        cout << tab[i] << " ";
    }
    cout << endl;
    cout << "Srednia podanych liczb to: " << average;
    cout << endl;
    return 0;
}
// Figury Geometryczne
int Figury()
{
    int a,a2,b,b2,c,c2,d,e,f,g,j,i,h,o,p,PI,n,m;
    cout << "Wybierz figure:" << endl;
    cout << "1. Kwadrat" << endl;
    cout << "2. Prostokat" << endl;
    cout << "3. Trojkat" << endl;
    cout << "4. Kolo" << endl;
    cin >> f;
    switch (f)
    {
//Kwadrat
    case 1:
    {
        cout << "co chcesz obliczyc?" << endl;
        cout << "1.Pole" << endl;
        cout << "2.Obwod" << endl;
        cin >> d;
        switch (d)
        {
//Pole
        case 1:
        {
            cout << "JEDNOSTKI NIE SA BRANE POD UWAGE PO WYLICZNIU I NAPISANIU WYNIKU NALEZY DODAC JEDNOSTKE PODNIESIONA DO ^2" << endl;
            cout << "Podaj bok kwadratu: ";
            cin >> e;
            cout << "Pole kwadratu wynosi:";
            cout << e*e << endl;
            cout << endl;
            return 0;
        }
//obwod
        case 2:
        {
            cout << "JEDNOSTKI NIE SA BRANE POD UWAGE PO WYLICZNIU I NAPISANIU WYNIKU NALEZY DODAC JEDNOSTKE PODNIESIONA DO ^2" << endl;
            cout << "Podaj bok kwadratu: ";
            cin >> e;
            cout << "Obwod wynosi: ";
            cout << e*4 << endl;
            cout << endl;
            return 0;
        }
        }
        return 0;
    }
//Prostokat
    case 2:
    {
        cout << "co chcesz obliczyc?" << endl;
        cout << "1.Pole" << endl;
        cout << "2.Obwod" << endl;
        cin >> d;
        switch (d)
        {
//Pole
        case 1:
        {
            cout << "JEDNOSTKI NIE SA BRANE POD UWAGE PO WYLICZNIU I NAPISANIU WYNIKU NALEZY DODAC JEDNOSTKE PODNIESIONA DO ^2" << endl;
            cout << "Podaj a: ";
            cin >> a;
            cout << "Podaj b: ";
            cin >> h;
            cout << "Pole prostokatu rownobocznego wynosi: " << a*h;
            cout << endl;
            cout << endl;

            return 0;
        }
//obwod
        case 2:
        {
            cout << "JEDNOSTKI NIE SA BRANE POD UWAGE PO WYLICZNIU I NAPISANIU WYNIKU NALEZY DODAC JEDNOSTKE PODNIESIONA DO ^2" << endl;
            cout << "Podaj a: ";
            cin >> a;
            cout << "Podaj b: ";
            cin >> b;
            c = a*2 + b*2;
            cout << "Obwod wynosi:" << c;
            cout << endl;
            cout << endl;
            return 0;
        }
        }
        return 0;
    }
//trojkat
    case 3:
    {
        cout << "Na jakim trojkacie chcesz wykonac zadania: "<< endl;
        cout << "1.Rownoboczny" <<endl;
        cout << "2.Prostokatny" <<endl;
        cin >> h;
        switch (h)
        {
//Rownoboczny
        case 1:
        {
            cout << "co chcesz obliczyc?" << endl;
            cout << "1.Pole" << endl;
            cout << "2.Obwod" << endl;
            cin >> d;
            switch (d)
            {
//Pole
            case 1:
            {
                cout << "JEDNOSTKI NIE SA BRANE POD UWAGE PO WYLICZNIU I NAPISANIU WYNIKU NALEZY DODAC JEDNOSTKE PODNIESIONA DO ^2" << endl;
                cout << "Podaj bok: ";
                cin >> a;
                cout << "Podaj wysokosc: ";
                cin >> h;
                cout << "Pole prostokatu rownobocznego wynosi: " << a*h/2;
                cout << endl;
                cout << endl;
                return 0;
            }
//obwod
            case 2:
            {
                cout << "JEDNOSTKI NIE SA BRANE POD UWAGE PO WYLICZNIU I NAPISANIU WYNIKU NALEZY DODAC JEDNOSTKE PODNIESIONA DO ^2" << endl;
                cout << "Podaj a: ";
                cin >> a;
                cout << "Obwod wynosi:" << a*3;
                cout << endl;
                cout << endl;
                return 0;
            }
            }
            return 0;
        }
//Prostokatny
        case 2:
        {
            cout << "co chcesz obliczyc?" << endl;
            cout << "1.Pole" << endl;
            cout << "2.Obwod" << endl;
            cin >> d;
            switch (d)
            {
//Pole
            case 1:
            {

                cout << "JEDNOSTKI NIE SA BRANE POD UWAGE PO WYLICZNIU I NAPISANIU WYNIKU NALEZY DODAC JEDNOSTKE PODNIESIONA DO ^2" << endl;
                cout << "Podaj podstawe: ";
                cin >> a;
                cout << "Podaj wysokosc: ";
                cin >> h;
                cout << "Pole prostokatu rownobocznego wynosi: " << a*h/2;
                cout << endl;
                cout << endl;
                return 0;
            }
//obwod
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
                cout << endl;
                cout << endl;
                return 0;
            }
            }
            return 0;
        }
        }

    }
//Kolo
    case 4:
    {

        cout << "co chcesz obliczyc?" << endl;
        cout << "1.Pole" << endl;
        cout << "2.Obwod" << endl;
        cin >> d;
        switch (d)
        {
//Pole
        case 1:
        {
            cout << "JEDNOSTKI NIE SA BRANE POD UWAGE PO WYLICZNIU I NAPISANIU WYNIKU NALEZY DODAC JEDNOSTKE PODNIESIONA DO ^2" << endl;
            cout << "Podaj r ";
            cin >> a;
            b = a*a;
            c = 3.14*b;
            cout << "Pole kola w przyblizeniu wynosi: " << c;
            cout << endl;
            return 0;
        }
//obwod
        case 2:
        {
            cout << "JEDNOSTKI NIE SA BRANE POD UWAGE PO WYLICZNIU I NAPISANIU WYNIKU NALEZY DODAC JEDNOSTKE PODNIESIONA DO ^2" << endl;
            cout << "Podaj r: ";
            cin >> a;
            cout << "Obwod wynosi: " << a*6,28;
            cout << endl;
            return 0;
        }
        }
        return 0;
    }
    }
}
//Silnia
int Silnia()
{
    int a,a2,b,b2,c,c2,d,e,f,g,j,h,o,p,PI,n,m;
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
        cout << endl;
        cout << "Powrot do menu." << endl;

        return 0;
    }
}
//Kalkulator głowny
int Kal_Prosty()
{
    char op;
    int a,a2,b,b2,c,c2,d,e,f,g,j,i,h,o,p,PI,n,m;
    cout << "Gdy chcesz wyjsc wprowadz: q" << endl;
    cout << "Podawaj liczby:" << endl;
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
}
//Działania na Macierzach
int Macierz()
{
    int a,a2,b,b2,c,c2,d,e,f,g,j,i,h,o,p,PI,n,m;
    int tab1[100][100];
    cout << "Podaj ilosc kolumn: ";
    cin >> n;
    cout << "Podaj ilosc wierszy: ";
    cin >> m;
//Pierwsza macierz
    for (int i=0; i<=n-1; i++)
    {
        for (int j=0; j<=m-1; j++)
        {
            cout << "Podaj liczbe w macierzy: ";
            cin >> tab1[i][j];


        }
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cout << tab1[i][j] << " ";
        }
        cout << endl;
    }
//druga macierz
    int tab2[100][100];
    cout << "Druga macierz: " << endl;
    cout << "Podaj ilosc kolumn: ";
    cin >> n;
    cout << "Podaj ilosc wierszy: ";
    cin >> m;
    for (int i=0; i<=n-1; i++)
    {
        for (int j=0; j<=m-1; j++)
        {
            cout << "Podaj liczbe w macierzy: ";
            cin >> tab2[i][j];
        }
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cout << tab2[i][j] << " ";
        }
        cout <<endl;
    }
        cout << "Jakie dzialanie masz zamiar wykonac?" << endl;
        cout << "1.Dodawanie" << endl;
        cout << "2.Odejmowanie" << endl;
        cout << "3.Mozenie" << endl;
        cin >> a;

        switch (a)
        {

        case 1:
        {
            cout << "Wynik dodawania dwoch macierzy: " << endl;
        for(i=0; i<=n-1; i++)
        {
            for (int j=0; j<=m-1; j++)
            {
                cout << tab1[i][j] + tab2[i][j] << " ";
            }
            cout << endl;
        }
        return 0;
        }

        case 2:
        {
            cout << "Wynik odejmowania dwoch macierzy: " << endl;
        for(i=0; i<=n-1; i++)
        {
            for (int j=0; j<=m-1; j++)
            {
                cout << tab1[i][j] - tab2[i][j]<< " ";
            }
            cout << endl;
            }
       return 0;
        }


 return 0;
      }


    cout << endl;
    cout << "Powrot do menu." << endl;
    return 0;

}
//Pierwiastki
int Pierwiastek()
{
    float liczba, stopien;

    cout << "Wprowadz liczbe: ";
    cin >> liczba;
    cout << "Wprowadz stopien pierwiastka: ";
    cin >> stopien;

    cout << pow(liczba, 1/stopien);

    system("PAUSE >nul");
    return 0;
}
int Pierwiastek1()
{
    float liczba, stopien;

    cout << "Wprowadz liczbe: ";
    cin >> liczba;
    cout << "Wprowadz stopien pierwiastka: ";
    cin >> stopien;

    cout << pow(liczba,stopien);

    system("PAUSE >nul");
    return 0;
}
int main()
{

    char op;
    int a,a2,b,b2,c,c2,d,e,f,g,j,i,h,o,p,PI,n,m;
    cout << "Wybierz Opcje: " << endl;
    cout << "q.Wyjscie" << endl;
    cout << "1.Kalkulator zwykly" << endl;
    cout << "2.Silnia" << endl;
    cout << "3.Obliczenia na figurach" << endl;
    cout << "4.Pierwiastki" << endl;
    cout << "5.Tablice" << endl;
    cout << "6.Srednia arytmetyczna" << endl;
    cin >> g;

    switch (g)
    {
    case 'q':
    {
        return 0;
    }
//Kalkulator zwykły
    case 1:
    {
        Kal_Prosty();
        main();
    }
//Silnia
    case 2:
    {
        Silnia();
        main();
    }
//Obliczenia na figurach
    case 3:
    {
        Figury();
        main();
    }
// Pierwiastki
    case 4:
    {

        cout << "Chcesz obliczyc pierwiastek czy sprowadzic do pierwiastka?" << endl;
        cout << "1.Sprowadzanie pod pierwiastek, 2.Obliczanie pierwiastka" << endl;
        cin >> PI;
        switch (PI)
        {
        case 1:
        {
            Pierwiastek();
            main();
        }
        case 2:
        {
            Pierwiastek1();
            main();
        }
        }
    }
// Tablice
    case 5:
    {
        Macierz();
        main();
    }
//Średnia Arytmetyczna
    case 6:
    {
        Aryt();
        main();
    }
    }
    return 0;
}
