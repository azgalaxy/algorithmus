class Node:
    def __init__(self,data):
        self.data = data
        self.next = None

def print_revrse(head):
     stack = []
     current = head
     while current:
       stack.append(current.data)
       current = current.next
     while stack:
       print(stack.pop())



def create_list():
   n = int(input("Entrez the number of elements: "))
   head = None
   current = None
   for i in range(n):
      data = int(input(f"Entrz element {i+1}: ").format(i+1))
      new_node = Node(data)
      if head is None:
         head = current = new_node
      else:
         current.next = new_node
         current = current.next
   return head


def main():
   head = create_list()
   print("The orginal list: ")
   current = head
   elements = []
   while current is not None:
    elements.append(str(current.data))
    current = current.next
   print(" -> ".join(elements))

   print("\nNow the reversed list: ")
   print_revrse(head)


main()
