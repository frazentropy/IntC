// aredistinct.c
int areDistinct(int * arr, int len) {
  int ind1;
  int ind2;

  for (ind1 = 0; ind1 < len; ind1 ++) {
    for (ind2 = ind1 + 1; ind2 < len; ind2 ++) {
      if (arr[ind1] == arr[ind2]) {
	// found two elements with same value
	return 0;
      }
    }
  }
  // did not find two elements with same value
  return 1;
}
