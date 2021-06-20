#include "Book.h"
//������ � ������������ �������� �������� �����, ���� ������ �����
Book::Book(){
    PrintedMaterials();
    sAuthorSurname ="";
    sAuthorName="";
    dPageSize=0;
    iNumberOfCopies=0;
}
//��������� ���� ��� ������
void Book::ShowBook(){
    cout<<"Author`s name: "<<this->sAuthorName<<endl;
    cout<<"Author`s surname: "<<this->sAuthorSurname<<endl;
    cout<<"Name of the book: "<<this->sNameOfMaterial<<endl;
    cout<<"Number of pages: "<<this->iNumberOfPages<<endl;
    cout<<"Size of the page: "<<this->dPageSize<<endl;
    cout<<"Number of copies "<<this->iNumberOfCopies<<endl;
}
//�������� � ���� ��������� ����� ������ �� ������� ������
void show_books(Book*Books, int size){
    for(int i=0;i<size;i++){
        cout<<"Book "<<i+1<<endl;
        Books[i].ShowBook();
        cout<<"Paper costs: "<<Books[i].GetPaperCosts()<<endl;
        cout<<endl;
    }
}
Book::Book(string nameofmat, int pagnum, string auname, string ausurname,double psize,int copynum){
    PrintedMaterials(nameofmat,pagnum);
    this->sAuthorName = auname;
    this->sAuthorSurname = ausurname;
    this->dPageSize = psize;
    this->iNumberOfCopies = copynum;
}
void Book::SetBook(string nameofmat, int pagnum, string auname, string ausurname,double psize,int copynum){
    PrintedMaterials::SetPrintedMaterials(nameofmat,pagnum);
    this->sAuthorName = auname;
    this->sAuthorSurname = ausurname;
    this->dPageSize = psize;
    this->iNumberOfCopies = copynum;
}
//����������� ������ ������ ��� ���� ������, ����������� ����� �������, �-��� ������� � �-��� ���������
double Book::GetPaperCosts(){
    return dPageSize*iNumberOfPages*iNumberOfCopies;
}
//�������������� �������� ''�����'',���� ������� ������� �� ���� ���� ������(���� ��������������� ��� ����� ��� ����������)
bool operator>(Book&b1, Book&b2){
    if(b1.GetPaperCosts()>b2.GetPaperCosts()){
        return true;
    }
    return false;
}
//������� ������� �� �� ������
double GetSumOfAllCosts(Book*Books,int size){
    double dSum = 0;
    for(int i=0;i<size;i++){
        dSum+=Books[i].GetPaperCosts();
    }
    return dSum;
}
//���������� ������ ������� ����� �� ��������
void sort_books(Book*Books, int size){
    for(int i=0;i<size-1;i++){
        for(int k=0;k<size-i-1;k++){
            if(Books[k+1]>Books[k]){
                Book tmp = Books[k+1];
                Books[k+1] = Books[k];
                Books[k] = tmp;
            }
        }
    }
}
