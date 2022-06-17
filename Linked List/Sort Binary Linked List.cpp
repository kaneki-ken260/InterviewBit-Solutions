/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A) {
    ListNode* one = A, *zer = A;
    int i=0,j=0;
    while(one)
    {
        if(one->val==1)
        break;
        one = one->next;
        i++;
    }
    while(zer)
    {
        if(zer->val==0)
        break;
        zer = zer->next;
        j++;
    }
    
    while(zer && one)
    {
        if(zer->val==0 && one->val==1)
        {
            if(j>i)
        {
            swap(zer->val,one->val);
            zer = zer->next;
            one = one->next;
            i++;
            j++;
        }
        else
        {
            j++;
            zer = zer->next;
           while(zer)
           {
          if(zer->val==0)
          break;
          zer = zer->next;
          j++;
           } 
         }
      }
      else
      {
          while(one)
          {
              if(one->val==1)
              break;
              one = one->next;
              i++;
          }
          while(zer)
          {
              if(zer->val==0)
              break;
              zer = zer->next;
              j++;
          }
      }
    }
    return A;
}
