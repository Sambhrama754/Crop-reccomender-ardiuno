#include "model.h"

Eloquent::ML::Port::GaussianNB model;

void setup()
{
	// put your setup code here, to run once:
	Serial.begin(115200);
	float data[5] = {90, 42, 43, 20.83, 82};

	Serial.print("Predicted class: ");
	Serial.println(model.predictLabel(data));
	delay(1000);
}

void loop()
{
	// put your main code here, to run repeatedly:
}
