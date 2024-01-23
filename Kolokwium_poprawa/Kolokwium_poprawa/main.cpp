//
//  main.cpp
//  Kolokwium_poprawa
//
//  Created by Kamil Ferdyn on 23/01/2024.
//

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    srand(time(NULL));
    
 
    
    int tab[10]={0,0,0,0,0,0,0,0,0,0};
    
    
    
    int n=-1;
    cout<<"Podaj liczbe n (naturalna i nie wieksza niz 5): ";
    while(n<=0 ||n>5)
    {
        cin>>n;
    }
    cout<<"liczba n wynosi: "<<n<<endl;
    
    int liczba;
    int liczenie=0;
    int liczby_nat_parz=0;
    int proby=3;
    cout<<"Podaj "<<n <<" liczby naturalne i parzyste, mniejsze od 100: ";
    while(liczby_nat_parz<n)
    {
        cin>>liczba;
      
        
        

        if(liczba%2==0 && liczba<100 && liczba>0)
        {
            tab[liczenie]=liczba;
            liczby_nat_parz++;
        }
        
        if(liczba<0 || liczba%2!=0 || liczba>=100)
        {
            proby--;
            if(proby==0)
            {
                break;
            }
            
        }
        liczenie++;
    }
    
    cout<<"tablica przed losowaniem = {";
    for(int i=0;i<9;i++)
    {
        cout<<tab[i]<<", ";
        
    }
    cout<<tab[9]<<"}";
    cout<<endl;
    
    for(int i=0;i<10;i++)
    {
        
        if(tab[i]==0)
        {
            while(true)
            {
                int losowa=rand()%90+10;
                if(losowa %2==0)
                {
                    tab[i]=losowa;
                    break;
                }
            }
        }
        
    }
    cout<<"tablica po losowaniu = { ";
    for(int i=0;i<9;i++)
    {
        cout<<tab[i]<<", ";
        
    }
    cout<<tab[9]<<"}";
    cout<<endl;
    
    int *wsk1=&tab[0];
    int *wsk2 =&tab[9];
    
    for(int i=0; i<10;i++)
    {
        cout<<tab[i]<<",";
    }
    cout<<endl;
    
    for(int i=0; i<5;i++)
    {
        int temp= *wsk1;
        *wsk1= *wsk2;
        *wsk2=temp;
        wsk1++;
        wsk2--;
        
        for(int i=0;i<10; i++)
        {
            cout<<tab[i]<<",";
        }
        cout<<endl;

    }
    cout<<"tablica po odwroceniu = {";
    for(int i=0; i<9;i++)
    {
        cout<<tab[i]<<",";
    }
    cout<<tab[9]<<"}";
    cout<<endl;
 
    
    return 0;
}



