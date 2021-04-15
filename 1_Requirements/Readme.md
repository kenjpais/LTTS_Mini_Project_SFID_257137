# Introduction
This project facilitates the working of an Airline Management System by the automation of registration processes of an airline system. The system is able to provides functions to monitor passenger information like passenger’s information, etc. The system enables the user to reserve a seat by creating records when a passenger reserves a ticket. For data storage and retrieval, the file-handling facility of C Language has been used and a simple linked list is used as a data structure for traversal.

## Research
Most encounter several activities that involve some interaction with the database. For example, banking systems to deposit or withdraw funds or Hotel or Airline Reservation, will involve someone accessing a database. 

Earlier experiences show manual monitoring of employee enquiries about their loans, conveyance, etc. Often failing to achieve the desired targets, due to following reasons:
1.	Time required in giving correct information.
2.	Less reliability and maintainability of data.
3.	Secrecy of information may not be maintained due to visible facts on paper.
4.	Manual procedure of providing information is not reliable.

Minor & major problems like:

	* Maintaining database
	* Record entry

To implement databases, in one such primitive way is a file handling
     mechanism
This program shows insight into the management process of  reservation in
     Airline Management system. The whole process of Airline Management System is
     shown with the help of this project.
     
     
# Cost and Features with Time 

| Time | Feature | Cost|
| -----| --------|-----|
| 1950s|Archaic, manual systems that opened access to the airlines’ inventory and allowed for booking tickets via phone calls. A single booking could take about an hour, even more. Ticketing agents were operating with paper cards stored in a rotating tank, manually checking flight and seat availability, filling in passenger info by hand. The whole process was clumsy and slow, making it hard for carriers to process large volumes of bookings|$1 million|
|1957-1964|SABRE an automated reservation tool. It was based on SAGE, a ground-control environment developed for the US Air Force. Expertise in military equipment allowed IBM to reuse some of its foundations for American Airlines and start creating a Semi-automated Business Research Environment or simply SABRE|$40million|
|1978-1992|GDS-centric distribution model ATPCO provided travel agents tariffs via the GDS pipeline, making the pricing dynamic. The tariff publishing model allowed airlines to regulate the prices they set on their tickets. In practice, that approach helped carriers fill aircraft, operating with high revenues|$75 million|

## Assumptions
1.	An airline with existing operation experiencing difficulty with customer handling 
2.	Great customer service and efficient handling of daily operations led to customer base expansion, they leading to an exponential increase in customer requests during which manual airline record keeping system leads to the requirement of excessive staff employment and extremely time consuming processes.



## Explanation

•	Airline Management System with features of:
a.	Create a passenger record
b.	Delete a passenger record
c.	Read a passenger record
d.	Update a passenger record
e.	Save a passenger record 



# SWOT Analysis

![SWOT](https://user-images.githubusercontent.com/81014114/114843347-5b596400-9df7-11eb-90f0-a713da566c16.png)





# 4W’s and 1’H


## Who
•	Simple airlines experiencing passenger management difficulties requiring solutions.

## What

•	Inability to manage or due to insufficient fund or affordability of high-end systems, the requirement to fill the need for automation to replace manual dependent filing systems is met.

## When

•	From the time of expansion and growth of customers

## Where

•	In all areas where difficulties in management are faced

## HOW

•	Insufficient and ineffective management systems lead to resource and facilities wastage and tedious time consuming work




# High Level Requirements:

|ID	|Description|	Category|Status|
|---|-----------|---------|------|
|H01|User enabled to add record|Technical|IMPLEMENTED|
|H02|User enabled to read record|Technical|IMPLEMENTED|
|H03|User enabled to cancel ticket|Technical|IMPLEMENTED|
|H04|User enabled to save record in file|Technical|IMPLEMENTED|
|H05|User enabled to read record from file|Technical|IMPLEMENTED|

# Low Level Requirements:

|ID	|Description|H_ID|Status|
|---|-----------|----|------|
|L01|After collecting passenger information, New record shall be created|H01|IMPLEMENTED|
|L02|Reading passenger data by ID search|H02 |IMPLEMENTED|
|L03|Reading of all passenger records|H05|IMPLEMENTED|
|L04|Invalid ID search should result in an error|H05|IMPLEMENTED|
|L05|Wrong usage of menu driven module should result in an error and repeat the module||IMPLEMENTED|
L06	|Cancellation of ticket should result in delete record|H03|IMPLEMENTED|




