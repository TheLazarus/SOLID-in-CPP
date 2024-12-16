#include<iostream>
#include<string>

// Before Applying SRP

class User {
    private:
      std::string name {};

    public:
        std::string getName() const {
            return name;
        }

        void setName(const std::string& n) {
            name = n;
        }


        void saveToDB() {

        }

};


// After Applying SRP

class User {
    private:
        std::string name {};
    
    public:
        std::string getName() const {
            return name;
        }
        void setName(const std::string& n) {
            name = n;
        }
};

class UserDatabase {
    public:
        void save(const User& user) {

        }
};