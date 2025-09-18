#include <iostream>
#include <vector>
using namespace std;
//add class definitions below this line
class Meal {
    public:
        void AddDrink(string drink) {
            drinks.push_back(drink);
        }
        void PrintDrinks() {
            for (auto a: drinks) {
                cout << a << endl;
            }
        }
        void AddAppetizer(string app) {
            appetizers.push_back(app);
        }
        void PrintAppetizers() {
            for (auto a: appetizers) {
                cout << a << endl;
            }
        }
        void AddMainCourse(string mc) {
            main_courses.push_back(mc);
        }
        void PrintMainCourses() {
            for (auto a: main_courses) {
                cout << a << endl;
            }
        }
        void AddDessert(string dessert) {
            desserts.push_back(dessert);
        }
        void PrintDesserts() {
            for (auto a: desserts) {
                cout << a << endl;
            }
        }
    private:
        vector<string> drinks;
        vector<string> appetizers;
        vector<string> main_courses;
        vector<string> desserts;
};
//add class definitions above this line
int main() {
    //add code below this line
    Meal dinner;
    dinner.AddDrink("water");
    dinner.PrintDrinks();
    dinner.AddAppetizer("bruschetta");
    dinner.PrintAppetizers();
    dinner.AddMainCourse("roast chicken");
    dinner.PrintMainCourses();
    dinner.AddDessert("chocolate cake");
    dinner.PrintDesserts();
    //add code above this line
    return 0;
}