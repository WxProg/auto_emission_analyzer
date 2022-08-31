#include <iostream>
using namespace std;

int main() {
   int Odometer_Reading;
   int Choice;
   double Emissions;

   // Assigning all constants
   const int Carbon_monoxide                   = 1;
   const int Hydrocarbons                      = 2;
   const int Nitrogen_oxides                   = 3;
   const int Nonmethane_hydro                  = 4;
   const int Mileage                           = 50000;
   const double Carbon_monoxide_LimitUnder50k  = 3.4;
   const double Hyrdocarbons_LimitUnder50k     = 0.31;
   const double Nitrogen_oxides_LimitUnder50k  = 0.4;
   const double Nonmethane_hydro_LimitUnder50k = 0.25;
   const double Carbon_monoxide_LimitOver50k   = 4.2;
   const double Hyrdocarbons_LimitOver50k      = 0.39;
   const double Nitrogen_oxides_LimitOver50k   = 0.5;
   const double Nonmethane_hydro_LimitOver50k  = 0.31;



   cout << endl << "=============================" << endl;
   cout << "Automobile Emissions Analyzer" << endl;
   cout << "=============================" << endl;
   cout << "\nPlease enter a pollutant number" << endl;
   cout << "  1 - Carbon monoxide"             << endl;
   cout << "  2 - Hydrocarbons"                << endl;
   cout << "  3 - Nitrogen oxide"              << endl;
   cout << "  4 - Nonmethane hydrocarbons -> "        ;
   cin  >> Choice;                                                      //Reading in user's pollutant type
   cout << endl << "Please enter pollutant emissions in grams per mile -> ";
   cin  >> Emissions;                                                   //Reading in user's emissions amount
   cout << endl << "Please enter the current odometer reading -> ";
   cin >> Odometer_Reading;                                             //Reading in user's odometer reading



                                                                 //Switch statement based on user's pollutant type
   switch(Choice) {
       case Carbon_monoxide:
           if (Odometer_Reading > Mileage)                       //odometer reading is over 50k marker
           {
               if (Emissions > Carbon_monoxide_LimitOver50k)     //emissions amount is over > 50k miles limit
                   cout << "\nThis car *DOES NOT MEET* the legal limits for this pollutant" << endl;
               else                                              //emissions are equal or less than the over 50k limit
                   cout << "\nThis car *DOES MEET* the legal limits for this pollutant." << endl;
           } else                                                //car has les than 50k miles or equal to 50k miles
           {
               if (Emissions > Carbon_monoxide_LimitUnder50k)    //emissions amount is over < 50k miles limit
                   cout << "\nThis car *DOES NOT MEET* the legal limits for this pollutant." << endl;
               else                                              //emissions are less than the under 50k limit
                   cout << "\nThis car *DOES MEET* the legal limits for this pollutant." << endl;
           }
           break;
       case Hydrocarbons:
           if (Odometer_Reading > Mileage)                       //odometer reading is over 50k marker
           {
               if (Emissions > Hyrdocarbons_LimitOver50k)        //emissions amount is over > 50k miles limit
                   cout << "\nThis car *DOES NOT MEET* the legal limits for this pollutant." << endl;
               else                                              //emissions are equal or less than the over 50k limit
                   cout << "\nThis car *DOES MEET* the legal limits for this pollutant." << endl;
           } else                                                //car has les than 50k miles or equal to 50k miles
           {
               if (Emissions > Hyrdocarbons_LimitUnder50k)
                   cout << "\nThis car *DOES NOT MEET* the legal limits for this pollutant." << endl;
               else                                              //emissions are less than the under 50k limit
                   cout << "\nThis car *DOES MEET* the legal limits for this pollutant." << endl;
           }
           break;
       case Nitrogen_oxides:
           if (Odometer_Reading > Mileage)                       //odometer reading is over 50k marker
           {
               if (Emissions > Nitrogen_oxides_LimitOver50k)     //emissions amount is over > 50k miles limit
                   cout << "\nThis car *DOES NOT MEET* the legal limits for this pollutant." << endl;
               else                                              //emissions are equal or less than the over 50k limit
                   cout << "\nThis car *DOES MEET* the legal limits for this pollutant." << endl;
           } else                                                //car has les than 50k miles or equal to 50k miles
           {
               if (Emissions > Nitrogen_oxides_LimitUnder50k)
                   cout << "\nThis car *DOES NOT MEET* the legal limits for this pollutant." << endl;
               else                                              //emissions are less than the under 50k limit
                   cout << "\nThis car *DOES MEET* the legal limits for this pollutant." << endl;
           }
           break;
       case Nonmethane_hydro:
           if (Odometer_Reading > Mileage)                       //odometer reading is over 50k marker
           {
               if (Emissions > Nonmethane_hydro_LimitOver50k)    //emissions amount is over > 50k miles limit
                   cout << "\nThis car *DOES NOT MEET* the legal limits for this pollutant." << endl;
               else                                              //emissions are equal or less than the over 50k limit
                   cout << "\nThis car *DOES MEET* the legal limits for this pollutant." << endl;
           } else                                                //car has les than 50k miles or equal to 50k miles
           {
               if (Emissions > Nonmethane_hydro_LimitUnder50k)
                   cout << "\nThis car *DOES NOT MEET* the legal limits for this pollutant." << endl;
               else                                              //emissions are less than the under 50k limit
                   cout << "\nThis car *DOES MEET* the legal limits for this pollutant." << endl;
           }
           break;
   }
   cout << "\nThanks for using the Auto Emissions Analyzer." << endl;  //Displays the ending of program.

    return (0);
}

/* ========================================================================== */
/*                   E N D    O F    P R O G R A M                            */
/* ========================================================================== */