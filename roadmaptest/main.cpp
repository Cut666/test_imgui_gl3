#include "iostream"
#include "Dog.h"
#include "string"
#include "vector"
#include "deque"
#include "list"
#include "algorithm"
#include "set"
#include "map"
#include "stack"
#include "queue"
#include "mutex"
#include "condition_variable"
#include "thread"
using namespace std;
// nhan ctrl +shift+ b de tao file task build main

// int main() {
//     Animal genericAnimal("Generic");
//     genericAnimal.Eat();
//     genericAnimal.Sleep();

//     Dog myDog("Buddy", "Labrador");
//     myDog.Eat();
//     myDog.Sleep();
//     myDog.Bark();
//     myDog.DisplayInfo();

// };

// vd ve struct
// struct Point{
//     int x;
//     int y;
// };
// int main(){
//     Point p1 ={10,21};
//     std::cout << "Coordinates: (" << p1.x << ", " << p1.y << ")\n";
//     return 0;
// }

// struct Rectangle
// {
//     int width;
//     int height;
//     Rectangle (int w, int h):width(w),height(h){}
//     int calculateArea(){
//         return width *height;
//     }
// };
// int main(int argc, char const *argv[])
// {
//     Rectangle r(10,20);
//     std::cout << "Area: " << r.calculateArea() << std::endl;
//     return 0;
// }

// struct Shape
// {
//     int sides;
// };

// struct Square: public Shape
// {
//     int sideLength;
// };
// int main(int argc, char const *argv[])
// {
//     Square s;
//     s.sideLength=1;
//     s.sides =2;
//     std::cout << "sidelength: " << s.sideLength <<std::endl << "sides: "<< s.sides <<std::endl;
//     return 0;
// }

// class MyClass {
// private:
//     int privateMember;

// public:
//     MyClass() : privateMember(1) {}

//     // Khai báo một hàm là bạn của lớp
//     friend void FriendFunction(const MyClass&);

//     // Khai báo một lớp là bạn của lớp
//     friend class FriendClass;
// };

// // Định nghĩa hàm bạn có thể truy cập vào privateMember
// void FriendFunction(const MyClass& obj) {

//     std::cout << "Friend Function: " << obj.privateMember << std::endl;
// }

// // Định nghĩa lớp bạn có thể truy cập vào privateMember
// class FriendClass {
// public:
//     void AccessPrivateMember(const MyClass obj) {
//         std::cout << "Friend Class: " << obj.privateMember << std::endl;
//     }
// };

// int main() {
//     MyClass obj;

//     // Gọi hàm bạn
//     FriendFunction(obj);

//     // Sử dụng lớp bạn
//     FriendClass friendObj;
//     friendObj.AccessPrivateMember(obj);

//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// /* Định nghĩa lớp */
// class Car {
// private:
// 	int  speed;               // Tốc độ
// 	string  mark;           // Nhãn hiệu
// 	float price;               // Giá xe
// 							   // Khởi tạo với các giá trị ngầm định cho các tham số
// public:
// 	Car(int speed, string mark, float price);
// 	void show(); // Giới thiệu xe
// 	static int totalCar;
// 	static int getTotal() {
// 		return totalCar;
// 	}
// };

// /* Khai báo phương thức bên ngoài lớp */
// Car::Car(int speed, string mark, float price) {
// 	this->speed = speed;
// 	this->mark = mark;
// 	this->price = price;
// 	this->totalCar++;
// }

// void Car::show() { // Phương thức giới thiệu xe
// 	cout << "This is a " << mark << " having a speed of "
// 		<< speed << "km / h and its price is $" << price << endl;
// 	return;
// }
// int Car::totalCar = 0;
// // Hàm main, chương trình chính
// int  main() {

// 	Car myCar1(120, "Toyota", 3000); // Khởi tạo đối tượng 1
// 	Car myCar2(150, "Mercedes", 5000);// Khởi tạo đối tượng 2
// 	// Ta có thể sử dụng myCar1.getTotal() hoặc myCar2.getTotal() thay cho Car::getTotal()
// 	cout << "Co tong cong " << Car::getTotal()<<" Cars";
// 	system("pause");
// 	return 0;
// }

/* Định nghĩa lớp */
// class Car {
// private:
// 	int  speed;               // Tốc độ
// 	string  mark;           // Nhãn hiệu
// 	float price;               // Giá xe
// public:
// 			Car(int, string, float);// Khởi tạo thông tin về xe
// 	void	show();               // Hiển thị thông tin về xe
// };

// /* Khai báo phương thức bên ngoài lớp */
//  Car::Car(int speed, string mark, float price) {
// 	this->speed = speed;
// 	this->mark = mark;
// 	this->price = price;
// 	return;
// }

// void Car::show() {                // Phương thức hiển thị xe
// 	cout << "This is a" << mark << "having a speed of  " << speed << "km/h and its price is $" << price << endl;
// 	return;
// }

// // Hàm main, chuong trình chính
// int main() {

// 	Car* myCar = new Car(150, "Mercedes", 5000);
// 	// Giới thiệu xe
// 	cout << "Gioi thieu xe : " << endl;
// 	myCar->show();
// 	// Giải phóng con trỏ
// 	delete myCar;
// 	system("pause");
// 	return 0;
// }

// class Car
// {
// private:
//     int speed;
//     string mark;
//     float price;

// public:
//     Car(int s, string m, float p);
//     void setSpeed(int);
//     int getSpeed();
//     void setMark(string);
//     string getMark();
//     void setPrice(float);
//     float getPrice();
//     void show();
// };
// void Car::setSpeed(int s)
// {
//     this->speed = s;
// }
// int Car::getSpeed()
// {
//     return speed;
// }
// void Car::setMark(string m)
// {
//     this->mark = m;
// }
// string Car::getMark()
// {
//     return mark;
// }
// void Car::setPrice(float price)
// {
//     this->price = price;
// }
// float Car::getPrice()
// {
//     return price;
// }
// Car::Car(int s, string m, float p){
//     this->speed = s;
//     this->mark = m;
//     this->price = p;
// }
// void Car::show()
// {
//     cout << "this is a " << mark << " having a speed of " << speed << " km/h and its price is " << price;
// }

// class Bus: public Car{
//     private: int label;
//     public:
//     Bus(int speed = 0, string mark="", float price=0, int label=0);
//     void setLabel(int);
//     int getLabel();
// };

// Bus::Bus(int speed, string mark, float price, int label):Car(speed,mark,price){
//     this->label = label;
// }
// void Bus::setLabel(int l){
//     this->label = l;
// }
// int Bus::getLabel(){
//     return label;
// }

// int main(int argc, char const *argv[])
// {

//     int speedBus, labelBus;
//     string markBus;
//     float priceBus;
//     cout << "nhap toc do xe: ";
//     cin>> speedBus;
//     cin.ignore();
//     cout << "nhap hang xe: ";
//     getline(cin,markBus);

//     cout << "nhap gia xe; ";
//     cin>> priceBus;
//     cout<<"nhap so hieu xe: ";
//     cin >> labelBus;
//     Bus myBus(speedBus,markBus,priceBus,labelBus);
//     myBus.show();
//     return 0;
// }

// class Engine
// {
// private:
//     int power;

// public:
//     Engine() : power(0){};
//     Engine(int p) : power(p){};
//     void show();
//     float getPower()
//     {
//         return power;
//     }
// };
// void Engine::show()
// {
//     cout << "this is an engine having a power of " << power << "KWH" << endl;
// }

// class Car : public virtual Engine
// {
// private:
//     int speed;
//     string mark;
//     float price;

// public:
//     Car() : speed(0), mark(""), price(0){};
//     Car(int s, string m, float p) : speed(s), mark(m), price(p){};
//     void show();
//     void setSpeed(int);
//     int getSpeed();
//     void setMark(string);
//     string getMark();
//     void setPrice(float);
//     float getPrice();
// };
// void Car::show()
// {
//     cout << "this is a " << mark << "having a speed of " << speed << "km/h and its price is " << price << endl;
//     return;
// }
// void Car::setSpeed(int s)
// {
//     this->speed = s;
// }
// int Car::getSpeed()
// {
//     return speed;
// }
// void Car::setMark(string m)
// {
//     this->mark = m;
// }
// string Car::getMark()
// {
//     return mark;
// }
// void Car::setPrice(float p)
// {
//     this->price = p;
// }
// float Car::getPrice()
// {
//     return price;
// }

// class PuclicTransport : public virtual Engine
// {
// private:
//     float ticket;

// public:
//     PuclicTransport();
//     PuclicTransport(int, float);
//     void show();
//     float getPuclicTransport();
//     void setPuclicTransport(float);
// };
// PuclicTransport::PuclicTransport()
// {
//     this->ticket = 0;
// }
// PuclicTransport::PuclicTransport(int p, float t) : Engine(p)
// {
//     this->ticket = t;
// }
// void PuclicTransport::show()
// {
//     cout << "this is a publicTransport having a ticket of $" << ticket << "and its power is " << getPower() << "KWh" << endl;
// }
// float PuclicTransport::getPuclicTransport(){
//     return ticket;
// }
// class Bus : public Car, public PuclicTransport
// {
// private:
//     int label;

// public:
//     Bus();
//     Bus(int, int, string, float, float, int);
//     void show();
// };
// Bus::Bus():Engine(),Car(),PuclicTransport(){
//     this->label =0;
// }
// Bus::Bus(int p,int s,string m,float pr, float t, int l):Engine(p),Car(s,m,pr),PuclicTransport(p,t) {
//     this ->label =l;
// }
// void Bus::show(){
//     cout<< "this is a bus on the line "<< label<< ", its speed is "<<getSpeed()<<"k/m, power is" <<getPower() <<"kwh, mark is "<<getMark()<<", price is $"<<getPrice()<<" and ticket is "<<getPuclicTransport()<<endl;
// }
// int main(){
//     Bus bus (250, 100, "Mercedes", 3000, 1.5, 27);
//     bus.show();
//     return 0;
// }

// class Car
// {
// private:
//     int speed;
//     string mark;
//     float price;

// public:
//     Car() : speed(0), mark(""), price(0){};
//     Car(int s, string m, float p) : speed(s), mark(m), price(p){};
//     void show();
//     void setSpeed(int);
//     int getSpeed();
//     void setMark(string);
//     string getMark();
//     void setPrice(float);
//     float getPrice();
// };
// void Car::show()
// {
//     cout << "this is a " << mark << "having a speed of " << speed << "km/h and its price is " << price << endl;
//     return;
// }
// void Car::setSpeed(int s)
// {
//     this->speed = s;
// }
// int Car::getSpeed()
// {
//     return speed;
// }
// void Car::setMark(string m)
// {
//     this->mark = m;
// }
// string Car::getMark()
// {
//     return mark;
// }
// void Car::setPrice(float p)
// {
//     this->price = p;
// }
// float Car::getPrice()
// {
//     return price;
// }

// class Bus: public Car{
//     private:
//     int lable;
//     public:
//     Bus():lable(0){};
//     Bus(int, string, float,int);
//     void show();
//     void setLable (int);
//     int getLable ();
// };

// Bus::Bus(int s, string m, float p, int l):Car(s,m,p){
//     this->lable = l;
// }
// void Bus::setLable(int l){
//     this->lable = l;
// }
// int Bus::getLable(){
//     return lable;
// }

// void Bus::show(){
//     cout << "This is a bus of type " << getMark() << ", on the line "
// 		<< lable << ", having a speed of " << getSpeed()
// 		<< "km / h and its price is $" << getPrice() << endl;
// }
// int main(int argc, char const *argv[])
// {
//     Car *ptrCar;
//     Bus *ptrBus;
//     Car myCar(100, "Ford", 3000);
//     Bus myBus(150, "Merc	edes", 5000, 27);
//     ptrCar = &myCar;
//     ptrCar->show();
//     myCar.show();
//     ptrCar = &myBus;
//     ptrBus = &myBus;
//     ptrCar->show();
//     ptrBus->show();
//     myBus.show();
//     return 0;
// }

// class Test
// {
// private:
// 	int num;
// public:
// 	Test() : num(8) {}
// 	void operator++()
// 	{
// 		num = num + 2;
// 	};

// 	void Print() {
// 		cout << "The Count is: " << num<<endl;
// 	};
// };
// int main()
// {
// 	Test tt;
// 	tt;  // calling of a function "void operator ++()"
// 	tt.Print();
// 	return 0;
// }

// class Shape {
// public:
//     virtual void draw() const = 0;  // Phương thức ảo thuần ảo
// };

// class Circle : public Shape {
// public:
//     void draw() const override {
//         std::cout << "Drawing a circle\n";
//     }
// };

// class Square : public Shape {
// public:
//     void draw() const override {
//         std::cout << "Drawing a square\n";
//     }
// };

// int main() {
//     Circle circle;
//     Square square;

//     circle.draw();
//     square.draw();

//     return 0;
// }

// int* createDynamicArray(int size){
// 	int* arr = new int[size];
// 	for (int i = 0; i < size; i++)
// 	{
// 		arr[i]=i*2;
// 	}
// 	return arr;

// }
// int main(){
// 	int* dynamicArray = createDynamicArray(5);
// 	for (int i = 0; i < 5; i++)
// 	{
// 		cout<<dynamicArray[i]<<" ";
// 	}
// 	delete[] dynamicArray;
// 	return 0;
// }

// int globalValue = 10;

// int &getGlobalValue()
// {
// 	return globalValue;
// }

// int main()
// {
// 	int y = 30;
// 	int x =20;
// 	int *ptrY; // Con trỏ trỏ đến địa chỉ của biến y
// 	ptrY = &y;
// 	*ptrY = 10;
// 	ptrY = &x;
// 	*ptrY = 40;
// 	// int z = 50;
// 	// int &refZ = z; // Tham chiếu refZ được liên kết với biến z
// 	// refZ = 60;
// 	cout << y << endl;
// 	cout << x << endl;
// 	return 0;
// }

// int main() {
//     vector<int> myVector;

//     // Thêm phần tử vào vector
//     for (int i = 1; i <= 6; ++i) {
//         myVector.push_back(i);
//     };
//     // Truy cập và in các phần tử
//     for (int i : myVector) {
//         cout << i << " ";
//     }
// cout<< "kich thuoc "<<myVector.size();

//     return 0;
// }

// int main() {
//     deque<int> myDeque = {2,3,4};

//     // Thêm phần tử vào đầu và cuối deque
//     myDeque.push_front(0);
//     myDeque.push_back(1);

// 	myDeque.pop_back();
// 	myDeque.pop_front();

//     // Truy cập và in các phần tử
//     for (int i : myDeque) {
//         cout << i << " ";
//     }

//     return 0;
// }

// int main() {
//     list<int> myList = {1, 2, 3, 4, 5};

//     // In danh sách trước khi xóa
//     cout << "Danh sach truoc khi xoa: ";
//     for (int i : myList) {
//         cout << i << " ";
//     }
//     cout << endl;

//     // Xóa phần tử có giá trị 3 (chỉ xóa phần tử đầu tiên có giá trị 3)
//     int valueToDelete = 3;
// 	cout << "gia tri dau: " << *myList.begin()<<endl;
// 	cout << "gia tri cuoi: " << *(myList.end())<<endl;
//     auto it = find(myList.begin(), myList.end(), valueToDelete);
//     if (it != myList.end()) {
//         myList.erase(it);
//     }

//     // In danh sách sau khi xóa
//     cout << "Danh sach sau khi xoa: ";
//     for (int i : myList) {
//         cout << i << " ";
//     }
//     cout << endl;

//     return 0;
// }

// int main() {
//     set<int> mySet = {3, 1, 4, 1, 5,10, 9, 2, 6, 5};

//     for (int i : mySet) {
//         cout << i << " ";
//     }

//     return 0;
// }

// int main(){
//     map<char,int> myMap;
//     myMap['a'] = 1;
//     myMap['b'] = 2;
//     myMap['c'] = 3;
//     for(auto kv : myMap){
//         cout << kv.first << ": "<< kv.second<<endl;
//     }
//     return 0;
// }

// int main(){
//     multimap<char,int> myMap;
//     myMap.insert({'a',10});
//     myMap.insert({'b',20});
//     myMap.insert({'c',30});
//     myMap.insert({'a',10});
//     for(auto kv : myMap){
//         cout<< kv.first << ": "<<kv.second<<endl;
//     }
//     return 0;
// }

// int main(){
//     stack<int> myStack;
//     myStack.push(1);
//     myStack.push(2);
//     myStack.push(3);
//     myStack.push(0);
//     for (auto i = 3; i < myStack.size(); i--)
//     {
//         cout<<myStack.top()<< endl;
//         myStack.pop();
//     }
//     return 0;
// }

// int main (){
//     queue<int> qe;
//     qe.push(3);
//     qe.push(5);
//     qe.push(1);
//     while (!qe.empty())
//     {
//         cout <<qe.front()<<endl;
//         qe.pop();
//     }
//     return 0;

// }

// int main(){
//     //mac dinh gia tri lon nhat co thu tu uu tien cao nhat
//     priority_queue<int> priQe;
//     priQe.push(3);
//     priQe.push(5);
//     priQe.push(1);
//     //thiet lap gia tri nho nhat co thu tu uu tien cao nhat
//     priority_queue<int , vector<int>, greater<int>> minPriQe;
//     minPriQe.push(3);
//     minPriQe.push(5);
//     minPriQe.push(1);
//     while(!priQe.empty()){
//         cout<<priQe.top();
//         priQe.pop();
//     }
//     cout<<endl;
//     while(!minPriQe.empty()){
//         cout<<minPriQe.top();
//         minPriQe.pop();
//     }
//     return 0;
// }

// int main(){
//     list<int>  myList;
//     myList.push_back(1);
//     myList.push_back(2);
//     myList.push_back(3);
//     cout<< "danh sach linked list: ";
//     for(int value: myList){
//         cout<< value<< " ";
//     }
//     cout << endl;
//     myList.push_front(0);
//     cout<< "danh sach linked list sau khi them phan tu dau: ";
//     for(int value: myList){
//         cout << value<< " ";
//     }
//     cout << endl;
//     myList.pop_back();
//     cout<< "danh sach linked list sau khi xoa phan tu cuoi: ";
//     for(int value: myList){
//         cout<< value<< " ";
//     }
//     cout<< endl;
//     return 0;
// }

// struct Node
// {
//     int data;
//     Node* next;
//     Node(int value):data(value),next(nullptr){};
// };
// class CircularLinkedList{
//     private:
//     Node* head;
//     public:
//     CircularLinkedList(): head(nullptr){};
//     void addToFront(int value){
//         Node* newNode = new Node (value);
//         if(!head){
//             head = newNode;
//             head->next = head;
//         }else{
//             newNode -> next = head->next;
//             head->next = newNode;
//             head = newNode;
//         }

//     }
//     void addToEnd (int value){
//         Node* newNode = new Node(value);
//         if(!head){
//             head=newNode;
//             head->next =head;
//         }
//         else{
//             newNode ->next =head->next;
//             head->next = newNode;
//         }
//     }
//     void removeFromFront(){
//         if(head){
//             Node* temp = head->next;
//             if (temp=head)
//             {
//                 delete head;
//                 head =nullptr;
//             }else{
//                 head->next =temp->next;
//                 delete temp;
//             }
//         }
//     }
//     void printList(){
//         if(!head){
//             cout<<"danh sach rong."<<endl;
//             return;
//         }
//         Node* current = head->next;
//         do{
//             cout<<current->data << " ";
//             current = current->next;
//         }while (current!=head->next);
//         cout<< endl;
//     }
// };
// int main(int argc, char const *argv[])
// {
//     CircularLinkedList myCircularList;
//     myCircularList.addToEnd(1);
//     myCircularList.addToEnd(2);
//     myCircularList.addToEnd(3);

//     cout<< "danh sach ban dau: ";
//     myCircularList.printList();
//     myCircularList.addToFront(0);
//     myCircularList.addToFront(-1);
//     cout <<"danh sach sau khi them vao dau: ";
//     myCircularList.printList();

//     myCircularList.removeFromFront();
//     cout<< "danh sach sau khi xoa khoi dau: ";
//     myCircularList.printList();
//     return 0;
// }

// int main() {
//     hash<string> hasher;  // Sử dụng hasher của STL cho chuỗi

//     // Tạo hashcode cho chuỗi "Hello"
//     size_t hashcode = hasher("Hello");

//     cout << "Hashcode cua chuoi 'Hello': " << hashcode << endl;

//     return 0;
// }

// int main() {
//     // Khai báo và khởi tạo Hashtable sử dụng std::unordered_map
//     unordered_map<int,string> myHashtable;

//     // Thêm phần tử vào Hashtable
//     myHashtable[1] = "One";
//     myHashtable[2] = "Two";
//     myHashtable[3] = "Three";

//     // Truy xuất giá trị thông qua khóa
//     cout << "Value at key 2: " << myHashtable[2] << endl;

//     return 0;
// }

// std::queue<int> taskQueue;
// std::mutex myMutex;
// std::condition_variable cv;
// bool allTasksDone = false;

// void worker(int worker_id) {
//     while (true) {
//         std::unique_lock<std::mutex> lock(myMutex);

//         // Đợi có công việc hoặc tất cả công việc đã hoàn thành
//         cv.wait(lock, []{ return !taskQueue.empty() || allTasksDone; });

//         // Nếu tất cả công việc đã hoàn thành, worker dừng
//         if (allTasksDone && taskQueue.empty()) {
//             break;
//         }

//         // Lấy công việc từ hàng đợi và thực hiện nó
//         int task = taskQueue.front();
//         taskQueue.pop();
//         lock.unlock();

//         std::cout << "Worker " << worker_id << " is processing task: " << task << std::endl;
//         // Simulate task processing time
//         std::this_thread::sleep_for(std::chrono::seconds(1));
//         std::cout << "Worker " << worker_id << " finished task: " << task << std::endl;
//     }
// }

// // Boss
// void boss(int numTasks) {
//     for (int i = 1; i <= numTasks; ++i) {
//         {
//             std::lock_guard<std::mutex> lock(myMutex);
//             taskQueue.push(i);
//         }
//         // Thông báo cho một worker rằng có công việc mới
//         cv.notify_one();
//     }

//     // Thông báo tất cả workers rằng không còn công việc
//     allTasksDone = true;
//     // cv.notify_all();
// }

// int main() {
//     const int numWorkers = 3;
//     const int numTasks = 5;
//     // Khởi động boss
//     std::thread bossThread(boss, numTasks);
//     bossThread.join();

//     // Tạo và khởi động workers
//     std::thread workers[numWorkers];
//     for (int i = 0; i < numWorkers; ++i) {
//         workers[i] = std::thread(worker, i + 1);
//     }


//     // Join tất cả workers và boss để chờ chúng hoàn thành
//     for (int i = 0; i < numWorkers; ++i) {
//         workers[i].join();
//     }

//     return 0;
// }

// mutex myMutex;
// int sharedValue=0;
// void worker(int id){
//     for (int i = 0; i < 5; i++)
//     {
//         //đặt khóa mutex trước khi truy cập giá trị chia sẻ;
//         unique_lock<mutex> lock(myMutex);
//         //thực hiện công việc an toàn với giá trị chia sẻ;
//         sharedValue++;
//         //hiển thị thông tin về công việc thay đổi giá trị;
//         cout << "worker: " << id << " incremented shared value to: " << sharedValue << endl;
//         //tự giải phóng khi ra khỏi phạm vi của unique_lock
//     }

// }

// int main(){
//     //tạo và khởi động các worker;
//     thread worker1 (worker,1);
//     thread worker2 (worker,3);
//     //join để chờ kết thúc các worker;
//     worker1.join();
//     worker2.join();
//     return 0;
// }

// const int MAX_QUEUE_SIZE = 5;
// queue<int> dataQueue;
// mutex mtx;
// condition_variable condVarProducer;
// condition_variable condVarConsumer;

// void produceData(){
//     for (int i = 0; i <= 5; i++)
//     {
//         unique_lock<mutex> lock(mtx);
//         //chờ nếu queue đầy
//         condVarProducer.wait(lock, []{return dataQueue.size()<MAX_QUEUE_SIZE;});
//         //đặt dữ liệu vào queue
//         dataQueue.push(i);
//         cout<< "product: " << i << endl;
//         lock.unlock();
//         condVarConsumer.notify_one(); // Thông báo cho consumer rằng có dữ liệu mới
//         this_thread::sleep_for(chrono::seconds(1));
//     }
// }
// void consumeData(){
//     for (int i = 0; i <= 5; i++)
//     {
//         unique_lock<mutex> lock(mtx);
//         //chờ nếu queue rỗng
//         condVarConsumer.wait(lock,[]{return !dataQueue.empty();});
//         //lấy dữ liệu từ queue
//         int value = dataQueue.front();
//         dataQueue.pop();
//         cout<< "Consumed: "<< value << endl;
//         lock.unlock();
//         condVarProducer.notify_one(); //thong bao cho producer rang co cho trong trong queue
//         this_thread::sleep_for(chrono::seconds(2));

//     }
// }
// int main(){
//     thread consume (consumeData);
//     thread producer (produceData);
//     //join để chờ kết thúc các worker;
//     consume.join();
//     producer.join();
//     return 0;
// }

// vector<int> filterEvenNumbers(const vector<int> &numbers)
// {
//     vector<int> result;
//     for (int num : numbers)
//     {
//         if (num % 2 == 0)
//         {
//             result.push_back(num);
//         }
//     }
//     return result;
// }
// vector<int> multiplyByTwo(const vector<int> &numbers)
// {
//     vector<int> result;
//     for (int num : numbers)
//     {
//         result.push_back(num * 2);
//     }
//     return result;
// }
// int calculateSum(const vector<int> &numbers)
// {
//     int sum = 0;
//     for(int num: numbers){
//         sum+=num;
//     }
//     return sum;
// }
// int main(int argc, char const *argv[])
// {
//     vector<int> inputNumber ={1,2,3,4,5,6,7,8,9};
//     vector<int> b1 = filterEvenNumbers(inputNumber);
//     vector<int> b2 = multiplyByTwo(b1);
//     int b3 = calculateSum(b2);
//     cout << "ket qua cuoi cung: "<<b3<<endl;
//     return 0;
// }

mutex mtx;
condition_variable cv;
bool resourceReady = false;

void producer(){
    this_thread::sleep_for(chrono::seconds(2));
    {
        lock_guard<mutex> lock(mtx);
        resourceReady = true;
    }
    cv.notify_one();
}
void consumer(){
    unique_lock<mutex> lock(mtx);
    cv.wait(lock,[]{return resourceReady;});
    cout << "Resource consumed. " << endl;
}
int main(){
    thread producerThread(producer);
    thread consumerThread(consumer);
    producerThread.join();
    consumerThread.join();
    return 0;
}