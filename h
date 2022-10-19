# NUMPY

Il primo passo per poter utilizzare la libreria `NUMPY` è quello di importarlo su Python.

```python
import numpy as np
```

L’elemento fondamentale su cui si basa la libreria è l’array. 

Per crearne uno esiste una funzione specifica: `np.array()`. 

L’argomento della funzione deve essere una lista Python, che si crea con le [].

```python
array_1=np.array([1,2,3])
array_2=np.array([[1,2,3],[4,5,6]])
array_3=np.array([[[1,2,3],[4,5,6],[7,8,9]],[[2,8,4],[9,7,2],[3,5,1]]])
```

Ovviamente la lista può contenere a sua volta altre liste.

In questo modo si creano array a più dimensioni come nel caso di array_2 e array_3.

Per visualizzare le dimensioni di un array esiste il comando `.size`.

```python
print(array_3.size)
```

In questo caso il risultato sarebbe 3.

Con il comando .shape invece si hanno informazioni anche sul numero di valori contenuti in ogni dimensione.

```python
print(array_2.shape)
```

In questo caso il risultato sarebbe (2,3) perchè ci sono 2 righe di valori e 3 colonne.

ATTENZIONE

Un array unidimensionale altro non è che un vettore riga.

Se si vuole un vettore colonna bisogna creare un array bidimnsionale come segue:

```python
vettore_colonna=np.array([[1],[2]])
```

Infatti il comando `vettore_colonna.size` restituisce 2.

A differenza delle liste Python classiche che accettano anche caratteri, in un array vanno inseriti solo numeri del tipo `int` o `float`.

Un array bidimensionale altro non è che una matrice.

---

Per accedere a un valore dell’array bisogna indicare gli indici di dimensione separati da : dentro le [].

ES:

```python
array=np.array([[[1,2,3],[4,5,6],[7,8,9]],[[10,11,12],[13,14,15],[16,17,18]]])
print(array[])
```
