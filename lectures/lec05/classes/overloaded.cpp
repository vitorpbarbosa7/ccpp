#include <iostream>
#include <string>

class SalesData {
    public:
        // Constructors
        SalesData() = default;
        // avoid copying the entire string, so use reference
        SalesData(const std::string& s, unsigned n, double p)
            // member initializer list 
            // here we are initializing the variables
            : bookNo(s), units_sold(n), revenue(p*n) { }
        SalesData(const std::string& s) : bookNo(s) { }
        SalesData(std::istream& is) {read(is, *this);}

        // public functions
        // Member functions
        // const after the method name guarantees this is only 
        // a observer, that is, does not modify member variables
        std::string isbn() const {return bookNo;}
        // the datatype returned is a reference to same instance of this class
        SalesData& combine(const SalesData& rhs) {
            units_sold += rhs.units_sold;
            revenue += rhs.revenue;
            return *this;
        }

        void displayData() const {
            std::cout << "BookNo: " << bookNo
                      << ", Units Sold: " << units_sold
                      << ", Revenue: " << revenue
                      << ", Average Price: " << avg_price() 
                      << std::endl;
        }

    private:
        //private function
        // this is also a observer
        // if units_sold is not zero, than returns first member
        // otherwise returns last
        double avg_price() const {return units_sold ? revenue / units_sold : 0;} 
        std::string bookNo;
        unsigned units_sold = 0;
        double revenue = 0.0;

        // Helper function to read input
        friend std::istream& read(std::istream& is, SalesData& item) {
            double price = 0;
            // this modifies values?
            is >> item.bookNo >> item.units_sold >> price;
            item.revenue = price * item.units_sold;
            return is;
        }
};

int main() {
    // Constructor with no input
    SalesData item1;
    // Constructor with single input
    SalesData item2("2");
    // Constructor with 3 inputs
    SalesData item3("3", 1, 10);

    // Constructor with input stream input
    std::cout << "Enter sales data (bookNo units_sold price): ";
    SalesData item4(std::cin);

    item3.displayData();
    item4.displayData();

    std::cout << "ISBN of item2: " << item2.isbn() << std::endl;
    item3.combine(item4);
    item3.displayData();






    return 0;
    
}
