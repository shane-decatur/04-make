#include <stdio.h>

int problem1(){
  int sum = 0;
  int i;
  for (i = 3; i < 1000; i++){
    if (i % 3 == 0 || i % 5 == 0){
      sum += i;
    }
  }
  return sum;
}

int problem6(){
  int sum_squared = 0;
  int squares_summed = 0;
  int i;
  for (i = 1; i <= 100; i++){
    sum_squared += i;
    squares_summed += i*i;
  }
  return sum_squared * sum_squared - squares_summed;
}
