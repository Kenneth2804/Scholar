/*               Producto: SISTEMA DE CONTROL ESCOLAR
          Alumno: Flores Calvillo Kenneth Iran
           Grupo: 2A-PGM
Fecha de entrega: 23 de mayo del 2016 */

//Librerias del programa
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

//Declaracion de variables globales
int x, ulti=0, k=0;
char opcion, otra;
struct lince
                                  {
                           char matri[33][20];
                           char nom[35][30];
                           char dom[35][30];
                           char tel[15][30];
                           char in[30][30];
                           char esp[25][30];
                           char gru[20][30];

                           int calif[70][20];
                         };//Cierre de struct lince


             struct lince alum;

                            marco()//Metodo para el marco
                                       {


                       for(x=1; x<=25; x++)    //Lineas verticales

                                        {
                        gotoxy(4,4+x);printf("%c", char(179));
                        gotoxy(90,x+4);printf("%c", char(179));

                                        }//Cierre for para lineas verticales


                          for(x=1; x<=85; x++)    //Lineas horizontales

                                         {
                         gotoxy(4+x,4);printf("%c", char(196));
                         gotoxy(4+x,30);printf("%c", char(196));

                                         }//Cierre for para lineas horizontales

                                    //Esquinas
                          gotoxy(4,4);printf("%c", char(218));
                          gotoxy(90,4);printf("%c", char(191));
                          gotoxy(4,30);printf("%c", char(192));
                          gotoxy(90,30);printf("%c", char(217));
                           }//Cierre del metodo "marco"


A()

                                          {
                                                  system ("COLOR F0");
                   gotoxy(20,4);printf("Registro de alumnos de nuevo ingreso");
                   gotoxy(18,8);printf("Matricula  :");
                   gotoxy(18,10);printf("Nombre    :");
                   gotoxy(18,12);printf("Domicilio :");
                   gotoxy(18,14);printf("Telefono  :");
                   gotoxy(18,16);printf("Fecha de ingreso:");
                   gotoxy(18,18);printf("Especialidad    :");
                   gotoxy(18,20);printf("Grupo           :");


                                    char otro;
                                        do
                                        {

                            //inicio de acumulador
                                    k=k+1;
                                    ulti=k;

          	//Limpiar datos capturados
          	                     gotoxy(31,8);clreol();
                               	gotoxy(31,10);clreol();
                                 gotoxy(31,12);clreol();
                               	gotoxy(31,14);clreol();
          	                     gotoxy(35,16);clreol();
          	                     gotoxy(35,18);clreol();
          	                     gotoxy(35,20);clreol();
                                           system ("COLOR F0");
          		//Captura de datos
             						  gotoxy(31,8);gets(alum.matri[k]);
              						  gotoxy(31,10);gets(alum.nom[k]);
          						     gotoxy(31,12);gets(alum.dom[k]);
            					     gotoxy(31,14);gets(alum.tel[k]);
            					     gotoxy(36,16);gets(alum.in[k]);
                                gotoxy(36,18);gets(alum.esp[k]);
        						        gotoxy(36,20);gets(alum.gru[k]);

                        gotoxy(40,24);printf("[s/S]Si desea ingresar otro dato");
                                        otro=getche();
                                  gotoxy(40,24);clreol();
                                           }//Cierre del do while()
                                 while(otro=='s' || otro=='S');

                                    }//Cierre del metodo "A"

M()

                                {//inicio del metodo "M"

                                   char otro, matricula[20];
                                            do
                                             { //Inicio del do while
                                         clrscr();
                                                 system ("COLOR F0");
                          gotoxy(20,4);printf("Actualizacion de datos");
                               gotoxy(18,8);printf("Matricula :");

                                                ulti=k;
                                     gotoxy(30,8);gets(matricula);
                                                int y=1;

            	                     	for(x=1; x<=ulti; x++)
            	                              	{
                                    y = strcmp(alum.matri[x], matricula);
                                            	if(y==0)
                                              	{   //Inicio del if

                     					gotoxy(18,10);printf("Nombre    :");
                     					gotoxy(18,12);printf("Domicilio :");
												gotoxy(18,14);printf("Telefono  :");
                    					   gotoxy(18,16);printf("Fecha de ingreso :");
                  					   gotoxy(18,18);printf("Especialidad     :");
                   					   gotoxy(18,20);printf("Grupo            :");


                     								gotoxy(31,10);clreol();
          												gotoxy(31,12);clreol();
          										  		gotoxy(31,14);clreol();
        				  									gotoxy(35,16);clreol();
          											  	gotoxy(35,18);clreol();
          												gotoxy(35,20);clreol();
                                                               system ("COLOR F0");
                  					   gotoxy(31,10);printf(alum.nom[x]);
                    					   gotoxy(36,16);printf(alum.in[x]);

                                        //Captura de datos nuevos
                                    gotoxy(31,12);gets(alum.dom[x]);
                                    gotoxy(31,14);gets(alum.tel[x]);
                                    gotoxy(37,18);gets(alum.esp[x]);
                                    gotoxy(37,20);gets(alum.gru[x]);


                                       	}//Cierre del if
														}//Cierre del for

                 gotoxy(40,24);printf("[O] para pasar a otro alumno");
                                             otro=getche();
                								 gotoxy(40,24);clreol();
          												  }//Cierre do while()
                                       while(otro=='o' || otro=='O');

                                               }//Cierre metodo "M"


R()
                                           {//Inicio del metodo "R"(calificaciones)

                                   //Declaracion para este metodo
                                          char ma[20], otro='s';
                                             int p=1,geo, in, es, ht, ct,q, renglon=0; //Declarando las variables a utilizar;

                                                do
                                                {//Inicio del do while

                                              clrscr();
                                                      system ("COLOR F0");
                              gotoxy(20,3);printf("CAPTURA DE CALIFICACIONES ");
                                    gotoxy(3,7);printf("Matricula   : ");
                                        gotoxy(17,7);gets(ma);

                                               fflush(stdin);

                                           for(x=1; x<=ulti; x++)
                                                     {
                                                 fflush(stdin);
                                   p = strcmp(alum.matri[x], ma);

                                                 if(p==0)

                                                    {//Inicio del if


           gotoxy(3,8);printf("Nombre      :");printf("%s", alum.nom[x]);
           gotoxy(3,9);printf("Especialidad:");
           gotoxy(3,10);printf("Grupo      :");

      gotoxy (36,13); printf ("P1     P2    P3    CF");
                         gotoxy (8,16);printf("Geometria Analitica :       0");
                         gotoxy (8,18);printf("Ingles              :       0");
                         gotoxy (8,20);printf("Estructura de datos :       0");
                         gotoxy (8,22);printf("HTML                :       0");
                         gotoxy (8,24);printf("CTSV                :       0");
                         gotoxy (8,26);printf("Quimica             :       0");

                      gotoxy(8,16);printf("%i", alum.calif[x][1]);
                      gotoxy(8,18);printf("%i", alum.calif[x][2]);
                      gotoxy(8,20);printf("%i", alum.calif[x][3]);
                      gotoxy(8,22);printf("%i", alum.calif[x][4]);
                      gotoxy(8,24);printf("%i", alum.calif[x][5]);
                      gotoxy(8,26);printf("%i", alum.calif[x][6]);

                                           fflush(stdin);

                                    // Poner calificacion mayor a 5 y menor a 10 (no esta el 6)

                  gotoxy(38,14);scanf("%i", &alum.calif[x][1]);

                 while(geo>10 || geo<7  &&  geo!=5){
                 gotoxy(36,16); printf("   ");
                 gotoxy(36,16); scanf ("%i", &geo);  }

                     gotoxy(38,16);scanf("%i", &alum.calif[x][2]);

                 while(in>10 || in<7  &&  in!=5){
                 gotoxy(36,18); printf("   ");
                 gotoxy(36,18); scanf ("%i", &in);   }

                   gotoxy(38,18);scanf("%i", &alum.calif[x][3]);

                 while(es>10 || es<7  &&  es!=5){
                 gotoxy(36,20); printf("   ");
                 gotoxy(36,20); scanf ("%i", &es);  }

                gotoxy(38,20);scanf("%i", &alum.calif[x][4]);

                 while(ht>10 || ht<7  &&  ht!=5){
                 gotoxy(36,22); printf("   ");
                 gotoxy(36,22); scanf ("%i", &ht);}

                  gotoxy(38,22);scanf("%i", &alum.calif[x][5]);

                 while(ct>10 || ct<7  &&  ct!=5){
                 gotoxy(36,24); printf("   ");
                 gotoxy(36,24); scanf ("%i", &ct);  }

                 gotoxy(38,24);scanf("%i", &alum.calif[x][6]);

                 while(q>10 || q<7  &&  q!=5){
                 gotoxy(36,26); printf("   ");
                 gotoxy(36,26); scanf ("%i", &q); }
                                 fflush(stdin);







                                 }//Cierre del if

                                 }//Cierre for

                      gotoxy(30,28);printf("[s] para otra matricula");
                                     otro=getche();
                                  gotoxy(30,28);clreol();


                                     }//Cierre do while
                              while(otro=='s' || otro=='S');

                                  }//Cierre metodo "R"


C()
    {//Inicio del ciclo "C" (Consulta de calificaciones )
                       char ma[30], otro='s';
                               int c=1;
                                   do

                                     {//Inicio del do while

                                          clrscr();
                                                  system ("COLOR F0");
                        gotoxy(3,3);printf("Consultando calificaciones....");
                        gotoxy(3,7);printf("Matricula : ");

                                      fflush(stdin);
                                 gotoxy(18,7);gets(ma);

                                 gotoxy(18,7);clreol();
                                 gotoxy(18,8);clreol();
                                 gotoxy(18,9);clreol();
                                 gotoxy(18,10);clreol();
                                      fflush(stdin);

                               for(x=1; x<=ulti; x++)
                                          {//Inicio del for
                           c = strcmp(alum.matri[x], ma);
                                   system ("COLOR F0");
                                      if(c==0)
                                           {//inicio del if

   			            gotoxy( 3, 8);printf("Nombre       :");
      	             	gotoxy( 3, 9);printf("Especialidad :");
      						gotoxy( 3,10);printf("Grupo        :");

            gotoxy(18,7);printf("%s", alum.matri[x]);
      		gotoxy(18,8);printf("%s", alum.nom[x]);
     			gotoxy(18,9);printf("%s", alum.esp[x]);
				gotoxy(18,10);printf("%s", alum.gru[x]);

            gotoxy(10,12);printf("                            P1     P2     P3     CF");
            gotoxy(10,14);printf("Geometria      : ");
            gotoxy(10,16);printf("Ingles         : ");
            gotoxy(10,18);printf("Base de Datos  : ");
            gotoxy(10,20);printf("Software       : ");
            gotoxy(10,22);printf("Lectura        : ");
            gotoxy(10,24);printf("Quimica        : ");

            gotoxy(38,14);printf("%i", alum.calif[x][1]);
            gotoxy(38,16);printf("%i", alum.calif[x][2]);
            gotoxy(38,18);printf("%i", alum.calif[x][3]);
            gotoxy(38,20);printf("%i", alum.calif[x][4]);
            gotoxy(38,22);printf("%i", alum.calif[x][5]);
            gotoxy(38,24);printf("%i", alum.calif[x][6]);

                                }//Cierre if

                                }//Cierre for
                        gotoxy(30,28);printf("[s] para otra consulta");
                                   otro=getche();
                              gotoxy(30,28);clreol();

                               }//Cierre do while()
                           while(otro=='s' || otro=='S');
                               }//Cierre metodo consultar()

burbuja()
                                 {  //Inicio del metodo burbuja
                          system ("COLOR F0");
		gotoxy(3,3);printf("                      %c%c TOTAL DE ALUMNOS INSCRITOS EN EL PLANTEL %c%c                      ",196,196,196,196);
      gotoxy(3,5);printf("Matricula        Nombre                      Telefono   Fecha_Ingreso  Especialidad  Grupo");

                                  for(x=1;x<=90;x++)
                                    { //Inicio del ciclo for
                                    gotoxy(2+x,6);printf("%c", 196);
                                    }//Fin del ciclo for

      char matri2[33];
      char nom2[33];
      char dom2[33];
      char tel2[20];
      char in2[20];
      char esp2[30];
      char gru2[12];
      int calif2[36];

      int j, l=0;

      for(x=1;x<=ulti;x++)     {
      for(j=1;j<=ulti-1;j++)   {

       l= strcmp(alum.nom[j], alum.nom[j+1]);
                   if (l>0)
                      {//Inicio del while

                         //Pasos para el metodo burbuja

//Paso 1
              	         strcpy(matri2, alum.matri[j]);
                        strcpy(nom2, alum.nom[j]);
     		               strcpy(tel2, alum.tel[j]);
		          	      strcpy(in2, alum.in[j]);
		   	            strcpy(esp2, alum.esp[j]);
			               strcpy(gru2, alum.gru[j]);


//Paso 2
                        strcpy(alum.matri[j], alum.matri[j+1]);
                        strcpy(alum.nom[j]  , alum.nom[j+1]);
                        strcpy(alum.tel[j]  , alum.tel[j+1]);
		                  strcpy(alum.in[j]   , alum.in[j+1]);
       	               strcpy(alum.esp[j]  , alum.esp[j+1]);
                        strcpy(alum.gru[j]  , alum.gru[j+1]);

//Paso 3
                        strcpy(alum.matri[j+1], matri2);
                        strcpy(alum.nom[j+1]  , nom2);
                        strcpy(alum.tel[j+1]  , tel2);
	                     strcpy(alum.in[j+1]   , in2);
                        strcpy(alum.esp[j+1]  , esp2);
                        strcpy(alum.gru[j+1]  , gru2);

                                }//cierre del if
                                }//cierre del for(j)
                                }//cierre del for(x)

                                 for(x=1;x<=ulti;x++)
                                    {//inicio del for
      	           gotoxy(3,x+6);printf("%s" , alum.matri[x]);
                    gotoxy(20,x+6);printf("%s", alum.nom[x]);
     		           gotoxy(48,x+6);printf("%s", alum.tel[x]);
					 	  gotoxy(60,x+6);printf("%s", alum.in[x]);
                    gotoxy(74,x+6);printf("%s", alum.esp[x]);
			           gotoxy(89,x+6);printf("%s", alum.gru[x]);
                                   }//cierre del for
                                   }//cierre de total


main()
                     {//Abrir Main
                          do
                          {  //Inicio del do while
                                 clrscr();
                                         system ("COLOR F0");
                                  marco();  //Mandar a llamar al marco

          gotoxy(10,4);printf("%c                            %c", 180, 195);
          gotoxy(12,4);printf("Sistema de control escolar");
          gotoxy(50,2);printf("CECYTE B.C. ");


gotoxy(20,10);printf("                   PLANTEL VILLA DEL SOL              ");
gotoxy(20,14);printf(" (A) ALTA DE ALUMNO (Nuevo ingreso)");
gotoxy(20,16);printf(" (M) MANTENIMIENTO  (Actualizacion de datos)");
gotoxy(20,18);printf(" (R) REGISTRO DE CALIFICACIONES");
gotoxy(20,20);printf(" (C) CONSULTAS DE CALIFICACIONES");
gotoxy(20,22);printf(" (T) TOTAL DE ALUMNOS INSCRITOS");

gotoxy(40,27);printf(" ELIGE UNA OPCION: [   ]");
gotoxy(61,27);opcion=getche();

                                       clrscr();
                                     switch(opcion)
                                           {//inicio del switch

                                           case 'a':
                                           	A();   break;
                                           case 'A':
                                          	A();   break;
                                           case 'm':
	                                          M();   break;
                                           case 'M':
	                                          M();   break;
                                           case 'r':
                                          	R();   break;
                                           case 'R':
                                          	R();   break;
                                           case 'c':
                                           	C();   break;
                                           case 'C':
	                                          C();   break;
                                           case 't':
                                      	burbuja();   break;
                                           case 'T':
	                                    burbuja();   break;


                                       default:
                                               system ("COLOR F0");
         gotoxy(30,28);printf("Error... Regrese y precione otra tecla Cx"); getch(); break;
                                  }//cierre del switch()
                             gotoxy (30,28); printf("                                         ");
                       gotoxy(30,28);printf("[v] para volver al Menu");
                                       otra=getche();
                                                 gotoxy (30,30); printf("                                         ");
                       gotoxy(30,28);printf("[v] Confirme para volver al Menu");
                                       otra=getche();

                                      	}//cierre del do while 
                                 	while(otra=='v' || otra=='V');


                                            clrscr();
                                                    system ("COLOR F0");
                    gotoxy(30,14);printf("   CECYTE BC PLANTEL VILLA DEL SOL");
                        gotoxy(30,18);printf("   PRODUCTO DE LA UNIDAD 3" );
                        gotoxy(30,20);printf("  Flores Calvillo Kenneth Iran        ");
                                             getch();

}//cierre del main y fin del programa

