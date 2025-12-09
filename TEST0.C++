#include <iostream>
#include <string>
using namespace std;
char bord[126] = {
'a','9','m','A','A','s','X','1','J','d',
'B','6','D','O','C','t','l','B','E','8',
'P','X','F','E','G','Z','S','Y','T','y',
'H','z','I','0','V','o','i','5','x','3',
'K','D','L',' ','f','p','b','q','d','4',
'2','r','M','v','N','l','g','C','O','F',
'R','2','c','g','0','7','j','S','9','R',
'Q','m',' ','k','W','j','U','n','4','G',
's','x','Z','w','Y','c','y','U','e','f',
'6','I','h','W','r','b','k','H','n','K',
'o','L','p','i','7','u','5','M','1','J',
'q','N','8','P','t','h','3','Q','z','V',
'u','e','v','a','w','T'
};
char recrch(char fd , int mod );
int main(){ 
    
int MOD ;
string deta ;
string encryption ;

cout << "Entry your mots :> " ;
getline(cin , deta);
cout << "your mod :> " ;
cin >> MOD ;

int i; 
for( i = 0 ; i < deta.length() ; i ++){
encryption = encryption + recrch( deta[i], MOD );
}
cout << encryption << endl;
            
    return 0;
}




char recrch(char fd , int mod ){
int k = 0 ; 
for(k = 0 ; k < 63 ; k ++){
    if(fd == bord[2*k + mod] ){
      break;     
    }
}

return bord[2*k + (-1*mod + 1)] ;
}