#include <iostream>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <fstream>
#include <stdlib.h>
#include <rlutil.h>

using namespace std;

int map1[100],map2[100];
int main()
{
    int poz=0;
    map2[poz]=1;
    for(int i=0;i<80;i++)
        cout<<map1[i];
    cout<<endl;
    for(int i=0;i<80;i++)
        cout<<map2[i];
    srand(time(NULL));
    while(true)
    {
        if(rlutil::nb_getch()!=0)
        {
            char key=getch();
            if(key=='d')
            {
                map2[poz]=0;
                poz++;
                map2[poz]=1;
            }
            else if(key=='a')
            {
                map2[poz]=0;
                poz--;
                map2[poz]=1;
            }
            else if(key=='w')
            {
                map2[poz]=0;
                poz++;
                map1[poz]=1;
                system("cls");
                for(int i=0;i<80;i++)
                    cout<<map1[i];
                cout<<endl;
                for(int i=0;i<80;i++)
                    cout<<map2[i];
                Sleep(100);
            }
            else if(key=='p')
                return 0;
            if(poz>80)
                poz=0;
            if(poz<0)
                poz=80;
            system("cls");
            for(int i=0;i<80;i++)
            cout<<map1[i];
            cout<<endl;
            for(int i=0;i<80;i++)
            cout<<map2[i];
        }

        int i=rand()%15;
        rlutil::setBackgroundColor(i);
        i=rand()%15;
        rlutil::setColor(i);
    }
    return 0;
}
