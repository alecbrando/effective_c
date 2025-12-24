#include <stdio.h>
#include <math.h>
#include <limits.h>

const char *show_classification(double x);


int main() {
      printf("First case zero: %s\n", show_classification(0)); 
      printf("First case Inf: %s\n", show_classification(((-1.0)/0))); 
      printf("First case Normal: %s\n", show_classification(1.0)); 
      printf("First case NaN: %s\n", show_classification((0.0/0.0))); 
      printf("First case SubNormal: %s\n", show_classification(10^-22)); 

      int lose_precision = INT_MAX;
      printf("We are at %d\n", lose_precision);
      float lost_precision = (float) lose_precision;
      printf("What is the value of this? %f\n", lost_precision);


}


const char *show_classification(double x) {
    switch(fpclassify(x)) {
        case FP_INFINITE: return "Inf";
        case FP_NAN: return "NaN";
        case FP_NORMAL: return "normal";
        case FP_SUBNORMAL: return "subnormal";
        case FP_ZERO: return "zero";
        default: return "unknown";
    }
}
