#include <stdio.h>

    int main( ) 
      {
        int numb[3] = {10, 2, 8} ;
        int  i , j , hold ;

        printf ( " Original order of datas\n " ) ;
        
        for ( i = 0 ; i < 3 ; ++i )  
		{
            printf ( " %d " , numb [ i ] ) ;            /*original array*/
                
	    }
	    
         /*start of sorting*/
        for (i = 0 ; i < 3-1 ; ++i ) {	                /*loop for passes*/
                 
			for ( j = 1 ; j < 3 ; ++j ) {               /*loop for comparisons*/
	               
				if ( numb [ i ] > numb [ i+1 ] ) {      /*if first element is greater than second then shift them*/
	                   
				    hold = numb [ i ] ;                               
	                numb [ i ] = numb [ i+1 ] ;
	                numb [ i+1 ] = hold ;
                        
			    }
			     
            }   
              
		}
	    
        printf ( "\n Ascending order of datas\n " ) ;
        
		for ( i = 0 ; i < 3 ; ++i  ) {        
                 
			printf ( " %d " , numb [ i ] ) ;            /*sorted array*/
                 
		}
			
        return 0;
         
	}

