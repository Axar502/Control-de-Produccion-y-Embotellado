#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <iomanip>
#include <stdio.h>

using namespace std;

void agregarGra();
void agregarGa();
void agregarAg();
void verEmp();
void verEmb();

int main()
{
    int opcion;
    int opcEm;
    int opcAg;
    //Menu principal
    do {
        cout << "\t Menu principal";
        cout << "\n 1. Empacado";
        cout << "\n 2. Embotellado";
        cout << "\n 3. Consulta de informacion";
        cout << "\n 4. Salir";
        cout << "\n Seleccionar opcion de 1-4: ";
        cin >> opcion;
        
        switch (opcion)

        {
        case 1: system("CLS");
            do {
                cout << "\n Opciones de Empacado";
                cout << "\n 1. Galletas";
                cout << "\n 2. Granos basicos";
                cout << "\n 3. Menu principal";
                cout << "\n 4. Salir";
                cout << "\nSeleccionar opcion de 1-4: ";
                cin >> opcEm;
				
                switch (opcEm)
                {
                case 1: system("CLS");
                   	agregarGa();

                    system("pause");
                    system("CLS");
                    break;

                case 2: system("CLS");
                   // cout << "En proceso"; 
                    agregarGra();


                    system("pause");
                    system("CLS");
                    break;

                case 3: system("CLS");
                    cout << "\tRgresaras al Menu Principal\n\n";

                    
                    system("pause");
                    system("CLS");
                    return main();
                    break;

                case 4: system("CLS");
                    cout << "\t Gracias por usarme \n\n";
                    exit(0);
                    break;

                default:
                    cout << "ingreso de valor fuera de rango";
                    break;
                }


                } while (opcEm != 4);
                system("pause");
                system("CLS");
                break;

        case 2: system("CLS");
            do {
                cout << "\n Opciones de Embotellado";
                cout << "\n 1. Agua";
                cout << "\n 2. Menu principal";
                cout << "\n 3. Salir";
                cout << "\nSeleccionar opcion de 1-3: ";
                cin >> opcAg;

                switch (opcAg)
                {
                case 1: system("CLS");
                    cout << "\t Embotellado de Agua\n\n";
                    agregarAg();

                    system("pause");
                    system("CLS");
                    break;

                case 2: system("CLS");
                    cout << "\tRegresaras al Menu Principal\n\n";
               

                    system("pause");
                    system("CLS");
                    return main();
                    break;

                case 3: system("CLS");
                    cout << "\t Gracias por usarme :) \n\n";
                    exit(0);
                    break;

                default:
                    cout << "ingreso de valor fuera de rango";
                    break;
                }

                system("pause");
                system("CLS");
                break;


            } while (opcAg != 3);
            system("pause");
            system("CLS");
            break;

        case 3: system("CLS");
        	int opcI;
        	do{
            cout << "\nInformacion de productos";
            cout << "\n1.Empaquetado";
            cout << "\n2.Embotellado";
            cout << "\n3.Regresar al Menu Principal";
            cout << "\nSeleccione una opcion de 1-3. ";
            cin >> opcI;
            
            switch (opcI){
            	case 1: system("CLS");
            	verEmp();
            	//system("pause");
            	system("CLS");
            	break;
            	
            	case 2: system("CLS");
            	verEmb();
            	//system("pause");
            	system("CLS");
            	break;
            	
            	case 3: system("CLS");
        		cout << "Regresaras al Menu Principal";
            	//system("pause");
            	system("CLS");
            	return main();
            	break;	
            	
            }
            
            
            }while (opcion != 3);
     		system("CLS");
            break;

        case 4: system("CLS");
            cout << "\t Gracias por usarme \n\n";
            exit(0);
            break;
     
            
        }
       
    }while (opcion != 4);
    system("pause");
    return main();
   
}

void agregarGra()
{
    ofstream archivo;
  
    float Maiz;
    float Azucar;
    int opcG;
    float empM;
    float empA;
    int parteEntera;
    float parteDecimal;


    archivo.open("Empacados.txt", ios::app);

    if (archivo.fail())
    {
        cout << "No se pudo abrir el archivo";
        system("pause");
        exit(1);
    }
    do {
        cout << "\t Tipo de Granos";
        cout << "\n 1. Maiz";
        cout << "\n 2. Azucar";
        cout << "\n 3. Regresar al Menu Principal";
        cout << "\n Seleccionar opcion de 1-3: ";
        cin >> opcG;

        switch (opcG)
        {
        case 1: system("CLS");
            cout << "\tEmpacado Maiz\n\n";
            cout << " Ingrese el peso total en Kilogramos: ";
            cin >> Maiz;
            empM = (Maiz * 1000) / 250;
	        parteEntera = (int) empM;
        	parteDecimal = empM - parteEntera;

            cout << endl;
            cout << "\t Maiz";
            archivo << "\n Cantidad de unidades de maiz de 250g c/u empacadas: " << parteEntera << endl;
            archivo << "Parte sobrante de los kilos es:" <<fixed<<setprecision(2)<<parteDecimal << endl;
            cout << endl;
            cout << "\n .....\n";
            archivo.close();

           // system("pause");
            //system("CLS");
            break;

        case 2: system("CLS");
            cout << "\tEmpacado de Azucar\n\n";
            cout << " Ingrese el peso total en Kilogramos ";
            cin >> Azucar;
            empM = (Azucar * 1000) / 400;
            parteEntera = (int) empM;
        	parteDecimal = empM - parteEntera;

            cout << endl;
            cout << "\t Azucar";
            archivo << "\n Cantidad de unidades de Azucar de 400g c/u empacadas: " << parteEntera << endl;
            archivo << "\n Parte sobrante de los kilos es:"<<fixed<<setprecision(2)<<parteDecimal << endl;
            cout << endl;
            cout << "\n .....\n";
            archivo.close();
            break;
        
        case 3: system ("CLS");
        cout << "Regresaras al menu";
        
        system ("pause");
        system ("CLS");
        return agregarGra();
        break;
        
        

        default:
            cout << "ingreso de valor fuera de rango";
            break;
        }

        system("pause");
        system("CLS");
        break;


    } while (opcG != 3);
    system("pause");
    system("CLS");
    
  }
  
  void agregarAg()
  {
  	  ofstream archivo;
    float tiempo;
    float opAg;
    int opcG;
    float empM;
    float empA;


    archivo.open("Embotellado.txt", ios::app);

    if (archivo.fail())
    {
        cout << "No se pudo abrir el archivo";
        system("pause");
        exit(1);
    }
     
     cout << "\tIngrese el tiempo de produccion en horas\n";
     cin >> tiempo;
     cout << "\n ingrese la medida de botella a usar\n";
     cout << "\n1. 250 ml";
     cout << "\n2. 650 ml";
     cout << "\n seleccione opcion de 1-2: ";
     cin  >> opcG;
     switch (opcG)
     {
     	case 1 :
     	cout << "Botella de 300ml";
     	opAg = tiempo*250;
     	cout << endl;
            cout << "\t Agua Embotellada";
            archivo << "\n Cantidad de Agua de 300ml : " << fixed << setprecision(0) << opAg << endl;
            cout << endl;
            cout << "\n .....\n";
            archivo.close();
            break;
            
            case 2: 
            
        cout << "Botella de 650ml";
     	opAg = tiempo*175;
     	cout << endl;
            cout << "\t Azucar";
            archivo << "\n Cantidad de Agua de 650ml : " << fixed << setprecision(0) << opAg << endl;
            cout << endl;
            cout << "\n .....\n";
            archivo.close();
            break;       	
	 }
      
  }
  
void agregarGa()
{
	ofstream archivo;
    float tiempo;
    float opAg;
    int opcG;
    int galletas, costoGa, horaG;
    int cantidadH, costoProd;


    archivo.open("Empacados.txt", ios::app);

    if (archivo.fail())
    {
        cout << "No se pudo abrir el archivo";
        system("pause");
        exit(1);
    }
    
    cout << "\nCantidad de paquetes de Galletas a empacar";
    cin >> galletas;
    cout << "\n Costo unitario de empaque ";
    cin >> costoGa;
    cout <<"\nPromedio de empaquetado por hora";
	cin >> horaG;
	cantidadH = galletas/horaG;
	costoProd = costoGa * galletas;
	
	cout << "Galletas";
     	cout << endl;
            cout << "\t Produccion de Galletas";
            archivo << "\n Cantidad de Galletas empacadas : "<< cantidadH << endl;
            archivo << "\n El costo de produccion es: " << costoProd << endl;
            cout << endl;
            cout << "\n .....\n";
            archivo.close();
	
}

void verEmp(){
	
	ifstream archivo;
	string texto;
	
	archivo.open("Empacados.txt", ios::in);

	if (archivo.fail())
	{
		cout << "No se pudo abrir el archivo";
		system("pause");
		exit(1);
	}
	
	while (!archivo.eof()) {
		getline(archivo, texto);
		cout << texto << endl; 
	}
	
	system("pause");
	
	archivo.close();
}

void verEmb(){
	ifstream archivo;
	string texto;
	
	archivo.open("Embotellado.txt", ios::in);

	if (archivo.fail())
	{
		cout << "No se pudo abrir el archivo";
		system("pause");
		exit(1);
	}

	while (!archivo.eof()) {
		getline(archivo, texto);
		cout << texto << endl; 
	}

	system("pause");
	
	archivo.close();	
}
       
