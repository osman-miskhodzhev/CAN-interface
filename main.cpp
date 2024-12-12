#include <iostream>
#include <vector>

int main(){
    std::vector<float> can_high = {2.5, 3.5, 2.5, 2.5};
    std::vector<float> can_low = {2.5, 1.5, 2.5, 2.5};
    std::vector<int> result;

    for (int i = 0; i < 4; i++)
    {
        if (can_high[i]-can_low[i] == 0)
        {
            result.push_back(1);
        } else {
            result.push_back(0);
        }
    }
    for (int elem : result) {
        std::cout << elem;
    }
    std::cout << "\n";
    

}