
#ifndef _e_platform_h
#define _e_platform_h

#include <string.h>

#include "printcl.h"
#include "e_host.h"
//#include "e_hal.h"

#ifdef ENABLE_EMEK_BUILD
typedef void* Epiphany_t;
#endif


struct e_platform_info_struct {
	char e_platform_name[32];
	int e_device_id;
	void* e_global_mem_base;
	size_t e_global_mem_size;
	size_t e_core_local_mem_size;
	void* e_core_base_addr;
	int e_array_ncol;
	int e_array_nrow;
};


int e_get_platform_info( Epiphany_t* edev, 
	struct e_platform_info_struct* info );


#endif

