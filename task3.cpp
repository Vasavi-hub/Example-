/*Event Handling System for Touchscreen Input
Objective: Simulate an event-driven system for processing touchscreen inputs on an HMI.
Requirements:
Create an Event class to represent user interactions:
Attributes: eventType (e.g., Tap, Swipe), x and y coordinates, and timestamp.
Implement an event queue using std::queue:
Store multiple events.
Process events one by one.
Handle specific events:
Tap: Display a message showing the tapped position.
Swipe: Calculate the swipe direction (up/down/left/right) and display it.
Simulate event generation:
Populate the queue with random events.
Deliverables:
A program simulating event processing.
Example output demonstrating event handling.*/

#include<iostream>
#include<queue>
#include<string>
#include<ctime>
#include<chrono>
#include<thread>
using namespace std;

class Event{
    public:
    string eventtype;
    int x;
    int y;
    time_t timestamp;

    Event(const string &type,int xcoord,int ycoord){
        eventtype=type;
        x=xcoord;
        y=ycoord;
        timestamp=time(0)
    }
    string getformattedtime() const{
        return ctime(&timestamp);

        
    }

};
class Eventprocessing{
    public:
    queue<Event> events;
    void addevents(const Event& event){
        events.push(event);
    }
    void display(){
        while(!events.empty()){
            auto e=events.front();
            cout<<"Event:"<<e.eventtype<<",";
            cout<<"coordinate:"("<< e.x","<<e.y<<")," ";
           cout << "Timestamp: " << e.getformattedtime(); // Output formatted time
            cout<<"processing the "<<e.eventtype<<" operation."<<endl;
            this_thread::sleep_for(chrono::seconds(2));
            events.pop();
        }
    }
};
int main()
{
    Event event1("tap",300,400);
    Event event2("swipe",782,89);
    Event event3("swipe",789,1234);
    Event event4("tap",980,345);

    Eventprocessing process;
    process.addevents(event1);
    process.addevents(event2);
    process.addevents(event3);
    process.addevents(event4);

    thread t.join(&Eventprocessing::display,&process);
    t.join();
}







