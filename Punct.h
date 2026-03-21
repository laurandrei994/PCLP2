#ifndef PUNCT_H
#define PUNCT_H

    class Punct{

        private:

            int x;
            int y;

        public: 

            //Constructor cu valori implicite
            Punct();

            //Constructor cu valori Explicite
            Punct(int, int);

            //Setteri
            void setX(int);
            void setY(int);

            //Getteri
            int getX();
            int getY();

            //Afisare
            void print();

    };

    #endif