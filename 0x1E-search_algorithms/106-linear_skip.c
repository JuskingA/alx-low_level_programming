skiplist_t *linear_skip(skiplist_t *list, int value) {
    if (list == NULL) {
        return NULL;
    }

    skiplist_t *express = list;
    skiplist_t *current = list;
    int size = 0;
    while (current) {
        size++;
        current = current->next;
    }
    int jump = sqrt(size);

    while (express->express && express->n < value) {
        printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
        express = express->express;
    }
    printf("Value found between indexes [%lu] and [%lu]\n", express->index, (express->express) ? express->express->index - 1 : size - 1);

    current = express;
    while (current && current->n <= value) {
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        if (current->n == value) {
            return current;
        }
        current = current->next;
    }

    return NULL;
}
