#ifndef NGX_HTTP_LUA_PCREFIX_H
#define NGX_HTTP_LUA_PCREFIX_H


#include "ngx_http_lua_common.h"


#if (NGX_PCRE)
extern ngx_pool_t *ngx_http_lua_pcre_pool;

void ngx_http_lua_pcre_malloc_init(ngx_pool_t *pool);
void ngx_http_lua_pcre_malloc_done();
void *ngx_http_lua_pcre_malloc(size_t size);
#endif


#endif /* NGX_HTTP_LUA_PCREFIX_H */
/* vim:set ft=c ts=4 sw=4 et fdm=marker: */
