#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

struct ListNode {
  int val;
  struct ListNode *next;
};

void destroy_list_node(struct ListNode *list);

struct ListNode *create_node(int val) {
  struct ListNode *node = malloc(sizeof(struct ListNode));
  if (node == NULL) {
    fprintf(stderr, "Error to alloc memory to node\n");
    return NULL;
  }
  node->val = val;
  node->next = NULL;
  return node;
}

struct ListNode *make_list_node(int arr[], int len) {
  if (len == 0)
    return NULL;

  struct ListNode *list = create_node(arr[0]);
  if (list == NULL)
    return NULL;

  struct ListNode *tail = list;
  for (int i = 1; i < len; i++) {
    tail->next = create_node(arr[i]);
    if (tail->next == NULL) {
      destroy_list_node(list);
      return NULL;
    }
    tail = tail->next;
  }
  return list;
}

void destroy_list_node(struct ListNode *list) {
  while (list != NULL) {
    struct ListNode *next = list->next;
    free(list);
    list = next;
  }
}

void print_list_node(struct ListNode *list) {
  if (list == NULL) {
    printf("[]\n");
    return;
  }
  struct ListNode *tail = list;
  printf("ListNode(");
  while (tail != NULL) {
    printf("%i", tail->val);
    if (tail->next != NULL) {
      printf(" ");
    }
    tail = tail->next;
  }
  printf(")\n");
}

struct ListNode *add_num(struct ListNode *l1, struct ListNode *l2, int acc) {
  if (l1 == NULL && l2 == NULL && acc == 0) {
    printf("Exit add func\n");
    return NULL;
  }

  int a = (l1 != NULL) ? l1->val : 0;
  int b = (l2 != NULL) ? l2->val : 0;

  printf("a: %d, b: %d\n", a, b);

  int add = a + b + acc;
  printf("a: %d + b: %d + acc: %d = %d\n", a, b, acc, add);
  printf("\n");

  printf("Creating Node value: %d\n", add);
  struct ListNode *node = create_node(add % 10);
  node->next = add_num(l1 ? l1->next : NULL, l2 ? l2->next : NULL, add / 10);
  return node;
}

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2) {
  return add_num(l1, l2, 0);
}

int main() {
  int arr1[3] = {2, 4, 3};
  int arr2[3] = {5, 6, 4};
  struct ListNode *l1 = make_list_node(arr1, 3);
  struct ListNode *l2 = make_list_node(arr2, 3);
  print_list_node(l1);
  print_list_node(l2);

  struct ListNode *sum = addTwoNumbers(l1, l2);
  print_list_node(sum);

  destroy_list_node(l1);
  destroy_list_node(l2);
  destroy_list_node(sum);
  return 0;
}
