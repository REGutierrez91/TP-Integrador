int aleatorio_en_rango(int minimo, int maximo) {
  return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}
