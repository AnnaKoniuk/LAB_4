#include "PrintedMaterials.h"
//конструктор по дефолту, присвоює початкові значення
PrintedMaterials::PrintedMaterials(){
    sNameOfMaterial = "";
    this->iNumberOfPages= 0;
}
//конструктор з параметрами, присвоює відповідні передані значення
PrintedMaterials::PrintedMaterials(string name, int num){
    this->sNameOfMaterial = name;
    this->iNumberOfPages = num;
}
//метод введення даних для друкованого матеріалу(ім'я і к-сть сторінок)
void PrintedMaterials::SetPrintedMaterials(string name, int num){
    this->sNameOfMaterial = name;
    this->iNumberOfPages = num;
}
