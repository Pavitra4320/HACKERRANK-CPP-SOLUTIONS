class Person{
    public:
        int age;
        string name;
        virtual void getdata(){}
        virtual void putdata(){}
    
};

class Professor : public Person{
    public:
        int publications, cur_id;
        static int count;
        Professor(){
            this->cur_id = ++count;
        }
        void getdata(){
            cin >> this->name >> this->age >> this->publications;
        }
        void putdata(){
            cout << this->name << " " << this->age << " " << this->publications << " " << this->cur_id << endl;
        }
};
int Professor::count = 0;
class Student : public Person{
    public:
        static int count;
        int marks[6];
        int cur_id;
        Student(){
            this->cur_id = ++count;
        }
        void getdata(){
            cin >> this->name >> this->age;
            for(int i=0; i<6; i++){
                cin >> marks[i];
            }
        }
        void putdata(){
            int sum = 0;
            for(int i=0; i<6; i++){
                sum += marks[i];
            }
            cout << this->name << " " << this->age << " " << sum << " " << this->cur_id << endl;
        }
};
int Student::count = 0;

