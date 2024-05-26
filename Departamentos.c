#include<stdio.h>
void mensualidadAnual(int[5][12],int,int);
void mesJulio(int[5][12],int,int);
void departamentoTres(int[5][12],int,int);
int main()
{
 int meses[5][12];
 int i,j;
 int depto=5;
 
 //Introduciendo los valores a la matriz.
	 printf("Ingrese los montos de los departamentos:\n");
	 for(i=0;i<depto;i++)
	 {
		 printf("\n");
		 for(j=0;j<12;j++)
		 {
			 printf("Departamentos %d, mes %d: ",i+1,j+1);
			 scanf("%d",&meses[i][j]);
			 
			 
		 }
	 }	
	 
	//Mostrando la matriz.
	printf("\n\n*****Los moNtos de los cinco departamentos son:*****\n");
	for(i=0;i<depto;i++)
	 {
		 printf("\n");
		 for(j=0;j<12;j++)
		 {
			 printf("\n[Departamentos %d, mes %d. Total: %d] ",i+1,j+1,meses[i][j]);
			 
			 
		 }
		 
	 }	
      //Invocando a la funcón mensualidadAnual.
     mensualidadAnual(meses,i,j);
     
     //invocando la función mesJulio;
     mesJulio(meses,i,j);
     //Invocando la función departamentoTres.
     departamentoTres(meses,i,j);
}

void mensualidadAnual(int menAnu[5][12],int ii,int jj)
{
	
	int i,j;
	int montoAnual=0,montoMes=0;
	printf("\n\n*****MENSUALIDAD Y MONTO ANUAL ES:******\n");

	 printf("\nTotal de monto por mes de los cinco departamanetos:\n ");
	 
	 for(i=0;i<ii;i++)
	 {
		
		 for( j=0;j<jj;j++)
		 {  
			
			 montoMes=menAnu[i][j]+menAnu[i+1][j]+menAnu[i+2][j]+menAnu[i+3][j]+menAnu[i+4][j];
			 printf("\nMes %d con un total de: %d",j+1,montoMes);
		 }
		  break;
		
	 }
	
	 for(int i=0;i<ii;i++)
	 {
		 for(int j=0;j<jj;j++)
		 {  
			 montoAnual=montoAnual+menAnu[i][j];
			 
		 }
		  
	 }	
	 printf("\n\nEl monto anual es: %d",montoAnual);
}

void mesJulio(int mesAnu2[5][12],int i2,int j2)
{
	int i,j,mayor=0,cont=0;
	printf("\n\n*****Departamento con mayor ventas en el mes de Julio:*****\n");
	for(i=0;i<i2;i++)
	{
		for(j=0;j<j2;j++)
		{
		 /* if(mesAnu2[i][1]>mayor)
		  {
			 mayor=mesAnu2[i][1]; 
			 printf("%d",mesAnu2[i][1]);
		  }	*/
		}
		printf("\n\nDepartamento %d con un total de %d",i+1,mesAnu2[i][6]);
		
	}
	
	printf("\n\nEl departamento que tuvo la mayor venta en el mes de julio fue:\n");
	for(i=0;i<i2;i++)
	{
		for(j=0;j<j2;j++)
		{
		  if(mesAnu2[i][6]>mayor)
		  {
			 mayor=mesAnu2[i][6]; 
			cont++;
		  }	
		}
		 
		//printf("Departamento %d con un total de: %d",i+1,mesAnu2[i][1]);
		
	}
	printf("\nDepartamento %d con un total de: %d",cont,mayor);	

	
}

void departamentoTres(int depTres[5][12],int i3,int j3)
{
	
	int i,j,mayor=0,menor;
	printf("\n\n*****Mes de mayor y menor de ventas en el departamento 3:*****\n");
	for(i=0;i<i3;i++)
	{
		for(j=0;j<j3;j++)
		{
			if(depTres[2][j]>mayor)  //[0] Es el departamento 1.
		  {
			 mayor=depTres[2][j]; 
			
		  }

			
		}
		
		break;
	}
	printf("\n\nMensualidad mayor del departamento 3: %d",mayor);
	
	
	menor=mayor;
	for(i=0;i<i3;i++)
	{
		for(j=0;j<j3;j++)
		{
			if(menor>depTres[2][j])
			menor=depTres[2][j];
		}
		break;
	}
	printf("\nMensualidad menor del departamento 3: %d",menor);
	
	
	
	
	
	
}


