// C programme to make a scientific calculator with conversions
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void add();
void sub();
void mul();
void divi();
void square();
void cube();
void power();
void squarert(); // square root
void cubert();   // cube root
void fac();      // factorial
void sine();
void cosine();
void tangent();
void cosec();
void sec();
void cot();
void loga();
void nlog();
void cel_fah(); // celsius to Fahrenheit
void fah_cel(); // Fahrenheit to celsius
void cel_kel(); // celsius to kelvin
void fah_kel(); // Fahrenheit to kelvin
void kel_fah(); // kelvin to Fahrenheit
void kel_cel(); // kelvin to celsius
void ms_kms();  // m/s to km/s
void kms_ms();  // km/s to m/s
void mh_kmh();  // m/h to km/h
void kmh_mh();  // km/h to m/h
void ms_mh();   // m/s to m/h
void kms_kmh(); // km/s to km/h
void mis_mih(); // mi/s to mi/h
void mih_kmh(); // mi/h to km/h
void ac_m2();   // acres to square metres
void m2_ac();   // square metres to acres
void ft2_in2(); // square feet to square inches
void in2_ft2(); // square inches to square feet
void ft2_m2();  // square feet to square metres
void m2_ft2();  // square metres to square feet
void ha_ac();   // hectares to acres
void ac_ha();   // acres to hectares
void mm_cm();   // millimetres to centimetres
void cm_mm();   // centimetres to millimetres
void m_km();    // metres to kilometres
void km_m();    // kilometres to metres
void m_in();    // metres to inches
void in_m();    // inches to metres
void mi_km();   // miles to kilometres
void km_mi();   // kilometres to miles
void ml_l();    // millilitres to litres
void l_ml();    // litres to millilitres
void cm3_m3();  // cubic centimetres to cubic metres
void m3_cm3();  // cubic metres to cubic centimetres
void l_m3();    // litres to cubic metres
void m3_l();    // cubic metres to litres
void g_kg();    // grams to kilograms
void kg_g();    // kilograms to grams
void kg_lb();   // kilograms to pounds
void lb_kg();   // pounds to kilograms
void kg_t();    // kilograms to tonnes
void t_kg();    // tonnes to kilograms
void kb_mb();   // kilobytes to megabytes
void mb_kb();   // megabytes to kilobytes
void mb_gb();   // megabytes to gigabytes
void gb_mb();   // gigabytes to megabytes
void gb_tb();   // gigabytes to terabytes
void tb_gb();   // terabytes to gigabytes
int main()
{
   int ch;
   printf("\n\t\t****** Functions ******\n");
   printf("1. scientific calculation\n");
   printf("2. conversion\n\n");
   printf("Enter your choice:");
   scanf("%d", &ch);
   printf("\n");
   if (ch == 1)
   {
      while (1) // infinite loop
      {
         int ch1;
         printf("\n\n");
         printf("\t\t****** Operations ******\n");
         printf("1. Addition\n");
         printf("2. Subtraction\n");
         printf("3. Multiplication\n");
         printf("4. Division\n");
         printf("5. Square\n");
         printf("6. Cube\n");
         printf("7. power\n");
         printf("8. Square root\n");
         printf("9. Cube root\n");
         printf("10. Factorial\n");
         printf("11. sin\n");
         printf("12. cos\n");
         printf("13. tan\n");
         printf("14. cosec\n");
         printf("15. sec\n");
         printf("16. cot\n");
         printf("17. log.\n");
         printf("18. natural log.\n");
         printf("\n");
         printf("0. EXIT --->\n");
         printf("\n");
         printf("Enter your choice:");
         scanf("%d", &ch1);
         printf("\n");
         switch (ch1)
         {
         case 1:
            add();
            break;
         case 2:
            sub();
            break;
         case 3:
            mul();
            break;
         case 4:
            divi();
            break;
         case 5:
            square();
            break;
         case 6:
            cube();
            break;
         case 7:
            power();
            break;
         case 8:
            squarert();
            break;
         case 9:
            cubert();
            break;
         case 10:
            fac();
            break;
         case 11:
            sine();
            break;
         case 12:
            cosine();
            break;
         case 13:
            tangent();
            break;
         case 14:
            cosec();
            break;
         case 15:
            sec();
            break;
         case 16:
            cot();
            break;
         case 17:
            loga();
            break;
         case 18:
            nlog();
            break;
         default:
            printf("Invalid choice!!!");

         case 0:
            exit(0);
            break;
         }
      }
   }
   else if (ch == 2)
   {
      printf("\t\t****** Conversions ******\n");
      printf("1. Temperature\n");
      printf("2. Speed\n");
      printf("3. Area\n");
      printf("4. Length\n");
      printf("5. Volume\n");
      printf("6. Mass\n");
      printf("7. Data\n");
      printf("\n");
      int ch2;
      printf("Enter your choice:");
      scanf("%d", &ch2);
      printf("\n");
      if (ch2 == 1)
      {
         while (1)
         {
            printf("\n\n");
            printf("\t\t****** Temperature conversions ******\n");
            printf("1. Celsius to Fahrenheit\n");
            printf("2. Fahrenheit to Celsius\n");
            printf("3. Celsius to Kelvin\n");
            printf("4. Fahrenheit to Kelvin\n");
            printf("5. Kelvin to Fahrenheit\n");
            printf("6. Kelvin to Celsius\n");
            printf("0. EXIT --->\n");
            printf("\n");
            int ch3;
            printf("Enter your choice:");
            scanf("%d", &ch3);
            switch (ch3)
            {
            case 1:
               cel_fah();
               break;
            case 2:
               fah_cel();
               break;
            case 3:
               cel_kel();
               break;
            case 4:
               fah_kel();
               break;
            case 5:
               kel_fah();
               break;
            case 6:
               kel_cel();
               break;
            default:
               printf("Invalid choice!!!\n");
            case 0:
               exit(0);
               break;
            }
         }
      }
      else if (ch2 == 2)
      {
         while (1)
         {
            printf("\n\n");
            printf("\t\t****** Speed conversions ******\n");
            printf("1. m/s to km/s\n");
            printf("2. km/s to m/s\n");
            printf("3. m/h to km/h\n");
            printf("4. km/h to m/h\n");
            printf("5. m/s to m/h\n");
            printf("6. km/s to km/h\n");
            printf("7. mi/s to mi/h\n");
            printf("8. mi/h to km/s\n\n");
            printf("0. EXIT -->\n");
            printf("\n");
            int ch4;
            printf("Enter your choice:");
            scanf("%d", &ch4);
            switch (ch4)
            {
            case 1:
               ms_kms();
               break;
            case 2:
               kms_ms();
               break;
            case 3:
               mh_kmh();
               break;
            case 4:
               kmh_mh();
               break;
            case 5:
               ms_mh();
               break;
            case 6:
               kms_kmh();
               break;
            case 7:
               mis_mih();
               break;
            case 8:
               mih_kmh();
               break;
            case 0:
               exit(0);
               break;
            default:
               printf("Invalid choice!!!\n");
               break;
            }
         }
      }
      else if (ch2 == 3)
      {
         while (1)
         {
            printf("\n\n");
            printf("\t\t****** Area conversion ******\n");
            printf("1. Acres to square metres\n");
            printf("2. Square metres to Acres\n");
            printf("3. Square feet to Square inches\n");
            printf("4. Square inches to Square feet\n");
            printf("5. Square feet to Square metres\n");
            printf("6. Square metres to Square feet\n");
            printf("7. Hectares to Acres\n");
            printf("8. Acres to Hectares\n\n");
            printf("0. EXIT -->\n");
            printf("\n");
            int ch5;
            printf("Enter your choice:");
            scanf("%d", &ch5);
            switch (ch5)
            {
            case 1:
               ac_m2();
               break;
            case 2:
               m2_ac();
               break;
            case 3:
               ft2_in2();
               break;
            case 4:
               in2_ft2();
               break;
            case 5:
               ft2_m2();
               break;
            case 6:
               m2_ft2();
               break;
            case 7:
               ha_ac();
               break;
            case 8:
               ac_ha();
               break;
            case 0:
               exit(0);
               break;
            default:
               printf("Invalid choice!!!");
               break;
            }
         }
      }
      else if (ch2 == 4)
      {
         while (1)
         {
            printf("\n\n");
            printf("\t\t****** Length conversions ******\n");
            printf("1. Millimetres to Centimetres\n");
            printf("2. Centimetres to Millimetres\n");
            printf("3. Metre to Kilometres\n");
            printf("4. Kilometres to Metres\n");
            printf("5. Metres to Inches\n");
            printf("6. Inches to Metres\n");
            printf("7. Miles to Kilometres\n");
            printf("8. Kilometres to Miles\n\n");
            printf("0. EXIT -->\n");
            printf("\n");
            int ch6;
            printf("Enter your choice:");
            scanf("%d", &ch6);
            switch (ch6)
            {
            case 1:
               mm_cm();
               break;
            case 2:
               cm_mm();
               break;
            case 3:
               m_km();
               break;
            case 4:
               km_m();
               break;
            case 5:
               m_in();
               break;
            case 6:
               in_m();
               break;
            case 7:
               mi_km();
               break;
            case 8:
               km_mi();
               break;
            case 0:
               exit(0);
               break;
            default:
               printf("Invalid choice!!!");
               break;
            }
         }
      }
      else if (ch2 == 5)
      {
         while (1)
         {
            printf("\n\n");
            printf("\t\t****** Volume conversions ******\n");
            printf("1. Millilitres to Litres\n");
            printf("2. Litres to Milliliters\n");
            printf("3. Cubic centimetres to Cubic metres\n");
            printf("4. Cubic metres to Cubic centimetres\n");
            printf("5. Litres to Cubic metres\n");
            printf("6. Cubic metres to Litres\n\n");
            printf("0. EXIT -->\n");
            printf("\n");
            int ch7;
            printf("Enter your choice:");
            scanf("%d", &ch7);
            switch (ch7)
            {
            case 1:
               ml_l();
               break;
            case 2:
               l_ml();
               break;
            case 3:
               cm3_m3();
               break;
            case 4:
               m3_cm3();
               break;
            case 5:
               l_m3();
               break;
            case 6:
               m3_l();
               break;
            case 0:
               exit(0);
               break;
            default:
               printf("Invalid choice!!!");
               break;
            }
         }
      }
      else if (ch2 == 6)
      {
         while (1)
         {
            printf("\n\n");
            printf("\t\t****** Mass conversions ******\n");
            printf("1. Grams to Kilograms\n");
            printf("2. Kilograms to grams\n");
            printf("3. Kilograms to Pounds\n");
            printf("4. Pounds to Kilograms\n");
            printf("5. Kilograms to Tonnes\n");
            printf("6. Tonnes to Kilograms\n\n");
            printf("0. EXIT -->\n");
            printf("\n");
            int ch7;
            printf("Enter your choice:");
            scanf("%d", &ch7);
            switch (ch7)
            {
            case 1:
               g_kg();
               break;
            case 2:
               kg_g();
               break;
            case 3:
               kg_lb();
               break;
            case 4:
               lb_kg();
               break;
            case 5:
               kg_t();
               break;
            case 6:
               t_kg();
               break;
            case 0:
               exit(0);
               break;
            default:
               printf("Invalid choice!!!");
               break;
            }
         }
      }
      else if (ch2 == 7)
      {
         while (1)
         {
            printf("\n\n");
            printf("\t\t****** Data conversions ******\n");
            printf("1. Kilobytes to Megabytes\n");
            printf("2. Megabytes to Kilobytes\n");
            printf("3. Megabytes to Gigabytes\n");
            printf("4. Gigabytes to Megabytes\n");
            printf("5. Gigabytes to Terabytes\n");
            printf("6. Terabytes to Gigabytes\n\n");
            printf("0. EXIT -->\n");
            printf("\n");
            int ch7;
            printf("Enter your choice:");
            scanf("%d", &ch7);
            switch (ch7)
            {
            case 1:
               kb_mb();
               break;
            case 2:
               mb_kb();
               break;
            case 3:
               mb_gb();
               break;
            case 4:
               gb_mb();
               break;
            case 5:
               gb_tb();
               break;
            case 6:
               tb_gb();
               break;
            case 0:
               exit(0);
               break;
            default:
               printf("Invalid choice!!!");
               break;
            }
         }
      }
   }
   return 0;
}
void add()
{
   int a, b;
   printf("Enter the values\n");
   printf("a = ");
   scanf("%d", &a);
   printf("b = ");
   scanf("%d", &b);
   printf("RESULT = %d", a + b);
}
void sub()
{
   int a, b;
   printf("Enter the values\n");
   printf("a = ");
   scanf("%d", &a);
   printf("b = ");
   scanf("%d", &b);
   printf("RESULT = %d", a - b);
}
void mul()
{
   int a, b;
   printf("Enter the values\n");
   printf("a = ");
   scanf("%d", &a);
   printf("b = ");
   scanf("%d", &b);
   printf("RESULT = %d", a * b);
}
void divi()
{
   int a, b;
   printf("Enter the values\n");
   printf("a = ");
   scanf("%d", &a);
   printf("b = ");
   scanf("%d", &b);
   if (b == 0)
   {
      printf("Enter non-zero value");
      exit(0);
   }
   else
   {
      printf("RESULT = %d", a / b);
   }
}
void square()
{
   float a;
   printf("Enter the value\n a = ");
   scanf("%f", &a);
   printf(" Square of %.4f = %.4f", a, pow(a, 2));
}
void cube()
{
   float a;
   printf("Enter the value\n a = ");
   scanf("%f", &a);
   printf(" Cube of %.4f = %.4f", a, pow(a, 3));
}
void power()
{
   float a, b;
   printf("Enter the number a:");
   scanf("%f", &a);
   printf("Enter the number b:");
   scanf("%f", &b);
   printf("power = %.4f ", pow(a, b));
}
void squarert()
{
   float a;
   printf("Enter the number:");
   scanf("%f", &a);
   printf("Square root of %f = %f", a, sqrt(a));
}
void cubert()
{
   float x;
   printf("Enter the number:");
   scanf("%f", &x);
   printf("cube root of %f = %f", x, cbrt(x));
}
void fac()
{
   int x, i, fac = 1;
   printf("Enter the number:");
   scanf("%d", &x);
   for (i = 1; i <= x; i++)
   {
      fac = fac * i;
   }
   printf("%d! = %d", x, fac);
}

void sine()
{
   float deg, rad;
   printf("Theta = ");
   scanf("%f", &deg);
   rad = deg * (3.14159 / 180.0);
   printf("sin(%.4f) = %.4f", deg, sin(rad));
}

void cosine()
{
   float deg, rad;
   printf("Theta = ");
   scanf("%f", &deg);
   rad = deg * (3.14159 / 180.0);
   printf("cos(%.4f) = %.4f", deg, cos(rad));
}

void tangent()
{
   float deg, rad;
   printf("Theta = ");
   scanf("%f", &deg);
   rad = deg * (3.14159 / 180.0);
   printf("tan(%.4f) = %.4f", deg, tan(rad));
}
void cosec()
{
   float deg, rad;
   printf("Theta = ");
   scanf("%f", &deg);
   rad = deg * (3.14159 / 180.0);
   printf("cosec(%.4f) = %.4f", deg, 1 / sin(rad));
}

void sec()
{
   float deg, rad;
   printf("Theta = ");
   scanf("%f", &deg);
   rad = deg * (3.14159 / 180.0);
   printf("sec(%.4f) = %.4f", deg, 1 / cos(rad));
}

void cot()
{
   float deg, rad;
   printf("Theta = ");
   scanf("%f", &deg);
   rad = deg * (3.14159 / 180.0);
   printf("cot(%.4f) = %.4f", deg, 1 / tan(rad));
}
void loga()
{
   float a;
   printf("Enter the value:");
   scanf("%f", &a);
   printf("log(%.4f) = %f", a, log10(a));
}

void nlog()
{
   float a;
   printf("Enter the value:");
   scanf("%f", &a);
   printf("Natural log(%.4f) = %f", a, log(a));
}

void cel_fah()
{
   float c;
   printf("Enter the value in Celsius:");
   scanf("%f", &c);
   printf("%.3f'C --> %.3f'F", c, (c * 9 / 5) + 32);
}
void fah_cel()
{
   float f;
   printf("Enter the value in Fahrenheit:");
   scanf("%f", &f);
   printf("%.3f'F --> %.3f'C", f, 0.555556 * (f - 32));
}
void cel_kel()
{
   float c;
   printf("Enter the value in Celsius:");
   scanf("%f", &c);
   printf("%.3f'C --> %.3f K", c, c + 273.15);
}
void fah_kel()
{
   float f;
   printf("Enter the value in Fahrenheit:");
   scanf("%f", &f);
   printf("%.3f'F --> %.3f K", f, (f - 32) * 0.555556 + 273.15);
}
void kel_fah()
{
   float k;
   printf("Enter the value in Kelvin:");
   scanf("%f", &k);
   printf("%.3f K --> %.3f'F", k, (k - 273.15) * 1.8 + 32);
}
void kel_cel()
{
   float k;
   printf("Enter the value in Kelvin:");
   scanf("%f", &k);
   printf("%.3f K --> %.3f'C", k, k - 273.15);
}
void ms_kms() // m/s to km/s
{
   float a;
   printf("Enter the value:");
   scanf("%f", &a);
   printf("%f m/s --> %f km/s", a, a * 0.001);
}
void kms_ms() // km/s to m/s
{
   float a;
   printf("Enter the value:");
   scanf("%f", &a);
   printf("%f km/s --> %f m/s", a, a * 1000);
}
void mh_kmh() // m/h to km/h
{
   float a;
   printf("Enter the value:");
   scanf("%f", &a);
   printf("%f m/h --> %f km/h", a, a * 0.001);
}
void kmh_mh() // km/h to m/h
{
   float a;
   printf("Enter the value:");
   scanf("%f", &a);
   printf("%f km/h --> %f m/h", a, a * 1000);
}
void ms_mh() // m/s to m/h
{
   float a;
   printf("Enter the value:");
   scanf("%f", &a);
   printf("%f m/s --> %f m/h", a, a * 3600);
}
void kms_kmh() // km/s to km/h
{
   float a;
   printf("Enter the value:");
   scanf("%f", &a);
   printf("%f km/s --> %f km/h", a, a * 3600);
}
void mis_mih() // mi/s to mi/h
{
   float a;
   printf("Enter the value:");
   scanf("%f", &a);
   printf("%f mi/s --> %f mi/h", a, a * 3600);
}
void mih_kmh() // mi/h to km/h
{
   float a;
   printf("Enter the value:");
   scanf("%f", &a);
   printf("%f mi/h --> %f km/h", a, a * 1.60934);
}
void ac_m2() // acres to square metres
{
   float a;
   printf("Enter the area in Acres:");
   scanf("%f", &a);
   printf("%f acres --> %f square metres", a, a * 4046.8564224);
}
void m2_ac() // square metres to acres
{
   float a;
   printf("Enter the area in square metres:");
   scanf("%f", &a);
   printf("%f square metres --> %f acres", a, a / 4046.8564224);
}
void ft2_in2() // square feet to square inches
{
   float a;
   printf("Enter the area in square feet:");
   scanf("%f", &a);
   printf("%f square feet --> %f square inches", a, a * 144);
}
void in2_ft2() // square inches to square feet
{
   float a;
   printf("Enter the area in square inches:");
   scanf("%f", &a);
   printf("%f square inches --> %f square feet", a, a / 144);
}
void ft2_m2() // square feet to square metres
{
   float a;
   printf("Enter the area in square feet:");
   scanf("%f", &a);
   printf("%f square feet --> %f square metres", a, a / 10.7639104);
}
void m2_ft2() // square metres to square feet
{
   float a;
   printf("Enter the area in square metres:");
   scanf("%f", &a);
   printf("%f square metres --> %f square feet", a, a * 10.7639104);
}
void ha_ac() // hectares to acres
{
   float a;
   printf("Enter the area in hectares:");
   scanf("%f", &a);
   printf("%f hectares --> %f acres", a, a * 2.4710538);
}
void ac_ha() // acres to hectares
{
   float a;
   printf("Enter the area in acres:");
   scanf("%f", &a);
   printf("%f acres --> %f hectares", a, a / 2.4710538);
}
void mm_cm() // millimetres to centimetres
{
   float a;
   printf("Enter the length in mm:");
   scanf("%f", &a);
   printf("%f mm --> %f cm", a, a * 0.1);
}
void cm_mm() // centimetres to millimetres
{
   float a;
   printf("Enter the length in cm:");
   scanf("%f", &a);
   printf("%f cm --> %f mm", a, a / 0.1);
}
void m_km() // metres to kilometres
{
   float a;
   printf("Enter the length in metres:");
   scanf("%f", &a);
   printf("%f m --> %f km", a, a * 0.001);
}
void km_m() // kilometres to metres
{
   float a;
   printf("Enter the length in Kilometres:");
   scanf("%f", &a);
   printf("%f km --> %f m", a, a / 0.001);
}
void m_in() // metres to inches
{
   float a;
   printf("Enter the length in metres:");
   scanf("%f", &a);
   printf("%f m --> %f in", a, a * 39.370079);
}
void in_m() // inches to metres
{
   float a;
   printf("Enter the length in Inches:");
   scanf("%f", &a);
   printf("%f in --> %f m", a, a / 39.370079);
}
void mi_km() // miles to kilometres
{
   float a;
   printf("Enter the length in Miles:");
   scanf("%f", &a);
   printf("%f mi --> %f km", a, a * 1.609344);
}
void km_mi() // kilometres to miles
{
   float a;
   printf("Enter the length in Kilometres:");
   scanf("%f", &a);
   printf("%f km --> %f mi", a, a / 1.609344);
}
void ml_l() // millilitres to litres
{
   float a;
   printf("Enter the volume in millilitres:");
   scanf("%f", &a);
   printf("%f ml --> %f l", a, a * 0.001);
}
void l_ml() // litres to millilitres
{
   float a;
   printf("Enter the volume in litres:");
   scanf("%f", &a);
   printf("%f l --> %f ml", a, a / 0.001);
}
void cm3_m3() // cubic centimetres to cubic metres
{
   float a;
   printf("Enter the volume in cubic centimetres:");
   scanf("%f", &a);
   printf("%f cm3 --> %f m3", a, a * 0.000001);
}
void m3_cm3() // cubic metres to cubic centimetres
{
   float a;
   printf("Enter the volume in cubic metres:");
   scanf("%f", &a);
   printf("%f m3 --> %f cm3", a, a / 0.000001);
}
void l_m3() // litres to cubic metres
{
   float a;
   printf("Enter the volume in litres:");
   scanf("%f", &a);
   printf("%f l --> %f m3", a, a * 0.001);
}
void m3_l() // cubic metres to litres
{
   float a;
   printf("Enter the volume in cubic metres:");
   scanf("%f", &a);
   printf("%f m3 --> %f l", a, a / 0.001);
}
void g_kg() // grams to kilograms
{
   float a;
   printf("Enter the mass in grams:");
   scanf("%f", &a);
   printf("%f g --> %f kg", a, a * 0.001);
}
void kg_g() // kilograms to grams
{
   float a;
   printf("Enter the mass in kilograms:");
   scanf("%f", &a);
   printf("%f kg --> %f g", a, a / 0.001);
}
void kg_lb() // kilograms to pounds
{
   float a;
   printf("Enter the mass in kilograms:");
   scanf("%f", &a);
   printf("%f kg --> %f lb", a, a * 2.2046226);
}
void lb_kg() // pounds to kilograms
{
   float a;
   printf("Enter the mass in pounds:");
   scanf("%f", &a);
   printf("%f lb --> %f kg", a, a / 2.2046226);
}
void kg_t() // kilograms to tonnes
{
   float a;
   printf("Enter the mass in kilograms:");
   scanf("%f", &a);
   printf("%f kg --> %f t", a, a * 0.001);
}
void t_kg() // tonnes to kilograms
{
   float a;
   printf("Enter the mass in tonnes:");
   scanf("%f", &a);
   printf("%f t --> %f kg", a, a / 0.001);
}
void kb_mb() // kilobytes to megabytes
{
   float a;
   printf("Enter the data in KB:");
   scanf("%f", &a);
   printf("%f KB --> %f MB", a, a / 1024);
}
void mb_kb() // megabytes to kilobytes
{
   float a;
   printf("Enter the data in MB:");
   scanf("%f", &a);
   printf("%f MB --> %f KB", a, a * 1024);
}
void mb_gb() // megabytes to gigabytes
{
   float a;
   printf("Enter the data in MB:");
   scanf("%f", &a);
   printf("%f MB --> %f GB", a, a / 1024);
}
void gb_mb() // gigabytes to megabytes
{
   float a;
   printf("Enter the data in GB:");
   scanf("%f", &a);
   printf("%f GB --> %f MB", a, a * 1024);
}
void gb_tb() // gigabytes to terabytes
{
   float a;
   printf("Enter the data in GB:");
   scanf("%f", &a);
   printf("%f GB --> %f TB", a, a / 1024);
}
void tb_gb() // terabytes to gigabytes
{
   float a;
   printf("Enter the data in TB:");
   scanf("%f", &a);
   printf("%f TB --> %f GB", a, a * 1024);
}