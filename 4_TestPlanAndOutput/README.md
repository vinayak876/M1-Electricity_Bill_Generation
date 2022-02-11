# Test Plan  
## Low Level Output           
                                                Exp i/p   Exp o/p   Ach o/p             
1.Electricity bill calculation at urban areas 	Choice	  SUCCESS	SUCCESS
2.Electricity bill calculation at rural areas	Choice	  SUCCESS  SUCCESS
3.Units consumed per year		                Choice    SUCCESS	SUCCESS                      
4.Calculates total industrial loads	            Choice	  SUCCESS   SUCCESS


## High Level Output
Electricity bill calculation at Urban areas if(units<30)	            22 units	71.5 rupees	71.5 rupees
Electricity bill calculation at Urban areas if(units>30 && units <100)	50	             235	235
Electricity bill calculation at Urban areas if(units>101 && units <200)	150      	   937.5    937.5
Electricity bill calculation at Urban areas if(units<200)		        230            1,679	1,679                   
Electricity bill calculation at Urban areas if(units>30 && units <100)	67	           294.8	294.8           
Electricity bill calculation at Urban areas if(units>101 && units <200)	134	           797.3	797.3
Electricity bill calculation at Urban areas if(units<200)	            344	           2,339.2	2,339.2                      