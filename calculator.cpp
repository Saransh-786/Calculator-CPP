#include <iostream>
using namespace std;
int currconvert(int m){
    
//     -----------------------------CURRENT CURRENCY----------------------------------------------------------------- 
	//PHP to other currencies
	float USD = 49.76, AUD = 37.74, EUR = 53.53, HKD =  6.42, MXN = 2.34, SEK = 5.63, KWD = 163.17, QAR = 13.17, PHP = 1, RUB = 0.84;
	//USD to other currencies
	float USD2 = 1, AUD2 = 1.31, EUR2 = 0.93, HKD2 = 7.76, MXN2 = 20.70, SEK2 = 8.73, KWD2 = 0.30, QAR2 = 3.64, PHP2 = 49.76, RUB2 = 60.10;
	//AUD to other currencies
	float USD3 = 0.76, AUD3 = 1, EUR3 = 0.71, HKD3 = 5.87, MXN3 = 15.82, SEK3 = 6.76, KWD3 = 0.23, QAR3 = 2.78, PHP3 = 38.01, RUB3 = 45.90;
	//EUR to other currencies
	float USD4 = 1.08, AUD4 = 1.41, EUR4 = 1, HKD4 = 8.37, MXN4 = 22.33, SEK4 = 9.42, KWD4 = 0.33, QAR4 = 3.93, PHP4 = 53.68, RUB4 = 64.83;
	//HKD to other currencies
	float USD5 = 0.13, AUD5 = 0.17, EUR5 = 0.12, HKD5 = 1, MXN5 = 2.67, SEK5 = 1.13, KWD5 = 0.039, QAR5 = 0.47, PHP5 = 6.41, RUB5 = 7.75;
	//MXN ti other currencies
	float USD6 = 0.048, AUD6 = 0.063, EUR6 = 0.045, HKD6 = 0.38, MXN6 = 1, SEK6 = 0.42, KWD6 = 0.015, QAR6 = 0.18, PHP6 = 2.40, RUB6 = 2.90;
	//SEK to other currencies
	float USD7 = 0.11, AUD7 = 0.15, EUR7 = 0.11, HKD7 = 0.89, MXN7 = 2.37, SEK7 = 1, KWD7 = 0.035, QAR7 = 0.42, PHP7 = 5.70, RUB7 = 6.88;
	//KWD to other currencies
	float USD8 = 3.28, AUD8 = 4.29, EUR8 = 3.04, HKD8 = 25.45, MXN8 = 67.85, SEK8 = 28.64, KWD8 = 1, QAR8 = 11.94, PHP8 = 163.06, RUB8 = 197.09;
	//QAR to other currencies
	float USD9 = 0.27, AUD9 = 0.36, EUR9 = 0.25, HKD9 = 2.13, MXN9 = 5.68, SEK9 = 2.40, KWD9 = 0.084, QAR9 = 1, PHP9 = 13.66, RUB9 = 16.51;
	//RUB to other curreceis
	float USD10 = 0.017, AUD10 = 0.022, EUR10 = 0.015, HKD10 = 0.13, MXN10 = 0.34, SEK10 = 0.15, KWD10 = 0.0051, QAR10 = 0.061, PHP10 = 0.83, RUB10 = 1;
	
    
    cout<<"*************** CURRENCY CONVERTER ***************"<<endl;
    cout<<"-------------------------------------------------"<<endl;

                        	cout<<"Choose the currency to convert:"<<endl;
							cout<<"(1)PHP-Philippine Peso"<<endl;
							cout<<"(2)USD-US Dollar"<<endl;
							cout<<"(3)AUD-Australian Dollar"<<endl;
							cout<<"(4)EUR-Euro"<<endl;
							cout<<"(5)HKD-HongKong Dollar"<<endl;
							cout<<"(6)MXN-Mexican Peso"<<endl;
							cout<<"(7)SEK-Swedish Krona"<<endl;
							cout<<"(8)KWD-Kuwaiti Dinar"<<endl;
							cout<<"(9)QAR-Qatari Rial"<<endl;
							cout<<"(10)RUB-Russian Ruble"<<endl;
							
				
				
				
				
switch(m)
				    {
                        case 1:
                            cout<<"Choose the currency to convert:";
                            cout<<"(1)PHP-Philippine Peso";
                            cout<<"(2)USD-US Dollar";
                            cout<<"(3)AUD-Australian Dollar";
                            cout<<"(4)EUR-Euro";
                            cout<<"(5)HKD-HongKong Dollar";
                            cout<<"(6)MXN-Mexican Peso";
                            cout<<"(7)SEK-Swedish Krona";
                            cout<<"(8)KWD-Kuwaiti Dinar";
                            cout<<"(9)QAR-Qatari Rial";
                            cout<<"(10)RUB-Russian Ruble";
                            
                            switch(m)
                            {
                                case 1:  m= m* PHP;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                         
                        
                                case 2: m= m* USD;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                        
                                case 3: m= m* AUD;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                    
                                case 4: m= m* EUR;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 5: m= m* HKD;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 6: m= m* MXN;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 7: m= m* SEK;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 8: m= m* KWD;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 9: m= m* QAR;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 10: m= m* RUB;
                                         cout<<endl ;
                                         cout<<m;
                                         break;                 
                            }
                    case 2:
                            cout<<"Choose the currency to convert:";
                            cout<<"(1)PHP-Philippine Peso";
                            cout<<"(2)USD-US Dollar";
                            cout<<"(3)AUD-Australian Dollar";
                            cout<<"(4)EUR-Euro";
                            cout<<"(5)HKD-HongKong Dollar";
                            cout<<"(6)MXN-Mexican Peso";
                            cout<<"(7)SEK-Swedish Krona";
                            cout<<"(8)KWD-Kuwaiti Dinar";
                            cout<<"(9)QAR-Qatari Rial";
                            cout<<"(10)RUB-Russian Ruble";
                            
                            switch(m)
                            {
                                case 1:  m= m* PHP2;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                         
                        
                                case 2: m= m* USD2;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                        
                                case 3: m= m* AUD2;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                    
                                case 4: m= m* EUR2;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 5: m= m* HKD2;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 6: m= m* MXN2;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 7: m= m* SEK2;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 8: m= m* KWD2;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 9: m= m* QAR2;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 10: m= m* RUB2;
                                         cout<<endl ;
                                         cout<<m;
                                         break;                 
                            }       
                    case 3:
                            cout<<"Choose the currency to convert:";
                            cout<<"(1)PHP-Philippine Peso";
                            cout<<"(2)USD-US Dollar";
                            cout<<"(3)AUD-Australian Dollar";
                            cout<<"(4)EUR-Euro";
                            cout<<"(5)HKD-HongKong Dollar";
                            cout<<"(6)MXN-Mexican Peso";
                            cout<<"(7)SEK-Swedish Krona";
                            cout<<"(8)KWD-Kuwaiti Dinar";
                            cout<<"(9)QAR-Qatari Rial";
                            cout<<"(10)RUB-Russian Ruble";
                            
                            switch(m)
                            {
                                case 1:  m= m* PHP3;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                         
                        
                                case 2: m= m* USD3;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                        
                                case 3: m= m* AUD3;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                    
                                case 4: m= m* EUR3;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 5: m= m* HKD3;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 6: m= m* MXN3;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 7: m= m* SEK3;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 8: m= m* KWD3;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 9: m= m* QAR3;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 10: m= m* RUB3;
                                         cout<<endl ;
                                         cout<<m;
                                         break;                 
                            }
                    case 4:
                            cout<<"Choose the currency to convert:";
                            cout<<"(1)PHP-Philippine Peso";
                            cout<<"(2)USD-US Dollar";
                            cout<<"(3)AUD-Australian Dollar";
                            cout<<"(4)EUR-Euro";
                            cout<<"(5)HKD-HongKong Dollar";
                            cout<<"(6)MXN-Mexican Peso";
                            cout<<"(7)SEK-Swedish Krona";
                            cout<<"(8)KWD-Kuwaiti Dinar";
                            cout<<"(9)QAR-Qatari Rial";
                            cout<<"(10)RUB-Russian Ruble";
                            
                            switch(m)
                            {
                                case 1:  m= m* PHP4;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                         
                        
                                case 2: m= m* USD4;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                        
                                case 3: m= m* AUD4;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                    
                                case 4: m= m* EUR4;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 5: m= m* HKD4;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 6: m= m* MXN4;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 7: m= m* SEK4;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 8: m= m* KWD4;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 9: m= m* QAR4;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 10: m= m* RUB4;
                                         cout<<endl ;
                                         cout<<m;
                                         break;                 
                            }
                    case 5:
                            cout<<"Choose the currency to convert:";
                            cout<<"(1)PHP-Philippine Peso";
                            cout<<"(2)USD-US Dollar";
                            cout<<"(3)AUD-Australian Dollar";
                            cout<<"(4)EUR-Euro";
                            cout<<"(5)HKD-HongKong Dollar";
                            cout<<"(6)MXN-Mexican Peso";
                            cout<<"(7)SEK-Swedish Krona";
                            cout<<"(8)KWD-Kuwaiti Dinar";
                            cout<<"(9)QAR-Qatari Rial";
                            cout<<"(10)RUB-Russian Ruble";
                            
                            switch(m)
                            {
                                case 1:  m= m* PHP5;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                         
                        
                                case 2: m= m* USD5;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                        
                                case 3: m= m* AUD5;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                    
                                case 4: m= m* EUR5;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 5: m= m* HKD5;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 6: m= m* MXN5;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 7: m= m* SEK5;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 8: m= m* KWD5;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 9: m= m* QAR5;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 10: m= m* RUB5;
                                         cout<<endl ;
                                         cout<<m;
                                         break;                 
                            }
                    case 6:
                            cout<<"Choose the currency to convert:";
                            cout<<"(1)PHP-Philippine Peso";
                            cout<<"(2)USD-US Dollar";
                            cout<<"(3)AUD-Australian Dollar";
                            cout<<"(4)EUR-Euro";
                            cout<<"(5)HKD-HongKong Dollar";
                            cout<<"(6)MXN-Mexican Peso";
                            cout<<"(7)SEK-Swedish Krona";
                            cout<<"(8)KWD-Kuwaiti Dinar";
                            cout<<"(9)QAR-Qatari Rial";
                            cout<<"(10)RUB-Russian Ruble";
                            
                            switch(m)
                            {
                                
                                case 1:  m= m* PHP6;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                         
                        
                                case 2: m= m* USD6;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                        
                                case 3: m= m* AUD6;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                    
                                case 4: m= m* EUR6;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 5: m= m* HKD6;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 6: m= m* MXN6;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 7: m= m* SEK6;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 8: m= m* KWD6;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 9: m= m* QAR6;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 10: m= m* RUB6;
                                         cout<<endl ;
                                         cout<<m;
                                         break;                 
                            }
                    case 7:
                            cout<<"Choose the currency to convert:";
                            cout<<"(1)PHP-Philippine Peso";
                            cout<<"(2)USD-US Dollar";
                            cout<<"(3)AUD-Australian Dollar";
                            cout<<"(4)EUR-Euro";
                            cout<<"(5)HKD-HongKong Dollar";
                            cout<<"(6)MXN-Mexican Peso";
                            cout<<"(7)SEK-Swedish Krona";
                            cout<<"(8)KWD-Kuwaiti Dinar";
                            cout<<"(9)QAR-Qatari Rial";
                            cout<<"(10)RUB-Russian Ruble";
                            
                            switch(m)
                            {
                                case 1:  m= m* PHP7;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                         
                        
                                case 2: m= m* USD7;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                        
                                case 3: m= m* AUD7;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                    
                                case 4: m= m* EUR7;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 5: m= m* HKD7;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 6: m= m* MXN7;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 7: m= m* SEK7;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 8: m= m* KWD7;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 9: m= m* QAR7;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 10: m= m* RUB7;
                                         cout<<endl ;
                                         cout<<m;
                                         break;                 
                            }
                    case 8:
                            cout<<"Choose the currency to convert:";
                            cout<<"(1)PHP-Philippine Peso";
                            cout<<"(2)USD-US Dollar";
                            cout<<"(3)AUD-Australian Dollar";
                            cout<<"(4)EUR-Euro";
                            cout<<"(5)HKD-HongKong Dollar";
                            cout<<"(6)MXN-Mexican Peso";
                            cout<<"(7)SEK-Swedish Krona";
                            cout<<"(8)KWD-Kuwaiti Dinar";
                            cout<<"(9)QAR-Qatari Rial";
                            cout<<"(10)RUB-Russian Ruble";
                            
                            switch(m)
                            {
                                case 1:  m= m* PHP8;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                         
                        
                                case 2: m= m* USD8;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                        
                                case 3: m= m* AUD8;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                    
                                case 4: m= m* EUR8;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 5: m= m* HKD8;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 6: m= m* MXN8;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 7: m= m* SEK8;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 8: m= m* KWD8;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 9: m= m* QAR8;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 10: m= m* RUB8;
                                         cout<<endl ;
                                         cout<<m;
                                         break;                 
                            }
                    case 9:
                            cout<<"Choose the currency to convert:";
                            cout<<"(1)PHP-Philippine Peso";
                            cout<<"(2)USD-US Dollar";
                            cout<<"(3)AUD-Australian Dollar";
                            cout<<"(4)EUR-Euro";
                            cout<<"(5)HKD-HongKong Dollar";
                            cout<<"(6)MXN-Mexican Peso";
                            cout<<"(7)SEK-Swedish Krona";
                            cout<<"(8)KWD-Kuwaiti Dinar";
                            cout<<"(9)QAR-Qatari Rial";
                            cout<<"(10)RUB-Russian Ruble";
                            
                            switch(m)
                            {
                                case 1:  m= m* PHP9;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                         
                        
                                case 2: m= m* USD9;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                        
                                case 3: m= m* AUD9;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                    
                                case 4: m= m* EUR9;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 5: m= m* HKD9;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 6: m= m* MXN9;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 7: m= m* SEK9;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 8: m= m* KWD9;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 9: m= m* QAR9;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 10: m= m* RUB9;
                                         cout<<endl ;
                                         cout<<m;
                                         break;                 
                            }
                    case 10:
                            cout<<"Choose the currency to convert:";
                            cout<<"(1)PHP-Philippine Peso";
                            cout<<"(2)USD-US Dollar";
                            cout<<"(3)AUD-Australian Dollar";
                            cout<<"(4)EUR-Euro";
                            cout<<"(5)HKD-HongKong Dollar";
                            cout<<"(6)MXN-Mexican Peso";
                            cout<<"(7)SEK-Swedish Krona";
                            cout<<"(8)KWD-Kuwaiti Dinar";
                            cout<<"(9)QAR-Qatari Rial";
                            cout<<"(10)RUB-Russian Ruble";
                            
                            switch(m)
                            {
                                case 1:  m= m* PHP10;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                         
                        
                                case 2: m= m* USD10;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                        
                                case 3: m= m* AUD10;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                    
                                case 4: m= m* EUR10;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 5: m= m* HKD10;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 6: m= m* MXN10;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 7: m= m* SEK10;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 8: m= m* KWD10;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 9: m= m* QAR10;
                                         cout<<endl ;
                                         cout<<m;
                                         break;
                                case 10: m= m* RUB10;
                                         cout<<endl ;
                                         cout<<m;
                                         break;     

                            }           


		
						

		
						



default:
        
    break;

} 
 

							

int main(){
    int value=5;
    
    cout<<currconvert(5));
    
    return 0;
}