/*
** #########################################################################################
**      Archivo:        main.c
**      SO:             Windows 10
**      Herramientas:   Visual Studio Code
**                      Code::Blocks
**      Version:        1.00.23
**      Notas:
**                      Se creo el archivo para poder realizar las priebas iniciales de
**                      Mi mercadito.
**      Bugs Fixed:
**
** #########################################################################################

** -----------------------------------------------------------------------------------------
**                  D I R E C T I V A S   D E   P R E P R O C E S A D O R
** -----------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <string.h>
/*
** +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
**                          L I B R E R I A S   P R O P I A S
** +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/

/*
** |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
**                          V A R I A B L E S   G L O B A L E S
** |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
*/
#define UsrPrueba "UsuarioPrueba"
#define PswPrueba "Password123"
char opc;
char Usr[50], Psw[50];
/*
** '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
**                      P R O T O T I P O S   D E   F U N C I O N E S
** '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
*/
void pInicial();
void Menu();
void Registro();

/*
** *****************************************************************************************
**                          F U N C I O N   P R I N C I P A L
** *****************************************************************************************
*/
int main(){
    pInicial();
    return 0;
}

/*
** '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
**                                  F U N C I O N E S
** '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
*/
void pInicial(){
    etqI:
        TxtMiM();
        puts("\t\t1. Ingresar");
        puts("\t\t2. Registrarse");
        printf("\n\t\tDe una opcion: "); scanf("%c", &opc);

        if(opc == '1'){
            clear();
            TxtMiM();
            printf("\t\tUsuario: "); fflush(stdin); gets(Usr);
            printf("\t\tContrasenha: "); fflush(stdin); gets(Psw);
            if(((strcmp(Usr, UsrPrueba)) && (strcmp(Psw, PswPrueba))) == 0){                //! Autenticacion de Usuario en la base de datos
                clear();
                Menu();
            }else{
                puts("\n\t\tContrasenha o usuario incorrecto.\n");
                wait();
                clear();
                goto etqI;
            }
        }else if(opc == '2'){
            Registro();
        }else{
            puts("\n\t\tDe una opcion correcta.");
            wait();
            clear();
            goto etqI;
        }
    }

void Menu(){
    etqM:
        TxtMiM();
        puts("\t\t1. Cuenta");
        puts("\t\t2. Pedidos");
        puts("\t\t3. Inventario");
        puts("\t\t4. Historial");
        puts("\t\t5. Salir");
        printf("\n\t\tDe una opcion: "); scanf("%c", &opc);

        switch(opc){
            case '1':
                clear();
                TxtMiM();
                puts("\t\t1. Configuracion");
                puts("\t\t2. Metodos de pago y cobro");
                puts("\t\t3. Regresar");
                wait();
                clear();
                goto etqM;
                break;
            case '2':
                clear();
                TxtMiM();
                puts("\t\t1. Nuevos pedidos");
                puts("\t\t2. Pedidos entregados");
                puts("\t\t3. Visualizar trayectorias");
                puts("\t\t4. Regresar");
                wait();
                clear();
                goto etqM;
                break;
            case '3':
                clear();
                TxtMiM();
                puts("\t\t1. Inventario actual");
                puts("\t\t2. Agregar productos");
                puts("\t\t3. Eliminar productos");
                puts("\t\t4. Regresar");
                wait();
                clear();
                goto etqM;
                break;
            case '4':
                clear();
                TxtMiM();
                puts("\t\t1. Historial de ventas");
                puts("\t\t2. Rgresar");
                wait();
                clear();
                goto etqM;
                break;
            case '5':
                clear();
                break;
            default:
                puts("\n\t\tDe una opcion correcta.");
                wait();
                clear();
                goto etqM;
                break;
        }
    }

void Registro(){
    puts("Texto");
}

void TxtMiM(){
    puts("\n\t\t\tMI MERCADITO V-1.00.23\n");
}

void clear(){
    system("cls");
}

void wait(){
    system("PAUSE");
}
