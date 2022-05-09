#include<cstdlib>
class zone {
    int nbr_lignes;
    int nbr_colonnes;
    int nbr_obstacles;
    case position_initial;
    case position_finale;
    bool aléatoire
public:
    bool entier_exist(int,int liste[nbr_obstacles]);
    casetab*positions_obstacles();
    casetab**chemin_possibles();
    int getnbr_ligne()
    int getnbr_colonnes();
    int getnbr_obstacles();
    casetab getposition_initiale();
    casetab getposition_finale();
    bool getaléatoire();
    void setnbr_ligne(int);
    void setnbr_colonnes(int);
    void setnbr_obstacles(int);
    void setposition_initiale(casetab);
    void setposition_finale(casetab);
    void setaléatoire(bool);
    zone(int,int);
    ~zone();
