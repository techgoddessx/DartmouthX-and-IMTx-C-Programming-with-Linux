#include <stdio.h>

// convert metric measurements to imperial system values.
//
// 1 meters  -> 3.2808   feet
// 1 grams   -> 0.002205 pounds
//   celsius -> fahrenheit = 32 + 1.8 * C
double convertmeter(double value);
double convertgrams(double value);
double convertcelsius(double value);

int main(void){
        int n;
        scanf("%d",&n);

        double val;
        char unit;

        for(int i = 0; i < n; i++){
                scanf("%lf %c",&val,&unit);
                if (unit == 'm'){
                        printf("%lf ft\n",convertmeter(val));
                }
                else if(unit == 'g'){
                        printf("%lf lbs\n",convertgrams(val));
                }
                else if(unit == 'c'){
                        printf("%lf f\n",convertcelsius(val));
                }
        }
}
double convertmeter(double value){
        double feet;
        feet = value * 3.2808;
        return feet;
}

double convertgrams(double value){
        double pounds;
        pounds = value * 0.002205;
        return pounds;
}

double convertcelsius(double value){
        double fahr;
        fahr = 32 + 1.8 * value;
        return fahr;
}
