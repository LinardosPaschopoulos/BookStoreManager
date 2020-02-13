# BookStoreManager

Execution:

This Project has been designed to be compiled and run with Dev-C++ 5.11.




Description:

The purpose of the exercise is to create a file manager that contains bibliographic information. First you need to define the BibElement class that will contain the following fields:

•	type that will be a String object and can take as a value any string that starts with the '@' character and not just the 3 values: article, Book, inproceedings. It should also be able to handle instances where the String is empty.

•	Id that will be a String object.

•	author that will be a String object.

•	title that will be a String object.

•	journal that will be a String object.

•	volume that will be a String object.

•	booktitle that will be a String object.

•	publisher that will be a String object.

•	pages that will be a String object with the form firstPage—lastPage i.e.: “995—1072”.

•	year that will be a String object i.e.: “1990”.


The program will read files containing the details of the books (always in text format), create BibElement objects, and import them into a (dynamic) structure.

The program will ask the user for the input file name, and then ask for two primary and secondary classification criteria (which will be any of the following fields: type, id, author, and year) and classify the dynamic structure based on them.

