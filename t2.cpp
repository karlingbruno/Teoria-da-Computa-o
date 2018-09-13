#include <iostream>
#include <string>
using namespace std;
/* Legenda de estados
0 = q0
1 = qli0
2 = qli00
3 = qli01
4 = qli1
5 = qli10
6 = qli11
7 = qsim
8 = qnao
*/
int main(){
  string input;
  string aha(">");
  string b("U");
  int q = 0,i = 0;
  cout << "Digite a String " << endl;
  cin >> input ;
  input = aha +input + b;
  while(q != 7 && q != 8){
    cout << input << " , q"<< q << endl;;
    if(q == 0){
      if(input[i] == '>'){
        i++;
      }else if(input[i] == '0'){
        q = 1;
        input[i] = '>';
        i++;
      }else if(input[i] == '1'){
        q = 4;
        input[i] = '>';
        i++;
      }else if(input[i] == 'U'){
        q = 7;
      }
    }else if(q == 1){
      if(input[i] == '>'){
        //Impossivel
      }else if(input[i] == '0'){
        i++;
      }else if(input[i] == '1'){
        i++;
      }else if(input[i] == 'U'){
        q = 2;
        i--;
      }
    }else if(q == 2){
      if(input[i] == '>'){
        q = 0;
        i++;
      }else if(input[i] == '0'){
        q = 3;
        input[i] = 'U';
        i--;
      }else if(input[i] == '1'){
        q = 8;
      }else if(input[i] == 'U'){
        // q = 7;
      }
    }else if(q == 3){
      if(input[i] == '>'){
        q = 0;
        i++;
      }else if(input[i] == '0'){
        i--;
      }else if(input[i] == '1'){
        i--;
      }else if(input[i] == 'U'){
        q = 0;
      }
    }else if(q == 4){
      if(input[i] == '>'){
        q = 0;
      }else if(input[i] == '0'){
        i++;
      }else if(input[i] == '1'){
        i++;
      }else if(input[i] == 'U'){
        i--;
        q = 5;
      }
    }else if(q == 5){
        if(input[i] == '>'){
          q = 0;
        }else if(input[i] == '0'){
          q = 8;
        }else if(input[i] == '1'){
          q = 6;
          input[i] = 'U';
          i--;
        }else if(input[i] == 'U'){
          q = 0;
        }
    }else if(q == 6){
        if(input[i] == '>'){
          q = 0;
          i++;
        }else if(input[i] == '0'){
          i--;
        }else if(input[i] == '1'){
          i--;
        }else if(input[i] == 'U'){
          q = 0;
        }
    }

  }
  cout << endl << endl;
  cout << input << endl;
  if(q == 7)
    cout << "Sim" << endl;
  else
    cout << "Não" << endl;




}
