/* It had generated by DirectStruct v1.3.2 */
#include "IDL_worker_notice_request.dsc.h"

#ifndef FUNCNAME_DSCLOG_worker_notice_request
#define FUNCNAME_DSCLOG_worker_notice_request	DSCLOG_worker_notice_request
#endif

#ifndef PREFIX_DSCLOG_worker_notice_request
#define PREFIX_DSCLOG_worker_notice_request	printf( 
#endif

#ifndef NEWLINE_DSCLOG_worker_notice_request
#define NEWLINE_DSCLOG_worker_notice_request	"\n"
#endif

int FUNCNAME_DSCLOG_worker_notice_request( worker_notice_request *pst )
{
	int	index[10] = { 0 } ; index[0] = 0 ;
	PREFIX_DSCLOG_worker_notice_request "worker_notice_request.sysname[%s]" NEWLINE_DSCLOG_worker_notice_request , pst->sysname );
	PREFIX_DSCLOG_worker_notice_request "worker_notice_request.release[%s]" NEWLINE_DSCLOG_worker_notice_request , pst->release );
	PREFIX_DSCLOG_worker_notice_request "worker_notice_request.bits[%d]" NEWLINE_DSCLOG_worker_notice_request , pst->bits );
	PREFIX_DSCLOG_worker_notice_request "worker_notice_request.ip[%s]" NEWLINE_DSCLOG_worker_notice_request , pst->ip );
	PREFIX_DSCLOG_worker_notice_request "worker_notice_request.port[%d]" NEWLINE_DSCLOG_worker_notice_request , pst->port );
	PREFIX_DSCLOG_worker_notice_request "worker_notice_request.is_working[%d]" NEWLINE_DSCLOG_worker_notice_request , pst->is_working );
	return 0;
}