#include <iostream>
#include <cstdlib> // srand, rand
#include <ctime> // time
#include <string.h>
#include "rlutil.h"
using namespace std;


/// DECLARACION DE FUNCIONES
int dadoDos ();
int dadoUno ();
int GranCerdo();
char lineas ();
char lineas_cortas();
char lineatitulos();
int lineamedia();
void Juego(char nombrePJUno[30],char nombreaux[30], char nombrePJDos[30], int PDV1[20], int PDV2[20]);
int tiradaDadoJugador(int PDV1[20], int PDV2[20]);
int tiradaDadoExtraJugador(int PDV1[20], int PDV2[20]);
char space ();
char GranCerdotitulo();
char GAMEOVER();




/// MAIN
int main(){

    int PDVTOTALJUGADOR1;
    int PDVTOTALJUGADOR2;
    int op, conf;
    char continuar;
    char nombrePJUno[30],nombreaux[30], nombrePJDos[30];
    int PDV1[20];
    for (int i = 0; i < 20; i++){
        PDV1[i]=0;
    }
    int PDV2[20];
    for (int i = 0; i < 20; i++){
        PDV2[i]=0;
    }
    rlutil::hidecursor();
    GranCerdotitulo();
    rlutil::locate(35,25);
    cout << "COMENZAR JUEGO" <<endl;
    space();
    space();
    rlutil::locate(23,30);
    cout<<" Presione cualquier tecla para continuar "<<endl;
    cout<<"    ";
    rlutil::anykey();

///OPCIONES Y SWITCH
    do{
        srand(time(NULL));
        rlutil::cls();
        lineatitulos();
        cout<<endl<<"                    M   E   N   U                "<<endl;
        lineatitulos();
        space();
        cout << "  1- JUGAR" << endl;
        space ();
        cout << "  2- ESTADISTICAS" << endl;
        space();
        cout << "  3- CERDITOS" << endl;
        lineatitulos();
        space ();
        cout << "  0- SALIR" << endl;
        space();
        cout<< "   OPCION: ";
        cin >> op;
        rlutil::cls();
        switch(op){
///OPCION 1 JUGAR
        case 1:
/// INGRESO DE JUEGADORES
            cout <<"+---------------------------------+"<<endl;
            cout <<"| INGRESE NOMBRE DE LOS JUGADORES |"<<endl;
            cout <<"+---------------------------------+"<<endl;
            cout << "Ingrese el nombre del participante 1: " << endl;
            cin.ignore();
            cin.getline(nombrePJUno,20);
            cout << "Ingrese el nombre del participante 2: " << endl;
            cin.getline(nombrePJDos,20);
            rlutil::cls();
            Juego(nombrePJUno, nombreaux, nombrePJDos, PDV1, PDV2);



 cout<< " T E R M I N A R O N    L A S   R O N D A S  . . . . ";

    space();
    space();
    PDVTOTALJUGADOR1=(PDV1[0]+PDV1[1]+PDV1[2]+PDV1[3]);
                PDVTOTALJUGADOR2=(PDV2[0]+PDV2[1]+PDV2[2]+PDV2[3]);
                if (PDVTOTALJUGADOR1>PDVTOTALJUGADOR2)
                    {
                cout <<     "                  EL GANADOR FUE "<<nombrePJUno<<" CON "<<PDVTOTALJUGADOR1<<"    PUNTOS DE VICTORIA"<<endl;
                space();

                }else if( PDVTOTALJUGADOR2>PDVTOTALJUGADOR1){
                cout <<     "                  EL GANADOR FUE "<<nombrePJDos<<" CON "<<PDVTOTALJUGADOR2<<"    PUNTOS DE VICTORIA"<<endl;
                space();


                }else if(PDVTOTALJUGADOR2==PDVTOTALJUGADOR1){
                         cout<<    "E  M  P  A  T  E";

                         }

                GAMEOVER();
                lineatitulos();
            cout<< "PRESIONE CUALQUIER TECLA PARA VOLVER AL MENU PRINCIPAL";
                rlutil::anykey();
        break;
/// OPCION 2 ESTADISTICAS DEL JUEGO
        case 2:
            rlutil::cls();
                GranCerdotitulo ();
                cout << "________________________________________________________________________________________________" <<endl;
                cout <<endl<< " HITO                     "<<"JUGADOR: "<<nombrePJUno << "                 JUGADOR: "<<nombrePJDos<<endl;
                cout << "_______________________________________________________________________________________________" <<endl;
                cout << " Mas trufas en total      |         " << PDV1[0] << " PDV (" << PDV1[5] << " trufas) \t |              "<< PDV2[0] << " PDV (" << PDV2[5] <<" trufas)\t" <<endl;
                cout << " Cada 50 trufas           |         " << PDV1[1] << " PDV (" << PDV1[8] << " trufas) \t |              "<< PDV2[1] << " PDV (" << PDV2[8] <<" trufas)\t" <<endl;
                cout << " Oinks                    |         " << PDV1[2] << " PDV (" << PDV1[6] << " Oinks) \t |              "<< PDV2[2] << " PDV (" << PDV2[6] <<" Oinks)\t" <<endl;
                cout << " Cerdo codicioso          |    " << PDV1[3] << " PDV (" << PDV1[7] << " lanzamientos) \t |         "<< PDV2[3] << " PDV (" << PDV2[7] <<" lanzamientos)\t" <<endl;
                space();
                space();
                PDVTOTALJUGADOR1=(PDV1[0]+PDV1[1]+PDV1[2]+PDV1[3]);
                PDVTOTALJUGADOR2=(PDV2[0]+PDV2[1]+PDV2[2]+PDV2[3]);
                if (PDVTOTALJUGADOR1>PDVTOTALJUGADOR2)
                    {
                cout <<     "                  EL GANADOR : "<<nombrePJUno<<"  CON "<<PDVTOTALJUGADOR1<<"    PUNTOS DE VICTORIA"<<endl;
                space();

                }else if( PDVTOTALJUGADOR2>PDVTOTALJUGADOR1){
                cout <<     "                  EL GANADOR : "<<nombrePJDos<<"  CON "<<PDVTOTALJUGADOR2<<"    PUNTOS DE VICTORIA"<<endl;
                space();

                }else if(PDVTOTALJUGADOR2==PDVTOTALJUGADOR1){
                         cout<<    "E  M  P  A  T  E";
                         space();

                         }






                cout<< "PRESIONE CUALQUIER TECLA PARA VOLVER AL MENU PRINCIPAL";
                rlutil::anykey();
                break;
        ///OPCION 3 CERDITOS
        case 3:
            rlutil::cls();
                GranCerdotitulo();
                cout << "J      E       O        I        T        G      A       O   "<<endl;
                cout << "    U      G                 N        E       R      D       R "<<endl;
                cout << "________________________________________________________________________________________________" <<endl;
                cout <<"                                    INTEGRANTES                                                  " <<endl;
                cout << "________________________________________________________________________________________________" <<endl;
                space ();
                cout << "Nombre del equipo: Somos los borbotones" << endl;
                space ();
                cout << "Benitez, Jonatan. Legajo 26311. ALIAS Homero Simpson. " << endl;
                space ();
                cout << "Wetzel, Agustina. Legajo 24584. ALIAS Seymour Skinner. " << endl;
                space ();
                cout << "Garcia, Lucio Agustin. Legajo 25926. ALIAS Barney Gomez. " << endl;
                space ();
                cout << "Grosclaude, Daniela. Legajo 26803. ALIAS Apu Nahasapeemapetilon. " << endl;
                cout << "________________________________________________________________________________________________" <<endl;
                cout<< "PRESIONE CUALQUIER TECLA PARA VOLVER AL MENU PRINCIPAL";
                rlutil::anykey();
                rlutil::cls();
                break;
            }
        }while(op!=0);
        return 0;
    }
/// FUNCIONES:

///TITULO DEL JUEGO
int GranCerdo(){

    cout<< "---------|  EL GRAN CERDO |---------   "<<endl;
}
///llineado detalle

char lineas (){
    cout << "------------------------------------" << endl;
}
char lineas_cortas (){
    cout << "----------------------" << endl;
}
char lineatitulos (){
cout << "_______________________________________________________________________________________" <<endl;
}
int lineamedia(){
cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
}
///espacios
char space(){
cout<<endl;
};
///DADO 1
int dadoUno (){
    int dado1;
    dado1 = (rand() % 6) + 1; //El resto de 6 siempre va a estar entre 0 y 5 por eso el +1.
    cout << dado1 << endl;
    return dado1;
}
///DADO 2
int dadoDos (){
    int dado2;
    dado2 = (rand() % 6) + 1; //El resto de 6 siempre va a estar entre 0 y 5 por eso el +1.
    cout << dado2 << endl;
    return dado2;
}
///DADO 3

int dadoTres (){
    int dado3;
    dado3 = (rand() % 6) + 1; //El resto de 6 siempre va a estar entre 0 y 5 por eso el +1.
    cout << dado3 << endl;
    return dado3;
}

/// JUEGO
void Juego(char nombrePJUno[30],char nombreaux[30], char nombrePJDos[30], int PDV1[20], int PDV2[20]){
    int trufasAcumuladasTotalJUno = 0;
    int trufasAcumuladasTotalJDos = 0;
    int tiradaRondaJUno;
    int tiradaRondaJDos;
    int dadoinicialUno;
    int dadoinicialDos;
    int contOINK1 = 0;
    int contOINK2 = 0;
    int contTIRADAS1 = 0;
    int contTIRADAS2 = 0;
    int OINK1 = 0;
    int OINK2 = 0;
    int contpasadas1 = 0;
    int contpasadas2 = 0;
    int Trufas1 = 0;
    int Trufas2 = 0;

    int auxtrufas;
    int auxtiradas;
    int maxrrano1d=0;
    int maxrrano2d=0;
    int maxrrano1t=0;
    int maxrrano2t=0;
    int b1d=0;
    int b2d=0;
    int b1t=0;
    int b2t=0;



    space();
    cout << " EL JUGADOR CON MAYOR PUNTUACION  COMIENZA  LA PARTIDA! "<<endl;
    lineatitulos();
    cout << endl;
    dadoinicialUno=(rand() % 6) + 1;
    cout << "RESULTADO DE   "<<nombrePJUno<<"  FUE DE :  ";
    cout<<dadoinicialUno;
    space();
    lineatitulos();
    dadoinicialDos=(rand() % 6) + 1;
    cout << "RESULTADO DE   "<<nombrePJDos<<"  FUE DE :  ";
    cout<<dadoinicialDos;
    space();
    space();

///DADOS IGUALES AL INICIAR
    while(dadoinicialUno == dadoinicialDos){
    cout << "DADOS IGUALES, DEBEMOS VOLVER A LANZAR LOS DADOS" << endl;
    space();
    cout << "PRESIONE CUALQUIER TECLA PARA VOLVER A LANZAR LOS DADOS" << endl;
    rlutil::anykey();
    cout << "RESULTADO DE   "<<nombrePJUno<<"  FUE DE :  ";
    dadoinicialUno=(rand() % 6) + 1;
    cout<<dadoinicialUno;
    space();
    lineatitulos();
    cout << "RESULTADO DE   "<<nombrePJDos<<"  FUE DE :  ";
    dadoinicialDos=(rand() % 6) + 1;
    cout<<dadoinicialDos;
    space();
    }
///SI EL JUGADOR 1 INICIA EL JUEGO
    if(dadoinicialUno > dadoinicialDos){
            lineatitulos();
            cout <<"EL DADO GANADOR ES DEL JUGADOR : "  << nombrePJUno << endl ;
            lineatitulos();
            cout<<"   'COMIENZA la partida' "<<endl;
            space();
            cout << "PRESIONE CUALQUIER TECLA PARA COMENZAR LA PARTIDA" << endl;
            rlutil::anykey();
            rlutil::cls();
            ///SI EL JUGADOR 1 INICIA EL JUEGO
    }else{
            cout << "EL DADO GANADOR ES DEL JUGADOR : " << nombrePJDos << endl ;
            lineatitulos();
            cout<<"   'COMIENZA la partida' "<<endl;
            lineatitulos();
            cout << "PRESIONE CUALQUIER TECLA PARA VOLVER A LANZAR LOS DADOS" << endl;
            rlutil::anykey();
            ///AUXILIARES  PARA CAMBIO J2 X J1
            for(int i=0; i<30; i++){
                nombreaux[i]=nombrePJUno[i];
                nombrePJUno[i]=nombrePJDos[i];
                nombrePJDos[i]=nombreaux[i];
            }
            auxtiradas=tiradaRondaJUno;
            tiradaRondaJUno=tiradaRondaJDos;
            tiradaRondaJDos=auxtiradas;
            auxtrufas=trufasAcumuladasTotalJUno;
            trufasAcumuladasTotalJUno=trufasAcumuladasTotalJDos;
            trufasAcumuladasTotalJDos=auxtrufas;
            rlutil::cls();
    }
            /// CANTIDAD DE RONDAS JUGADOR 1
    for (int i = 0; i<5; i++){
            rlutil::cls();
            cout<<"------------------------------------------------------"<<endl;
        cout<<"                 TRUFAS ACUMULADAS                    "<<endl;
        cout<<"------------------------------------------------------"<<endl;
        cout<<"TOTAL DE TRUFAS ACUMULADAS DE "<<nombrePJUno<<"  ES DE  "<<trufasAcumuladasTotalJUno << endl;
        cout<<"------------------------------------------------------"<<endl;
        cout<<"TOTAL DE TRUFAS ACUMULADAS DE "<<nombrePJDos<<"  ES DE  "<<trufasAcumuladasTotalJDos << endl;
        cout<<"------------------------------------------------------"<<endl;
        space();
        cout<<"-------------------------------------------------------"<<endl;
        cout << "TURNO DE " << nombrePJUno << " - RONDA " << i+1 << " DE 5" << endl;
        cout<<"-------------------------------------------------------"<<endl;

// ACTIVACION DEL 3° DADO JUGADOR 1(CONTADOR OINK Y TIRADAS)
        if (trufasAcumuladasTotalJUno <= 50){
            tiradaRondaJUno = tiradaDadoJugador(PDV1, PDV2);
            if (tiradaRondaJUno!=-1){
                trufasAcumuladasTotalJUno += tiradaRondaJUno;
                contOINK1+=PDV1[2];
                contTIRADAS1 +=PDV1[2];
                if(b1d==0){
                    PDV2[1] = maxrrano1d;
                    b1d = 1;
                }else if(PDV2[1] > maxrrano1d){
                    maxrrano1d = PDV2[1];
                }
            }else{
                trufasAcumuladasTotalJUno = 0;
                contOINK1+=PDV1[2];
            }
        }else if (trufasAcumuladasTotalJUno > 50){
                tiradaRondaJUno = tiradaDadoExtraJugador(PDV1, PDV2);
                if (tiradaRondaJUno!=-1){
                    trufasAcumuladasTotalJUno += tiradaRondaJUno;
                    contOINK1+=PDV1[2];
                    contTIRADAS1 +=PDV1[2];

                    if(b1t==0){
                        PDV2[1] = maxrrano1t;
                        b1t = 1;
                    }else if(PDV2[1] > maxrrano1t){
                        maxrrano1t = PDV2[1];
                    }
                }else{
                    trufasAcumuladasTotalJUno = 0;
                    contOINK1+=PDV1[2];
                }
        }
        rlutil::cls();
        cout << endl;
///TEXTO FIJO TRUFAS ACUMULADAS J1
        cout<<"------------------------------------------------------"<<endl;
        cout<<"                 TRUFAS ACUMULADAS                    "<<endl;
        cout<<"------------------------------------------------------"<<endl;
        cout<<"TOTAL DE TRUFAS ACUMULADAS DE "<<nombrePJUno<<"  ES DE  "<<trufasAcumuladasTotalJUno << endl;
        cout<<"------------------------------------------------------"<<endl;
        cout<<"TOTAL DE TRUFAS ACUMULADAS DE "<<nombrePJDos<<"  ES DE  "<<trufasAcumuladasTotalJDos << endl;
        cout<<"------------------------------------------------------"<<endl;
         space();
/// CANTIDAD DE RONDAS JUGADOR 2
        cout<<"-------------------------------------------------------"<<endl;
        cout << "TURNO DE " << nombrePJDos << " - RONDA " << i+1 << " DE 5" << endl;
        cout<<"-------------------------------------------------------"<<endl;
/// ACTIVACION DEL 3° DADO JUGADOR 2(CONTADOR OINK Y TIRADAS)
        if (trufasAcumuladasTotalJDos <= 50){
            tiradaRondaJDos = tiradaDadoJugador(PDV1, PDV2);
            if (tiradaRondaJDos!=-1){
                trufasAcumuladasTotalJDos += tiradaRondaJDos;
                contOINK2+=PDV2[2];
                contTIRADAS2 +=PDV2[2];
                if(b2d==0){
                    PDV2[1] = maxrrano2d;
                    b2d = 1;
                }else if(PDV2[1] > maxrrano2d){
                    maxrrano2d = PDV2[1];
                }
            }else{
                trufasAcumuladasTotalJDos = 0;
                contOINK2+=PDV2[2];
            }
        }else if (trufasAcumuladasTotalJDos > 50){
                tiradaRondaJDos = tiradaDadoExtraJugador(PDV1, PDV2);
                if (tiradaRondaJDos!=-1){
                    trufasAcumuladasTotalJDos += tiradaRondaJDos;
                    contOINK2+=PDV2[2];
                    contTIRADAS2 +=PDV2[2];

                    if(b2t==0){
                        PDV2[1] = maxrrano2t;
                        b2t = 1;
                    }else if(PDV2[1] > maxrrano2t){
                        maxrrano2t = PDV2[1];
                    }
                }else{
                    trufasAcumuladasTotalJDos = 0;
                    contOINK2+=PDV2[2];
                }
        }
        rlutil::cls();
///TEXTO FIJO TRUFAS ACUMULADAS J2
        cout << endl;
        cout<<"------------------------------------------------------"<<endl;
        cout<<"                    TRUFAS ACUMULADAS                 "<<endl;
        cout<<"------------------------------------------------------"<<endl;
        cout<<"-------------------------------------------------------------"<<endl;
        cout << "TOTAL DE TRUFAS ACUMULADAS DE "<< nombrePJDos<<"  ES DE  "<<trufasAcumuladasTotalJDos << endl;
        cout<<"---------------------------------------------------------------------------------------"<<endl;
        cout<<"---------------------------------------------------------------------------------------"<<endl;
        cout << "TOTAL DE TRUFAS ACUMULADAS DE "<< nombrePJUno<<"  ES DE  "<<trufasAcumuladasTotalJUno << endl;
        cout<<"-------------------------------------------------------------"<<endl;
    }
// PUNTOS DE VICTORIA

    PDV1[5]= trufasAcumuladasTotalJUno;
    PDV2[5]= trufasAcumuladasTotalJDos;
    PDV1[9]=0;
    PDV2[9]=0;



// JUGADOR CON MAS TRUFAS EN TOTAL
    if (trufasAcumuladasTotalJDos < trufasAcumuladasTotalJUno){
        PDV1[0]=5;

    }else{
        PDV2[0]=5;
    }

// CADA 50 TRUFAS

    while(trufasAcumuladasTotalJUno >= 50){
        PDV1[1]+=1;
        trufasAcumuladasTotalJUno -=50;
		contpasadas1++;
    }
	Trufas1 = 50 * contpasadas1;
	PDV1[8] = Trufas1;
    while(trufasAcumuladasTotalJDos >= 50){
        PDV2[1]+=1;
        trufasAcumuladasTotalJDos -=50;
		contpasadas2++;
    }
	Trufas2 = 50* contpasadas2;
	PDV2[8] = Trufas2;

// OINK's

    OINK1 = contOINK1 * 2;
	PDV1[6]= contOINK1;
    PDV1[2] = OINK1;
    OINK2 = contOINK2 * 2;
	PDV2[6] = contOINK2;
    PDV2[2] = OINK2;

/// CERDO CODICIOSO (MAYOR CANTIDAS DE TIRADAS EN UNA RONDA)

	PDV1[7] = contTIRADAS1;
	PDV2[7] = contTIRADAS2;
    if(contTIRADAS1 > contTIRADAS2){
        PDV1[3] = 3;
    }else{
        PDV2[3] = 3;
    }
cout << maxrrano1d << endl << maxrrano1t << endl <<maxrrano2d << endl << maxrrano2t;
rlutil::cls();
}
/// TIRADA DE JUGADORES
int tiradaDadoJugador(int PDV1[20], int PDV2[20]){
    char respuesta;
    int dado_Uno;
    int dado_Dos;
    int tiradaRonda = 0;
    int Ronda;
    int contOINK = 0;
    int contTiradas = 0;
    int maxrrano1;
    int maxrrano2;
    int i=0;



    do
    {
        cout << "Tirada Uno" << endl;
        dado_Uno = dadoUno();
        cout << "Tirada Dos" << endl;
        dado_Dos = dadoDos();
/// CARAS DISTINTAS SIN AS
        if ((dado_Uno != dado_Dos)&&(dado_Uno !=1 && dado_Dos !=1))
        {
            tiradaRonda += dado_Uno + dado_Dos;
            lineamedia();
            cout<< "ACUMULASTE  "<<tiradaRonda<<"  TRUFAS"<<endl;
            lineamedia();
            cout <<endl;
            cout << "DESEA CONTINUAR LANZANDO LOS DADOS ?" << endl;
            cout << "Y: PARA CONTINUAR"<<endl;
            cout << "N: PARA PASAR EL TURNO "<<endl;
            cout <<"OPCION = ";
            respuesta=(respuesta == 'y' || respuesta == 'Y');
            cin>>respuesta;
            cout << endl;
        }
/// CARAS IGUALES SIN AS
        else if ((dado_Uno == dado_Dos) && (dado_Uno != 1))
        {
            tiradaRonda += (dado_Uno + dado_Dos) * 2;
            contOINK++;
            cout << "       O i n k !  "<<endl;
            cout << "SE MULTIPLICA POR DOS LAS TRUFAS OBTENIDAS EN ESTA RONDA"<<endl;
            cout<< "ACUMULASTE  "<<tiradaRonda<<"  TRUFAS"<<endl;
            cout <<endl;
            lineamedia();
            cout << "SE VUELVE A LANZAR LOS DADOS " << endl;
            lineamedia();
            space();
            cout << "PRESIONE CUALQUIER TECLA PARA LANZARLOS NUEVAMENTE" << endl;
            rlutil::anykey();
            respuesta='y';
            cout << endl;
        }
/// ASES EN UNA DE LAS DOS CARAS
        else if ((dado_Uno != dado_Dos)&&(dado_Uno == 1 || dado_Dos == 1))
        {
            tiradaRonda = 0;
            cout<< "ACUMULASTE  "<<tiradaRonda<<"  TRUFAS"<<endl;
            cout <<endl;
            lineamedia();
            cout << " PERDISTE EL TURNO Y LAS TRUFAS ACUMULADAS DE TODO EL TURNO"<<endl;
            lineamedia();
            cout << " SE LE CEDE EL TURNO AL SIGUIEN JUGADOR " << endl;
            lineamedia();
            space();
            cout << "PRESIONE CUALQUIER TECLA PARA CONTINUAR CON EL PROXIMO TURNO" << endl;
            rlutil::anykey();
            respuesta=(respuesta == 'N' || respuesta == 'n');
        }
///ASES EN AMBAS CARAS
        else if ((dado_Uno == dado_Dos) && (dado_Uno == 1))
        {
            tiradaRonda = -1;
            cout <<endl;
            lineamedia();
            cout << "el cerdo se hundio en el barro! PERDISTE EL TURNO Y LAS TRUFAS ACUMULADAS EN EL TURNO Y LA PARTIDA"<<endl;
            lineamedia();
            space();
            cout << "PRESIONE CUALQUIER TECLA PARA CONTINUAR CON EL PROXIMO TURNO" << endl;
            rlutil::anykey();
            respuesta=(respuesta == 'n' || respuesta == 'N');
        }
        contTiradas ++;
        PDV1[i] = tiradaRonda;
        if (i==0){
            maxrrano1 = PDV1[0];
        }else if(PDV1[i] > maxrrano1){
            maxrrano1 = PDV1[i];
        }
        i++;
    }
    while (respuesta == 'y' || respuesta == 'Y');


    PDV1[2] = contOINK;
    PDV2[2] = contTiradas;
    PDV2[1] = maxrrano1;

    return tiradaRonda;
    cout << endl << endl << "FINALIZO EL TURNO PRESIONE CUALQUIER TECLA PARA CONTINUAR CON EL PROXIMO JUGADOR" << endl;
    rlutil::anykey();
    rlutil::cls();
}
///TIRADA DE DADOS EXTRAS (3°DADO)

int tiradaDadoExtraJugador(int PDV1[2], int PDV2[2]){
    char respuesta;
    int dado_Uno;
    int dado_Dos;
    int dado_Tres;
    int tiradaRonda = 0;
    int contOINK = 0;
    int contTiradas = 0;
    do
    {
        cout << "Tirada Uno" << endl;
        dado_Uno = dadoUno();
        cout << "Tirada Dos" << endl;
        dado_Dos = dadoDos();
        cout << "Tirada Tres" << endl;
        dado_Tres = dadoTres();
        if ((dado_Uno != dado_Dos && dado_Uno != dado_Tres && dado_Tres != dado_Dos)&&(dado_Uno !=1 && dado_Dos !=1 && dado_Tres!=1))
        {
            tiradaRonda += dado_Uno + dado_Dos + dado_Tres;
            cout<< "ACUMULASTE  "<<tiradaRonda<<"  TRUFAS"<<endl;
            cout <<endl;
            cout << "DESEA CONTINUAR LANZANDO LOS DADOS ?" << endl;
            cout << "Y: PARA CONTINUAR"<<endl;
            cout << "N: PARA PASAR EL TURNO "<<endl;
            cout <<"OPCION = ";
            cin >> respuesta;
            cout << endl;
        }else if ((dado_Uno == dado_Dos) && (dado_Tres!=dado_Uno))
        {
            tiradaRonda += (dado_Uno + dado_Dos + dado_Tres);
            cout<< "ACUMULASTE  "<<tiradaRonda<<"  TRUFAS"<<endl;
            cout <<endl;
            lineamedia();
            cout << "SUMASTE TUS TRES DADOS" << endl;
            lineamedia();
            cout << "DESEA CONTINUAR LANZANDO LOS DADOS ?" << endl;
            cout << "Y: PARA CONTINUAR"<<endl;
            cout << "N: PARA PASAR EL TURNO "<<endl;
            cout <<"OPCION = ";
            cin >> respuesta;
            cout << endl;
        }
        else if ((dado_Uno == dado_Dos && dado_Uno == dado_Tres) && (dado_Uno != 1))
        {
            tiradaRonda += (dado_Uno + dado_Dos + dado_Tres) * 2;
            cout<< "ACUMULASTE  "<<tiradaRonda<<"  TRUFAS"<<endl;
            cout <<endl;
            contOINK +=1;
            lineamedia();
            cout << "   O i n k ! ";
            cout << "   MULTIPLICASTE TUS TRUFAS   "<<endl;
            lineamedia();
            cout << "PRESIONE CUALQUIER TECLA PARA LANZARLOS NUEVAMENTE" << endl;
            rlutil::anykey();
            respuesta=(respuesta == 'y' || respuesta == 'Y');
        }
        else if ((dado_Uno != dado_Dos && dado_Uno != dado_Tres && dado_Tres != dado_Dos)&&(dado_Uno == 1 || dado_Dos == 1 || dado_Tres == 1))
        {
            tiradaRonda = 0;
            cout<< "ACUMULASTE  "<<tiradaRonda<<"  TRUFAS"<<endl;
            cout <<endl;
            lineamedia();
            cout << " PERDISTE EL TURNO Y LAS TRUFAS ACUMULADAS DE TODO EL TURNO"<<endl;
            lineamedia();
            cout << " SE LE CEDE EL TURNO AL SIGUIEN JUGADOR " << endl;
            lineamedia();
            cout << "PRESIONE CUALQUIER TECLA " << endl;
            rlutil::anykey();
            respuesta = 'n';
        }
        else if ((dado_Uno == dado_Dos && dado_Uno == dado_Tres) && (dado_Uno == 1))
        {
            tiradaRonda = -1;
            cout << "NO ACUMULAS TRUFAS Y PIERDES TODAS LAS TRUFAS ACUMULADAS DE LA RONDA Y EL JUEGO"<<endl;
            cout <<endl;
            rlutil::anykey();
            respuesta = 'n';
        }
    }
    while (respuesta == 'y');

    PDV1[2] = contOINK;
    PDV2[2] = contTiradas;

    return tiradaRonda;
    cout << endl << endl << "FINALIZO EL TURNO PRESIONE CUALQUIER TECLA PARA CONTINUAR CON EL PROXIMO JUGADOR" << endl;
    rlutil::anykey();
    rlutil::cls();
}
///GRAN CERDO TITULO

 char GranCerdotitulo(){

cout<<"    EEEEEEE    LLL          GGGGGGGGGG   RRRRRRRRR    AAAAAAAAA   NNN    NNN"<<endl;
cout<<"    EEEEEEE    LLL          GGGGGGGGGG   RRRRRRRRR    AAAAAAAAA   NNNN   NNN"<<endl;
cout<<"    EEE        LLL          GGGG    GG   RRR   RRR    AAA   AAA   NNNNN  NNN"<<endl;
cout<<"    EEE        LLL          GGGG         RRR    RR    AAA   AAA   NNNNNN NNN"<<endl;
cout<<"    EEEEEEE    LLL          GGGG  GGGG   RRR   RR     AAAAAAAAA   NNNNNNNNNN"<<endl;
cout<<"    EEE        LLL          GGGG  GGGG   RRRRRRR      AAAAAAAAA   NNN NNNNNN"<<endl;
cout<<"    EEE        LLL          GGGG    GG   RRRRRRRR     AAA   AAA   NNN   NNNN"<<endl;
cout<<"    EEEEEEE    LLLLLLLL     GGGGG GGGG   RRR  RRRR    AAA   AAA   NNN    NNN"<<endl;
cout<<"    EEEEEEE    LLLLLLLL     GGGGGGGGGG   RRR   RRRR   AAA   AAA   NNN    NNN"<<endl;
cout<<endl;
cout<<endl;
cout<<"         CCCCCCC    EEEEEEEE     RRRRRRRRR    DDDDDDDD        OOOOOO    "<<endl;
cout<<"         CCCCCCC    EEEEEEEE     RRRRRRRRR    DDDDDDDDD      OOOOOOOO   "<<endl;
cout<<"         CCC  CC    EEE          RRR   RRR    DDD   DDDD    OOO    OOO  "<<endl;
cout<<"         CCC        EEE          RRR    RR    DDD    DDDD   OOO    OOO  "<<endl;
cout<<"         CCC        EEEEEEEE     RRR   RR     DDD    DDDD   OOO    OOO  "<<endl;
cout<<"         CCC        EEE          RRRRRRR      DDD    DDD    OOO    OOO  "<<endl;
cout<<"         CCC  CC    EEE          RRRRRRRR     DDD   DDDD    OOO    OOO  "<<endl;
cout<<"         CCCCCCC    EEEEEEEE     RRR  RRRR    DDDDDDDDD      OOOOOOOO   "<<endl;
cout<<"         CCCCCCC    EEEEEEEE     RRR   RRRR   DDDDDDDD        OOOOOO    "<<endl;
cout<<endl;
cout<<endl;
}
///FIN DEL JUEGO
 char GAMEOVER();
 ///FIN DEL JUEGO
 char GAMEOVER(){

cout<<"    GGGGGGGGGG   AAAAAAAAA   NNN      NNNN   EEEEEEEEE     "<<endl;
cout<<"    GGGGGGGGGG   AAAAAAAAA   NNNN     NNNN   EEEEEEEEE     "<<endl;
cout<<"    GGGG    GG   AAA   AAA   NNNNN   NNNNN   EEE           "<<endl;
cout<<"    GGGG         AAA   AAA   NNNNNN NNNNNN   EEE           "<<endl;
cout<<"    GGGG  GGGG   AAAAAAAAA   NNNNNNNNNNNNN   EEEEEEEEE     "<<endl;
cout<<"    GGGG  GGGG   AAAAAAAAA   NNN NNNNN NNN   EEE           "<<endl;
cout<<"    GGGG    GG   AAA   AAA   NNN   N   NNN   EEE           "<<endl;
cout<<"    GGGGG GGGG   AAA   AAA   NNN       NNN   EEEEEEEEE     "<<endl;
cout<<"    GGGGGGGGGG   AAA   AAA   NNN       NNN   EEEEEEEEE     "<<endl;
cout<<endl;
cout<<endl;
cout<<"    OOOOOO   VVV           VVV   EEEEEEEE     RRRRRRRRR    "<<endl;
cout<<"   OOOOOOOO  VVVV         VVVV   EEEEEEEE     RRRRRRRRR    "<<endl;
cout<<"   OOO  OOO   VVVV       VVVV    EEE          RRR   RRR    "<<endl;
cout<<"   OOO  OOO    VVVV     VVVV     EEE          RRR    RR    "<<endl;
cout<<"   OOO  OOO     VVVV   VVVV      EEEEEEEE     RRR   RR     "<<endl;
cout<<"   OOO  OOO      VVVV VVVV       EEE          RRRRRRR      "<<endl;
cout<<"   OOO  OOO       VVVVVVV        EEE          RRRRRRRR     "<<endl;
cout<<"   OOOOOOO0        VVVVV         EEEEEEEE     RRR  RRRR    "<<endl;
cout<<"    OOOOOO          VVV          EEEEEEEE     RRR   RRRR   "<<endl;
cout<<endl;
cout<<endl;
}
