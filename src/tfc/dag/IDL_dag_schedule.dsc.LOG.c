/* It had generated by DirectStruct v1.4.5 */
#include "IDL_dag_schedule.dsc.h"

#ifndef FUNCNAME_DSCLOG_dag_schedule
#define FUNCNAME_DSCLOG_dag_schedule	DSCLOG_dag_schedule
#endif

#ifndef PREFIX_DSCLOG_dag_schedule
#define PREFIX_DSCLOG_dag_schedule	printf( 
#endif

#ifndef NEWLINE_DSCLOG_dag_schedule
#define NEWLINE_DSCLOG_dag_schedule	"\n"
#endif

int FUNCNAME_DSCLOG_dag_schedule( dag_schedule *pst )
{
	int	index[10] = { 0 } ; index[0] = 0 ;
	PREFIX_DSCLOG_dag_schedule "dag_schedule.order_index[%d]" NEWLINE_DSCLOG_dag_schedule , pst->order_index );
	PREFIX_DSCLOG_dag_schedule "dag_schedule.schedule_name[%s]" NEWLINE_DSCLOG_dag_schedule , pst->schedule_name );
	PREFIX_DSCLOG_dag_schedule "dag_schedule.schedule_desc[%s]" NEWLINE_DSCLOG_dag_schedule , pst->schedule_desc );
	PREFIX_DSCLOG_dag_schedule "dag_schedule.begin_datetime[%s]" NEWLINE_DSCLOG_dag_schedule , pst->begin_datetime );
	PREFIX_DSCLOG_dag_schedule "dag_schedule.end_datetime[%s]" NEWLINE_DSCLOG_dag_schedule , pst->end_datetime );
	PREFIX_DSCLOG_dag_schedule "dag_schedule.progress[%d]" NEWLINE_DSCLOG_dag_schedule , pst->progress );
	return 0;
}
