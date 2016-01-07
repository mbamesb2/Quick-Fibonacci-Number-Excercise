//
//  main.c
//  AlgorTrying
//
//  Created by Michael Bamesberger on 1/7/16.
//  Copyright (c) 2016 Michael Bamesberger. All rights reserved.
//

#include <iostream>
#include <stdio.h>
using namespace std;

int FibIter(int a){
    if (a == 0){
        return 0;
    }
    
    
    int previous = 0;
    int current = 1;
    
    for(int i = 1; i < a; ++i)
    {
        int next = previous + current;
        previous = current;
        current = next;
        
    }
    
    return current;
    
};



int FibRec(int a){
    if (a == 0) {
        return 0;
    }
    else if (a == 1){
        return 1;
        
    }
    else {
        return FibRec(a-1) + FibRec(a-2);
    }
    
};


int main() {
    
    int n = 8;
    
    cout<<FibIter(n)<<endl;
    
    cout<< FibRec(n)<<endl;
    
}



