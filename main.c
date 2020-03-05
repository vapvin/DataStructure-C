#include <stdio.h>
#define INF 100000

int arr[INF];
int count = 0;

void insertBack(int data){
    arr[count] = data;
    count++;
}

void pushFront(int data){
    for(int i = count;  i >= 1; i--){
        arr[i] = arr[i - 1];
    }
    arr[0] = data;
    count++;
}

void show(){
    for(int i = 0; i < count; i++){
        printf("%d", arr[i]);
    }
}

int main(void){

    insertBack(1);
    insertBack(4);
    insertBack(7);
    insertBack(5);
    insertBack(3);
    pushFront(9);
    pushFront(2);
    show();
    return 0;
}