int (*get_op_func(char c))(int, int) {
  get_op_func(char c)(int, int);
}

int/*?*/ get_op_func(char c) {
  /* if c = +, return &op_add */
  /* if c = -, return &op_sub */
  /* if c = *, return &op_mul */
  /* if c = /, return &op_div */
  /* if c = %, return &op_mod */
  /* else: return NULL */
  ;
}
