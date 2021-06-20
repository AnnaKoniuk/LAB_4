#include "Book.h"
//методи і конструктори аналогічні базовому класу, інші методи опишу
Book::Book(){
    PrintedMaterials();
    sAuthorSurname ="";
    sAuthorName="";
    dPageSize=0;
    iNumberOfCopies=0;
}
//виведення інфи про книжку
void Book::ShowBook(){
    cout<<"Author`s name: "<<this->sAuthorName<<endl;
    cout<<"Author`s surname: "<<this->sAuthorSurname<<endl;
    cout<<"Name of the book: "<<this->sNameOfMaterial<<endl;
    cout<<"Number of pages: "<<this->iNumberOfPages<<endl;
    cout<<"Size of the page: "<<this->dPageSize<<endl;
    cout<<"Number of copies "<<this->iNumberOfCopies<<endl;
}
//виводимо в циклі переданий масив книжок та витрати паперу
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
//знаходження витрат паперу для одної книжки, перемножуємо розмір сторінки, к-сть сторінок і к-сть примірників
double Book::GetPaperCosts(){
    return dPageSize*iNumberOfPages*iNumberOfCopies;
}
//перевантажений оператор ''більше'',який порівнює витрати на папір двох книжок(будм використовувати цей метод для сортування)
bool operator>(Book&b1, Book&b2){
    if(b1.GetPaperCosts()>b2.GetPaperCosts()){
        return true;
    }
    return false;
}
//сумарна витрата на всі книжки
double GetSumOfAllCosts(Book*Books,int size){
    double dSum = 0;
    for(int i=0;i<size;i++){
        dSum+=Books[i].GetPaperCosts();
    }
    return dSum;
}
//сортування книжок методом обміну на спадання
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
