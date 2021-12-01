#include <iostream>


bool primo (int x){

    for (int i = 2; i < x; ++i) {

        if(x%i==0){

            return false;
        }

    }
    return true;

}



int main() {



    int x;

    std::cin >> x;

    bool r = primo(x);

    if(primo(x)== true){

        std::cout << "numero primo" << std::endl;

    }else{

        std::cout << "numero non primo" << std::endl;

    }

    return 0;
}
