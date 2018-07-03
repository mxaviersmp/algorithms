//troca os elementos de posição
void interchange(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

//particiona o array em 2 subarrays, onde
//todos os elementos da esquerda são menores ou iguais a A[i + 1]
//e todos os elementos da direita são maiores que A[i + 1]
int partition(int* A, int p, int r)
{
    int x = A[r];
    int i = p - 1;

    for(int j = p; j < r; j++)
    {
        if(A[j] <= x) {
            i++;
            interchange(&A[i], &A[j]);
        }
    }
    i++;
    interchange(&A[i], &A[r]);
    return i;
}

//q sera o elemento que dividira em dois subarrays
//a primeira chamada p recebe 0 e r o tamanho de A
void quickSort(int* A, int p, int r)
{
    if(p < r) {
        int q = partition(A, p, r);
        quickSort(A, p, q - 1);
        quickSort(A, q + 1, r);
    }
}
