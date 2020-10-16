#include <iostream>

using namespace std;

int f(int &);
int fr(int *r);
void fe(int *s, int **pos);

int main(int argc, char *argv[])
{
    int y = 50;
    int &t = y;

    cout << "Hello World!" << endl;
    cout << y << endl;
    f(y);
    cout << y << endl;
    cout << t << endl;

    int *r = &y;

    fr(r);
    cout << *r << endl;
    cout << y << endl;

    int er1[][2] = {{1,2},{3,4},{5,6}};
    int (*p1)[2] = er1;
    cout << p1 << endl;
    cout << *(*(p1+1)+1) << endl;
    cout << *p1-&er1[0][0] << endl;
    cout << **p1 << endl;

    //char *materias[3]={"Quimica","Matematicas","Fisica"};
    //cout << *(*(materias)) << endl;


    int er[] = {1,2,11,10,5};
    r = er;
    int **p = &r;
    cout << p << endl;
    fe(er, p);
    cout << *p << endl;
    cout << *p-&er[0] << endl;
    cout << **p << endl;

    return 0;
}

int f(int &c)
{
    c = 20;
    return 0;
}

int fr(int *r)
{
    *r = 60;
    return 0;
}

void fe(int *s, int **pos)
{
    int temp = *s;
    cout << s << endl;
    cout << temp << endl;

    for(int i = 1 ; i < 5 ; i++)
    {
        if (*(s + i) > temp )
        {
            cout << s + i << endl;
            temp = s[i];
            *pos = &s[i];
            //cout << *pos << endl;
        }
    }
}
