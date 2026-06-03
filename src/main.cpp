#include <iostream>
#include <string>

//値渡し　データを丸ごとコピーして渡す (重いデータは遅くなる)
void byValue(std::string str) {
    str += "(変更)";
}

//ポインタわたす
void byPointer(std::string* strPtr) {
    if (strPtr != nullptr) {
        *strPtr += "変更ポインタ";
    }
}

void byReference(std::string& strRef) {
    strRef += "(変更参照)";
}

int main(){
    std::string text = "Hello";

    //値渡し
    byValue(text);
    std::cout << "値渡し後: " << text << std::endl; //出力 :Hello

    //ポインタ渡し
    byPointer(&text);
    std::cout << "値渡し後: " << text << std::endl; 
    
    //アドレスを渡す
    byReference(text);
    std::cout << "参照渡し後: " << text << std::endl;

    return 0;

}
