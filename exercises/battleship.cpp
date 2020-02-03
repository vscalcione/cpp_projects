#include <iostream>
#include <cstdlib>
#include <time.h>
#include <windows.h>
 
using namespace std;
 
void legenda(),visualizza_mio(),posizionamento1x4(),posizionamento1x2(),posizionamento1x4_cpu(),posizionamento1x2_cpu(),SetColor(),attacco(),difesa(),controllo();
char direzione;
int colonna,riga,scelta,attacco_riga,attacco_colonna;
int i,k;
int mio_campo[8][8],tuo_campo[8][8],colore[8][8],colore_cpu[8][8];
int nave1x4,nave1x4_cpu,nave1x2,nave1x2_cpu,affondate,affondate_cpu;
 
void SetColor(short Color)
{
HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hCon,Color);
}
 
main()
{
    cout<<"Gioco bello La Vendetta: BATTAGLIA NAVALE "<<endl<<endl;
	SetColor(15);
    srand(time(NULL));
    for(i=0;i<8;i++)
    {
        for(k=0;k<8;k++)
        {
            mio_campo[i][k]=0;
            tuo_campo[i][k]=0;
            colore[i][k]=15;
            colore_cpu[i][k]=15;
        }
    }
    legenda();
    posizionamento1x4();
    posizionamento1x4_cpu();
    system("cls");
    visualizza_mio();
    posizionamento1x2();
    posizionamento1x2_cpu();
    visualizza_mio();
    system("cls");
    while(1)
    {
        attacco();
        controllo();
        if(affondate_cpu==2)
        {
            cout<<"Hai vinto!"<<endl;
            break;
        }
        system("cls");
        difesa();
        controllo();
        if(affondate==2)
        {
            cout<<"Hai perso!"<<endl;
            break;
        }
        visualizza_mio();
        system("cls");
    }
    system("pause");
    return 0;
}
 
void legenda()
{
    riga=0;
    cout<<"\t 0    1    2    3    4    5    6    7"<<endl;
    for(i=0;i<8;i++)
    {
        cout<<"\t";
        for(k=0;k<8;k++)
        {
            cout<<((char)218)<<((char)196)<<((char)196)<<((char)191)<<" ";
        }
        cout<<endl<<riga<<"\t";
        for(k=0;k<8;k++)
        {
                    cout<<((char)179)<<" "<<" "<<((char)179)<<" ";
 
        }
        cout<<endl<<"\t";
        for(k=0;k<8;k++)
        {
            cout<<((char)192)<<((char)196)<<((char)196)<<((char)217)<<" ";
        }
        cout<<endl;
        riga++;
        SetColor(15);
    }
}
 
void visualizza_mio()
{
    riga=0;
    cout<<"\t 0    1    2    3    4    5    6    7"<<endl;
    for(i=0;i<8;i++)
    {
        SetColor(15);
        cout<<"\t";
        for(k=0;k<8;k++)
        {
            SetColor(colore[i][k]);
            cout<<((char)218)<<((char)196)<<((char)196)<<((char)191)<<" ";
        }
        SetColor(15);
        cout<<endl<<riga<<"\t";
        for(k=0;k<8;k++)
        {
            SetColor(colore[i][k]);
            switch(mio_campo[i][k])
            {
                case 0:
                    cout<<((char)179)<<" "<<" "<<((char)179)<<" ";
                    break;
                case 1:
                    cout<<((char)179)<<((char)223)<<((char)223)<<((char)179)<<" ";
                    break;
                case 2:
                    cout<<((char)179)<<((char)254)<<((char)254)<<((char)179)<<" ";
                    break;
            }
        }
        cout<<endl<<"\t";
        for(k=0;k<8;k++)
        {
            SetColor(colore[i][k]);
            cout<<((char)192)<<((char)196)<<((char)196)<<((char)217)<<" ";
        }
        cout<<endl;
        riga++;
        SetColor(15);
    }
    system("pause");
}
 
void posizionamento1x4()
{
    do
    {
        cout<<"\ndove vuoi posizionare la nave 1x4?\n";
        cout<<"inserisci la riga: ";
        cin>>riga;
    }while(riga<0 || riga>7);
    do
    {
        cout<<"inserisci la colonna: ";
        cin>>colonna;
    }while(colonna<0 || colonna>7);
    cout<<"verso dove vuoi il resto della nave? [a=alto;d=destra;b=basso;s=sinistra]";
    cin>>direzione;
    switch(direzione)
     {
         case 'a':
             if(riga-3<0)
             {
                 cout<<"IMPOSSIBILE POSIZIONARE QUI LA NAVE";
                 posizionamento1x4();
             }
             else
             {
                mio_campo[riga][colonna]=1;
                mio_campo[riga-1][colonna]=1;
                mio_campo[riga-2][colonna]=1;
                mio_campo[riga-3][colonna]=1;
             }
             break;
         case 'd':
             if(colonna+3>7)
             {
                 cout<<"IMPOSSIBILE POSIZIONARE QUI LA NAVE";
                 posizionamento1x4();
             }
             else
             {
                mio_campo[riga][colonna]=1;
                mio_campo[riga][colonna+1]=1;
                mio_campo[riga][colonna+2]=1;
                mio_campo[riga][colonna+3]=1;
             }
             break;
         case 'b':
             if(riga+3>7)
             {
                 cout<<"IMPOSSIBILE POSIZIONARE QUI LA NAVE";
                 posizionamento1x4();
             }
             else
             {
                mio_campo[riga][colonna]=1;
                mio_campo[riga+1][colonna]=1;
                mio_campo[riga+2][colonna]=1;
                mio_campo[riga+3][colonna]=1;
             }
            break;
         case 's':
             if(colonna-3<0)
             {
                 cout<<"IMPOSSIBILE POSIZIONARE QUI LA NAVE";
                 posizionamento1x4();
             }
             else
             {
                mio_campo[riga][colonna]=1;
                mio_campo[riga][colonna-1]=1;
                mio_campo[riga][colonna-2]=1;
                mio_campo[riga][colonna-3]=1;
             }
 
            break;
         default:
            cout<<"Direzione non valida!\n";
            posizionamento1x4();
    }
    system("cls");
}
 
void posizionamento1x2()
{
    cout<<"\ndove vuoi posizionare la nave 1x2?\n";
    do
    {
        cout<<"inserisci la riga: ";
        cin>>riga;
    }while(riga<0 || riga >7);
    do
    {
        cout<<"inserisci la colonna: ";
        cin>>colonna;
    }while(riga<0 || riga>7);
    cout<<"verso dove vuoi il resto della nave? [a=alto;d=destra;b=basso;s=sinistra]";
    cin>>direzione;
    switch(direzione)
     {
        case 'a':
            if(riga-1<0 || mio_campo[riga][colonna]!=0 || mio_campo[riga-1][colonna]!=0)
            {
                cout<<"IMPOSSIBILE POSIZIONARE QUI LA NAVE";
                posizionamento1x2();
            }
            else
            {
                mio_campo[riga][colonna]=2;
                mio_campo[riga-1][colonna]=2;
            }
            break;
        case 'd':
            if(colonna+1>7 || mio_campo[riga][colonna]!=0 || mio_campo[riga][colonna+1]!=0)
            {
                cout<<"IMPOSSIBILE POSIZIONARE QUI LA NAVE";
                posizionamento1x2();
            }
            else
            {
                mio_campo[riga][colonna]=2;
            mio_campo[riga][colonna+1]=2;
            }
            break;
        case 'b':
             if(riga+1>7 || mio_campo[riga][colonna]!=0 || mio_campo[riga+1][colonna]!=0)
             {
                 cout<<"IMPOSSIBILE POSIZIONARE QUI LA NAVE";
                 posizionamento1x2();
             }
             else
             {
                 mio_campo[riga][colonna]=2;
                mio_campo[riga+1][colonna]=2;
             }
             break;
        case 's':
             if(colonna-1<0 || mio_campo[riga][colonna]!=0 || mio_campo[riga][colonna-1]!=0)
             {
                 cout<<"IMPOSSIBILE POSIZIONARE QUI LA NAVE";
                 posizionamento1x2();
             }
             else
             {
                 mio_campo[riga][colonna]=2;
            mio_campo[riga][colonna-1]=2;
             }
             break;
        default:
            cout<<"Direzione non valida!\n";
            posizionamento1x2();
     }
     system("cls");
}
 
void posizionamento1x4_cpu()
{
    riga=rand()%(8);
    colonna=rand()%(8);
    scelta=rand()%(4)+1;
    switch(scelta)
     {
         case 1:
             if(riga-3<0)
             {
                 posizionamento1x4_cpu();
             }
             else
             {
                tuo_campo[riga][colonna]=1;
                tuo_campo[riga-1][colonna]=1;
                tuo_campo[riga-2][colonna]=1;
                tuo_campo[riga-3][colonna]=1;
             }
             break;
         case 2:
             if(colonna+3>7)
             {
                 posizionamento1x4_cpu();
             }
             else
             {
                tuo_campo[riga][colonna]=1;
                tuo_campo[riga][colonna+1]=1;
                tuo_campo[riga][colonna+2]=1;
                tuo_campo[riga][colonna+3]=1;
             }
             break;
         case 3:
             if(riga+3>7)
             {
                 posizionamento1x4_cpu();
             }
             else
             {
                tuo_campo[riga][colonna]=1;
                tuo_campo[riga+1][colonna]=1;
                tuo_campo[riga+2][colonna]=1;
                tuo_campo[riga+3][colonna]=1;
             }
            break;
         case 4:
             if(colonna-3<0)
             {
                 posizionamento1x4_cpu();
             }
             else
             {
                tuo_campo[riga][colonna]=1;
                tuo_campo[riga][colonna-1]=1;
                tuo_campo[riga][colonna-2]=1;
                tuo_campo[riga][colonna-3]=1;
             }
             break;
     }
}
 
void posizionamento1x2_cpu()
{
    riga=rand()%(8);
    colonna=rand()%(8);
    scelta=rand()%(4)+1;
    switch(scelta)
     {
         case 1:
             if(riga-1<0 || tuo_campo[riga][colonna]!=0 || tuo_campo[riga-1][colonna]!=0)
            {
                posizionamento1x2_cpu();
            }
            else
            {
                tuo_campo[riga][colonna]=2;
                tuo_campo[riga-1][colonna]=2;
            }
            break;
         case 2:
             if(colonna+1>7 || tuo_campo[riga][colonna]!=0 || tuo_campo[riga][colonna+1]!=0)
            {
                posizionamento1x2_cpu();
            }
            else
            {
                tuo_campo[riga][colonna]=2;
                tuo_campo[riga][colonna+1]=2;
            }
            break;
         case 3:
             if(riga+1>7 || tuo_campo[riga][colonna]!=0 || tuo_campo[riga+1][colonna]!=0)
             {
                 posizionamento1x2_cpu();
             }
             else
             {
                 tuo_campo[riga][colonna]=2;
                tuo_campo[riga+1][colonna]=2;
             }
             break;
         case 4:
             if(colonna-1<0 || tuo_campo[riga][colonna]!=0 || tuo_campo[riga][colonna-1]!=0)
             {
                 posizionamento1x2_cpu();
             }
             else
             {
                tuo_campo[riga][colonna]=2;
                tuo_campo[riga][colonna-1]=2;
             }
             break;
     }
}
 
void attacco()
{
    riga=0;
    cout<<"\t 0    1    2    3    4    5    6    7"<<endl;
    for(i=0;i<8;i++)
    {
        cout<<"\t";
        for(k=0;k<8;k++)
        {
            SetColor(colore_cpu[i][k]);
            cout<<((char)218)<<((char)196)<<((char)196)<<((char)191)<<" ";
        }
        SetColor(15);
        cout<<endl<<riga<<"\t";
        for(k=0;k<8;k++)
        {
            SetColor(colore_cpu[i][k]);
            cout<<((char)179)<<((char)219)<<((char)219)<<((char)179)<<" ";
        }
        cout<<endl<<"\t";
        for(k=0;k<8;k++)
        {
            SetColor(colore_cpu[i][k]);
            cout<<((char)192)<<((char)196)<<((char)196)<<((char)217)<<" ";
        }
        cout<<endl;
        riga++;
        SetColor(15);
    }
    do
    {
        cout<<"scegli dove attaccare:\nriga: ";
        cin>>attacco_riga;
    }while(attacco_riga<0 || attacco_riga>7);
    do
    {
        cout<<"colonna: ";
        cin>>attacco_colonna;
    }while(attacco_colonna<0 || attacco_colonna>7);
    if(colore_cpu[attacco_riga][attacco_colonna]!=15)
    {
        cout<<"CASELLA GIA\' ATTACCATA!!"<<endl;
        system("pause");
        attacco();
    }
    system("cls");
    if(tuo_campo[attacco_riga][attacco_colonna]==0)
    {
        colore_cpu[attacco_riga][attacco_colonna]=9;
    }
    else
    {
        colore_cpu[attacco_riga][attacco_colonna]=12;
        switch(tuo_campo[attacco_riga][attacco_colonna])
        {
        case 1:
            nave1x4_cpu++;
            break;
        case 2:
            nave1x2_cpu++;
            break;
        }
    }
    riga=0;
    cout<<"\t 0    1    2    3    4    5    6    7"<<endl;
    for(i=0;i<8;i++)
    {
        cout<<"\t";
        for(k=0;k<8;k++)
        {
            SetColor(colore_cpu[i][k]);
            cout<<((char)218)<<((char)196)<<((char)196)<<((char)191)<<" ";
        }
        SetColor(15);
        cout<<endl<<riga<<"\t";
        for(k=0;k<8;k++)
        {
            SetColor(colore_cpu[i][k]);
            cout<<((char)179)<<((char)219)<<((char)219)<<((char)179)<<" ";
        }
        cout<<endl<<"\t";
        for(k=0;k<8;k++)
        {
            SetColor(colore_cpu[i][k]);
            cout<<((char)192)<<((char)196)<<((char)196)<<((char)217)<<" ";
        }
        cout<<endl;
        riga++;
        SetColor(15);
    }
    system("pause");
}
 
void difesa()
{
    attacco_riga=rand()%(8);
    attacco_colonna=rand()%(8);
    if(colore[attacco_riga][attacco_colonna]!=15)
    {
        difesa();
    }
    if(mio_campo[attacco_riga][attacco_colonna]==0)
    {
        colore[attacco_riga][attacco_colonna]=9;
    }
    else
    {
        colore[attacco_riga][attacco_colonna]=12;
        switch(mio_campo[attacco_riga][attacco_colonna])
        {
        case 1:
            nave1x4++;
            break;
        case 2:
            nave1x2++;
            break;
        }
    }
    cout<<endl<<"L' avversario ha attaccato la casella: "<<attacco_riga<<","<<attacco_colonna<<endl<<endl;
}
 
void controllo()
{
    if(nave1x4==4)
    {
        cout<<"Hanno affondato la tua nave 1x4"<<endl;
        affondate++;
        nave1x4=0;
        system("pause");
    }
    if(nave1x2==2)
    {
        cout<<"Hanno affondato la tua nave 1x2"<<endl;
        affondate++;
        nave1x2=0;
        system("pause");
    }
    if(nave1x4_cpu==4)
    {
        cout<<"Hai affondato la nave 1x4 nemica"<<endl;
        affondate_cpu++;
        nave1x4_cpu=0;
        system("pause");
    }
    if(nave1x2_cpu==2)
    {
        cout<<"Hai affondato la nave 1x2 nemica"<<endl;
        affondate_cpu++;
        nave1x2_cpu;
        system("pause");
    }
}
