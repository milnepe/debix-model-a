#!/bin/bash

# Send CAN 2.0 data frames continuously

while :
do
	#can_id 123, data HELLO
	cansend can0 123#48454C4C4F;
	sleep 1;
	#can_id 456, data WORLD
	cansend can0 456#574F524C44;
	sleep 1;
done

