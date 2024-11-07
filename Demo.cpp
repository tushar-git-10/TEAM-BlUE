#include <iostream>

   
    int table(int val ,int i = 1 ){

       if (i==11){
        return val;

       }
        std::cout << val*i  << std::endl;
        table(val,++i);


        
    }




