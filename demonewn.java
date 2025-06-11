class node
{
    public int data;
    public node next; //Self Referencial Class

    public node(int x)
    {
        data = x;
        next = null;
    }

}

class SinglyLL
{
    public node head;
    public int iCount;

    public SinglyLL()
    {
        head = null;
        iCount = 0;
    }

    public void InsertFirst(int no)
    {
        node newn = null;
        
        newn = new node(no);

        if(head == null)
        {
            head = newn;

        }
        else
        {
            newn.next = head;
            head = newn;
        }
        iCount++;

    }

    public void InsertLast(int no)
    {
        node newn = null;
        node temp = null;
        
        newn = new node(no);

        if(head == null)
        {
            head = newn;

        }
        else
        {
             temp = head;

            while(temp.next != null)
            {
               temp = temp.next;
            }

            temp.next = newn;
           
        }
        iCount++;

    }

    public void Display()
    {
        System.out.println("Elements of the Linked List Are : - ");

        node temp = head;

        while(temp != null)
        {
            System.out.print("|"+temp.data+"|->");
            temp =temp.next;
        }
        System.out.println("null");
    }


    public int Count()
    {
        return iCount;
    }

    public void DeleteFirst ()
    {
        node temp = head;

        if(head == null)
        {
            return;
        }
        else if(head.next == null)
        {
            head = null;

            System.gc();


        }
        else
        {
            head = head.next;
            System.gc();

        }
        iCount --;
    }

    public void DeleteLast()
    {

        node temp = head;

        if(head == null)
        {
            return;
        }
        else if(head.next == null)
        {
            head = null;

            System.gc();


        }
        else
        {
            while(temp.next.next != null)
            {
                temp = temp.next;
            }
            temp.next = null;
            System.gc();

        }
        iCount --;

    }

    public void InsertAtPos(int no,int ipos)
    {
       int iCountNode = Count();
       int i = 0;

       node newn = null;
        
        

       node temp = head;
      
       
       if(ipos < 1 || ipos > iCountNode + 1 )
       {
        System.out.println("Invalid pos");
        return;

       }

       else if(ipos == 1 )
       {
        
        InsertFirst(no);
       }
       else if(ipos == iCountNode + 1)
       {
        InsertLast(no);
       }
       else
       {
        newn = new node(no);
        
        
        temp = head;

        for( i = 1; i< ipos-1 ;i ++)
        {
            temp = temp.next;
        }
        temp.next = newn;
        newn.next = temp.next;

       }
       iCount++;
    }
    
    public void DeleteAtPos(int ipos)
    {
        int iCountNode = Count();
       int i = 0;
       node temp = null;
       
       if(ipos < 1 || ipos > iCountNode  )
       {
        System.out.println("Invalid pos");
        return;

       }

       else if(ipos == 1 )
       {
        
        DeleteFirst();
       }
       else if(ipos == iCountNode)
       {
        DeleteLast();
       }
       else
       {
        
        
        temp = head;

        for( i = 1; i< ipos -1 ;i++)
        {
            temp = temp.next;
        }
       
        temp.next = temp.next.next;
        System.gc();

       }
       iCount--;

    }

}

class demonewn

{
    public static void main(String args[])
    {
        SinglyLL sobj = new SinglyLL();
        int iRet = 0;

        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);

        sobj.InsertLast(101);
        sobj.InsertLast(111);
        sobj.InsertLast(151);

        

        sobj.Display();
        iRet = sobj.Count();

        System.out.println("Number of elements in the Linked List are :- "+iRet );

        
         sobj.DeleteFirst();
         sobj.DeleteLast();

         sobj.Display();
        iRet = sobj.Count();

        System.out.println("Number of elements in the Linked List are :- "+iRet );

        sobj.InsertAtPos(75, 4);

        sobj.Display();
        iRet = sobj.Count();

        sobj.DeleteAtPos(4);

        System.out.println("Number of elements in the Linked List are :- "+iRet );
    }
}