/*
#include <stdio.h>
using namespace std;

Se crea una función que encuentra el vertice adyacente que tenga el peso minimo
int pesominimo(int peso[], bool marks[])
{
    int indice = 0 ; 
    int min = INT_MAX ; 
    para (int i=0; i < numero_vertices ; i++){
        si ( marks[i] && peso[i]<min){
            min = peso[i] ; 
            indice = i ; 
        }
    }
    return indice ; 
}

void dijkstra(int grafo[][], int raiz)
{
    // el arreglo peso[] tendrá el camino más corto desde la raiz
	int peso[numero_vertices]; 

    // marks[] va a ser verdadero si el vertice esta incluido en el camino más corto
	bool marks[V]; 

    // se llenan todos los espacios entre vertices con 
    //el valor maximo para empezar
    fill(peso , peso+numero_vertices , INT_MAX );

    // se llenan los espacios de bool marks como falsos.
    fill(marks, marks+numero_vertices, fasle);


	// distancia desde la raiz tiene que ser cero
	peso[raiz] = 0;

	para (int i = 0; i < numero_vertices - 1; i++) {
        // se elige el peso minimo desde los vertices que aún no son 
        // procesados
		int u = pesominimo(peso, marks);

		// el vertice procesado tiene que ser verdaderp
		mark[u] = true;

		// se actualiza el valor de los vertices adyacentes al vertice elegido.
		for (int v = 0; v < numero_vertices; v++)

        	// se tiene que cambiar el peso solo si el vertice aún no esta marcado
            // como verdadero.
			si (marks[v] es falso && grafo[u][v] && peso[u] != INT_MAX
				&& peso[u] + grafo[u][v] < peso[v])
				peso[v] = peso[u] + grafo[u][v];
	}

}


*/