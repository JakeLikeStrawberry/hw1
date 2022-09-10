#include <cstddef>
#include <stdexcept>
#include "ulliststr.h"

ULListStr::ULListStr()
{
  head_ = NULL;
  tail_ = NULL;
  size_ = 0;
}

ULListStr::~ULListStr()
{
  clear();
}

bool ULListStr::empty() const
{
  return size_ == 0;
}

size_t ULListStr::size() const
{
  return size_;
}
// WRITE YOUR CODE HERE


void ULListStr::pop_back(){       //removes last item

  if (head_ == NULL){ 
      return;
  }
  //int place = tail_->last - 1;
  //tail_->val[place] = NULL; not needed, don't set it to NULL just change first and last appropriately
  tail_->last--;

  if (head_==tail_ && head_->first == head_->last){
      head_ = NULL;
  }
  else if(head_->first == head_->last){         //if we need to delete the item bc empty
    
      tail_=tail_->prev;
      delete tail_->next;
      tail_->next = NULL;
    
  }
    size_--;
  }

void ULListStr::push_back(const std::string& val){      //adds to back
    if (head_ == NULL){
      Item* temp = new Item();
      temp->val[0] = val;
      temp->last = 1;
      head_ = temp;
      tail_ = temp;
    }
    else if (tail_->last == 10){          
      Item* temp = new Item();          //creating a new item because last one was full
      temp->val[0] = val;
      temp->last = 1;
      tail_->next = temp;
      temp->prev = tail_;
      temp->next = NULL;
      tail_=temp;
    }
    else{
      tail_->val[tail_->last] = val;
      tail_->last++;
    }
    size_++;                    //increment size
  }

void ULListStr::push_front(const std::string& val){     //add to front
    //int place = head_->first - 1;
  if (head_ == NULL){
    Item* temp = new Item();
    temp->val[9] = val;                   //if the head is null we make an item and assign to last index
    temp->first = 9;
    temp->last = 10;
    tail_ = temp;
    head_ = temp;
    //delete *temp;
  }
  else if(head_->first == 0){
    Item* temp2 = new Item();
    temp2->val[9] = val;
    temp2->last = 10;
    temp2->first = 9;                   
    head_->prev = temp2;              //reassigning head
    temp2->next = head_;
    temp2->prev = NULL;
    head_ = temp2;
    //delete *temp2;
  }
  else{
    head_->val[head_->first - 1] = val;
    head_->first--;
  }
  size_++;

}

void ULListStr::pop_front(){          //removing from front
  if (head_ == NULL){
    return;
  }
  //int place = head_->first;
  //head_->val[place] = NULL;
  head_->first++;

  if (head_==tail_ && head_->last == head_->first){
      head_ = NULL;
  }

  else if (head_->last == head_->first){            //if we need to delete item because its empty
    head_ = head_->next;
    delete head_->prev;
    head_->prev = NULL;

  }
size_--;
}

std::string const & ULListStr::back() const{        //returns last string

  int place = tail_->last - 1;
  return tail_->val[place];

}

std::string const & ULListStr::front() const{       //returns first string

  int place = head_->first;
  return head_->val[place];

}


std::string* ULListStr::getValAtLoc(size_t loc) const{          //finds string at given location (loc)
  if (head_ == NULL){
    return NULL;
  }
  unsigned int count = 0;
  Item* temp = NULL;              //dont allocate new memory here or else valgrind error
  temp = head_;
  unsigned int i = 0;
  for (i = head_->first; count!= size_ + head_->first; count++){

     if (count == loc){           //when they equal, we've gone loc distance, meaning we want to access it there. Therefore, we break
      break;
    }

    if (i == (temp->last) - 1){
      temp = temp->next;
      i = 0;
    }
  
    else{
      i++;
    }
  }
  return &(temp->val[i]);
  //delete temp;
}
 
  

void ULListStr::set(size_t loc, const std::string& val)
{
  std::string* ptr = getValAtLoc(loc);
  if(ptr == NULL){
    throw std::invalid_argument("Bad location");
  }
  *ptr = val;
}

std::string& ULListStr::get(size_t loc)
{
  std::string* ptr = getValAtLoc(loc);
  if(ptr == NULL){
    throw std::invalid_argument("Bad location");
  }
  return *ptr;
}

std::string const & ULListStr::get(size_t loc) const
{
  std::string* ptr = getValAtLoc(loc);
  if(ptr == NULL){
    throw std::invalid_argument("Bad location");
  }
  return *ptr;
}

void ULListStr::clear()
{
  while(head_ != NULL){
    Item *temp = head_->next;
    delete head_;
    head_ = temp;
  }
  tail_ = NULL;
  size_ = 0;
}
