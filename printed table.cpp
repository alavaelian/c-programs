#include<iostream>
#include<string>
using namespace std;
int main (){



    string matriz1[6][6]={{"|Elian  ","Alava   ","19  ","M   ","1.80 ","80  "},{"|yuleydy","molina  ","18  ","F   ","1.80 ","50  "},{"|Miriam ","Chica   ","45  ","F   ","1.70 ","60  "},{"|Davis  ","Chica   ","19  ","M   ","1.75 ","50  "},{"|Miguel ","Ruiz    ","19  ","M   " ,"1.75 ","40  "},{"|Britney","Alava   ","17  ","F   ","1.69 ","50  "}};
    cout<<"La Tabla es \n";
    cout<<"|NOMBRE |APELLIDO|EDAD|SEXO|ESTA.|PESO|"<<endl;
    cout<<"|-------------------------------------|"<<endl;
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cout<<matriz1[i][j]<<"|";
        }
        cout<<endl;
        cout<<"|-------------------------------------|"<<endl;

    }
}
