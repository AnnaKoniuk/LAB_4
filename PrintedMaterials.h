#include <iostream>
#include <string.h>
using namespace std;
class PrintedMaterials{
protected:
    string sNameOfMaterial;//ім'я друкованої продукції
    int iNumberOfPages;//к-сть сторінок
public:
    PrintedMaterials();
    PrintedMaterials(string name, int num);
    void SetPrintedMaterials(string name, int num);
};
