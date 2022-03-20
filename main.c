#include <stdio.h>
#include <stdlib.h>
int main ()

{

    printf("EJERCICIO 1\n");
float dineroInicial, dineroFinal;
printf("Por favor indica cuanto dinero vas a invertir\n");
scanf("%f",&dineroInicial);

dineroFinal = (dineroInicial * 2 / 100);

printf("Su ganancia total en un mes sera de: %f\n", dineroFinal);

printf("EJERCICIO 2\n");
    float totalCompra, finalCompra;
    printf("Por favor indique cuanto es el total de la compra que realizo:\n");
    scanf("%f",&totalCompra);

    finalCompra = totalCompra - (totalCompra * 15/100);

    printf("Con el descuento usted debera pagar en total: %f\n", finalCompra);
printf("EJERCICIO 3\n");

  int hombres,mujeres,total;
    float totalHombres,totalMujeres;

    hombres = 0;
    mujeres = 0;
    total = 0;
    totalHombres = 0;
    totalMujeres = 0;

    printf ("Ingrese el numero total de hombres\n");
    scanf("%i", &hombres);
    printf("Ingrese el numero total de mujeres\n");
    scanf("%i", &mujeres);
    total = hombres + mujeres;
    totalHombres = (hombres * 100) / total;
    totalMujeres = (mujeres * 100) / total;


printf("El porcentaje de hombres es de %f\n", totalHombres);
printf("El porcentaje de mujeres es de %f\n", totalMujeres);


printf("EJERCICIO 4\n");
int  nota1, nota2, nota3;
   float promedio;

    nota1 = 0;
    nota2 = 0;
    nota3 = 0;
    promedio = 0;

    printf("Ingrese la primera nota\n");
    scanf("%i", &nota1);
    printf("Ingrese la segunda nota\n");
    scanf("%i", &nota2);
    printf("Ingrese la tercera nota\n");
    scanf("%i", &nota3);

    promedio = (nota1 + nota2 + nota3) / 3;

    if (promedio >= 7){
       printf("Usted esta aprobado\n");
    }

    else{
       printf("Usted esta desaprobado\n");
    }
printf("EJERCICIO 5\n");
float compraTotal, compraDescuento,compraFinal;
    compraTotal = 0;
    compraDescuento = 0;
    compraFinal = 0;

    printf("Cuanto gasto en su compra?\n");
    scanf("%f", &compraTotal );

    if(compraTotal > 5000){
    compraFinal= compraTotal - (compraTotal * 20/100);
    printf("Con el descuento usted pagara %f\n", compraFinal);
    }
    else{
        printf("Usted debera pagar %f\n", compraTotal);

    }
printf("EJERCICIO 6\n");
int horas,horasExtras;
 horas = 0;
 horasExtras = 0;
 printf("Indique cuantas horas trabajo el obrero\n");
 scanf("%i", &horas);
if(horas <= 40){
   horas  =  300 * horas;
printf("El salario del obrero es de: %i\n",horas );
}else{
horasExtras = horas - 40;
horasExtras = (40 * 300) + (horasExtras * 400 );
printf("El salario del obrero es de: %i\n", horasExtras);
}

 printf ("EJERCICIO 7\n");
 int num1, num2;
 num1 = 0;
 num2 = 0;

 printf ("Ingrese el primer valor\n");
 scanf ("%i", &num1);
 printf ("Ingrese el segundo valor\n");
 scanf ("%i", &num2);
    if(num2>num1){
    printf("%i %i\n", num1, num2);
 }
    else{
    printf ("%i %i\n", num2, num1);
}
printf ("EJERCICIO 8\n");
int camisas, totalCamisas, precioCamisas;
camisas = 0;
totalCamisas = 0;
precioCamisas = 0;

printf("Ingrese cuantas camisas va a comprar\n");
scanf("%i", &camisas);

printf ("Ingrese el precio total entre todas las camisas\n");
scanf("%i", &precioCamisas);

if (camisas >= 3) {
 totalCamisas = (precioCamisas - precioCamisas * 20/100);
}
else {
       totalCamisas = (precioCamisas - precioCamisas * 10/100);
        }
printf("El precio a pagar con el descuento aplicado es de %i\n", totalCamisas);

printf("EJERCICIO 9\n");
float numero1, numero2, resultado;
numero1 = 0;
numero2 = 0;
resultado = 0;

printf("Ingrese un numero entero\n");
scanf("%f", &numero1);

printf("Ingrese otro numero entero\n");
scanf ("%f", &numero2);

 if (numero1 == numero2 ){
    resultado = (numero1 * numero2);
    printf("El resultado es: %.2f\n", resultado);
}else if (numero1 > numero2){
    resultado = (numero1 - numero2);
    printf("El resultado es: %.2f\n", resultado);
}else if (numero1 > numero2){
    resultado = (numero1 + numero2);
    printf("El resultado es:  %.2f\n", resultado);
}




printf ("EJERCICIO 10\n");
float numm1, numm2, numm3;
numm1 = 0;
numm2 = 0;
numm3 = 0;

printf("Ingrese el primer numero\n");
scanf("%f", &numm1);
printf("Ingrese el segundo numero\n");
scanf("%f", &numm2);
printf("Ingrese el tercer numero\n");
scanf("%f", &numm3);

if (numm1 > numm2 && numm1 > numm3){
     printf("El numero mayor es: %.2f\n", numm1);
}else if (numm2 > numm3 && numm2 > numm1){
    printf("El numero mayor es: %.2f\n", numm2);
}else if (numm3 > numm1 && numm3 > numm2){
    printf("El numero mayor es: %.2f\n", numm3);
}



printf ("EJERCICIO 11\n" );

int i;
float promedioo,nota,acumulador9;
i = 0;
promedioo = 0;
nota = 0;
acumulador9 = 0;
for (i = 0; i<=6; i++)
{
    printf("Ingrese las 7 notas\n");
    scanf("%f", &nota);
    acumulador9 = acumulador9 + nota;
    promedioo = acumulador9 / 7;
}
printf("El promedio total es de %f\n", promedioo);




printf ("EJERCICIO 12\n");
int i1,cubo,cuarta,valores;
i1 = 0;
cubo = 0;
cuarta = 0;
valores = 0;


for (i1 = 0; i1<=9; i1++){
 printf("Ingrese los 10 numeros enteros que desea saber su cubo y cuarta\n");
    scanf("%i", &valores);
    cubo= valores * valores * valores;
    cuarta= valores * valores * valores * valores;
    printf("El cubo de su numero es %i\n", cubo);
    printf("La cuarta de su numero es %i\n", cuarta);

}

printf ("EJERCICIO 13\n");
int i2, numPositivos;
float numTotales10;
i2 = 0;
numPositivos = 0;
numTotales10 = 0;

for (i2=0; i2<=9; i2++){

    printf("Ingrese 10 numeros entre ellos positivos y negativos, solo se imprimiran los positivos\n");
    scanf("%f", &numTotales10);
    if (numTotales10 >= 0){
        printf("%f\n", numTotales10);
    }
}

printf("EJERCICIO 14\n");

int i3;
float negativos,convertirPositivos;

i3 = 0;
negativos=0;
convertirPositivos=0;
for (i3=0; i3<= 14; i3++){
    printf ("Ingrese 15 numeros negativos, se volveran positivos y se imprimiran\n");
    scanf("%f", &negativos);

    convertirPositivos = negativos * (-1);

    printf("%f\n", convertirPositivos);

}

printf ("EJERCICIO 15\n");

int i4,acumulador;
float promedio3, masBaja,alumnos;

i4= 0;
alumnos = 0;
acumulador = 0;
promedio3 = 0;
masBaja= 0;


for (i4=0; i4<=39; i4++){
    printf ("\n Ingrese las notas de 40 alumnos, se sacara la calificacion promedio y se imprimira la nota mas baja \n");
    scanf("%f", &alumnos);
    if(i==1){
        masBaja = alumnos;
    }
    if (alumnos < masBaja){
        masBaja = alumnos;
        }
    acumulador = acumulador + alumnos;
    promedio3 = acumulador / 40;
}
    printf("El promedio de el salon es de: %f\n", promedio);
    printf ("La califacion mas baja es de: %f\n", masBaja);

printf ("EJERCICIO 16\n");
int j, multiplicasion2, numInicialMulti;

j = 1;
multiplicasion2 = 0;
numInicialMulti = 0;


printf ("Ingrese el numero del que desea saber su tabla: \n");
scanf ("%i", &numInicialMulti);

for (j=1; j<=10; j++){
     multiplicasion2 = numInicialMulti * j;

    printf("%i\n", multiplicasion2, " x ", j ," = ", multiplicasion2*j );
}



}



