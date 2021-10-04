 #include <iostream>
 #include <ctime>
 #include <cstdlib>
 #include <vector>
 #include <fstream>

 using namespace std;

   string melanger(string mot);
   void verification(string mot,string motMelanger);
 
 int main(){
      srand(time(0));
     string mot;
     string motMelanger;

     cout << "Joueur 1 entrez le mot a devinez : " ;
     cin >> mot;
        motMelanger = melanger(mot);
   system("cls");
     verification(mot, motMelanger);
     system("Pause");
     return 0;
 }
//-------------- les fonctions du programmes------------------
 string melanger(string mot){  // La fonction qui permet de melanger le mot entrez
     
     string newMot;
     int max;
    
     do{
         max=rand()%mot.size();

         newMot+=mot[max];

         mot.erase(max,1);
          
     }while(mot.size()!=0);
    
return newMot;
 }  

 void verification(string mot,string motMelanger){ // ------------------fonctions de verification du mot entrez-------------------
     string motEntrer; 
        do{
             cout << "Quel est le mot ? " << motMelanger << endl ; 
    
            cin >> motEntrer;
            if(motEntrer==mot){
                cout << "Bravo !"<< endl;
            }else{
                cout<< "Ce n'est pas le mot !" << endl;
            }
        }while(motEntrer!=mot);
 }