#ifndef JUEGO_H
#define JUEGO_H


class Juego
{
    private:
        int **Tablero;  // Matriz del tablero
        int N, B, V, X, Y; // Numero de filas y columnas, Bombas, Vidas, Pos X, Pos y

    public:
        Juego();
        Juego(int,int,int);
        Juego(const Juego&);
        void Llenar();
        void Mostrar();
        int Mover(char);

        int explorar(int);


};

#endif

