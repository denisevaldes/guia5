#include<iostream>
#include<limits.h>  

using namespace std; 

#define vertices 9

// se busca el vertice con la distancia minima.
int pesominimo(int peso[], bool visitado[]){

    int minimo = INT_MAX;
    int indice = 0;

    for (int i = 0; i < vertices; i++){
        if (visitado[i] == false && peso[i] < minimo){

            minimo = peso[i];
            indice = i;
        }
    }

    return indice;
}

void dijkstra(int grafo[9][9], int raiz){ //#int numero_vertices

    // int array para calcular la distancia minima en cada nodo 
    int peso[vertices];
    // boolean array para marcar los nodos visitados y no visitados.
	bool visitado[vertices];

    //marcar que todos los nodos tengan el peso maximo / infinito
    fill(peso, peso+vertices, INT_MAX ) ; 
    //marcar todos los nodos como no visitados
    fill(visitado, visitado+vertices, false);

    // marcar el nodo raiz con la distancia actual de cero
    peso[raiz] = 0;  

    for(int i = 0; i<vertices; i++)                           
	{
        // peso minimo devuelve el indice del vertice que pesa menos
		int minimo=pesominimo(peso,visitado); 
        //marcamos el nodo actual como visitado 
		visitado[minimo]=true;

		for(int i = 0; i< vertices; i++)                  
		{
			// cambiar el peso minimo por el nuevo peso
			if(visitado[i] == false && grafo[minimo][i] &&
              peso[minimo] != INT_MAX && (peso[minimo]+grafo[minimo][i]) < peso[i])

				peso[i]=peso[minimo]+grafo[minimo][i];
		}
	}
    // mostrar el nodo  y el peso minimo desde la raiz
	cout<<"Vertice\t\tPeso minimo desde la raiz"<<endl;
	for(int i = 0; i<vertices; i++)                      
	{ 
		int numero_vertices = i;
        char letra=97+i; 
		cout<<letra <<"\t\t"<<peso[i]<<endl;
        if(peso[i] == INT_MAX)
            cout<<"\t\tINFINITO" << endl;
        cout<< ".........................."<< endl;
	}

}

int main(){

    int grafo[9][9]={
        
		{0, 10, 0, 2, 1, 0, 0, 0, 0},
		{0, 0, 3, 0, 0, 0, 0, 0, 0},
		{0, 4, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 4, 0, 0, 6, 0, 0},
		{0, 8, 0, 0, 0, 7, 0, 1, 0},
		{0, 2, 8, 0, 0, 0, 0, 1, 0},
        {0, 0, 0, 0, 0, 0, 0, 2, 0},
        {0, 0, 0, 9, 0, 2, 5, 0, 0},
        {0, 0, 0, 0, 0, 7, 0, 6, 0}
        };

    dijkstra(grafo,0);
    return 0;
}