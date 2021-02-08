//Выполнила Татьяна Пужихина
#include <iostream>
// Задание 1
// Программа, проверяющая, что сумма двух чисел лежит в пределах от 10 до 20
int main(){
int var1;
int var2;
int b = 10;
int c = 20;
std::cout << "Enter the number ";
std::cin >> var1 >> var2;
if ((var1 + var2) > b && (var1 + var2) <= c)
{ 
std::cout << "True";
} else
{std::cout << "False" << std :: endl;}
//Задание 2
// Программа, проверяющая, является ли некоторое число - натуральным простым.
int d = 0;
int i = 1;
while (i <= var1)
 {
  if (var1 % i++ == 0)
   { 
     d++;
   }
 }
 std::cout << "Enterd number " << var1 << ((d==2) ? "" : " is not") << " simple number" << std :: endl ;
//Задание 3
// Программа, выводящая на экран “истину”, если две целочисленные константы, равны десяти сами по себе, либо их сумма равна десяти.
if (var1 == b && var2 == b)
 {std::cout << var1 << "and" << var2 << "= 10? - True" << std :: endl;}
else if ((var1 + var2) == b)
{std::cout << var1 + var2 << "= 10? - True" << std :: endl;}
else 
{std::cout << var1 + var2 << "  = 10? - False "  << var1 << " = 10? - False " << var2 << " = 10? - False " << std :: endl;}
//Задание 4
//Программа, которая определяет является ли год високосным
int year = 0;
int our_year = 2021;
 do {year++; 
  if (year % 4 == 0 && !(year == (year + 100)) || year == (year + 400))
 { 
    std::cout << year << std :: endl;}  
 }
while (year <= our_year);
} 
 
