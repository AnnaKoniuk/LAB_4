#include <iostream>
#include <string.h>
using namespace std;
class PrintedMaterials{
protected:
    string sNameOfMaterial;//��'� ��������� ���������
    int iNumberOfPages;//�-��� �������
public:
    PrintedMaterials();
    PrintedMaterials(string name, int num);
    void SetPrintedMaterials(string name, int num);
};
