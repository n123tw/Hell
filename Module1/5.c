mov A,50    ;введите нужное число         

call max

hlt

max:
 mov D,232  
 push A
 div 100
 cmp A,0
 jz ben
 add A,48
 mov [D],A        
 inc D
 sub A,48
 mov C,5

ben:        
 mul 100
 mov B,A
 pop A
 sub A,B
 push A
 div 10
 cmp C,5
 jz bob
 cmp A,0
 jz cris

bob:
 add A,48
 mov [D],A         
 inc D
 sub A,48

cris: 
 mul 10
 mov B,A
 pop A
 sub A,B
 add A,48
 mov [D],A

ret
       
