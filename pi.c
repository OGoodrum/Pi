

#include <stdio.h>

int main(){
    /* INPUT DATA */

    int n = 20; //Number of terms in summation
    
    /* END OF INPUT DATA */

    
    int i = 1;
    double result = 0.0;
    
    for(int counter = 1; counter <= n; counter ++){
    //inside the brackets
        //the first term inside the brackets

            int exponent = 2*i - 1;
            double term_1 = 1.0;

            for(int counter = 1; counter <= exponent; counter ++){

                term_1 = term_1 * (1.0/3);
            }
            term_1 = term_1 * 8;

        //the second term in the brackets
            double term_2 = 1.0;

            for(int counter = 1; counter <= exponent; counter ++){

                term_2 = term_2 * (1.0/7);
            }

            term_2 = term_2 * 4;
    
        //adding the terms
        double inside_brackets = term_1 + term_2;
    
    
    //outside the brackets
    exponent = i + 1;
    
    double outside_term = 1.0;

    for(int counter = 1; counter <= exponent; counter ++){

        outside_term = outside_term * (-1);
        }

    outside_term = outside_term/(2 * i -1);
    
    //expand
    
    double term_result = inside_brackets * outside_term;
    
    result = result + term_result;
        
    i ++;
}
    
    printf("With %d terms: pi = %.15f\n", n, result);
    
    return 0;
}