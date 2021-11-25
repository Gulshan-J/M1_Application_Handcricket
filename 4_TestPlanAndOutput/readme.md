
# HIGH LEVEL REQUIREMENTS:
| ID    	| DESCRIPTION                                                                                                             	| Exp IN           	| Exp OUT                 	| Actual OUT              	| Type of test 	|
|-------	|-------------------------------------------------------------------------------------------------------------------------	|------------------	|-------------------------	|-------------------------	|--------------	|
| HLR_1 	| Prints Tie if sume of input from user scored value  and sum of computer scored value are equal                          	| Values processed 	| MATCH ENDED IN TIE      	| MATCH ENDED IN TIE      	| Requirement  	|
| HLR_2 	| Display the score and announce the winner by comparing the results taken  from computer and user to conclude the winner 	| values processed 	| computer wins/you wins  	| computer wins/you wins  	| Requirement  	|
| HLR_3 	| Display the runs and balls                                                                                              	| function called  	| displays runs and balls 	| displays runs and balls 	| Requirement  	|
            

 # LOW LEVEL REQUIREMENTS:
  
| ID    	| DESCRIPTION                                            	| Exp IN                                                                                    	| Exp OUT  	| Actual OUT 	| Type of test     	|
|-------	|--------------------------------------------------------	|-------------------------------------------------------------------------------------------	|----------	|:----------:	|------------------	|
| LLR_1 	| User expected to enter in the range of 1 to 6 for toss 	| 0                                                                                         	| Invalid  	| Invalid    	| Boundary test    	|
| LLR_2 	| User enters a value for odd(0) or even(1)              	| If sum of computer value + user value is equal to either  odd or even entered by the user 	| Odd/Even 	| Odd/Even   	| Requirement test 	|
| LLR_3 	| User enters a value for odd(0) or even (1)             	|  10                                                                                       	| Invalid  	| Invalid    	| Boundary test    	|
