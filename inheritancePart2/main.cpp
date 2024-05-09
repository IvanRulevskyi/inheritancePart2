#include <iostream>
using namespace std;
//Task 1
class Figure
{
private:
    int length;
    int width;
public:
    Figure(int length, int width):
    length(length),
    width(width){}
    
    int getLength()
    {
        return length;
    }
    
    int getWidth()
    {
        return width;
    }
    
};

class Rectangle : public Figure
{
public:
    Rectangle(int length, int width):
    Figure(length, width){}
    
    int calculateArea()
    {
        return getLength() * getWidth();
    }
    
    void printCalculateArea()
    {
        cout << "Area of a rectangle: "<< calculateArea()<<endl;
    }
    
};

//Task2

class Review
{
private:
    string name;
    string review;
public:
    Review(string name, string review):
    name(name),
    review(review){}
    
    string getName()
    {
        return name;
    }
    string getReview()
    {
        return review;
    }
};

class MovieReview : public Review
{
private:
    string movieReview;
public:
    MovieReview(string name, string review, string movieReview):
    Review(name, review),
    movieReview(movieReview){}
    
    
    
};


int main() 
{
//    Доступ до захищених даних: Створіть базовий клас "Фігура" з захищеними полями для довжини і ширини. Додайте методи для встановлення і отримання цих значень. Створіть похідний клас "Прямокутник", який успадковує базовий клас і має метод для обчислення площі, який використовує захищені поля базового класу.
    
    Rectangle data(3,4);
    data.printCalculateArea();
 
    
//    Контроль доступу до методів і полів: Створіть базовий клас "Відгук" з захищеними полями, що містять ім'я та відгук. Забезпечте доступ до цих полів через методи. Створіть похідний клас "Відгук на фільм", який успадковує базовий клас та додає додаткове захищене поле для рейтингу фільму. Перевірте, чи можна отримати доступ до полів базового класу та похідного класу в різних контекстах.
    
    MovieReview film("qwerty","qwerty","qwerty");
}
