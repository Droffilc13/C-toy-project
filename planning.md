# Contact management system

# Features
1. Add new contacts
2. Edit existing contacts
3. Delete Contacts
4. Search for contacts by their name or phone number
5. List all my Contacts
6. Exit program
7. Write data to text file and load from it

# Planning

# "Class"
Contact (struct):
- name (unique)
- phone number (unique)
- address (optional)
- email (optional)
- telegram id (optional)


Data Structure to represent the list of contacts
- Array (need to initialise the MAX number of contacts allowed, may not be best utilising memory space)
- LinkedList (easy insertion and removal (O(n), O(n)), can instantiate on demand with malloc, search O(n))
- Tree (harder to code, but insertion, removal, search O(log n). However, for unbalanced trees, may be O(n))

For simplicity, and since data is not large, go with linkedlist for now.

# "Pages"

1. Start page that list the available options
2. Add -> user enter input one by one -> input validation -> success msg
3. Edit -> user enter input one by one -> input validation -> success msg 
4. Delete -> User enter name -> confirmation prompt -> success msg 

