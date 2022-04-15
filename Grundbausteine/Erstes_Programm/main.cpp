# include<iostream>
# include <string>

void berechne(int n)
{
    std::cout<< "Teiler von " << n << " sind:\n";
    for(int teiler=1; teiler <=n;++teiler){
        if(n%teiler ==0)
            std::cout<<teiler << ", ";
    }
    std::cout << std::endl;
}

int main(int argc, char const *argv[])
{
    int wert = 0;
    if(argc <=1){
        std:cout << "Geben Sie eine Zahl ein: ";
        std:cin >> wert;
        if(!std::cin){
            return 1;
        }

    }else{
        wert=std::stoi(argv[1]);
    }

    return 0;
}
