
#ifndef _KOALA_INCLUDES_H_
#define _KOALA_INCLUDES_H_

#include "koala_list.h"
#include "koala_stack.h"
#include "koala_symbol_table.h"
#include "koala_var_decl_stmt.h"

BEGIN_DECLS /* 兼容C++编译宏 */

void add_stmt(struct stmt *stmt);
void koala_compiler_init();

END_DECLS /* 兼容C++编译宏 */

#endif
