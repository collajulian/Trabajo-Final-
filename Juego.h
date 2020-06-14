#ifndef JUEGO_H
#define JUEGO_H


class Juego
{
    private:
        int **Tablero;  // Matriz del tablero
        int N, B, V, X=0, Y=0; // Numero de filas y columnas, Bombas, Vidas, Pos X, Pos y

    public:
        Juego();
        Juego(int,int,int);
        Juego(const Juego&);
        void setvidas(int);
        int getvidas();
        void Llenar();
        void Mostrar();
        int Mover(char);
        int explorar(int);
        void MostrarFinal();
};
#endif

