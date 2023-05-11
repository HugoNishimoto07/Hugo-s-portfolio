#include <stdio.h>
#include <string.h>

#define _REJECT_ 0
#define _INT_ 1
#define _BOOL_ 2
#define _VOID_ 4
#define _IF_ 5
#define _ELSE_ 6
#define _WHILE_ 7
#define _DO_ 8
#define _TRUE_ 9
#define _FALSE_ 10
#define _PRINT_ 11
#define _SEMIC_ 12
#define _PROC_ 13
#define _VAR_ 14
#define _NUM_ 15
#define _POP_ 16
#define _MOP_ 17
#define _COP_ 18
#define _SOP_ 19
#define _LTOP_ 20
#define _LTEQOP_ 21
#define _LGOP_ 22
#define _GTOP_ 23
#define _GTEQOP_ 24
#define _EQOP_ 25
#define _PLOP_ 26
#define _PROP_ 27
#define _CLOP_ 28
#define _CROP_ 29
#define _DOTOP_ 30
#define _DOTVOP_ 31

int scanner(char word[])
{
  char w ;
  int i = 0;
  int size = sizeof(&word);
  char blank_space = ' ';
  
  
  q0:
    w = word[i];
    if (w == 'i')
    {
      i++;
      goto q1;
    }
    else if(w == 'b')
    {
      i++;
      goto q5;
    }
    else if(w == 'v')
    {
      i++;
      goto q10;
    }
    else if(w == 'e')
    {
      i++;
      goto q18;
    }
    else if(w == 'w')
    {
      i++;
      goto q23;
    }
    else if(w == 'd')
    {
      i++;
      goto q29;
    }
    else if(w == 't')
    {
      i++;
      goto q32;
    }
    else if(w == 'f')
    {
      i++;
      goto q38;
    }
    else if (w == 'p')
    {
      i++;
      goto q45;
    }
    else if (w == 's')
    {
      i++;
      goto q52;
    }
    else if (w == '_')
    {
      i++;
      goto q97;
    }
    else if (w == '0' || w== '1' || w == '2' || w == '3' || w == '4' || w == '5' || w == '6' || w == '7' || w == '8' || w == '9')
    {
      i++;
      goto q98;
    }
    else if (w == '+')
    {
      goto q67;
    }
    else if(w == '-')
    {
      goto q66;
    }
    else if(w == '/')
    {
      goto q37;
    }
    else if(w == '*')
    {
      goto q44;
    }
    else if (w == '<')
    {
      i++;
      goto q71;
    }
    else if (w == '>')
    {
      i++;
      goto q75;
    }
    else if(w == '=')
    {
      goto q81;
    }
    else if(w == '(')
    {
      goto q85;
    }
    else if(w == ')')
    {
      goto q87;
    }
    else if(w == '{')
    {
      goto q89;
    }
    else if(w == '}')
    {
      goto q90;
    }
    else if (w == '.')
    {
      goto q93;
    }
    else if (w == ';')
    {
      goto q94;
    }
    
    
    else 
      goto dead_end;

  q1:
    w = word[i];
    if (w == 'n')
    {
      i++;
      goto q2;
    }
      
    else if (w == 'f')
    {
      i++;
      goto q16;
    }

    else 
      goto dead_end;

  q2:
    w = word[i];
    if (w == 't')
    {
      i++;
      goto q3;
    }
      
    else  
      goto dead_end;

  q3:
    w = ' ';
    if (w == ' ')
    {
      goto q4;
    }
    else 
      goto dead_end;

  q4: 
    return (_INT_);

  q5:
    w = word[i];
    if(w == 'o')
    {
      i++;
      goto q6;
    }
    else 
      goto dead_end;

  q6:
    w = word[i];
    if(w == 'o')
    {
      i++;
      goto q7;
    }
    else 
      goto dead_end;

  q7:
    w = word[i];
    if(w == 'l')
    {
      i++;
      goto q8;
    }
    else 
      goto dead_end;

  q8:
    w = ' ';
    if(w == ' ')
    {
      goto q9;
    }
    else 
      goto dead_end;

  q9:
    return (_BOOL_);
  
  q10:
    w = word[i];
    if(w == 'o')
    {
      i++;
      goto q11;
    }
    else 
      goto dead_end;

  q11:
    w = word[i];
    if(w == 'i')
    {
      i++;
      goto q12;
    }
    else 
      goto dead_end;

  q12:
    w = word[i];
    if(w == 'd')
    {
      i++;
      goto q13;
    }
    else 
      goto dead_end;

  q13:
    w = ' ';
    if(w == ' ')
    {
      goto q14;
    }
    else 
      goto dead_end;

  q14:
    return (_VOID_);

  q16:
    w = ' ';
    if (w == ' ')
    {
      goto q17;
    }

  q17:
    return (_IF_);

  q18:
    w = word[i];
    if(w == 'l')
    {
      i++;
      goto q19;
    }
    else 
      goto dead_end;

  q19:
    w = word[i];
    if(w == 's')
    {
      i++;
      goto q20;
    }
    else 
      goto dead_end;

  q20:
    w = word[i];
    if(w == 'e')
    {
      i++;
      goto q21;
    }
    else 
      goto dead_end;

  q21:
    w = ' ';
    if(w == ' ')
    {
      goto q22;
    }
    else 
      goto dead_end;

  q22:
    return (_ELSE_);

  q23:
    w = word[i];
    if(w == 'h')
    {
      i++;
      goto q24;
    }
    else 
      goto dead_end;

  q24:
    w = word[i];
    if(w == 'i')
    {
      i++;
      goto q25;
    }
    else 
      goto dead_end;

  q25:
    w = word[i];
    if(w == 'l')
    {
      i++;
      goto q26;
    }
    else 
      goto dead_end;

  q26:
    w = word[i];
    if(w == 'e')
    {
      i++;
      goto q27;
    }
    else 
      goto dead_end;

  q27:
    w = ' ';
    if(w == ' ')
    {
      goto q28;
    }
    else 
      goto dead_end;
  
  q28:
    return (_WHILE_);

  q29:
    w = word[i];
    if(w == 'o')
    {
      i++;
      goto q30;
    }
    else 
      goto dead_end;
  
  q30:
    w = ' ';
    if(w == ' ')
    {
      goto q31;
    }
    else 
      goto dead_end;

  q31:
    return (_DO_);

  q32:
    w = word[i];
    if(w == 'r')
    {
      i++;
      goto q33;
    }
    else 
      goto dead_end;

  q33:
    w = word[i];
    if(w == 'u')
    {
      i++;
      goto q34;
    }
    else 
      goto dead_end;

  q34:
    w = word[i];
    if(w == 'e')
    {
      i++;
      goto q35;
    }
    else 
      goto dead_end;

  q35:
    w = ' ';
    if(w == ' ')
    {
      goto q36;
    }
    else 
      goto dead_end;

  q36:
    return (_TRUE_);

  q38:
    w = word[i];
    if(w == 'a')
    {
      i++;
      goto q39;
    }
    else 
      goto dead_end;

  q39:
    w = word[i];
    if(w == 'l')
    {
      i++;
      goto q40;
    }
    else 
      goto dead_end;

  q40: 
    w = word[i];
    if(w == 's')
    {
      i++;
      goto q41;
    }
    else 
      goto dead_end;

  q41: 
    w = word[i];
    if(w == 'e')
    {
      i++;
      goto q42;
    }
    else 
      goto dead_end;

  q42:
    w = ' ';
    if(w == ' ')
    {
      goto q43;
    }
    else 
      goto dead_end;

  q43:
    return (_FALSE_);

  q45:
    w = word[i];
    if(w == 'r')
    {
      i++;
      goto q46;
    }
    else 
      goto dead_end;

  q46:
    w = word[i];
    if(w == 'i')
    {
      i++;
      goto q47;
    }
    else if (w == 'o')
    {
      i++;
      goto q61;
    }
    else 
      goto dead_end;

  q47:
    w = word[i];
    if(w == 'n')
    {
      i++;
      goto q48;
    }
    else 
      goto dead_end;

  q48:
    w = word[i];
    if(w == 't')
    {
      i++;
      goto q49;
    }
    else 
      goto dead_end;

  q49:
    w = ' ';
    if(w == ' ')
    {
      goto q50;
    }
    else 
      goto dead_end;
  
  q50:
    return (_PRINT_);

  q52:
    w = word[i];
    if(w == 'e')
    {
      i++;
      goto q53;
    }
    else 
      goto dead_end;
  
  q53:
    w = word[i];
    if(w == 'm')
    {
      i++;
      goto q54;
    }
    else 
      goto dead_end;

  q54:
    w = word[i];
    if(w == 'i')
    {
      i++;
      goto q55;
    }
    else 
      goto dead_end;

  q55:
    w = word[i];
    if(w == 'c')
    {
      i++;
      goto q56;
    }
    else 
      goto dead_end;

  q56:
    w = ' ';
    if(w == ' ')
    {
      goto q57;
    }
    else 
      goto dead_end;

  q57:
    return (_SEMIC_);


  q61:
    w = word[i];
    if(w == 'c')
    {
      i++;
      goto q62;
    }
    else 
      goto dead_end;

  q62:
    w = ' ';
    if(w == ' ')
    {
      goto q63;
    }
    else 
      goto dead_end;

  q63:
    return (_PROC_);

  q97:
    w = word[i];
    if(w == 'a'|| w == 'b'|| w == 'c'|| w == 'd'|| w =='e'|| w == 'f'|| w == 'g' || w == 'h' || w == 'i' || w == 'j' || w == 'k' || w == 'l' || w == 'm' || w == 'n' || w == 'o' || w == 'p'|| w == 'q' || w == 'r' || w == 's' || w == 't' || w == 'u' || w == 'v' || w == 'w' || w == 'x' || w == 'y' || w == 'z'|| w == 'A'|| w == 'B'|| w == 'C'|| w == 'D'|| w =='E'|| w == 'F'|| w == 'G' || w == 'H' || w == 'I' || w == 'J' || w == 'K' || w == 'L' || w == 'M' || w == 'N' || w == 'O' || w == 'P'|| w == 'Q' || w == 'R' || w == 'S' || w == 'T' || w == 'U' || w == 'V' || w == 'W' || w == 'X' || w == 'Y' || w == 'Z')
    {
      i++;
      goto q15;
    }
    else 
      goto dead_end;
    
  q15:
    w = word[i];
    for (int i = 0; i < size-1; i++)
      {
        if (w == 'a'|| w == 'b'|| w == 'c'|| w == 'd'|| w =='e'|| w == 'f'|| w == 'g' || w == 'h' || w == 'i' || w == 'j' || w == 'k' || w == 'l' || w == 'm' || w == 'n' || w == 'o' || w == 'p'|| w == 'q' || w == 'r' || w == 's' || w == 't' || w == 'u' || w == 'v' || w == 'w' || w == 'x' || w == 'y' || w == 'z'|| w == 'A'|| w == 'B'|| w == 'C'|| w == 'D'|| w =='E'|| w == 'F'|| w == 'G' || w == 'H' || w == 'I' || w == 'J' || w == 'K' || w == 'L' || w == 'M' || w == 'N' || w == 'O' || w == 'P'|| w == 'Q' || w == 'R' || w == 'S' || w == 'T' || w == 'U' || w == 'V' || w == 'W' || w == 'X' || w == 'Y' || w == 'Z')
        {
          goto q100;
        }
        else 
          goto dead_end;
      }
    
  
  q100:
    w = ' ';
    if(w == ' ')
    {
      goto q102;
    }
    else 
      goto dead_end;

  q102:
    return (_VAR_);

  q98:
    w = word[i];
    for (int i = 0; i < size-1; i++)
      {
        if (w == '0' || w == '1' || w == '2' || w == '3' || w == '4' || w == '5' || w == '6' || w == '7' || w == '8' || w == '9')
        {
          goto q99;
        }
        else 
          goto dead_end;
      }
      
  q99:
    return (_NUM_);

  q67: 
    return (_POP_);

  q66:
    w = ' ';
    if(w == ' ')
    {
      goto q68;
    }
    else 
      goto dead_end;

  q68:
    return (_MOP_);

  q44:
    w = ' ';
    if(w == ' ')
    {
      goto q58;
    }
    else 
      goto dead_end;

  q58:
    return (_SOP_);

  q71:
    w = word[i];
    if (w == '=')
    {
      i++;
      goto q76;
    }
    else if(w == '>')
    {
      i++;
      goto q77;
    }
    else
      return (_LTOP_);


  q76:
    w = ' ';
    if(w == ' ')
    {
      goto q79;
    }
    else 
      goto dead_end;
  q79:
    return (_LTEQOP_);

  q77:
    w = ' ';
    if(w == ' ')
    {
      goto q78;
    }
    else 
      goto dead_end;

  q78:
    return (_LGOP_);

  q75:
    w = word[i];
    if(w == '=')
    {
      i++;
      goto q83;
    }
    else 
      return (_GTOP_);

  q83:
    w = ' ';
    if(w == ' ')
    {
      goto q84;
    }
    else 
      goto dead_end;

  q84:
    return (_GTEQOP_);

  q81:
    w = ' ';
    if(w == ' ')
    {
      goto q82;
    }
    else 
      goto dead_end;

  q82:
    return (_EQOP_);

  q85:
    w = ' ';
    if(w == ' ')
    {
      goto q86;
    }
    else 
      goto dead_end;
  
  q86:
    return (_PLOP_);

  q87:
    w = ' ';
    if(w == ' ')
    {
      goto q88;
    }
    else 
      goto dead_end;

  q88:
    return (_PROP_);

  q89:
    w = ' ';
    if(w == ' ')
    {
      goto q91;
    }
    else 
      goto dead_end;

  q91:
    return (_CLOP_);

  q90:
    w = ' ';
    if(w == ' ')
    {
      goto q92;
    }
    else 
      goto dead_end;

  q92:
    return (_CROP_);

  q93:
    w = ' ';
    if(w == ' ')
    {
      goto q95;
    }
    else 
      goto dead_end;

  q95:
    return (_DOTOP_);

  q94:
    w = ' ';
    if(w == ' ')
    {
      goto q96;
    }
    else 
      goto dead_end;

  q96:
    return (_DOTVOP_);

  q37: // comentário
    w = word[i];
    if(w == '*')
    {
      i++;
      goto q64;
    }
    else 
      goto dead_end;

  q64:
    w = word[i];
    if(w == 'a'|| w == 'b'|| w == 'c'|| w == 'd'|| w =='e'|| w == 'f'|| w == 'g' || w == 'h' || w == 'i' || w == 'j' || w == 'k' || w == 'l' || w == 'm' || w == 'n' || w == 'o' || w == 'p'|| w == 'q' || w == 'r' || w == 's' || w == 't' || w == 'u' || w == 'v' || w == 'w' || w == 'x' || w == 'y' || w == 'z'|| w == 'A'|| w == 'B'|| w == 'C'|| w == 'D'|| w =='E'|| w == 'F'|| w == 'G' || w == 'H' || w == 'I' || w == 'J' || w == 'K' || w == 'L' || w == 'M' || w == 'N' || w == 'O' || w == 'P'|| w == 'Q' || w == 'R' || w == 'S' || w == 'T' || w == 'U' || w == 'V' || w == 'W' || w == 'X' || w == 'Y' || w == 'Z' || w == ' ')
    {
      i++;
      goto q70;
    }
    else 
      goto dead_end;

  q70:
    w = word[i];
    if (w == '*')
    {
      i++;
      goto q72;
    }
    else
      goto dead_end;

  q72:
    w = word[i];
    if (w == '/')
    {
      goto q73;
    }
    else 
      goto dead_end;

  q73:
    return (_COP_);
  
  

  dead_end:
    return (_REJECT_);
    
}


int main(void) {
  int caller;
  char str[100] = "{ 23440055 /* a 7x82 _ab >= 12 int if ( ) while proc print semic _C3aT _XgUt true 2453 + . ; } - = <> < > ";
  char *token;
  char delimiter[] = " ";
  token = strtok(str, delimiter);
  int aux;
  char aux2;
  FILE *fptr;

  fptr = fopen("output.txt","w");

  
  while( token != NULL ) {
    
      if (token == '/*')
        {
          /*do
            {
              continue;
              //aux2 = aux2 + token;
            }while(token != '');
            while (token != '')
              {
                continue;
              }
            fprintf(fptr, "comentario \n");*/
        }
      else
        printf( " %s\n", token );
      
        aux = scanner(token);
        printf("retorno:%d\n", aux);
        if (aux == 0)
        {
          printf("<ERRO LEXICO>\n");
          fprintf(fptr,"<ERRO LEXICO>\n");
        }
        else if (aux == 1)
        {
          printf("<INT>\n");
          fprintf(fptr,"<INT>\n");
        }
        else if (aux == 2)
        {
          printf("<BOOL>\n");
          fprintf(fptr,"<BOOL>\n");
        }
        else if (aux == 4)
        {
          printf("<VOID>\n");
          fprintf(fptr,"<VOID>\n");
        }
        else if (aux == 5)
        {
          printf("<IF>\n");
          fprintf(fptr,"<IF>\n");
        }
        else if (aux == 6)
        {
          printf("<ELSE>\n");
          fprintf(fptr,"<ELSE>\n");
        }
        else if (aux == 7)
        {
          printf("<WHILE>\n");
          fprintf(fptr,"<WHILE>\n");
        }
        else if (aux == 8)
        {
          printf("<DO>\n");
          fprintf(fptr,"<DO>\n");
        }
        else if (aux == 9)
        {
          printf("<TRUE>\n");
          fprintf(fptr,"<TRUE>\n");
        }
        else if (aux == 10)
        {
          printf("<FALSE>\n");
          fprintf(fptr,"<FALSE>\n");
        }
        else if (aux == 11)
        {
          printf("<PRINT>\n");
          fprintf(fptr,"<PRINT>\n");
        }
        else if (aux == 12)
        {
          printf("<SEMIC>\n");
          fprintf(fptr,"<SEMIC>\n");
        }
        else if (aux == 13)
        {
          printf("<PROC>\n");
          fprintf(fptr,"<PROC>\n");
        }
        else if (aux == 14)
        {
          printf("<VAR, %s>\n ", token);
          fprintf(fptr,"<VAR, %s>\n", token);
        }
        else if (aux == 15)
        {
          printf("<NUM, %s>\n ", token);
          fprintf(fptr,"<NUM, %s>\n", token);
        }
        else if (aux == 16)
        {
          printf("<OP, +>\n");
          fprintf(fptr,"<OP, +>\n");
        }
        else if (aux == 17)
        {
          printf("<OP, ->\n");
          fprintf(fptr,"<OP, ->\n");
        }
        else if (aux == 18)
        {
          printf("<COMENTARIO, %s>\n");
          fprintf(fptr,"<COMENTARIO, %s>\n");
        }
        else if (aux == 19)
        {
          printf("<OP, *>\n");
          fprintf(fptr,"<OP, *>\n");
        }
        else if (aux == 20)
        {
          printf("<OP, <>\n");
          fprintf(fptr,"<OP, <>\n");
        }
        else if (aux == 21)
        {
          printf("<OP,<=>\n");
          fprintf(fptr,"<OP, <=>\n");
        }
        else if (aux == 22)
        {
          printf("<OP, <>>\n");
          fprintf(fptr,"<OP, <>>\n");
        }
        else if (aux == 23)
        {
          printf("<OP, >>\n");
          fprintf(fptr,"<OP, >>\n");
        }
        else if (aux == 24)
        {
          printf("<OP, >=>\n");
          fprintf(fptr,"<OP, >=>\n");
        }
        else if (aux == 25)
        {
          printf("<OP, =>\n");
          fprintf(fptr,"<OP, =>\n");
        }
        else if (aux == 26)
        {
          printf("<DELIM, (>\n");
          fprintf(fptr,"<DELIM, (>\n");
        }
        else if (aux == 27)
        {
          printf("<DELIM, )>\n");
          fprintf(fptr,"<OP, )>\n");
        }
        else if (aux == 28)
        {
          printf("<DELIM, {>\n");
          fprintf(fptr,"<DELIM, {>\n");
        }
        else if (aux == 29)
        {
          printf("<DELIM, }>\n");
          fprintf(fptr,"<DELIM, }>\n");
        }
        else if (aux == 30)
        {
          printf("<DELIM, .>\n");
          fprintf(fptr,"<DELIM, .>\n");
        }
        else if (aux == 31)
        {
          printf("<DELIM, ;>\n");
          fprintf(fptr,"<DELIM, ;>\n");
        }
      
      token = strtok(NULL, delimiter);
   }

  fclose(fptr);
  
  return 0;
}
