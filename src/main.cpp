#include <iostream>
#include <algorithm>
#include <vector>

void print(std::vector<int> &tmpVec){
  for(int i = 0; i < tmpVec.size(); i++)
        std::cout<<tmpVec[i]<<" ";
    std::cout<<std::endl;
}

int main(){
  std::cout << "Task_4" << std::endl;
 
  std::vector<int> vec = {-100,-50, -5, 1, 10, 15};
  print(vec);
  for(int i = 0; i < vec.size(); i++){
    for(int j = 0; j < vec.size()-1; j++){
        if(abs(vec[j]) > abs(vec[j+1])){
          int temp = vec[j];
          vec[j] = vec[j+1];
          vec[j+1] = temp;
        }
    }
  }
  print(vec);

    return 0;
}

// Вам даётся массив целых чисел, отсортированных по возрастанию. 
// Необходимо вывести его на экран отсортированным в 
// порядке возрастания модуля чисел
// Пример:
// Массив {-100,-50, -5, 1, 10, 15}
// Вывод: 1, -5, 10, 15, -50, -100

// Задание со звёздочкой: оптимизировать решение 
// четвёртой задачи, чтобы оно совершало 
// как можно меньше операций 