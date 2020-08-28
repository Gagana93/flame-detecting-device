const int trigger=11;
const int echo=10;

long duration;
int distance;


void setup()
{
  pinMode(trigger,OUTPUT);
   pinMode(echo,INPUT);
   long duration=0;
    float distance=0;
   Serial.begin(9600);
 
  pinMode(8,OUTPUT);
  pinMode(12,INPUT);
  // put your setup code here, to run once:

}
