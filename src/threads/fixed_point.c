#include <threads/fixed_point.h>
int converFirsttoFP_thenADD(int x, int y);
int addTwoFP(int x, int y);
int Multiply(int x, int y);
int multiplyTwoFP(int x, int y);
int converFirsttoFP_thenDivide(int x, int y);
int Divide(int x, int y);
int divideTwoFP(int x, int y);
int convertToFP(int x);
int convertTOInt(int x);
int multiply_thenconvert(int x, int y);


int converFirsttoFP_thenADD(int x, int y){                               //convert becuase to add with fp must be converted to fp first
    return x * (1 << 14) + y;
}
int addTwoFP(int x, int y){
    return x + y;
}

int Multiply(int x, int y){                                   //to multiply 2 real or 2 fp or one and one
    return x * y;
}
int multiplyTwoFP(int x, int y){
    return ((int64_t)x) * y/ (1 << 14);
}
int converFirsttoFP_thenDivide(int x, int y){
    return (x * (1 << 14) / y) ;
}
int Divide(int x, int y){                                    //to divide 2 real or 2 fp or one and one
    return x / y;
}
int divideTwoFP(int x, int y){
    return ((int64_t)x * (1 << 14) / y);
}
int convertToFP(int x){
    return x * (1 << 14);
}
int convertTOInt(int x){                                                        
    if(x < 0) return (x - (1<<14) / 2) / (1 << 14);
    return  (x + (1<<14) / 2) / (1 << 14);
}
int multiply_thenconvert(int x, int y){
    return (x * y) * (1 << 14);
}

