#include <iostream>
#include "rayIntersect.h"


/*
    let's imagine the scene where the primitives are located as a box (AABB)
*/

struct AABB{
    coord min;
    coord max;
};

struct coord{
    float x;
    float y;
    float z;
};


AABB nearestIntersect(AABB leftTree, AABB rightTree){ //ещё луч в параметрах (позже добавить)

}

AABB intersectStateTable(AABB leftTree, AABB rightTree){ // ещё луч в параметрах (позже добавить)
    int hitL = rayIntersect(); 
    int hitR = rayIntersect(); // 1 - enter, 0 - exit, -1 - miss

    if(hitL == 1){
        if(hitR == 1){

        }
        else if(hitR  == 0){

        }
        else{
            return leftTree;
        }
    }
    else if(hitL == 0){
        if(hitR == 1){

        }
        else if(hitR  == 0){

        }
        else{
            return leftTree;
        }
    }
    else{
        if(hitR == 1){
            return rightTree;
        }
        else if(hitR  == 0){
            return rightTree;
        }
        else{
            
        }
    }
}