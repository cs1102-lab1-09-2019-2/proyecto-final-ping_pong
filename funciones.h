#ifndef FUNCIONES
#define FUNCIONES	
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void array_a_puntero(int** pmap, int MAPA[10][10]){
    for(int i=0;i<10;i++){
        pmap[i]=new int[10];
        for(int j=0;j<10;j++){
            pmap[i][j]=MAPA[i][j];
        }
    }
}

void imprimir_mapa(int** pmap, int ix, int iy, int fx, int fy){
    cout<<setw(6);
    for(int i=1;i<=10;i++){
        cout<<'|'<<i<<'|'<<setw(2);
    }
    cout<<"\n";
    for(int i=0;i<10;i++){
        cout<<setw(3)<<i+1<<'|'<<setw(3);
        for(int j=0;j<10;j++){
            if(i==iy&&j==ix&&iy+1&&ix+1){
                cout<<'X'<<setw(4);
            }else if(i==fy&&j==fx&&fy+1&&fx+1){
                cout<<'F'<<setw(4);
            }else{
                cout<<pmap[i][j]<<setw(4);
            }
        }
        cout<<"\n";
    }
}
#endif
