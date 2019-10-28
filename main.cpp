#include "funciones.h"
int main() {
    srand(time(nullptr));
    int maps[10][10][10]={
        {
            {0,1,0,1,0,0,1,0,1,1},
            {0,0,1,0,0,0,0,0,0,0},
            {0,0,0,0,1,1,0,0,1,0},
            {0,0,1,0,0,0,1,0,0,0},
            {0,1,0,0,1,1,0,0,0,1},
            {0,0,0,1,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,1,1,1},
            {1,0,1,1,0,1,0,0,0,1},
            {1,0,0,0,1,0,1,0,0,0},
            {1,1,1,0,0,1,0,0,0,1}//1
        }
        ,
        {
            {1,1,0,1,0,0,1,0,1,1},
            {0,0,0,0,0,1,0,1,0,0},
            {0,0,0,0,1,1,0,0,1,0},
            {0,0,1,0,0,1,1,0,0,0},
            {0,1,1,0,1,1,0,1,0,1},
            {0,0,0,1,0,0,0,0,0,0},
            {1,0,0,0,0,0,0,1,1,1},
            {1,0,0,1,0,1,0,0,0,1},
            {1,0,0,0,1,0,1,0,0,0},
            {1,1,1,0,0,1,0,0,0,0}//2
        }
        ,
        {
            {1,0,0,0,0,0,1,0,1,1},
            {0,0,1,0,0,0,0,0,0,0},
            {0,0,0,1,0,0,0,0,1,0},
            {0,0,1,0,0,0,1,0,0,1},
            {0,1,0,0,1,0,0,0,0,1},
            {0,0,0,1,0,0,0,1,0,0},
            {0,0,0,0,0,1,0,1,1,1},
            {1,0,1,1,0,1,0,0,0,1},
            {1,0,0,0,1,0,1,0,0,0},
            {1,1,1,0,0,1,1,1,0,1}//3
        }
        ,
        {
            {1,1,0,1,1,0,1,0,1,0},
            {0,0,1,0,1,0,0,0,0,0},
            {0,0,0,0,1,1,0,0,1,0},
            {0,0,1,0,0,0,1,0,0,0},
            {0,1,0,0,0,1,0,0,0,1},
            {0,0,1,0,0,0,0,0,0,0},
            {0,0,0,1,0,0,0,1,0,1},
            {1,0,1,1,0,1,0,0,0,1},
            {0,0,0,0,1,0,1,1,0,0},
            {1,0,1,0,0,1,0,0,0,1}//4
        }
        ,
        {
            {0,0,0,1,0,0,0,0,1,0},
            {0,0,1,0,1,0,1,0,0,0},
            {0,0,0,0,1,1,0,0,1,0},
            {0,0,1,0,0,1,1,0,0,0},
            {0,1,0,0,1,1,0,0,0,1},
            {0,0,0,1,1,0,0,0,0,0},
            {0,0,1,0,0,0,0,1,1,1},
            {1,0,1,1,0,1,0,0,0,1},
            {1,0,0,0,0,0,1,0,1,0},
            {1,0,0,0,0,1,0,0,0,1}//5
        }
        ,
        {
            {1,1,0,1,1,0,1,0,1,1},
            {1,0,1,0,0,0,0,0,0,0},
            {1,0,0,0,0,1,0,0,1,0},
            {0,0,1,0,0,0,1,0,0,0},
            {0,1,1,0,0,1,0,0,0,1},
            {0,0,0,1,0,0,0,0,0,0},
            {0,0,0,0,1,0,0,1,0,1},
            {1,0,1,0,0,1,0,0,0,1},
            {1,0,0,0,1,0,1,0,0,0},
            {1,0,1,0,0,1,0,0,0,1}//6
        }
        ,
        {
            {1,1,0,0,0,0,1,0,1,1},
            {1,0,1,0,1,0,0,0,0,0},
            {0,0,1,0,1,1,0,0,1,0},
            {0,0,1,0,1,0,1,0,1,0},
            {0,1,0,0,1,1,1,0,0,1},
            {0,1,0,1,1,0,0,0,0,0},
            {0,0,0,0,0,0,0,1,1,1},
            {1,1,0,1,0,1,0,0,1,1},
            {1,0,0,0,1,0,1,0,0,0},
            {1,0,0,0,0,1,0,0,0,1}//7
        }
        ,
        {
            {0,1,0,1,0,0,1,0,1,1},
            {0,0,1,0,0,0,0,0,0,1},
            {0,1,0,0,1,1,0,0,1,0},
            {0,0,1,0,0,0,1,0,0,0},
            {0,1,0,1,1,1,1,0,0,1},
            {0,0,0,1,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,1,1,1},
            {1,0,1,1,0,1,0,0,0,1},
            {1,0,1,0,1,0,0,0,1,0},
            {0,0,1,0,0,0,0,0,0,1}//8
        }
        ,
        {
            {0,1,0,1,0,0,1,0,1,1},
            {0,0,1,0,0,0,0,0,0,0},
            {0,0,0,1,1,1,0,0,1,0},
            {0,0,1,0,1,0,1,0,0,0},
            {0,1,0,0,1,1,0,0,0,1},
            {0,0,0,1,0,0,1,0,0,0},
            {0,0,0,0,0,0,0,0,1,1},
            {1,0,1,0,0,1,0,0,0,1},
            {1,0,0,0,1,0,1,0,0,0},
            {1,1,0,0,0,1,0,0,0,1}//9
        }
        ,
        {
            {0,0,1,1,1,1,0,1,1,1},
            {0,0,1,1,1,0,0,1,1,0},
            {0,0,1,1,0,0,0,0,1,0},
            {0,0,1,1,0,0,1,0,0,0},
            {0,0,1,1,1,1,0,1,1,1},
            {0,0,1,1,0,0,0,0,0,0},
            {0,0,1,1,0,0,0,1,1,1},
            {0,0,0,0,0,1,0,0,0,1},
            {0,0,1,1,1,0,1,0,0,0},
            {0,0,1,1,0,1,0,0,0,1}//10
        }
    };
    int num_mapa=rand()%10;
    int** pmapa = new int*[10];
    
    array_a_puntero(pmapa, maps[num_mapa]);
    
    int ix=0,iy=0,fx=0,fy=0;
    
    cout<<"\n";
    imprimir_mapa(pmapa, ix-1, iy-1, fx-1, fy-1);
    cout<<"\n";
    
    cout<<"Ingrese posición inicial: ";
    cin>>ix>>iy;
    
    cout<<"Ingrese posición final: ";
    cin>>fx>>fy;
    
    int min=abs(iy-fy)+abs(ix-fx);
    
    cout<<"\n";
    cout<<"Mínima longitud del recorrido\n(sin considerar obstáculos): "<<min<<"\n\n";
    
    imprimir_mapa(pmapa, ix-1, iy-1, fx-1, fy-1);
    cout<<"\n\n";
    
    return 0;
}
