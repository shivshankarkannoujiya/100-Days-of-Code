#include<iostream>
#include<vector>
using namespace std;


int gargabeCollection(vector<string>& garbage, vector<int>& travel){

    int pickTimeOfTruckP = 0;
    int pickTimeOfTruckG = 0;
    int pickTimeOfTruckM = 0;

    int travelTimeOfTruckP = 0;
    int travelTimeOfTruckG = 0;
    int travelTimeOfTruckM = 0;

    // Truck kaha tak travel krega 
    int lastOccuringIndexOfP = 0;
    int lastOccuringIndexOfG = 0;
    int lastOccuringIndexOfM = 0;


    //! Calculate the pick time and travel time  
    for(int i = 0; i<garbage.size(); i++){
        
        // Each element is string 
        string currGarbage = garbage[i];

        // Travese currGarbage to know which garbage is  currGarbae
        for(int j = 0; j<currGarbage.length(); j++){

            char garbage = currGarbage[j];

            if(garbage == 'P'){
                pickTimeOfTruckP++;
                lastOccuringIndexOfP = i;

            }else if(garbage == 'G'){
                pickTimeOfTruckG++;
                lastOccuringIndexOfG = i;


            }else if(garbage == 'M'){
                pickTimeOfTruckM++;
                lastOccuringIndexOfM = i;
            }
        }
    }

    // Now we got eack truck kha tak jayega 
        // Calculate the travel Time 

        for (int i = 0; i < lastOccuringIndexOfP; i++)
        {
            travelTimeOfTruckP += travel[i];
        }

        for (int i = 0; i < lastOccuringIndexOfG; i++)
        {
            travelTimeOfTruckG += travel[i];
        }

        for (int i = 0; i < lastOccuringIndexOfM; i++)
        {
            travelTimeOfTruckM += travel[i];
        }

    // Final Ans
    int totalTime = (pickTimeOfTruckP + travelTimeOfTruckP) + (pickTimeOfTruckG + travelTimeOfTruckG) + (pickTimeOfTruckM + travelTimeOfTruckM);

    return totalTime;

}


int main()
{
    vector<string>garbage = {"G","P","GP","GG"};
    vector<int>travel = {2,4,3};

    int minTimeToCollectGarbage = gargabeCollection(garbage,travel);
    cout<<"Minimum Amount of Time to Collect Garbage : "<<minTimeToCollectGarbage<<endl;
}