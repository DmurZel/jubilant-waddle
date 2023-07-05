
#include <iostream>
#include <string>
#include <vector>
using namespace std;


std::vector<int> stringToInt(const std::string& str){
    
    std::vector<int> vec;
    
    char ch;
    int num;
    for(size_t i = 0; i < str.length(); ++i){
        ch = str.at(i);
        if(isdigit(ch)){
            num = int(ch - '0');
            vec.push_back(num);
        }
    }
    return vec;
}

int getInt(const std::vector<int> vec){
    int t,total;
    total = 0;
    t = 9;
    int sum1 = 0;
    for (const auto& numb : vec) {
        sum1 += numb;
    }
    for(auto it = vec.rbegin() + 1; it != vec.rend(); ++it){
        total += (t * (*it));
        t = t * 10 + 9;
    }
    total = total + sum1;
    return total;
}






int main() {
    
    
    std::string date = "11/27/1997";
    
    std::vector<int> dates = stringToInt(date);
    
    std::vector<int> A;
    std::vector<int> B;
    std::vector<int> C;
    
    A.push_back(dates[0]);
    A.push_back(dates[1]);

    




    B.push_back(dates[2]);
    B.push_back(dates[3]);
    C.push_back(dates[4]);
    C.push_back(dates[5]);
    C.push_back(dates[6]);
    C.push_back(dates[7]);

    
    std::cout<< A[0]<< "This is A[0] element"<< endl;
    std::cout<< A[1]<< "This is A[1] element"<< endl;
    std::cout<< B[0]<< "This is B[0] element"<< endl;
    std::cout<< B[1]<< "This is B[1] element"<< endl;

    std::cout<< C[0]<< "This is C[0] element"<< endl;
    std::cout<< C[1]<< "This is C[1] element"<< endl;
    std::cout<< C[2]<< "This is C[2] element"<< endl;
    std::cout<< C[3]<< "This is C[3] element"<< endl;



    int AA,BB,CCCC;
    AA = getInt(A);
    BB = getInt(B);
    CCCC = getInt(C);
    
    std::cout<< AA << " This is AA" << endl;
    std::cout<< BB << " this is BB" <<endl;
    std::cout<< CCCC <<" this is CCCC"<< endl;

    if(AA <= 12 && BB >= 12){
        std::cout<< "US"<< std::endl;
    }else if( AA >= 12 && BB <= 12){
        std::cout<<"EU"<< std::endl;
    }
    
    
          
}