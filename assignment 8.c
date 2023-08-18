#include <stdio.h>
int main() {
  // Q1 Answer here
  int row, col;
  for (int row = 1; row <= 5; row++) {
    for (int col = 1; col <= 5; col++) {
      if (col <= row)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
  // Q2 Answer here
  int rowNum, colNum;
  for (int rowNum = 1; rowNum <= 5; rowNum++) {
    for (int colNum = 1; colNum <= 5; colNum++) {
      if (colNum >= 6 - rowNum)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
  // Q3 Answer here
  int row_counter, col_counter;
  for (int row_counter = 1; row_counter <= 5; row_counter++) {
    for (int col_counter = 1; col_counter <= 5; col_counter++) {
      if (col_counter <= 6 - row_counter)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
  // Q4 Answer here
  int i, j;
  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 5; j++) {
      if (j >= i)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
  // Q5 Answer here
  int row_count, col_count;
  for (int row_count = 1; row_count <= 5; row_count++) {
    for (int col_count = 1; col_count <= 9; col_count++) {
      if (col_count >= (6 - row_count) && col_count <= (4 + row_count))
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
  // Q6 Answer here
  int outerIndex, innerIndex;
  for (outerIndex = 1; outerIndex <= 5; outerIndex++) {
    for (innerIndex = 1; innerIndex <= 9; innerIndex++) {
      if (innerIndex >= outerIndex && innerIndex <= 10 - outerIndex)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
  // Q7 Answer here
  int outer, inner;
  for (outer = 1; outer <= 5; outer++) {
    for (inner = 1; inner <= 10; inner++) {
      if (inner <= 6 - outer || inner >= 5 + outer)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
  // Q8 Answer here
  int row1, col1, num;
  for (int row1 = 1; row1 <= 4; row1++) {
    num = 1;
    for (int col1 = 1; col1 <= 7; col1++) {
      if (col >= 5 - row && col <= 3 + row) {
        if (col >= 5 && row > 1)
          num = num - 2;

        printf("%d", num);
        num++;
      } else
        printf(" ");
    }
    printf("\n");
  }
  // Q9 Answer here
  int outerCount, innerCount, num;
  for (int outerCount = 1; outerCount <= 4; outerCount++) {
    num = 1;
    for (int innerCount = 1; innerCount <= 7; innerCount++) {
      if (innerCount >= outerCount && innerCount <= 8 - outerCount) {
        if (innerCount >= 5 && outerCount >= 1)
          num = num - 2;

        printf("%d", num);
        num++;
      } else
        printf(" ");
    }
    printf("\n");
  }

  // Q10 Answer here
  int rowCount, colCount, value;
  for (rowCount = 1; rowCount <= 4; rowCount++) {
    value = 1;
    for (colCount = 1; colCount <= 7; colCount++) {
      if (colCount <= 5 - rowCount || colCount >= 3 + rowCount) {
        if (colCount <= 4) {
          printf("%d", value);
          value++;
        } else if (colCount == 5 && rowCount == 1)
          value--;

        if (colCount > 4 && value > 1)
          printf("%d", --value);
        else
          printf(" ");
      } else
        printf(" ");
    }
    printf("\n");
  }
  // Q11 Answer here
  char x, y;
  for (int i = 1; i <= 5; i++) {
    x = 'A';
    for (int j = 1; j <= 9; j++) {
      if (j >= (6 - i) && j <= (4 + i)) {
        printf("%c", x);
        x++;
        if (i > 1 && j > 4)
          x = x - 2;
      } else
        printf(" ");
    }
    printf("\n");
  }
  // Q11 Answer here
  char m, n;
  for (int i = 1; i <= 4; i++) {
    m = 'A';
    for (int j = 1; j <= 7; j++) {
      if (j >= i && j <= 8 - i) {
        printf("%c", m);
        m++;
        if (i >= 1 && j >= 4)
          m = m - 2;
      } else
        printf(" ");
    }
    printf("\n");
  }
  // Q12 answer here
  char a, b;
  for (int i = 1; i <= 4; i++) {
    a = 'A';
    for (int j = 1; j <= 7; j++) {
      if (j >= i && j <= 8 - i) {
        printf("%c", a);
        a++;
        if (i >= 1 && j >= 4)
          a = a - 2;
      } else
        printf(" ");
    }
    printf("\n");
  }
  // Q13 Answer here
  char p, q;
  for (int i = 1; i <= 7; i++) {
    p = 'A';
    for (int j = 1; j <= 13; j++) {
      if (j <= 8 - i || j >= 6 + i) {
        if (j <= 7) {
          printf("%c", p);
          p++;
        } else if (j == 8 && i == 1)
          --p;

        if (j > 7)
          printf("%c", --p);
      } else
        printf(" ");
    }
    printf("\n");
  }
  // Q14 Answer here
  int e, f;
  for (e = 1; e <= 5; e++) {
    for (f = 1; f <= 5; f++) {
      if ((f == 1 || f == e) && e <= 4)
        printf("*");
      else if (e == 5 && f <= 5)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }

  // Q15 Answer here
  int g, h;
  for (g = 1; g <= 5; g++) {
    for (h = 1; h <= 5; h++) {
      if ((h == 5 || h == 6 - g) && g <= 4)
        printf("*");
      else if (g == 5 && h <= 5)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }

  // Q16 Answer here
  int j, k;
  for (int i = 1; i <= 5; i++) {
    for (j = 1; j <= 9; j++) {
      if ((j == 6 - i || j == 4 + i) && i <= 4)
        printf("*");
      else if (i == 5 && j <= 9)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }

  // Q18 Answer here
  int l, o;

  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 9; j++) {
      if (j >= (6 - i) && j <= (4 + i))
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }

  for (l = 6; l <= 9; l++) {
    for (o = 1; o <= 9; o++) {
      if (o >= l - 4 && o <= 14 - l)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }

  return 0;
}
