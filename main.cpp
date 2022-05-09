#include<iostream>
#include<cstdlib>
/****************partie des outils ****************/
){
}
/****************partie cases ****************/
void casetab::setabs(int a){abs=a;}
void casetab::setord(int o){ord=o;}
int casetab::getabs()const{return abs ;}
int casetab::getord()const{return ord ;}
bool casetab::case_adjacent(casetab c){
if (abs==0)&&(c.getabs()==abs+1) {
    return(true);
}
else if (ord==0)&&(c.getord()==ord+1){
    return(true);
}
else if (abs==c.getabs()+1) || (abs==c.getabs()-1){
    return(true);
}
else if (ord==c.getord()+1)||(ord==c.getord()-1){
    return(true);
}
else{ return(false);}
}
casetab::casetab(int a, int o){
setabs(a);
setord(o);
}
casetab::~casetab(){}
}
/****************partie zone ****************/
zone::int getnbr_lignes()const{return nbr_lignes;}
zone::int getnbr_colonnes()const{return nbr_colonnes;}
zone::int getnbr_obstacles()const;{return nbr_obstacles;}
zone::casetab getposition_initiale()const{return position_initiale;}
zone::casetab getposition_finale()const{return position_finale;}
zone::bool getaléatoire()const{return aléatoire;}
zone::void setnbr_lignes(int l){nbr_lignes=l;}
zone::void setnbr_colonnes(int c){nbr_colonnes=c;}
zone::void setnbr_obstacles(int o){nbr_obstacles=o;}
zone::void setposition_initiale(casetab c){position_initiale=c;}
zone::void setposition_finale(casetab c){position_finale=c;}
zone::void setaléatoire(bool b){aléatoire=b;}
zone::zone(int l,int c);
zone::~zone();
zone::bool entier_exist(int a,int liste[nbr_obstacles]){
    i=0
while ((i<nbr_obstacles)&&(a!=liste[i])) do {i++;}
if (i==nbr_obstacles){return true;}
else {return false;}
}
zone::casetab*positions_obstacles(){
casetab*liste_obstacles;
int liste_abs[nbr_obstacles];
int liste_ord[nbr_obstacles];
if (aléatoire==true){
liste_abs[0]=(rand()%nbr_obstacles);
liste_ord[0]=(rand()%nbr_obstacles);
for (int i=1,i<nbr_obstacles,i++){
int r1=liste_abs[0];
int r2=liste_ord[0];
*liste_obstacles=casetab(r1,r2);
while (entier_exist(r1,liste_abs))||(entier_exist(r2,liste_ord)) do {
    r1=(rand()%nbr_obstacles);
    r2=(rand()%nbr_obstacles);
}
liste_abs[i]=r1;
liste_ord[i]=r2;
*(liste_obstacles+i)=casetab(r1,r2);
}
else {
    for(int i=0,i<nbr_obstacles,i++){
        cout<<"donner l'abscisse du "<<i<<"éme obstacle"<<endl;
        cin>>liste_abs[i];
        cout<<"donner l'ordonnée du "<<i<<"éme obstacle"<<endl;
        cin>>liste_ord[i];
        *(liste_obstacles+i)=casetab(liste_abs[i],liste_ord[i]);
    }
}
return(liste_obstacles)
}}

}
zone::casetab**chemin_possibles()

/****************partie chemin ****************/
chemin::setpremier(casetab* p){premier=p;}
chemin::setlongueur_ch(int l){longueur_ch=l;}
chemin::casetab getpremier()const{return premier ;}
chemin::int getlongueur_ch()const{return longueur_ch ;}
chemin::bool chemin_valide(zone z){
int i=1;
int j=0;
if (*(p+longueur_ch-1).getabs()<z.getnbr_col) and (*(p+longueur_ch-1).getord()<z.getnbr_lig){
while (*(p+i-1)).case_adjacent(*(p+i))&&(i<longueur_ch+1){
    i=i+1;}
}
for (int k=0,k<z.getnbr_obstacles(),++i)
{
    for(int l=0,l<longueur_ch,++l){
        if(*(p+l)=z.getliste_obstacles()[k]){ j=j+1}
    }
}
if (i==longueur_ch)&&(j==0){
    return(true);}
else{return(false);}
    }
chemin::void representation_directionnelle(){
    char res[]=" ";
    for(int i=0,i<longueur_ch-1,i++){
        if (*(premier+i+1).getabs()==*(premier+i).getabs()+1){
        strcat(res,"droite");
        }
        else if (*(premier+i+1).getabs()==*(premier+i).getabs()-1){
            strcat(res,"gauche");
        }
        else if (*(premier+i+1).getord()==*(premier+i).getord()+1){
            strcat(res,"bas");
        }
        else if (*(premier+i+1).getord()==*(premier+i).getord()-1){
            str(res,"haut");
        }

    }
    cin<<"la représentation directionnelle de ce chemin est"<<res<<endl;
     }
