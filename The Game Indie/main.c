#include <stdio.h>
#include <stdlib.h>
#include <time.h>//Es para la funcion srand(time(NULL));
#define TAM 15//Es la cantidad de preguntas que tiene el juego.
#define LIFE 3//Son las vidas que tiene el participanete.

int main()
{
    char equipo[15];//Es para que en la tematica de futbol la persona pueda ingresar el nombre de su equipo.
    char respuesta;//Guarda la respuesta de las preguntas del juego
    int tematica;//Guarda la respuesta para ver que tematica se quiere jugar.
    int goles = 0;////Es para que en la tematica de futbol se lleve la cuenta de los goles a favor.
    int golesRival = 0;////Es para que en la tematica de futbol se lleve la cuenta de los goles del rival.
    int vidas = LIFE;//Una vez que vidas es igual a cero, se termina el juego.
    int preguntaAleatoria;//Guarda un numero aleatorio para mostrar una pregunta aleatoria.
    int contadorPuntaje = 0;//Es un contador que lleva la cuenta de los puntos.
    int contadorJuego = 0;//Es un contador que hace que termine el juego una vez que se contesten bien todas las preguntas.
    int terminaJuego = TAM;//Una vez que terminaJuego sea igual a cero se termina el juego.
    int repetidas[TAM] = {0};//Vector que guarda los numeros aleatorios que ya salieron.

    printf("\n                          %cELIGE LA CATEGORIA!\n\n",33);
    printf("                             1. Harry Potter");
    printf("\n                             2. Futbol\n\n");
    printf("\n                             3. \n\n");
    printf(" Segun las opciones, indica sobre que ctegoria te gustaria participar: ");
    scanf("%i",&tematica);


    switch (tematica)
    {
    case 1:
        printf("\n                  %cESTE JUEGO NO ES PARA CUALQUIERA!\n\n",33);
        printf(" Los dementores te estan persiguiendo, si te equivocas te atrapar%cn.\n",160);
        printf("        S%clo un verdadro fan de Harry Poter lograr%c escapar.\n",162,160);
        printf("                 %cEstar%cs a la altura del desaf%co?\n\n",168,160,161);
        printf("                        Enter para continuar.\n\n",168,160,161);
        getch();
        fflush(stdin);

        do
        {
p1:/*el programa se dirije aca si la condicion del if es cierta*/
            srand(time(NULL));
            preguntaAleatoria = 1 + rand()%(TAM);//Genera numero aleatorio

            for (int i=0; i<TAM; i++)
            {
                if (preguntaAleatoria == repetidas[i])//compara si preguntaAleatoria tiene un numero guardado que es igual a alguno que haya salido anteriormente.
                {
                    goto p1;//Sale directamente al otro p1
                }

            }

            switch (preguntaAleatoria)
            {
            case 1:

                printf("\n%cC%cal es el nombre de la quinta pel%ccula de Harry Potter?\n\n",168,163,161);
                printf("A. Harry Potter y el prisionero de Azkaban\n");
                printf("B. Harry Potter y la orden del F%cnix\n",130);
                printf("C. Harry Potter y el c%cliz de fuego\n",160);
                printf("D. Harry Potter y el misterio del pr%cncipe\n\n",161);
                printf("Ingrese su respuesta: ");
                fflush(stdin);
                respuesta = getchar();

                if (respuesta == 'b' || respuesta == 'B')
                {
                    repetidas [0] = 1;//Si se genero aleatoriamente el numero 1, este se guarda en el vector repetidas direccion 0. Y lo mismo pasa en cada case.
                    contadorPuntaje++;
                    contadorJuego++;
                    if (contadorPuntaje == 4 || contadorPuntaje == 9 || contadorPuntaje == 14)
                    {
                        printf("\n%cCorrecto, est%cs cada vez m%cs cerca de Hogwarts!\n",33,160,160);
                    }
                    else
                    {
                        printf("\n%cCorrecto!\n",33);
                    }
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cCuidado, los dementores se acercan!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    if(vidas == 1)
                    {
                        printf("Te quedan %i oportunidad, no sigas fallando.\n",vidas);
                    }
                    else
                    {
                        printf("Te quedan %i oportunidades, no sigas fallando.\n",vidas);
                    }

                }

                break;

            case 2:

                printf("\n%cC%cal es el nombre del actor que interpreta a Harry Potter?\n\n",168,163);
                printf("A. Jhon Radcliffe\n");
                printf("B. Wiliam Radcliffe\n");
                printf("C. Daniel Radcliffe\n");
                printf("D. James Radcliffe\n\n");
                printf("Ingrese su respuesta: ");
                fflush(stdin);
                respuesta = getchar();


                if (respuesta == 'c' || respuesta == 'C')
                {
                    repetidas [1] = 2;
                    contadorPuntaje++;
                    contadorJuego++;
                    if (contadorPuntaje == 4 || contadorPuntaje == 9 || contadorPuntaje == 14)
                    {
                        printf("\n%cCorrecto, est%cs cada vez m%cs cerca de Hogwarts!\n",33,160,160);
                    }
                    else
                    {
                        printf("\n%cCorrecto!\n",33);
                    }
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cCuidado, los dementores se acercan!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    if(vidas == 1)
                    {
                        printf("Te quedan %i oportunidad, no sigas fallando.\n",vidas);
                    }
                    else
                    {
                        printf("Te quedan %i oportunidades, no sigas fallando.\n",vidas);
                    }

                }

                break;

            case 3:

                printf("\n%cD%cnde se encuentra el castillo donde se film%c la saga?\n\n",168,162,162);
                printf("A. Bradford\n");
                printf("B. Mánchester\n");
                printf("C. Liverpool\n");
                printf("D. Londres\n\n");
                printf("Ingrese su respuesta: ");
                fflush(stdin);
                respuesta = getchar();


                if (respuesta == 'd' || respuesta == 'D')
                {
                    repetidas [2] = 3;
                    contadorPuntaje++;
                    contadorJuego++;
                    if (contadorPuntaje == 4 || contadorPuntaje == 9 || contadorPuntaje == 14)
                    {
                        printf("\n%cCorrecto, est%cs cada vez m%cs cerca de Hogwarts!\n",33,160,160);
                    }
                    else
                    {
                        printf("\n%cCorrecto!\n",33);
                    }
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cCuidado, los dementores se acercan!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    if(vidas == 1)
                    {
                        printf("Te quedan %i oportunidad, no sigas fallando.\n",vidas);
                    }
                    else
                    {
                        printf("Te quedan %i oportunidades, no sigas fallando.\n",vidas);
                    }

                }

                break;

            case 4:

                printf("\n%cDe qu%c color es la casa de Hufflepuff?\n\n",168,130);
                printf("A. Azul\n");
                printf("B. Rojo\n");
                printf("C. Amarillo\n");
                printf("D. Verde\n\n");
                printf("Ingrese su respuesta: ");
                fflush(stdin);
                respuesta = getchar();


                if (respuesta == 'c' || respuesta == 'C')
                {
                    repetidas [3] = 4;
                    contadorPuntaje++;
                    contadorJuego++;
                    if (contadorPuntaje == 4 || contadorPuntaje == 9 || contadorPuntaje == 14)
                    {
                        printf("\n%cCorrecto, est%cs cada vez m%cs cerca de Hogwarts!\n",33,160,160);
                    }
                    else
                    {
                        printf("\n%cCorrecto!\n",33);
                    }
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cCuidado, los dementores se acercan!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    if(vidas == 1)
                    {
                        printf("Te quedan %i oportunidad, no sigas fallando.\n",vidas);
                    }
                    else
                    {
                        printf("Te quedan %i oportunidades, no sigas fallando.\n",vidas);
                    }

                }

                break;

            case 5:

                printf("\n%cQu%c significa un calcet%cn para Dobby?\n\n",168,130,161);
                printf("A. Respeto\n");
                printf("B. Liberdad\n");
                printf("C. Miedo\n");
                printf("D. Felicidad\n\n");
                printf("Ingrese su respuesta: ");
                fflush(stdin);
                respuesta = getchar();


                if (respuesta == 'b' || respuesta == 'B')
                {
                    repetidas [4] = 5;
                    contadorPuntaje++;
                    contadorJuego++;
                    if (contadorPuntaje == 4 || contadorPuntaje == 9 || contadorPuntaje == 14)
                    {
                        printf("\n%cCorrecto, est%cs cada vez m%cs cerca de Hogwarts!\n",33,160,160);
                    }
                    else
                    {
                        printf("\n%cCorrecto!\n",33);
                    }
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cCuidado, los dementores se acercan!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    if(vidas == 1)
                    {
                        printf("Te quedan %i oportunidad, no sigas fallando.\n",vidas);
                    }
                    else
                    {
                        printf("Te quedan %i oportunidades, no sigas fallando.\n",vidas);
                    }

                }

                break;

            case 6:

                printf("\n%cDe quien es hermana Bellatrix?\n\n",168);
                printf("A. Lord Voldemord\n");
                printf("B. Albus Dombuldor\n");
                printf("C. Lucius Malfoy\n");
                printf("D. Sirius Black\n\n");
                printf("Ingrese su respuesta: ");
                fflush(stdin);
                respuesta = getchar();


                if (respuesta == 'd' || respuesta == 'D')
                {
                    repetidas [5] = 6;
                    contadorPuntaje++;
                    contadorJuego++;
                    if (contadorPuntaje == 4 || contadorPuntaje == 9 || contadorPuntaje == 14)
                    {
                        printf("\n%cCorrecto, est%cs cada vez m%cs cerca de Hogwarts!\n",33,160,160);
                    }
                    else
                    {
                        printf("\n%cCorrecto!\n",33);
                    }
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cCuidado, los dementores se acercan!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    if(vidas == 1)
                    {
                        printf("Te quedan %i oportunidad, no sigas fallando.\n",vidas);
                    }
                    else
                    {
                        printf("Te quedan %i oportunidades, no sigas fallando.\n",vidas);
                    }

                }

                break;

            case 7:

                printf("\n%cCual es el nombre real de Lord Voldemort?\n\n",168);
                printf("A. Tom Riddle\n");
                printf("B. James Riddle\n");
                printf("C. Ron Riddle\n");
                printf("D. Daniel Riddle\n\n");
                printf("Ingrese su respuesta: ");
                fflush(stdin);
                respuesta = getchar();


                if (respuesta == 'a' || respuesta == 'A')
                {
                    repetidas [6] = 7;
                    contadorPuntaje++;
                    contadorJuego++;
                    if (contadorPuntaje == 4 || contadorPuntaje == 9 || contadorPuntaje == 14)
                    {
                        printf("\n%cCorrecto, est%cs cada vez m%cs cerca de Hogwarts!\n",33,160,160);
                    }
                    else
                    {
                        printf("\n%cCorrecto!\n",33);
                    }
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cCuidado, los dementores se acercan!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    if(vidas == 1)
                    {
                        printf("Te quedan %i oportunidad, no sigas fallando.\n",vidas);
                    }
                    else
                    {
                        printf("Te quedan %i oportunidades, no sigas fallando.\n",vidas);
                    }

                }

                break;

            case 8:

                printf("\n%cComo es el nombre del gato de Hermione Gringer?\n\n",168,161);
                printf("A. Norris\n");
                printf("B. Minerva\n");
                printf("C. Crookshanks\n");
                printf("D. Godric\n\n");
                printf("Ingrese su respuesta: ");
                fflush(stdin);
                respuesta = getchar();


                if (respuesta == 'c' || respuesta == 'C')
                {
                    repetidas [7] = 8;
                    contadorPuntaje++;
                    contadorJuego++;
                    if (contadorPuntaje == 4 || contadorPuntaje == 9 || contadorPuntaje == 14)
                    {
                        printf("\n%cCorrecto, est%cs cada vez m%cs cerca de Hogwarts!\n",33,160,160);
                    }
                    else
                    {
                        printf("\n%cCorrecto!\n",33);
                    }
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cCuidado, los dementores se acercan!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    if(vidas == 1)
                    {
                        printf("Te quedan %i oportunidad, no sigas fallando.\n",vidas);
                    }
                    else
                    {
                        printf("Te quedan %i oportunidades, no sigas fallando.\n",vidas);
                    }

                }

                break;

            case 9:

                printf("\n%cEn la tercera pel%ccula de la saga, con qu%c golpea la t%ca al primo de Harry?\n\n",168,161,130,161);
                printf("A. Dos botones\n");
                printf("B. Collar\n");
                printf("C. Cintur%cn\n",162);
                printf("D. La mano\n\n");
                printf("Ingrese su respuesta: ");
                fflush(stdin);
                respuesta = getchar();


                if (respuesta == 'a' || respuesta == 'A')
                {
                    printf("\n%cCorrecto, est%cs cada vez m%cs cerca de Hogwarts!\n",33,160,160);
                    fflush(stdin);
                    repetidas [8] = 9;
                    contadorPuntaje++;
                    contadorJuego++;
                    if (contadorPuntaje == 4 || contadorPuntaje == 9 || contadorPuntaje == 14)
                    {
                        printf("\n%cCorrecto, est%cs cada vez m%cs cerca de Hogwarts!\n",33,160,160);
                    }
                    else
                    {
                        printf("\n%cCorrecto!\n",33);
                    }
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cCuidado, los dementores se acercan!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    if(vidas == 1)
                    {
                        printf("Te quedan %i oportunidad, no sigas fallando.\n",vidas);
                    }
                    else
                    {
                        printf("Te quedan %i oportunidades, no sigas fallando.\n",vidas);
                    }

                }

                break;

            case 10:

                printf("\n%cCu%cl es el nombre de los hermanos gemelos de Ron?\n\n",168,160);
                printf("A. Oliver y George\n");
                printf("B. George y Fred\n");
                printf("C. Fred y Oliver\n");
                printf("D. Oliver y Dean\n\n");
                printf("Ingrese su respuesta: ");
                fflush(stdin);
                respuesta = getchar();


                if (respuesta == 'b' || respuesta == 'B')
                {
                    repetidas [9] = 10;
                    contadorPuntaje++;
                    contadorJuego++;
                    if (contadorPuntaje == 4 || contadorPuntaje == 9 || contadorPuntaje == 14)
                    {
                        printf("\n%cCorrecto, est%cs cada vez m%cs cerca de Hogwarts!\n",33,160,160);
                    }
                    else
                    {
                        printf("\n%cCorrecto!\n",33);
                    }
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cCuidado, los dementores se acercan!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    if(vidas == 1)
                    {
                        printf("Te quedan %i oportunidad, no sigas fallando.\n",vidas);
                    }
                    else
                    {
                        printf("Te quedan %i oportunidades, no sigas fallando.\n",vidas);
                    }

                }

                break;

            case 11:

                printf("\n%cQui%cn fue el fundador de la casa de Ravenclaw?\n\n",168,130);
                printf("A. Rubeus Ravenclaw\n");
                printf("B. Ronald Ravenclaw\n");
                printf("C. Rowena Ravenclaw\n");
                printf("D. Roxanne Ravenclaw\n\n");
                printf("Ingrese su respuesta: ");
                fflush(stdin);
                respuesta = getchar();


                if (respuesta == 'c' || respuesta == 'C')
                {
                    repetidas [10] = 11;
                    contadorPuntaje++;
                    contadorJuego++;
                    if (contadorPuntaje == 4 || contadorPuntaje == 9 || contadorPuntaje == 14)
                    {
                        printf("\n%cCorrecto, est%cs cada vez m%cs cerca de Hogwarts!\n",33,160,160);
                    }
                    else
                    {
                        printf("\n%cCorrecto!\n",33);
                    }
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cCuidado, los dementores se acercan!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    if(vidas == 1)
                    {
                        printf("Te quedan %i oportunidad, no sigas fallando.\n",vidas);
                    }
                    else
                    {
                        printf("Te quedan %i oportunidades, no sigas fallando.\n",vidas);
                    }

                }

                break;

            case 12:

                printf("\n%cEn qu%c mes del a%co naci%c Harry Potter?\n\n",168,130,164,162);
                printf("A. Julio\n");
                printf("B. Agosto\n");
                printf("C. Mayo\n");
                printf("D. Junio\n\n");
                printf("Ingrese su respuesta: ");
                fflush(stdin);
                respuesta = getchar();


                if (respuesta == 'a' || respuesta == 'A')
                {
                    repetidas [11] = 12;
                    contadorPuntaje++;
                    contadorJuego++;
                    if (contadorPuntaje == 4 || contadorPuntaje == 9 || contadorPuntaje == 14)
                    {
                        printf("\n%cCorrecto, est%cs cada vez m%cs cerca de Hogwarts!\n",33,160,160);
                    }
                    else
                    {
                        printf("\n%cCorrecto!\n",33);
                    }
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cCuidado, los dementores se acercan!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    if(vidas == 1)
                    {
                        printf("Te quedan %i oportunidad, no sigas fallando.\n",vidas);
                    }
                    else
                    {
                        printf("Te quedan %i oportunidades, no sigas fallando.\n",vidas);
                    }

                }

                break;

            case 13:

                printf("\n%cDonde encuentra Harry la piedra de la resurrecci%cn?\n\n",168,162);
                printf("A. En el castillo de Hogwarts\n");
                printf("B. Siempre la tuvo Voldemort\n");
                printf("C. En la tumba de Dumbledore\n");
                printf("D. En la snitch dorada\n\n");
                printf("Ingrese su respuesta: ");
                fflush(stdin);
                respuesta = getchar();


                if (respuesta == 'd' || respuesta == 'D')
                {
                    repetidas [12] = 13;
                    contadorPuntaje++;
                    contadorJuego++;
                    if (contadorPuntaje == 4 || contadorPuntaje == 9 || contadorPuntaje == 14)
                    {
                        printf("\n%cCorrecto, est%cs cada vez m%cs cerca de Hogwarts!\n",33,160,160);
                    }
                    else
                    {
                        printf("\n%cCorrecto!\n",33);
                    }
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cCuidado, los dementores se acercan!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    if(vidas == 1)
                    {
                        printf("Te quedan %i oportunidad, no sigas fallando.\n",vidas);
                    }
                    else
                    {
                        printf("Te quedan %i oportunidades, no sigas fallando.\n",vidas);
                    }

                }

                break;

            case 14:

                printf("\n%cA qui%cn pertenec%ca la varita de sauco por %cltima vez?\n\n",168,130,161,163);
                printf("A. Lord Voldemort\n");
                printf("B. Harry Potter\n");
                printf("C. Draco Malfoy\n");
                printf("D. Albus Dumbledore\n\n");
                printf("Ingrese su respuesta: ");
                fflush(stdin);
                respuesta = getchar();


                if (respuesta == 'b' || respuesta == 'B')
                {
                    repetidas [13] = 14;
                    contadorPuntaje++;
                    contadorJuego++;
                    if (contadorPuntaje == 4 || contadorPuntaje == 9 || contadorPuntaje == 14)
                    {
                        printf("\n%cCorrecto, est%cs cada vez m%cs cerca de Hogwarts!\n",33,160,160);
                    }
                    else
                    {
                        printf("\n%cCorrecto!\n",33);
                    }
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cCuidado, los dementores se acercan!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    if(vidas == 1)
                    {
                        printf("Te quedan %i oportunidad, no sigas fallando.\n",vidas);
                    }
                    else
                    {
                        printf("Te quedan %i oportunidades, no sigas fallando.\n",vidas);
                    }

                }

                break;

            case 15:

                printf("\n%cQu%c pas%c con la varita de sauco al final de la saga?\n\n",168,130,162);
                printf("A. Desaparecio\n");
                printf("B. Se la queda Harry\n");
                printf("C. La rompieron\n");
                printf("D. Se la queda Lord Voldemort\n\n");
                printf("Ingrese su respuesta: ");
                fflush(stdin);
                respuesta = getchar();


                if (respuesta == 'c' || respuesta == 'C')
                {
                    repetidas [14] = 15;
                    contadorPuntaje++;
                    contadorJuego++;
                    if (contadorPuntaje == 4 || contadorPuntaje == 9 || contadorPuntaje == 14)
                    {
                        printf("\n%cCorrecto, est%cs cada vez m%cs cerca de Hogwarts!\n",33,160,160);
                    }
                    else
                    {
                        printf("\n%cCorrecto!\n",33);
                    }

                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cCuidado, los dementores se acercan!\n",33,33);
                    vidas--;
                    if(vidas == 1)
                    {
                        printf("Te quedan %i oportunidad, no sigas fallando.\n",vidas);
                    }
                    else
                    {
                        printf("Te quedan %i oportunidades, no sigas fallando.\n",vidas);
                    }

                }

                break;
            }
        }
        while (vidas > 0 && contadorJuego != terminaJuego);

        if (contadorPuntaje == TAM)
        {
            printf("\n\n\n                     %cLLEGASTE A SALVO A HOGWARTS!",33);
            printf("\n\n\n                 Los dementores no pudieron alcanzarte");
            printf("\n            Felicitaciones, sos un gran fan de Harry Potter.");
        }
        else
        {
            printf("\n\n\n                     %cNO ESTUVISTE A LA ALTURA!",33);
            printf("\n     Los dementores no tubieron piedad, mejor suerte la proxima.");
        }

        printf("\n\n                      El total de puntos es: %i/%i.\n", contadorPuntaje, TAM);
        getch();

        break;

    case 2:

        printf(" Ingresa el club con el que te gustaria jugar: ");
        scanf("%s",&equipo);

        printf("\n\n                       %cNO ABANDONES A TU EQUIPO!\n\n",33);
        printf(" %s con mucho esfuerzo lleg%c a la final, no es momento de bajar los brazos.\n",equipo,162);
        printf("           Si de verdad sabes sobre futbol este partido es tuyo.\n",162,160);
        printf("                Vamos a ver si est%cs a la altura del desaf%co.\n\n",160,161);
        getch();
        fflush(stdin);

        do
        {
p2:/*el programa se dirije aca si la condicion del if es cierta*/
            srand(time(NULL));
            preguntaAleatoria = 1 + rand()%(TAM);//Genera numero aleatorio

            for (int i=0; i<TAM; i++)
            {
                if (preguntaAleatoria == repetidas[i])//compara si preguntaAleatoria tiene un numero guardado que es igual a alguno que haya salido anteriormente.
                {
                    goto p2;//Sale directamente al otro p1
                }

            }

            switch (preguntaAleatoria)
            {
            case 1:

                printf("\n%cQu%c futbolista jug%c en barcelona, inter y ajax?\n\n",168,130,162);
                printf("A. Ronaldo Nazario\n");
                printf("B. Zlatan Ibrahimovic\n");
                printf("C. Ronaldinho Gaucho\n");
                printf("D. Esteban Cambiasso\n\n");
                printf("Ingrese su respuesta: ");
                respuesta = getchar();

                if (respuesta == 'b' || respuesta == 'B')
                {
                    printf("\n%cCorrecto, est%cs cada vez m%cs cerca de la victoria!\n",33,160,160);
                    fflush(stdin);
                    repetidas [0] = 1;
                    if (contadorPuntaje == 4 || contadorPuntaje == 9 || contadorPuntaje == 14)
                    {
                        printf("%cTu equipo meti%c un gol!\n",33,162);
                        goles++;
                    }
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cPor tu error el quipo contrario metio un gol!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    golesRival++;
                    if(goles == golesRival)
                    {
                        printf("%cEstan empatados, no sigas fallando!\n",33);
                    }
                }
                printf("El partido va %i a %i.\n",goles,golesRival);

                break;

            case 2:

                printf("\n%cCu%cntas copas libertadores tiene actualmente el Club Atl%ctico Boca Junior?\n\n",168,160,130);
                printf("A. 4 copas\n");
                printf("B. 5 copas\n");
                printf("C. 6 copas\n");
                printf("D. 7 copas\n\n");
                printf("Ingrese su respuesta: ");
                respuesta = getchar();


                if (respuesta == 'c' || respuesta == 'C')
                {
                    printf("\n%cCorrecto, est%cs cada vez m%cs cerca de la victoria!\n",33,160,160);
                    fflush(stdin);
                    repetidas [1] = 2;
                    if (contadorPuntaje == 4 || contadorPuntaje == 9 || contadorPuntaje == 14)
                    {
                        printf("%cTu equipo meti%c un gol!\n",33,162);
                        goles++;
                    }
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cPor tu error el quipo contrario metio un gol!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    golesRival++;
                    if(goles == golesRival)
                    {
                        printf("%cEstan empatados, no sigas fallando!\n",33);
                    }
                }
                printf("El partido va %i a %i.\n",goles,golesRival);

                break;

            case 3:

                printf("\n%cEn qu%c club jug%c Franco Armani antes de ir a River?\n\n",168,130,162);
                printf("A. Deportivo Cali\n");
                printf("B. Junior de Barranquilla\n");
                printf("C. Deportes Tolima\n");
                printf("D. Atl%ctico Nacional\n\n",130);
                printf("Ingrese su respuesta: ");
                respuesta = getchar();


                if (respuesta == 'd' || respuesta == 'D')
                {
                    printf("\n%cCorrecto, est%cs cada vez m%cs cerca de la victoria!\n",33,160,160);
                    fflush(stdin);
                    repetidas [2] = 3;
                    if (contadorPuntaje == 4 || contadorPuntaje == 9 || contadorPuntaje == 14)
                    {
                        printf("%cTu equipo meti%c un gol!\n",33,162);
                        goles++;
                    }
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cPor tu error el quipo contrario metio un gol!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    golesRival++;
                    if(goles == golesRival)
                    {
                        printf("%cEstan empatados, no sigas fallando!\n",33);
                    }
                }
                printf("El partido va %i a %i.\n",goles,golesRival);

                break;

            case 4:

                printf("\n%cCu%cntas finales del mundo jug%c Maradona?\n\n",168,160,162);
                printf("A. Ninguna\n");
                printf("B. 1 final\n");
                printf("C. 2 finales\n");
                printf("D. 3 final\n\n");
                printf("Ingrese su respuesta: ");
                respuesta = getchar();


                if (respuesta == 'c' || respuesta == 'C')
                {
                    printf("\n%cCorrecto, est%cs cada vez m%cs cerca de la victoria!\n",33,160,160);
                    fflush(stdin);
                    repetidas [3] = 4;
                    if (contadorPuntaje == 4 || contadorPuntaje == 9 || contadorPuntaje == 14)
                    {
                        printf("%cTu equipo meti%c un gol!\n",33,162);
                        goles++;
                    }
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cPor tu error el quipo contrario metio un gol!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    golesRival++;
                    if(goles == golesRival)
                    {
                        printf("%cEstan empatados, no sigas fallando!\n",33);
                    }
                }
                printf("El partido va %i a %i.\n",goles,golesRival);

                break;

            case 5:

                printf("\n%c A qui%cn expulsaron, en el mundial 2006, por dar un cabezazo?\n\n",168,130);
                printf("A. Thomas M%cller\n",129);
                printf("B. Zinedine Zidane\n");
                printf("C. David Beckham\n");
                printf("D. Gabriel Heinze\n\n");
                printf("Ingrese su respuesta: ");
                respuesta = getchar();


                if (respuesta == 'b' || respuesta == 'B')
                {
                    printf("\n%cCorrecto, est%cs cada vez m%cs cerca de la victoria!\n",33,160,160);
                    fflush(stdin);
                    repetidas [4] = 5;
                    if (contadorPuntaje == 4 || contadorPuntaje == 9 || contadorPuntaje == 14)
                    {
                        printf("%cTu equipo meti%c un gol!\n",33,162);
                        goles++;
                    }
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cPor tu error el quipo contrario metio un gol!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    golesRival++;
                    if(goles == golesRival)
                    {
                        printf("%cEstan empatados, no sigas fallando!\n",33);
                    }
                }
                printf("El partido va %i a %i.\n",goles,golesRival);

                break;

            case 6:

                printf("\n%cQui%cn obtuvo el r%ccord de valla invicta y en el mismo partido le convirtieron un gol?\n\n",168,130,130);
                printf("A. Sergio Romero\n");
                printf("B. Roberto Abbondanzieri\n");
                printf("C. Agustín Ori%cn\n",162);
                printf("D. Sebasti%cn Saja\n\n",160);
                printf("Ingrese su respuesta: ");
                respuesta = getchar();


                if (respuesta == 'd' || respuesta == 'D')
                {
                    printf("\n%cCorrecto, est%cs cada vez m%cs cerca de la victoria!\n",33,160,160);
                    fflush(stdin);
                    repetidas [5] = 6;
                    if (contadorPuntaje == 4 || contadorPuntaje == 9 || contadorPuntaje == 14)
                    {
                        printf("%cTu equipo meti%c un gol!\n",33,162);
                        goles++;
                    }
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cPor tu error el quipo contrario metio un gol!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    golesRival++;
                    if(goles == golesRival)
                    {
                        printf("%cEstan empatados, no sigas fallando!\n",33);
                    }
                }
                printf("El partido va %i a %i.\n",goles,golesRival);

                break;

            case 7:

                printf("\n%c?\n\n",168);
                printf("A. Tom Riddle\n");
                printf("B. James Riddle\n");
                printf("C. Ron Riddle\n");
                printf("D. Daniel Riddle\n\n");
                printf("Ingrese su respuesta: ");
                respuesta = getchar();


                if (respuesta == 'a' || respuesta == 'A')
                {
                    printf("\n%cCorrecto, est%cs cada vez m%cs cerca de la victoria!\n",33,160,160);
                    fflush(stdin);
                    repetidas [6] = 7;
                    if (contadorPuntaje == 4 || contadorPuntaje == 9 || contadorPuntaje == 14)
                    {
                        printf("%cTu equipo meti%c un gol!\n",33,162);
                        goles++;
                    }
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cPor tu error el quipo contrario metio un gol!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    golesRival++;
                    if(goles == golesRival)
                    {
                        printf("%cEstan empatados, no sigas fallando!\n",33);
                    }
                }
                printf("El partido va %i a %i.\n",goles,golesRival);

                break;

            case 8:

                printf("\n%cComo es el nombre del gato de Hermione Gringer?\n\n",168,161);
                printf("A. Norris\n");
                printf("B. Minerva\n");
                printf("C. Crookshanks\n");
                printf("D. Godric\n\n");
                printf("Ingrese su respuesta: ");
                respuesta = getchar();


                if (respuesta == 'c' || respuesta == 'C')
                {
                    printf("\n%cCorrecto, est%cs cada vez m%cs cerca de la victoria!\n",33,160,160);
                    fflush(stdin);
                    repetidas [7] = 8;
                    if (contadorPuntaje == 4 || contadorPuntaje == 9 || contadorPuntaje == 14)
                    {
                        printf("%cTu equipo meti%c un gol!\n",33,162);
                        goles++;
                    }
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cPor tu error el quipo contrario metio un gol!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    golesRival++;
                    if(goles == golesRival)
                    {
                        printf("%cEstan empatados, no sigas fallando!\n",33);
                    }
                }
                printf("El partido va %i a %i.\n",goles,golesRival);

                break;

            case 9:

                printf("\n%cEn la tercera pel%ccula de la saga, con qu%c golpea la t%ca al primo de Harry?\n\n",168,161,130,161);
                printf("A. Dos botones\n");
                printf("B. Collar\n");
                printf("C. Cintur%cn\n",162);
                printf("D. La mano\n\n");
                printf("Ingrese su respuesta: ");
                respuesta = getchar();


                if (respuesta == 'a' || respuesta == 'A')
                {
                    printf("\n%cCorrecto, est%cs cada vez m%cs cerca de la victoria!\n",33,160,160);
                    fflush(stdin);
                    repetidas [8] = 9;
                    if (contadorPuntaje == 4 || contadorPuntaje == 9 || contadorPuntaje == 14)
                    {
                        printf("%cTu equipo meti%c un gol!\n",33,162);
                        goles++;
                    }
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cPor tu error el quipo contrario metio un gol!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    golesRival++;
                    if(goles == golesRival)
                    {
                        printf("%cEstan empatados, no sigas fallando!\n",33);
                    }
                }
                printf("El partido va %i a %i.\n",goles,golesRival);

                break;

            case 10:

                printf("\n%cCu%cl es el nombre de los hermanos gemelos de Ron?\n\n",168,160);
                printf("A. Oliver y George\n");
                printf("B. George y Fred\n");
                printf("C. Fred y Oliver\n");
                printf("D. Oliver y Dean\n\n");
                printf("Ingrese su respuesta: ");
                respuesta = getchar();


                if (respuesta == 'b' || respuesta == 'B')
                {
                    printf("\n%cCorrecto, est%cs cada vez m%cs cerca de la victoria!\n",33,160,160);
                    fflush(stdin);
                    repetidas [9] = 10;
                    if (contadorPuntaje == 4 || contadorPuntaje == 9 || contadorPuntaje == 14)
                    {
                        printf("%cTu equipo meti%c un gol!\n",33,162);
                        goles++;
                    }
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cPor tu error el quipo contrario metio un gol!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    golesRival++;
                    if(goles == golesRival)
                    {
                        printf("%cEstan empatados, no sigas fallando!\n",33);
                    }
                }
                printf("El partido va %i a %i.\n",goles,golesRival);

                break;

            case 11:

                printf("\n%cQui%cn fue el fundador de la casa de Ravenclaw?\n\n",168,130);
                printf("A. Rubeus Ravenclaw\n");
                printf("B. Ronald Ravenclaw\n");
                printf("C. Rowena Ravenclaw\n");
                printf("D. Roxanne Ravenclaw\n\n");
                printf("Ingrese su respuesta: ");
                respuesta = getchar();


                if (respuesta == 'c' || respuesta == 'C')
                {
                    printf("\n%cCorrecto, est%cs cada vez m%cs cerca de la victoria!\n",33,160,160);
                    fflush(stdin);
                    repetidas [10] = 11;
                    if (contadorPuntaje == 4 || contadorPuntaje == 9 || contadorPuntaje == 14)
                    {
                        printf("%cTu equipo meti%c un gol!\n",33,162);
                        goles++;
                    }
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cPor tu error el quipo contrario metio un gol!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    golesRival++;
                    if(goles == golesRival)
                    {
                        printf("%cEstan empatados, no sigas fallando!\n",33);
                    }
                }
                printf("El partido va %i a %i.\n",goles,golesRival);

                break;

            case 12:

                printf("\n%cEn qu%c mes del a%co naci%c Harry Potter?\n\n",168,130,164,162);
                printf("A. Julio\n");
                printf("B. Agosto\n");
                printf("C. Mayo\n");
                printf("D. Junio\n\n");
                printf("Ingrese su respuesta: ");
                respuesta = getchar();


                if (respuesta == 'a' || respuesta == 'A')
                {
                    printf("\n%cCorrecto, est%cs cada vez m%cs cerca de la victoria!\n",33,160,160);
                    fflush(stdin);
                    repetidas [11] = 12;
                    if (contadorPuntaje == 4 || contadorPuntaje == 9 || contadorPuntaje == 14)
                    {
                        printf("%cTu equipo meti%c un gol!\n",33,162);
                        goles++;
                    }
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cPor tu error el quipo contrario metio un gol!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    golesRival++;
                    if(goles == golesRival)
                    {
                        printf("%cEstan empatados, no sigas fallando!\n",33);
                    }
                }
                printf("El partido va %i a %i.\n",goles,golesRival);

                break;

            case 13:

                printf("\n%cDonde encuentra Harry la piedra de la resurrecci%cn?\n\n",168,162);
                printf("A. En el castillo de Hogwarts\n");
                printf("B. Siempre la tuvo Voldemort\n");
                printf("C. En la tumba de Dumbledore\n");
                printf("D. En la snitch dorada\n\n");
                printf("Ingrese su respuesta: ");
                respuesta = getchar();


                if (respuesta == 'd' || respuesta == 'D')
                {
                    printf("\n%cCorrecto, est%cs cada vez m%cs cerca de la victoria!\n",33,160,160);
                    fflush(stdin);
                    repetidas [12] = 13;
                    if (contadorPuntaje == 4 || contadorPuntaje == 9 || contadorPuntaje == 14)
                    {
                        printf("%cTu equipo meti%c un gol!\n",33,162);
                        goles++;
                    }
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cPor tu error el quipo contrario metio un gol!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    golesRival++;
                    if(goles == golesRival)
                    {
                        printf("%cEstan empatados, no sigas fallando!\n",33);
                    }
                }
                printf("El partido va %i a %i.\n",goles,golesRival);
                break;

            case 14:

                printf("\n%cA qui%cn pertenec%ca la varita de sauco por %cltima vez?\n\n",168,130,161,163);
                printf("A. Lord Voldemort\n");
                printf("B. Harry Potter\n");
                printf("C. Draco Malfoy\n");
                printf("D. Albus Dumbledore\n\n");
                printf("Ingrese su respuesta: ");
                respuesta = getchar();


                if (respuesta == 'b' || respuesta == 'B')
                {
                    printf("\n%cCorrecto, est%cs cada vez m%cs cerca de la victoria!\n",33,160,160);
                    fflush(stdin);
                    repetidas [13] = 14;
                    if (contadorPuntaje == 4 || contadorPuntaje == 9 || contadorPuntaje == 14)
                    {
                        printf("%cTu equipo meti%c un gol!\n",33,162);
                        goles++;
                    }
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cPor tu error el quipo contrario metio un gol!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    golesRival++;
                    if(goles == golesRival)
                    {
                        printf("%cEstan empatados, no sigas fallando!\n",33);
                    }
                }
                printf("El partido va %i a %i.\n",goles,golesRival);

                break;

            case 15:

                printf("\n%cQu%c pas%c con la varita de sauco al final de la saga?\n\n",168,130,162);
                printf("A. Desaparecio\n");
                printf("B. Se la queda Harry\n");
                printf("C. La rompieron\n");
                printf("D. Se la queda Lord Voldemort\n\n");
                printf("Ingrese su respuesta: ");
                respuesta = getchar();


                if (respuesta == 'c' || respuesta == 'C')
                {
                    printf("\n%cCorrecto, est%cs cada vez m%cs cerca de la victoria!\n",33,160,160);
                    fflush(stdin);
                    repetidas [14] = 15;
                    if (contadorPuntaje == 4 || contadorPuntaje == 9 || contadorPuntaje == 14)
                    {
                        printf("%cTu equipo meti%c un gol!\n",33,162);
                        goles++;
                    }
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cCuidado, los dementores se acercan!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    golesRival++;
                    if(goles == golesRival)
                    {
                        printf("%cEstan empatados, no sigas fallando!\n",33);
                    }
                }
                printf("El partido va %i a %i.\n",goles,golesRival);

                break;
            }

            contadorPuntaje++;
            contadorJuego++;

        }
        while (vidas > 0 && contadorJuego < terminaJuego);

        if (contadorPuntaje == TAM)
        {
            printf("\n\n\n                          %cFIN DEL PARTIDO!",33);
            printf("\n\n\n                   %cMUY BIEN, APLASTASTE A TU RIVAL!",33);
            printf("\n               Felicitaciones, %s es el gran camp%con.",equipo,130);
            getch();

            break;
        }
        else
        {
            printf("\n\n\n                     %cNO ESTUVISTE A LA ALTURA!",33);
            printf("\n           %s qued%c segundo, los fans est%cn muy decepcionados.");
            printf("\n          Mejor dedicate a otra cosa, el futbol no es lo tuyo.");
            getch();

            break;
        }

        printf("\n\n                     El total de puntos es: %i/%i.\n", contadorPuntaje, TAM);
        getch();

        break;

    case 3:
        printf("\n                  %cESTE JUEGO NO ES PARA CUALQUIERA!\n\n",33);
        printf(" Los dementores te estan persiguiendo, si te equivocas te atrapar%cn.\n",160);
        printf("        S%clo un verdadro fan de Harry Poter lograr%c escapar.\n",162,160);
        printf("                 %cEstar%cs a la altura del desaf%co?\n\n",168,160,161);
        getch();
        fflush(stdin);

        do
        {
p3:/*el programa se dirije aca si la condicion del if es cierta*/
            srand(time(NULL));
            preguntaAleatoria = 1 + rand()%(TAM);//Genera numero aleatorio

            for (int i=0; i<TAM; i++)
            {
                if (preguntaAleatoria == repetidas[i])//compara si preguntaAleatoria tiene un numero guardado que es igual a alguno que haya salido anteriormente.
                {
                    goto p3;//Sale directamente al otro p3
                }

            }

            switch (preguntaAleatoria)
            {
            case 1:

                printf("\n%cC%cal es el nombre de la quinta pel%ccula de Harry Potter?\n\n",168,163,161);
                printf("A. Harry Potter y el prisionero de Azkaban\n");
                printf("B. Harry Potter y la orden del F%cnix\n",130);
                printf("C. Harry Potter y el c%cliz de fuego\n",160);
                printf("D. Harry Potter y el misterio del pr%cncipe\n\n",161);
                printf("Ingrese su respuesta: ");
                respuesta = getchar();

                if (respuesta == 'b' || respuesta == 'B')
                {
                    printf("\n%cCorrecto, est%cs cada vez m%cs cerca de Hogwarts!\n",33,160,160);
                    fflush(stdin);
                    repetidas [0] = 1;//Si se genero aleatoriamente el numero 1, este se guarda en el vector repetidas direccion 0. Y lo mismo pasa en cada case.
                    contadorPuntaje++;
                    contadorJuego++;
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cCuidado, los dementores se acercan!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    if(vidas == 1)
                    {
                        printf("Te quedan %i oportunidad, no sigas fallando.\n",vidas);
                    }
                    else
                    {
                        printf("Te quedan %i oportunidades, no sigas fallando.\n",vidas);
                    }

                }

                break;

            case 2:

                printf("\n%cC%cal es el nombre del actor que interpreta a Harry Potter?\n\n",168,163);
                printf("A. Jhon Radcliffe\n");
                printf("B. Wiliam Radcliffe\n");
                printf("C. Daniel Radcliffe\n");
                printf("D. James Radcliffe\n\n");
                printf("Ingrese su respuesta: ");
                respuesta = getchar();


                if (respuesta == 'c' || respuesta == 'C')
                {
                    printf("\n%cCorrecto, est%cs cada vez m%cs cerca de Hogwarts!\n",33,160,160);
                    fflush(stdin);
                    repetidas [1] = 2;
                    contadorPuntaje++;
                    contadorJuego++;
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cCuidado, los dementores se acercan!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    if(vidas == 1)
                    {
                        printf("Te quedan %i oportunidad, no sigas fallando.\n",vidas);
                    }
                    else
                    {
                        printf("Te quedan %i oportunidades, no sigas fallando.\n",vidas);
                    }

                }

                break;

            case 3:

                printf("\n%cD%cnde se encuentra el castillo donde se film%c la saga?\n\n",168,162,162);
                printf("A. Bradford\n");
                printf("B. Mánchester\n");
                printf("C. Liverpool\n");
                printf("D. Londres\n\n");
                printf("Ingrese su respuesta: ");
                respuesta = getchar();


                if (respuesta == 'd' || respuesta == 'D')
                {
                    printf("\n%cCorrecto, est%cs cada vez m%cs cerca de Hogwarts!\n",33,160,160);
                    fflush(stdin);
                    repetidas [2] = 3;
                    contadorPuntaje++;
                    contadorJuego++;
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cCuidado, los dementores se acercan!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    if(vidas == 1)
                    {
                        printf("Te quedan %i oportunidad, no sigas fallando.\n",vidas);
                    }
                    else
                    {
                        printf("Te quedan %i oportunidades, no sigas fallando.\n",vidas);
                    }

                }

                break;

            case 4:

                printf("\n%cDe qu%c color es la casa de Hufflepuff?\n\n",168,130);
                printf("A. Azul\n");
                printf("B. Rojo\n");
                printf("C. Amarillo\n");
                printf("D. Verde\n\n");
                printf("Ingrese su respuesta: ");
                respuesta = getchar();


                if (respuesta == 'c' || respuesta == 'C')
                {
                    printf("\n%cCorrecto, est%cs cada vez m%cs cerca de Hogwarts!\n",33,160,160);
                    fflush(stdin);
                    repetidas [3] = 4;
                    contadorPuntaje++;
                    contadorJuego++;
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cCuidado, los dementores se acercan!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    if(vidas == 1)
                    {
                        printf("Te quedan %i oportunidad, no sigas fallando.\n",vidas);
                    }
                    else
                    {
                        printf("Te quedan %i oportunidades, no sigas fallando.\n",vidas);
                    }

                }

                break;

            case 5:

                printf("\n%cQu%c significa un calcet%cn para Dobby?\n\n",168,130,161);
                printf("A. Respeto\n");
                printf("B. Liberdad\n");
                printf("C. Miedo\n");
                printf("D. Felicidad\n\n");
                printf("Ingrese su respuesta: ");
                respuesta = getchar();


                if (respuesta == 'b' || respuesta == 'B')
                {
                    printf("\n%cCorrecto, est%cs cada vez m%cs cerca de Hogwarts!\n",33,160,160);
                    fflush(stdin);
                    repetidas [4] = 5;
                    contadorPuntaje++;
                    contadorJuego++;
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cCuidado, los dementores se acercan!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    if(vidas == 1)
                    {
                        printf("Te quedan %i oportunidad, no sigas fallando.\n",vidas);
                    }
                    else
                    {
                        printf("Te quedan %i oportunidades, no sigas fallando.\n",vidas);
                    }

                }

                break;

            case 6:

                printf("\n%cDe quien es hermana Bellatrix?\n\n",168);
                printf("A. Lord Voldemord\n");
                printf("B. Albus Dombuldor\n");
                printf("C. Lucius Malfoy\n");
                printf("D. Sirius Black\n\n");
                printf("Ingrese su respuesta: ");
                respuesta = getchar();


                if (respuesta == 'd' || respuesta == 'D')
                {
                    printf("\n%cCorrecto, est%cs cada vez m%cs cerca de Hogwarts!\n",33,160,160);
                    fflush(stdin);
                    repetidas [5] = 6;
                    contadorPuntaje++;
                    contadorJuego++;
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cCuidado, los dementores se acercan!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    if(vidas == 1)
                    {
                        printf("Te quedan %i oportunidad, no sigas fallando.\n",vidas);
                    }
                    else
                    {
                        printf("Te quedan %i oportunidades, no sigas fallando.\n",vidas);
                    }

                }

                break;

            case 7:

                printf("\n%cCual es el nombre real de Lord Voldemort?\n\n",168);
                printf("A. Tom Riddle\n");
                printf("B. James Riddle\n");
                printf("C. Ron Riddle\n");
                printf("D. Daniel Riddle\n\n");
                printf("Ingrese su respuesta: ");
                respuesta = getchar();


                if (respuesta == 'a' || respuesta == 'A')
                {
                    printf("\n%cCorrecto, est%cs cada vez m%cs cerca de Hogwarts!\n",33,160,160);
                    fflush(stdin);
                    repetidas [6] = 7;
                    contadorPuntaje++;
                    contadorJuego++;
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cCuidado, los dementores se acercan!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    if(vidas == 1)
                    {
                        printf("Te quedan %i oportunidad, no sigas fallando.\n",vidas);
                    }
                    else
                    {
                        printf("Te quedan %i oportunidades, no sigas fallando.\n",vidas);
                    }

                }

                break;

            case 8:

                printf("\n%cComo es el nombre del gato de Hermione Gringer?\n\n",168,161);
                printf("A. Norris\n");
                printf("B. Minerva\n");
                printf("C. Crookshanks\n");
                printf("D. Godric\n\n");
                printf("Ingrese su respuesta: ");
                respuesta = getchar();


                if (respuesta == 'c' || respuesta == 'C')
                {
                    printf("\n%cCorrecto, est%cs cada vez m%cs cerca de Hogwarts!\n",33,160,160);
                    fflush(stdin);
                    repetidas [7] = 8;
                    contadorPuntaje++;
                    contadorJuego++;
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cCuidado, los dementores se acercan!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    if(vidas == 1)
                    {
                        printf("Te quedan %i oportunidad, no sigas fallando.\n",vidas);
                    }
                    else
                    {
                        printf("Te quedan %i oportunidades, no sigas fallando.\n",vidas);
                    }

                }

                break;

            case 9:

                printf("\n%cEn la tercera pel%ccula de la saga, con qu%c golpea la t%ca al primo de Harry?\n\n",168,161,130,161);
                printf("A. Dos botones\n");
                printf("B. Collar\n");
                printf("C. Cintur%cn\n",162);
                printf("D. La mano\n\n");
                printf("Ingrese su respuesta: ");
                respuesta = getchar();


                if (respuesta == 'a' || respuesta == 'A')
                {
                    printf("\n%cCorrecto, est%cs cada vez m%cs cerca de Hogwarts!\n",33,160,160);
                    fflush(stdin);
                    repetidas [8] = 9;
                    contadorPuntaje++;
                    contadorJuego++;
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cCuidado, los dementores se acercan!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    if(vidas == 1)
                    {
                        printf("Te quedan %i oportunidad, no sigas fallando.\n",vidas);
                    }
                    else
                    {
                        printf("Te quedan %i oportunidades, no sigas fallando.\n",vidas);
                    }

                }

                break;

            case 10:

                printf("\n%cCu%cl es el nombre de los hermanos gemelos de Ron?\n\n",168,160);
                printf("A. Oliver y George\n");
                printf("B. George y Fred\n");
                printf("C. Fred y Oliver\n");
                printf("D. Oliver y Dean\n\n");
                printf("Ingrese su respuesta: ");
                respuesta = getchar();


                if (respuesta == 'b' || respuesta == 'B')
                {
                    printf("\n%cCorrecto, est%cs cada vez m%cs cerca de Hogwarts!\n",33,160,160);
                    fflush(stdin);
                    repetidas [9] = 10;
                    contadorPuntaje++;
                    contadorJuego++;
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cCuidado, los dementores se acercan!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    if(vidas == 1)
                    {
                        printf("Te quedan %i oportunidad, no sigas fallando.\n",vidas);
                    }
                    else
                    {
                        printf("Te quedan %i oportunidades, no sigas fallando.\n",vidas);
                    }

                }

                break;

            case 11:

                printf("\n%cQui%cn fue el fundador de la casa de Ravenclaw?\n\n",168,130);
                printf("A. Rubeus Ravenclaw\n");
                printf("B. Ronald Ravenclaw\n");
                printf("C. Rowena Ravenclaw\n");
                printf("D. Roxanne Ravenclaw\n\n");
                printf("Ingrese su respuesta: ");
                respuesta = getchar();


                if (respuesta == 'c' || respuesta == 'C')
                {
                    printf("\n%cCorrecto, est%cs cada vez m%cs cerca de Hogwarts!\n",33,160,160);
                    fflush(stdin);
                    repetidas [10] = 11;
                    contadorPuntaje++;
                    contadorJuego++;
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cCuidado, los dementores se acercan!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    if(vidas == 1)
                    {
                        printf("Te quedan %i oportunidad, no sigas fallando.\n",vidas);
                    }
                    else
                    {
                        printf("Te quedan %i oportunidades, no sigas fallando.\n",vidas);
                    }

                }

                break;

            case 12:

                printf("\n%cEn qu%c mes del a%co naci%c Harry Potter?\n\n",168,130,164,162);
                printf("A. Julio\n");
                printf("B. Agosto\n");
                printf("C. Mayo\n");
                printf("D. Junio\n\n");
                printf("Ingrese su respuesta: ");
                respuesta = getchar();


                if (respuesta == 'a' || respuesta == 'A')
                {
                    printf("\n%cCorrecto, est%cs cada vez m%cs cerca de Hogwarts!\n",33,160,160);
                    fflush(stdin);
                    repetidas [11] = 12;
                    contadorPuntaje++;
                    contadorJuego++;
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cCuidado, los dementores se acercan!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    if(vidas == 1)
                    {
                        printf("Te quedan %i oportunidad, no sigas fallando.\n",vidas);
                    }
                    else
                    {
                        printf("Te quedan %i oportunidades, no sigas fallando.\n",vidas);
                    }

                }

                break;

            case 13:

                printf("\n%cDonde encuentra Harry la piedra de la resurrecci%cn?\n\n",168,162);
                printf("A. En el castillo de Hogwarts\n");
                printf("B. Siempre la tuvo Voldemort\n");
                printf("C. En la tumba de Dumbledore\n");
                printf("D. En la snitch dorada\n\n");
                printf("Ingrese su respuesta: ");
                respuesta = getchar();


                if (respuesta == 'd' || respuesta == 'D')
                {
                    printf("\n%cCorrecto, est%cs cada vez m%cs cerca de Hogwarts!\n",33,160,160);
                    fflush(stdin);
                    repetidas [12] = 13;
                    contadorPuntaje++;
                    contadorJuego++;
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cCuidado, los dementores se acercan!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    if(vidas == 1)
                    {
                        printf("Te quedan %i oportunidad, no sigas fallando.\n",vidas);
                    }
                    else
                    {
                        printf("Te quedan %i oportunidades, no sigas fallando.\n",vidas);
                    }

                }

                break;

            case 14:

                printf("\n%cA qui%cn pertenec%ca la varita de sauco por %cltima vez?\n\n",168,130,161,163);
                printf("A. Lord Voldemort\n");
                printf("B. Harry Potter\n");
                printf("C. Draco Malfoy\n");
                printf("D. Albus Dumbledore\n\n");
                printf("Ingrese su respuesta: ");
                respuesta = getchar();


                if (respuesta == 'b' || respuesta == 'B')
                {
                    printf("\n%cCorrecto, est%cs cada vez m%cs cerca de Hogwarts!\n",33,160,160);
                    fflush(stdin);
                    repetidas [13] = 14;
                    contadorPuntaje++;
                    contadorJuego++;
                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cCuidado, los dementores se acercan!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    if(vidas == 1)
                    {
                        printf("Te quedan %i oportunidad, no sigas fallando.\n",vidas);
                    }
                    else
                    {
                        printf("Te quedan %i oportunidades, no sigas fallando.\n",vidas);
                    }

                }

                break;

            case 15:

                printf("\n%cQu%c pas%c con la varita de sauco al final de la saga?\n\n",168,130,162);
                printf("A. Desaparecio\n");
                printf("B. Se la queda Harry\n");
                printf("C. La rompieron\n");
                printf("D. Se la queda Lord Voldemort\n\n");
                printf("Ingrese su respuesta: ");
                respuesta = getchar();


                if (respuesta == 'c' || respuesta == 'C')
                {
                    printf("\n%cCorrecto, est%cs cada vez m%cs cerca de Hogwarts!\n",33,160,160);
                    fflush(stdin);
                    repetidas [14] = 15;
                    contadorPuntaje++;
                    contadorJuego++;

                }
                else
                {
                    printf("\n%cTe equivocaste!\n%cCuidado, los dementores se acercan!\n",33,33);
                    fflush(stdin);
                    vidas--;
                    if(vidas == 1)
                    {
                        printf("Te quedan %i oportunidad, no sigas fallando.\n",vidas);
                    }
                    else
                    {
                        printf("Te quedan %i oportunidades, no sigas fallando.\n",vidas);
                    }

                }

                break;
            }
        }
        while (vidas > 0 && contadorJuego != terminaJuego);

        if (contadorPuntaje == TAM)
        {
            printf("\n\n\n                    %cLLEGASTE A SALVO A HOGWARTS!",33);
            printf("\n          Felicitaciones, sos un gran fan de Harry Potter.");
        }
        else
        {
            printf("\n\n\n                     %cNO ESTUVISTE A LA ALTURA!",33);
            printf("\n     Los dementores no tuvieron piedad, mejor suerte la proxima.");
        }

        printf("\n\n                     El total de puntos es: %i/%i.\n", contadorPuntaje, TAM);
        getch();

        break;
    }
}
