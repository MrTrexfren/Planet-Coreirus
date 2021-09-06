#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

void intro() {
    cout << " _______  ___      _______  __    _  _______  _______  ___ " << endl;
    cout << "|       ||   |    |   _   ||  |  | ||       ||       ||   |" << endl;
    cout << "|    _  ||   |    |  |_|  ||   |_| ||    ___||_     _||___|" << endl;
    cout << "|   |_| ||   |    |       ||       ||   |___   |   |   ___ " << endl;
    cout << "|    ___||   |___ |       ||  _    ||    ___|  |   |  |   |" << endl;
    cout << "|   |    |       ||   _   || | |   ||   |___   |   |  |___|" << endl;
    cout << "|___|    |_______||__| |__||_|  |__||_______|  |___|       " << endl;
    cout << " _______  _______  ______    _______  ___   ______    __   __  _______" << endl;
    cout << "|       ||       ||    _ |  |       ||   | |    _ |  |  | |  ||       |" << endl;
    cout << "|       ||   _   ||   | ||  |    ___||   | |   | ||  |  | |  ||  _____|" << endl;
    cout << "|       ||  | |  ||   |_||_ |   |___ |   | |   |_||_ |  |_|  || |_____ " << endl;
    cout << "|      _||  |_|  ||    __  ||    ___||   | |    __  ||       ||_____  |" << endl;
    cout << "|     |_ |       ||   |  | ||   |___ |   | |   |  | ||       | _____| |" << endl;
    cout << "|_______||_______||___|  |_||_______||___| |___|  |_||_______||_______|\n" << endl;


};

class creature {
    public:
    string name;
    int health;
    int atk;
    int hunger;
    int thirst;
    int stamina;
    string diet;
    creature(string a, int b, int c, int d, int e, int f, string g) {
        name = a;
        health = b;
        atk = c;
        hunger = d;
        thirst = e;
        stamina = f;
        diet = g;
    };
};

creature cre1("Draconos", 4305, 395, 50, 50, 100, "Carnivore");
creature cre2("Harlikir", 3800, 320, 50, 50, 100, "Herbivore");
creature cre3("Grandis", 2435, 230, 50, 50, 100, "Carnivore");
creature cre4("Carnagal", 4420, 500, 50, 50, 100, "Carnivore");
creature cre5("Flikch", 2310, 175, 50, 100, 100, "Herbivore");
creature cre6("Tarakan", 2155, 85, 50, 50, 100, "Herbivore");
creature cre7("Uissllo", 2335, 125, 50, 50, 100, "Omnivore");
creature cre8("Jorag", 2895, 35, 50, 50, 100, "Omnivore");
creature cre9("Ceragonus", 5500, 55, 50, 50, 100, "Herbivore");
creature cre10("Casskoa", 2345, 230, 50, 100, 100, "Carnivore");

string creatures[1][10] = {
    {cre1.name, cre2.name, cre3.name, cre4.name, cre5.name, cre6.name, cre7.name, cre8.name, cre9.name, cre10.name},
};

int creatures_health[1][10] = {
    {cre1.health, cre2.health, cre3.health, cre4.health, cre5.health, cre6.health, cre7.health, cre8.health, cre9.health, cre10.health},
};

int creatures_attack[1][10] = {
    {cre1.atk, cre2.atk, cre3.atk, cre4.atk, cre5.atk, cre6.atk, cre7.atk, cre8.atk, cre9.atk, cre10.atk},
};

int creatures_hunger[1][10] = {
    {cre1.hunger, cre2.hunger, cre3.hunger, cre4.hunger, cre5.hunger, cre6.hunger, cre7.hunger, cre8.hunger, cre9.hunger, cre10.hunger},
};

int creatures_thirst[1][10] = {
    {cre1.thirst, cre2.thirst, cre3.thirst, cre4.thirst, cre5.thirst, cre6.thirst, cre7.thirst, cre8.thirst, cre9.thirst, cre10.thirst},
};

int creatures_stamina[1][10] = {
    {cre1.stamina, cre2.stamina, cre3.stamina, cre4.stamina, cre5.stamina, cre6.stamina, cre7.stamina, cre8.stamina, cre9.stamina, cre10.stamina},
};

string creatures_diet[1][10] = {
    {cre1.diet, cre2.diet, cre3.diet, cre4.diet, cre5.diet, cre6.diet, cre7.diet, cre8.diet, cre9.diet, cre10.diet},
};

int start_screen(int go_to) {
    char selec;
    cout << "\t\t(1)Play\t\t\n" << endl;
    cout << "\t\t(2)Creature Selection\t\t\n" << endl;
    cout << "\t\t(3)Credits\t\t\n" << endl;
    cin >> selec;

    if(selec == '1') {
        go_to = 1;
    } else if(selec == '2') {
        go_to = 2;
    } else if(selec == '3') {
        go_to = 3;
    };
    return go_to;
};

char cre_selec() {
    int choice;
    for(int i = 0; i < 10; i++) {
        cout << "(" << i + 1 << ")" << creatures[0][i] << endl;
    };
    cin >> choice;
    return choice - 1;
};


int main() {
    int start = 0;
    bool dead = true;
    int age = 0;
    string cur_creature;
    int cur_creature_hp;
    int cur_creature_atk;
    int cur_creature_hg;
    int cur_creature_th;
    int cur_creature_stam;
    string cur_creature_diet;
    cout << "Progress does not save once you exit the game" << endl;
    Sleep(1000);
    system("cls");
    while(start != true) {
        intro();
        start = start_screen(start);
        if(start == 1) {
            dead = false;
        } else if(start == 2) {
            system("cls");
            int stats = cre_selec();
            cur_creature = creatures[0][stats];
            cur_creature_hp = creatures_health[0][stats];
            cur_creature_atk = creatures_attack[0][stats];
            cur_creature_hg = creatures_hunger[0][stats];
            cur_creature_th = creatures_thirst[0][stats];
            cur_creature_stam = creatures_stamina[0][stats];
            cur_creature_diet = creatures_diet[0][stats]; 
        } else if(start == 3) {
            system("cls");
            cout << "DEVELOPER: " << endl;
            cout << "MrTrex" << endl;
            cout << "\nIf you want to report bugs: covesghe#1236 on discord" << endl;
            system("pause"); 
        };
        system("cls");
    };

    int food = 100;
    const int base_hunger = cur_creature_hg;
    const int base_thirst = cur_creature_th;
    const int base_stamina = cur_creature_stam;

    while(dead != true) {
        string move;
        cout << "Creature: " << cur_creature << endl;
        cout << "Health: " << cur_creature_hp << endl;
        cout << "Attack Damage: " << cur_creature_atk << endl;
        cout << "Hunger: " << cur_creature_hg << endl;
        cout << "Thirst: " << cur_creature_th << endl;
        cout << "Stamina: " << cur_creature_stam << endl;
        cout << "Diet: " << cur_creature_diet << endl;
        cout << "Food you have: " << food << endl;

        cout << "\n(1)Eat" << endl;
        cout << "(2)Drink" << endl;
        cout << "(3)Sniff" << endl;
        cout << "(4)Rest" << endl;
        cout << "(5)fight" << endl;

        cin >> move;

        if(cur_creature_hp <= 0) {
            dead = true;
        };

        if(move == "1" or move == "eat") {
            if(cur_creature_hg < base_hunger) {
                if(food <= 0) {
                    cout << "You have no food" << endl;
                } else if(food > 1) {
                    int amount;
                    cout << "How much food would you like to consume: ";
                    cin >> amount;
                    if (food < amount) {
                        cout << "You do not have that much food" << endl;
                    } else if(food >= amount) {
                        cout << "You consumed " << amount << " food";
                        food -= amount;
                        cur_creature_hg += amount;
                    };
                };
            } else if(cur_creature_hg == base_hunger) {
                cout << "You are full" << endl;
            };
        } else if(move == "2" or move == "drink") {
            if(cur_creature_th < base_thirst) {
                srand(time(0));
                int drink_chance = rand() % 10;
                if(drink_chance <= 5) {
                    cout << "You drank some water" << endl;
                    cur_creature_th += 5;
                } else if (drink_chance > 5) {
                    cout << "there is no water here" << endl;
                };
            } else if (cur_creature_th == base_thirst) {
                cout << "You are not thirsty" << endl;
            };
        } else if(move == "3" or move == "sniff") {
            srand(time(0));
            int smell_success = rand() % 100;
            if(cur_creature_diet == "Herbivore" or cur_creature_diet == "Omnivore") {
                if(smell_success > 50) {
                    cout << "You smell plants" << endl;
                    food += 20;
                } else if(smell_success < 50) {
                    cout << "No food nearby" << endl;
                };
            } else if(cur_creature_diet == "Carnivore") {
                if(smell_success > 50) {
                    cout << "You hunted the food sucessfully but you got hurt!" << endl;
                    food += 20;
                } else if(smell_success < 50) {
                    cout << "No food nearby" << endl;
                };
            };
        };

        if(cur_creature_hg > base_hunger) {
            cur_creature_hg = base_hunger;
        } else if(cur_creature_th > base_thirst) {
            cur_creature_th = base_thirst;
        } 

        
        Sleep(1200);
        cur_creature_hg -= 1;
        cur_creature_th -= 1;
        system("cls");
    };

                                                                                                                                                                                                    
    return 0;
};