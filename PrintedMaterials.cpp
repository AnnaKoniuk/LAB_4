#include "PrintedMaterials.h"
//����������� �� �������, �������� �������� ��������
PrintedMaterials::PrintedMaterials(){
    sNameOfMaterial = "";
    this->iNumberOfPages= 0;
}
//����������� � �����������, �������� ������� ������� ��������
PrintedMaterials::PrintedMaterials(string name, int num){
    this->sNameOfMaterial = name;
    this->iNumberOfPages = num;
}
//����� �������� ����� ��� ����������� ��������(��'� � �-��� �������)
void PrintedMaterials::SetPrintedMaterials(string name, int num){
    this->sNameOfMaterial = name;
    this->iNumberOfPages = num;
}
