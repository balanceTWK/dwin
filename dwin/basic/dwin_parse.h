/*
 * @File:   dwin_parse.c 
 * @Author: liu2guang 
 * @Date:   2018-04-07 14:52:10 
 * 
 * @LICENSE: MIT
 * https://github.com/liu2guang/dwin/blob/master/LICENSE
 * 
 * Change Logs: 
 * Date           Author       Notes 
 * 2018-04-07     liu2guang    update v2 framework. 
 */ 
#ifndef __DWIN_PARSE_H__ 
#define __DWIN_PARSE_H__ 

#include "dwin_def.h" 

struct dwin_parse *dwin_parse_create(enum dwin_obj_type type, void (*event)(struct dwin_obj *obj)); 
rt_err_t dwin_parse_delect(struct dwin_parse *parse); 
#define dwin_parse_delect_safe(parse)          \
do{                                            \
    dwin_parse_delect(parse); parse = RT_NULL; \
}while(0) 
rt_err_t dwin_parse_register(struct dwin_parse *parse); 

#endif 