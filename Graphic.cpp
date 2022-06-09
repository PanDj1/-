#include "Header.h"
#include <GLFW/glfw3.h>


int main()
{

    bool bl = true;
    int numb;
    double a = 1, b = 1;
    int n;
    int ans;
    char num;
    function objF;
    intrface objintr;

    setlocale(LC_ALL, "ru");

    while (bl == true)
    {

    link:
        objintr.menu();
        cin >> num;
        system("cls");

        switch (num)
        {
        case '0':
            bl = false;
            continue;
        case '1':
            while (true)
            {
                objF.a1 = 0;
                objF.b1 = 0;
                objintr.chsin();
                cin >> n;
                if (n == 0 || n > 2)
                {
                    system("cls");
                    cin.clear();
                    goto link;
                }
                if (n == 1)
                {
                    objF.glsin(1, 1, -100, 100);
                    system("cls");
                    continue;
                }
                else if (n == 2)
                {
                    string a, b, w1, w2;

                    objintr.chpar();
                    cout << "a = ";
                    cin >> a;
                    if (atof(a.c_str()) == 0)
                    {
                        objintr.err();
                        continue;
                    }
                    cout << "b = ";
                    cin >> b;
                    if (atof(b.c_str()) == 0 and b != "0")
                    {
                        objintr.err();
                        continue;
                    }
                    cout << "от  ";
                    cin >> w1;
                    if (atoi(w1.c_str()) == 0 and b != "0")
                    {
                        objintr.err();
                        continue;
                    }
                    cout << "до  ";
                    cin >> w2;
                    if (atoi(w2.c_str()) == 0 and b != "0")
                    {
                        objintr.err();
                        continue;
                    }
                    objF.glsin(atof(a.c_str()), atof(b.c_str()), atoi(w1.c_str()), atoi(w2.c_str()));
                    system("cls");
                }
                else
                {
                    break;
                }
            }
            return 0;
        case '2':
            while (true)
            {
                objF.a1 = 0;
                objF.b1 = 0;
                objintr.chcos();
                cin >> n;
                if (n == 0 || n > 2)
                {
                    system("cls");
                    goto link;
                }
                if (n == 1)
                {
                    objF.glcos(1, 1, -100, 100);
                    continue;
                }
                else if (n == 2)
                {
                    string a, b, w1, w2;

                    objintr.chpar();
                    cout << "a = ";
                    cin >> a;
                    if (atof(a.c_str()) == 0)
                    {
                        objintr.err();
                        continue;
                    }
                    cout << "b = ";
                    cin >> b;
                    if (atof(b.c_str()) == 0 and b != "0")
                    {
                        objintr.err();
                        continue;
                    }
                    cout << "от  ";
                    cin >> w1;
                    if (atoi(w1.c_str()) == 0 and b != "0")
                    {
                        objintr.err();
                        continue;
                    }
                    cout << "до  ";
                    cin >> w2;
                    if (atoi(w2.c_str()) == 0 and b != "0")
                    {
                        objintr.err();
                        continue;
                    }
                    objF.glcos(atof(a.c_str()), atof(b.c_str()), atoi(w1.c_str()), atoi(w2.c_str()));
                    system("cls");
                }
                else
                {
                    break;
                }
            }
            return 0;
        case '3':
            while (true)
            {
                objF.a1 = 0;
                objF.b1 = 0;
                objintr.chln();
                cin >> n;
                if (n == 0 || n > 2)
                {
                    system("cls");
                    goto link;
                }
                if (n == 1)
                {
                    objF.glln(1, 1, -100, 100);
                    continue;
                }
                else if (n == 2)
                {
                    string a, b, w1, w2;

                    objintr.chpar();
                    cout << "a = ";
                    cin >> a;
                    if (atof(a.c_str()) == 0)
                    {
                        objintr.err();
                        continue;
                    }
                    cout << "b = ";
                    cin >> b;
                    if (atof(b.c_str()) == 0 and b != "0")
                    {
                        objintr.err();
                        continue;
                    }
                    cout << "от  ";
                    cin >> w1;
                    if (atoi(w1.c_str()) == 0 and b != "0")
                    {
                        objintr.err();
                        continue;
                    }
                    cout << "до  ";
                    cin >> w2;
                    if (atoi(w2.c_str()) == 0 and b != "0")
                    {
                        objintr.err();
                        continue;
                    }
                    objF.glln(atof(a.c_str()), atof(b.c_str()), atoi(w1.c_str()), atoi(w2.c_str()));
                    system("cls");
                }
                else
                {
                    break;
                }
            }
            return 0;
        case '4':
            while (true)
            {
                objF.a1 = 0;
                objF.b1 = 0;
                objintr.chtg();
                cin >> n;
                if (n == 0 || n > 2)
                {
                    system("cls");
                    goto link;
                }
                if (n == 1)
                {
                    objF.gltan(1, 1, -100, 100);
                    continue;
                }
                else if (n == 2)
                {
                    string a, b, w1, w2;

                    objintr.chpar();
                    cout << "a = ";
                    cin >> a;
                    if (atof(a.c_str()) == 0)
                    {
                        objintr.err();
                        continue;
                    }
                    cout << "b = ";
                    cin >> b;
                    if (atof(b.c_str()) == 0 and b != "0")
                    {
                        objintr.err();
                        continue;
                    }
                    cout << "от  ";
                    cin >> w1;
                    if (atoi(w1.c_str()) == 0 and b != "0")
                    {
                        objintr.err();
                        continue;
                    }
                    cout << "до  ";
                    cin >> w2;
                    if (atoi(w2.c_str()) == 0 and b != "0")
                    {
                        objintr.err();
                        continue;
                    }
                    objF.gltan(atof(a.c_str()), atof(b.c_str()), atoi(w1.c_str()), atoi(w2.c_str()));
                    system("cls");
                }
                else
                {
                    break;
                }
            }
            return 0;
        case '5':
            while (true)
            {
                objF.a1 = 0;
                objF.b1 = 0;
                objintr.chctg();
                cin >> n;
                if (n == 0)
                {
                    system("cls");
                    goto link;
                }
                if (n == 1)
                {
                    objF.glctan(1, 1, -100, 100);
                    continue;
                }
                else if (n == 2)
                {
                    string a, b, w1, w2;

                    objintr.chpar();
                    cout << "a = ";
                    cin >> a;
                    if (atof(a.c_str()) == 0)
                    {
                        objintr.err();
                        continue;
                    }
                    cout << "b = ";
                    cin >> b;
                    if (atof(b.c_str()) == 0 and b != "0")
                    {
                        objintr.err();
                        continue;
                    }
                    cout << "от  ";
                    cin >> w1;
                    if (atoi(w1.c_str()) == 0 and b != "0")
                    {
                        objintr.err();
                        continue;
                    }
                    cout << "до  ";
                    cin >> w2;
                    if (atoi(w2.c_str()) == 0 and b != "0")
                    {
                        objintr.err();
                        continue;
                    }
                    objF.glctan(atof(a.c_str()), atof(b.c_str()), atoi(w1.c_str()), atoi(w2.c_str()));
                    system("cls");
                }
                else
                {
                    break;
                }
            }
            return 0;
        default:
            objintr.def();
            continue;
        }
    }
}