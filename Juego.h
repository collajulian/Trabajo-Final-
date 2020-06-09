#ifndef JUEGO_H
#define JUEGO_H


class Juego
{
    private:
        int **Tablero;  // Matriz del tablero
        int N, B, V; // Numero de filas y columnas, Bombas y Vidas



    public:
        Juego();

        Juego(int,int,int);
        int mover(char);
        int explorar(int);


};

#endif
