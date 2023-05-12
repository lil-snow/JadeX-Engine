#ifndef __JX_BASE_H
#define __JX_BASE_H

#ifndef JX_TRUE
#define JX_TRUE 1
#else
#error JDX_TRUE may not be redefined
#endif

#ifndef JX_FALSE
#define JX_FALSE 0
#else
#error JDX_FALSE may not be redefined
#endif

#ifndef JX_STRUCT_TYPEDEF
#define JX_STRUCT_TYPEDEF(x) typedef struct __##x x; typedef struct __##x* ##x_p;
#else
#error JX_STRUCT_TYPEDEF may not be redefined
#endif

#include <stdlib.h>

typedef char			i8;
typedef short			i16;
typedef int 			i32;
typedef long			i64;

typedef unsigned char	u8;
typedef unsigned short	u16;
typedef unsigned int	u32;
typedef unsigned long	u64;

typedef float 			f32;
typedef double			f64;

typedef char*			str;
typedef const char*		str_c;

typedef i8				JXResult;

#endif