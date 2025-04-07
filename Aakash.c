    // SINGLE LINKlist

// #include<stdio.h>
// #include<stdlib.h>

// struct node{
//     int data;
//     struct node *link;

// };

// int main(){
//     //Allocate memory for the head node
//     struct node *head =malloc(sizeof(struct node));
//     if(head==NULL){
//         printf("Memory allocation failed\n");
//         return 1;
//     }
//     head->data=45;
//     head->link=NULL;


//     //Allocated memory for the current node
//     struct node *current=malloc(sizeof(struct node));

//     if(head==NULL){
//         printf("Memory allocation failed\n");
//         free(head);
//     }
//     current->data=92;
//     current->link=NULL;

//     //Link the head node to the current node
//     head->link=current;

//     //Allocated memory for a new node and link it 

//     struct node *new_node =malloc(sizeof(struct node));
//     if(new_node==NULL){
//         printf("Memory allocation failed\n");
//         free(head);
//         free(current);
//         return 1;
//     }

//     new_node->data = 3;
//     new_node->link = NULL;

//     // Link the current node to the new node
//     current->link = new_node;

//     // At this point, the list is head -> current -> new_node

//     // Free allocated memory (good practice to avoid memory leaks)
//     free(head);
//     free(current);
//     free(new_node);

//     return 0;

// }

//------------------------------------------------------------------------------------------------

  // LAST Occurance

// print the index of last occurance of the element:
// #include<stdio.h>


// void last_occurance(int arr[], int size, int target){
//     int index = -1;


//     for(int i=0; i<size; i++){
//         if(arr[i]== target){
//             index =i;
//         }
//     }

//     if(index!=-1){
//         printf("last occurance of %d is at index %d\n", target,index);
//     }else{
//         printf("%d not found in the array\n", target);
//     }

// }

// int main(){
//     int arr[]={1,2,3,2,4,5,2};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     int target=2;

//     last_occurance(arr,size,target);

//     return 0;
// }

//------------------------------------------------------------------------------------------------------


     // SELECTION SORT


#include <stdio.h>

// Function to perform selection sort
void selectionSort(int arr[], int size) {
    int i, j, minIndex, temp;

    // Traverse through all array elements
    for (i = 0; i < size - 1; i++) {
        // Find the index of the minimum element in the remaining unsorted array
        minIndex = i;
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element of the unsorted array
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 25, 12, 22, 11}; // Array to be sorted
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate size of the array

    printf("Original array:\n");
    printArray(arr, size);

    selectionSort(arr, size);

    printf("Sorted array (Selection Sort):\n");
    printArray(arr, size);

    return 0;
}


//------------------------------------------------------------------------------



      // QUICK SORT

#include<stdio.h>
#include<stdlib.h>
int main(void){
    int size;
    scanf("%d",&size);
    int arr[size];
    int left[size], right[size], lcount=0,rcount=0,equal[size],ecount=0;
    for(int i=0;i<size; i++){
        scanf("%d",&arr[i]);
    }


    int pivot=arr[0];
    for(int i=0;i<size; i++){
        if(pivot==arr[i]){
            equal[ecount]=arr[i];
            ecount++;
        }else if(pivot<arr[i]){
            right[rcount]=arr[i];
            rcount++;
        }else{
            left[lcount]=arr[i];
            lcount++;
        }
    }
    for(int i=0;i<lcount;i++){
        printf("%d",left[i]);
    }
    for(int i=0;i<ecount;i++){
        printf("%d", equal[i]);
    }

    for(int i=0; i<rcount; i++){
        printf("%d",equal[i]);
    }

    return 0;

}

//--------------------------------------------------------------


     // BUBBLE SORT


// #include <stdio.h>

// // Function to perform bubble sort
// void bubbleSort(int arr[], int size) {
//     int i, j, temp;
//     int swapped;

//     // Traverse through all array elements
//     for (i = 0; i < size - 1; i++) {
//         swapped = 0; // Reset swapped flag for each pass

//         // Compare adjacent elements
//         for (j = 0; j < size - i - 1; j++) {
//             // Swap if the element found is greater than the next element
//             if (arr[j] > arr[j + 1]) {
//                 temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             // Set swapped flag
//             }
//         }

//         // If no elements were swapped, the array is already sorted
//     }
// }

// // Function to print an array
// void printArray(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int main() {
//     int arr[] = {64, 25, 12, 22, 11}; // Array to be sorted
//     int size = sizeof(arr) / sizeof(arr[0]); // Calculate size of the array

//     printf("Original array:\n");
//     printArray(arr, size);

//     bubbleSort(arr, size);

//     printf("Sorted array (Bubble Sort):\n");
//     printArray(arr, size);

//     return 0;
// }
// //-------------------------------------------------------------------------



          // BINARY USING RECURSION

//  #include <stdio.h>

// // Recursive function to perform binary search
// int binarySearchRecursive(int arr[], int left, int right, int target) {
//     // Base case: if the range is invalid
//     if (left > right) {
//         return -1; // Target not found
//     }

//     // Find the middle index
//     int mid = left + (right - left) / 2;

//     // Check if the target is present at mid
//     if (arr[mid] == target) {
//         return mid; // Target found at index mid
//     }

//     // If target is greater, ignore the left half
//     if (arr[mid] < target) {
//         return binarySearchRecursive(arr, mid + 1, right, target);
//     }

//     // If target is smaller, ignore the right half
//     return binarySearchRecursive(arr, left, mid - 1, target);
// }

// int main() {
//     int arr[] = {2, 3, 4, 10, 40}; // Sorted array
//     int size = sizeof(arr) / sizeof(arr[0]); // Calculate size of the array
//     int target = 10; // Element to be searched

//     int result = binarySearchRecursive(arr, 0, size - 1, target);

//     if (result != -1) {
//         printf("Element found at index %d\n", result);
//     } else {
//         printf("Element not found\n");
//     }

//     return 0;
// }


      // BINARY SEARCH

// #include <stdio.h>

// // Function to perform binary search
// int binarySearch(int arr[], int size, int target) {
//     int left = 0;
//     int right = size - 1;

//     while (left <= right) {
//         int mid = left + (right - left) / 2; // Find the middle index

//         if (arr[mid] == target) {
//             return mid; // Target found at index mid
//         } else if (arr[mid] < target) {
//             left = mid + 1; // Search in the right half
//         } else {
//             right = mid - 1; // Search in the left half
//         }
//     }

//     return -1; // Target not found
// }

// int main() {
//     int arr[] = {2, 3, 4, 10, 40}; // Sorted array
//     int size = sizeof(arr) / sizeof(arr[0]); // Calculate size of the array
//     int target = 10; // Element to be searched

//     int result = binarySearch(arr, size, target);

//     if (result != -1) {
//         printf("Element found at index %d\n", result);
//     } else {
//         printf("Element not found\n");
//     }

//     return 0;
// }


//--------------------------------------------------------------------------


     //Linear Search


// #include <stdio.h>

// int linearSearch(int arr[], int size, int target) {
//     for (int i = 0; i < size; i++) {
//         if (arr[i] == target)
//             return i; // Return index of the target
//     }
//     return -1; // Target not found
// }

// int main() {
//     int arr[] = {3, 5, 7, 9, 11};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int target = 7;

//     int result = linearSearch(arr, size, target);
//     if (result != -1)
//         printf("Element found at index %d\n", result);
//     else
//         printf("Element not found\n");

//     return 0;
// }



     //MERGE SORT

// #include <stdio.h>

// void merge(int arr[], int left, int mid, int right) {
//     int n1 = mid - left + 1;
//     int n2 = right - mid;

//     int L[n1], R[n2];

//     for (int i = 0; i < n1; i++) L[i] = arr[left + i];
//     for (int i = 0; i < n2; i++) R[i] = arr[mid + 1 + i];

//     int i = 0, j = 0, k = left;
//     while (i < n1 && j < n2) {
//         if (L[i] <= R[j]) arr[k++] = L[i++];
//         else arr[k++] = R[j++];
//     }

//     while (i < n1) arr[k++] = L[i++];
//     while (j < n2) arr[k++] = R[j++];
// }

// void mergeSort(int arr[], int left, int right) {
//     if (left < right) {
//         int mid = left + (right - left) / 2;

//         mergeSort(arr, left, mid);
//         mergeSort(arr, mid + 1, right);
//         merge(arr, left, mid, right);
//     }
// }

// int main() {
//     int arr[] = {12, 11, 13, 5, 6, 7};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     printf("Original array: ");
//     for (int i = 0; i < size; i++) printf("%d ", arr[i]);

//     mergeSort(arr, 0, size - 1);

//     printf("\nSorted array: ");
//     for (int i = 0; i < size; i++) printf("%d ", arr[i]);

//     return 0;
// }


//--------------------------------------------------------------------------------


          // INSERTION SORT

// #include <stdio.h>

// void insertionSort(int arr[], int size) {
//     for (int i = 1; i < size; i++) {
//         int key = arr[i];
//         int j = i - 1;

//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = key;
//     }
// }

// int main() {
//     int arr[] = {12, 11, 13, 5, 6};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     printf("Original array: ");
//     for (int i = 0; i < size; i++) printf("%d ", arr[i]);

//     insertionSort(arr, size);

//     printf("\nSorted array: ");
//     for (int i = 0; i < size; i++) printf("%d ", arr[i]);

//     return 0;
// }

//-------------------------------------------------------------------------------


       //DOUBLE LINK LIST


// #include <stdio.h>
// #include <stdlib.h>

// typedef struct Node {
//     int data;
//     struct Node* prev;
//     struct Node* next;
// } Node;

// // Function to create a new node
// Node* createNode(int data) {
//     Node* newNode = (Node*)malloc(sizeof(Node));
//     newNode->data = data;
//     newNode->prev = newNode->next = NULL;
//     return newNode;
// }

// // Insert a node at the end
// void append(Node** head, int data) {
//     Node* newNode = createNode(data);
//     if (*head == NULL) {
//         *head = newNode;
//         return;
//     }
//     Node* temp = *head;
//     while (temp->next) temp = temp->next;
//     temp->next = newNode;
//     newNode->prev = temp;
// }

// // Display the list
// void display(Node* head) {
//     while (head) {
//         printf("%d ", head->data);
//         head = head->next;
//     }
//     printf("\n");
// }

// int main() {
//     Node* head = NULL;

//     append(&head, 10);
//     append(&head, 20);
//     append(&head, 30);

//     printf("Doubly Linked List: ");
//     display(head);

//     return 0;
// }

//--------------------------------------------------------------------


          //CIRCULAR LINK LIST

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct Node {
//     int data;
//     struct Node* next;
// } Node;

// // Create a new node
// Node* createNode(int data) {
//     Node* newNode = (Node*)malloc(sizeof(Node));
//     newNode->data = data;
//     newNode->next = newNode; // Points to itself
//     return newNode;
// }

// // Insert a node at the end
// void append(Node** head, int data) {
//     Node* newNode = createNode(data);
//     if (*head == NULL) {
//         *head = newNode;
//         return;
//     }
//     Node* temp = *head;
//     while (temp->next != *head) temp = temp->next;
//     temp->next = newNode;
//     newNode->next = *head;
// }

// // Display the list
// void display(Node* head) {
//     if (head == NULL) return;
//     Node* temp = head;
//     do {
//         printf("%d ", temp->data);
//         temp = temp->next;
//     } while (temp != head);
//     printf("\n");
// }

// int main() {
//     Node* head = NULL;

//     append(&head, 10);
//     append(&head, 20);
//     append(&head, 30);

//     printf("Circular Linked List: ");
//     display(head);

//     return 0;
// }
      
//-----------------------------------------------------------


       //BINARY Tree Creation


// #include <stdio.h>
// #include <stdlib.h>

// // Define a node in the binary tree
// typedef struct Node {
//     int data;
//     struct Node* left;
//     struct Node* right;
// } Node;

// // Function to create a new node
// Node* createNode(int data) {
//     Node* newNode = (Node*)malloc(sizeof(Node));
//     newNode->data = data;
//     newNode->left = newNode->right = NULL;
//     return newNode;
// }

// // Function to insert a node into the binary tree (level-order insertion)
// Node* insertNode(Node* root, int data) {
//     if (root == NULL)
//         return createNode(data);

//     // Use a queue for level-order insertion
//     Node* queue[100];
//     int front = 0, rear = 0;
//     queue[rear++] = root;

//     while (front < rear) {
//         Node* temp = queue[front++];

//         if (temp->left == NULL) {
//             temp->left = createNode(data);
//             break;
//         } else {
//             queue[rear++] = temp->left;
//         }

//         if (temp->right == NULL) {
//             temp->right = createNode(data);
//             break;
//         } else {
//             queue[rear++] = temp->right;
//         }
//     }
//     return root;
// }

// // Preorder traversal to display the tree
// void preorderTraversal(Node* root) {
//     if (root == NULL) return;
//     printf("%d ", root->data);
//     preorderTraversal(root->left);
//     preorderTraversal(root->right);
// }

// int main() {
//     Node* root = NULL;

//     // Create binary tree
//     root = insertNode(root, 10);
//     root = insertNode(root, 20);
//     root = insertNode(root, 30);
//     root = insertNode(root, 40);
//     root = insertNode(root, 50);

//     printf("Preorder Traversal: ");
//     preorderTraversal(root);

//     return 0;
// }


//----------------------------------------------------------------


            //IN-ORDER


// #include <stdio.h>
// #include <stdlib.h>

// // Define the structure for a binary tree node
// typedef struct Node {
//     int data;
//     struct Node* left;
//     struct Node* right;
// } Node;

// // Function to create a new node
// Node* createNode(int data) {
//     Node* newNode = (Node*)malloc(sizeof(Node));
//     newNode->data = data;
//     newNode->left = newNode->right = NULL;
//     return newNode;
// }

// // Inorder traversal (Left → Root → Right)
// void inorderTraversal(Node* root) {
//     if (root == NULL) {
//         return;
//     }
//     inorderTraversal(root->left);  // Traverse left subtree
//     printf("%d ", root->data);     // Visit root
//     inorderTraversal(root->right); // Traverse right subtree
// }

// int main() {
//     // Creating a simple binary tree
//     Node* root = createNode(10);
//     root->left = createNode(20);
//     root->right = createNode(30);
//     root->left->left = createNode(40);
//     root->left->right = createNode(50);

//     printf("Inorder Traversal: ");
//     inorderTraversal(root);

//     return 0;
// }


//-------------------------------------------------------------------


      //PRE-ORDER

//   #include <stdio.h>
// #include <stdlib.h>

// // Define the structure for a tree node
// struct Node {
//     int data;
//     struct Node* left;
//     struct Node* right;
// };

// // Function to create a new node with given data
// struct Node* newNode(int data) {
//     struct Node* node = (struct Node*)malloc(sizeof(struct Node));
//     node->data = data;
//     node->left = NULL;
//     node->right = NULL;
//     return node;
// }

// // Preorder traversal: root -> left -> right
// void preorderTraversal(struct Node* root) {
//     if (root == NULL)
//         return;
    
//     // First print the data of the node
//     printf("%d ", root->data);
    
//     // Then recursively traverse the left subtree
//     preorderTraversal(root->left);
    
//     // Finally recursively traverse the right subtree
//     preorderTraversal(root->right);
// }

// int main() {
//     // Create the root node and other nodes
//     struct Node* root = newNode(1);
//     root->left = newNode(2);
//     root->right = newNode(3);
//     root->left->left = newNode(4);
//     root->left->right = newNode(5);
//     root->right->left = newNode(6);
//     root->right->right = newNode(7);
    
//     // Perform preorder traversal
//     printf("Preorder Traversal: ");
//     preorderTraversal(root);
    
//     return 0;
// }
    
    //--------------------------------------------------------------------


         //Post-Order

// #include <stdio.h>
// #include <stdlib.h>

// // Define the structure for a tree node
// struct Node {
//     int data;
//     struct Node* left;
//     struct Node* right;
// };

// // Function to create a new node with given data
// struct Node* newNode(int data) {
//     struct Node* node = (struct Node*)malloc(sizeof(struct Node));
//     node->data = data;
//     node->left = NULL;
//     node->right = NULL;
//     return node;
// }

// // Postorder traversal: left -> right -> root
// void postorderTraversal(struct Node* root) {
//     if (root == NULL)
//         return;
    
//     // First traverse the left subtree
//     postorderTraversal(root->left);
    
//     // Then traverse the right subtree
//     postorderTraversal(root->right);
    
//     // Finally print the data of the node
//     printf("%d ", root->data);
// }

// int main() {
//     // Create the root node and other nodes
//     struct Node* root = newNode(1);
//     root->left = newNode(2);
//     root->right = newNode(3);
//     root->left->left = newNode(4);
//     root->left->right = newNode(5);
//     root->right->left = newNode(6);
//     root->right->right = newNode(7);
    
//     // Perform postorder traversal
//     printf("Postorder Traversal: ");
//     postorderTraversal(root);
    
//     return 0;
// }

 //----------------------------------------------------------------------------

      //   BFS 



// #include <stdio.h>
// #include <stdlib.h>

// // Define the structure for a tree node
// struct Node {
//     int data;
//     struct Node* left;
//     struct Node* right;
// };

// // Queue structure to hold tree nodes for BFS
// struct Queue {
//     struct Node* node;
//     struct Queue* next;
// };

// // Function to create a new node
// struct Node* newNode(int data) {
//     struct Node* node = (struct Node*)malloc(sizeof(struct Node));
//     node->data = data;
//     node->left = node->right = NULL;
//     return node;
// }

// // Function to enqueue a node
// void enqueue(struct Queue** front, struct Queue** rear, struct Node* node) {
//     struct Queue* temp = (struct Queue*)malloc(sizeof(struct Queue));
//     temp->node = node;
//     temp->next = NULL;
//     if (*rear == NULL) {
//         *front = *rear = temp;
//         return;
//     }
//     (*rear)->next = temp;
//     *rear = temp;
// }

// // Function to dequeue a node
// struct Node* dequeue(struct Queue** front) {
//     if (*front == NULL)
//         return NULL;
//     struct Node* temp = (*front)->node;
//     *front = (*front)->next;
//     return temp;
// }

// // BFS function
// void BFS(struct Node* root) {
//     if (root == NULL)
//         return;
    
//     struct Queue* front = NULL;
//     struct Queue* rear = NULL;

//     enqueue(&front, &rear, root);

//     while (front != NULL) {
//         struct Node* current = dequeue(&front);
//         printf("%d ", current->data);

//         if (current->left != NULL) {
//             enqueue(&front, &rear, current->left);
//         }
//         if (current->right != NULL) {
//             enqueue(&front, &rear, current->right);
//         }
//     }
// }

// int main() {
//     // Create a simple tree
//     struct Node* root = newNode(1);
//     root->left = newNode(2);
//     root->right = newNode(3);
//     root->left->left = newNode(4);
//     root->left->right = newNode(5);

//     // Perform BFS
//     printf("BFS Traversal: ");
//     BFS(root);

//     return 0;
// }


//-----------------------------------------------------------------


        //   DFS

// #include <stdio.h>
// #include <stdlib.h>

// // Define the structure for a tree node
// struct Node {
//     int data;
//     struct Node* left;
//     struct Node* right;
// };

// // Function to create a new node
// struct Node* newNode(int data) {
//     struct Node* node = (struct Node*)malloc(sizeof(struct Node));
//     node->data = data;
//     node->left = node->right = NULL;
//     return node;
// }

// // DFS function (Preorder Traversal: root -> left -> right)
// void DFS(struct Node* root) {
//     if (root == NULL)
//         return;
    
//     // Print the data of the node
//     printf("%d ", root->data);
    
//     // Recursively visit the left subtree
//     DFS(root->left);
    
//     // Recursively visit the right subtree
//     DFS(root->right);
// }

// int main() {
//     // Create a simple tree
//     struct Node* root = newNode(1);
//     root->left = newNode(2);
//     root->right = newNode(3);
//     root->left->left = newNode(4);
//     root->left->right = newNode(5);

//     // Perform DFS (Preorder Traversal)
//     printf("DFS Traversal: ");
//     DFS(root);

//     return 0;
// }
     

//--------------------------------------------------------------

          //1. Stack in C (Using Array)

// #include <stdio.h>
// #include <stdlib.h>

// #define MAX 5  // Size of the stack

// // Stack structure
// struct Stack {
//     int arr[MAX];
//     int top;
// };

// // Function to initialize the stack
// void initStack(struct Stack* stack) {
//     stack->top = -1;
// }

// // Function to check if the stack is full
// int isFull(struct Stack* stack) {
//     return stack->top == MAX - 1;
// }

// // Function to check if the stack is empty
// int isEmpty(struct Stack* stack) {
//     return stack->top == -1;
// }

// // Function to push an element onto the stack
// void push(struct Stack* stack, int value) {
//     if (isFull(stack)) {
//         printf("Stack is full!\n");
//         return;
//     }
//     stack->arr[++stack->top] = value;
//     printf("Pushed %d onto the stack.\n", value);
// }

// // Function to pop an element from the stack
// int pop(struct Stack* stack) {
//     if (isEmpty(stack)) {
//         printf("Stack is empty!\n");
//         return -1;
//     }
//     return stack->arr[stack->top--];
// }

// // Function to peek the top element of the stack
// int peek(struct Stack* stack) {
//     if (isEmpty(stack)) {
//         printf("Stack is empty!\n");
//         return -1;
//     }
//     return stack->arr[stack->top];
// }

// int main() {
//     struct Stack stack;
//     initStack(&stack);

//     push(&stack, 10);
//     push(&stack, 20);
//     push(&stack, 30);

//     printf("Top element is %d\n", peek(&stack));

//     printf("Popped element is %d\n", pop(&stack));
//     printf("Popped element is %d\n", pop(&stack));

//     return 0;
// }

//-----------------------------------------------------------------------


       //Queue in C (Using Array)


// #include <stdio.h>
// #include <stdlib.h>

// #define MAX 5  // Size of the queue

// // Queue structure
// struct Queue {
//     int arr[MAX];
//     int front, rear;
// };

// // Function to initialize the queue
// void initQueue(struct Queue* queue) {
//     queue->front = -1;
//     queue->rear = -1;
// }

// // Function to check if the queue is full
// int isFull(struct Queue* queue) {
//     return queue->rear == MAX - 1;
// }

// // Function to check if the queue is empty
// int isEmpty(struct Queue* queue) {
//     return queue->front == -1 || queue->front > queue->rear;
// }

// // Function to enqueue (add) an element to the queue
// void enqueue(struct Queue* queue, int value) {
//     if (isFull(queue)) {
//         printf("Queue is full!\n");
//         return;
//     }
//     if (queue->front == -1) queue->front = 0;  // First element to enqueue
//     queue->arr[++queue->rear] = value;
//     printf("Enqueued %d to the queue.\n", value);
// }

// // Function to dequeue (remove) an element from the queue
// int dequeue(struct Queue* queue) {
//     if (isEmpty(queue)) {
//         printf("Queue is empty!\n");
//         return -1;
//     }
//     return queue->arr[queue->front++];
// }

// // Function to get the front element of the queue
// int front(struct Queue* queue) {
//     if (isEmpty(queue)) {
//         printf("Queue is empty!\n");
//         return -1;
//     }
//     return queue->arr[queue->front];
// }

// int main() {
//     struct Queue queue;
//     initQueue(&queue);

//     enqueue(&queue, 10);
//     enqueue(&queue, 20);
//     enqueue(&queue, 30);

//     printf("Front element is %d\n", front(&queue));

//     printf("Dequeued element is %d\n", dequeue(&queue));
//     printf("Dequeued element is %d\n", dequeue(&queue));

//     return 0;
// }
