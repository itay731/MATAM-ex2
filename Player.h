//
// Created by 97252 on 5/1/2022.
//

#ifndef MTMCHKIN_PLAYER_H
#define MTMCHKIN_PLAYER_H

static const int MAXLEVEL=10;
static const int KNOCKEDOUT=0;
static const int DOWN=-1;
static const int NO_COINS=0;
static const int DEFAULT_FORCE=5;
static const int DEFAULT_MAX_HP=100;
static const int LEGAL_MAX_HP=1;
static const int LEGAL_FORCE=1;
static const int ILLEGAL=0;
static const int HP_CHANGE=10;
static const int CHANGE_COINS=10;


class Player{
    const char* m_name;
    int m_level;
    int m_force;
    int m_maxHP;
    int m_HP;
    int m_coins;
public:
    explicit Player(const char* name, int maxHP=DEFAULT_MAX_HP, int force=DEFAULT_FORCE);
    const char* getName() const;
    int getLevel() const;
    int getForce() const;
    int getMaxHP() const;
    int getHP() const;
    int getCoins() const;
    // Copy c'tor
    Player(const Player& player);
    bool operator==(const Player& player) const;
    Player& operator=(const Player& player);
    void printInfo();
    void levelUp();
    void buff(int addForce=LEGAL_FORCE);
    void heal(int addHP=HP_CHANGE);
    void damage(int reduceHP=HP_CHANGE);
    bool isKnockedOut() const;
    void addCoins(int treasure=CHANGE_COINS);
    bool pay(int payment=CHANGE_COINS);
    int getAttackStrength() const;
    // d'tor
    ~Player();
};


#endif //MTMCHKIN_PLAYER_H
