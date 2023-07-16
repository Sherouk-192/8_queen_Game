#include <iostream>

void test_board(int,int);  
void print_chessboard(void); 
void clear_chessboard(void); 
int counter , chessboard[8][8] ; 
 
void main(void) 
{ 
 counter = 0 ; 
 clear_chessboard(); 
 for(int k = 0 ; k <= 7 ; k++) 
  test_board(0 , k); 
} 
 
 
 
void test_board(int r , int c) 
{ 
 int a , b , flag ; 
 flag = 0 ; 
// getch(); 
 for(a = r ; a >= 0 ; a--)  
  if(chessboard[a][c] == 1) flag = 1 ; 
 for(a=r,b=c ; a >= 0 && b >= 0 ; a--,b--) 
  if(chessboard[a][b] == 1) flag = 1 ; 
 for(a=r,b=c ; a>= 0 && b <= 7 ; a-- , b++) 
  if(chessboard[a][b] == 1) flag = 1 ; 
// cout << r << "\t" << c << "\t" << flag << "\n"; 
 if(flag == 0) 
 {  
  chessboard[r][c] = 1 ; 
  if(r == 7) { counter++;  print_chessboard(); } 
  else   
   for(int k = 0 ; k <= 7 ; k++) 
    test_board(r+1,k) ; 
 } 
 chessboard[r][c] = 0 ; 
} 
 
void clear_chessboard(void) 
{ 
 int r , c ; 
 for(r = 0 ; r <= 7 ; r++) 
  for(c = 0 ; c <= 7 ; c++) 
   chessboard[r][c] = 0 ; 
} 
 
void print_chessboard(void) 
{ 
 int r , c ; 
 cout << "Counter = " << counter << "\n"; 
  
 for(r = 0 ; r <= 7 ; r++) 
 { 
  for(c = 0 ; c <= 7 ; c++) 
   cout << chessboard[r][c] << "  "; 
  cout << "\n"; 
 } 
 cout << "\n"; 
} 