#include "PrintedMaterials.h"
class Book:public PrintedMaterials{
private:
    string sAuthorSurname, sAuthorName;//�������-��'� ������
    double dPageSize;//����� �������
    int iNumberOfCopies;//�-��� ���������
public:
    Book();
    Book(string nameofmat, int pagnum, string auname, string ausurname,double psize,int copynum);
    void SetBook(string nameofmat, int pagnum, string auname, string ausurname,double psize,int copynum);
    double GetPaperCosts();
    void ShowBook();
    friend bool operator>(Book&b1, Book&b2);
};
void sort_books(Book*Books, int size);
double GetSumOfAllCosts(Book*Books,int size);
void show_books(Book*Books, int size);
