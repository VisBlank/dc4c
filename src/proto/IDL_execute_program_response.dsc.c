/* It had generated by DirectStruct v1.4.5 */
#include "IDL_execute_program_response.dsc.h"

int DSCINIT_execute_program_response( execute_program_response *pst )
{
	int	index[10] = { 0 } ; index[0] = 0 ;
	memset( pst , 0x00 , sizeof(execute_program_response) );
	return 0;
}

#include "fasterjson.h"

int DSCSERIALIZE_JSON_COMPACT_execute_program_response( execute_program_response *pst , char *encoding , char *buf , int *p_len )
{
	int	remain_len ;
	int	len ;
	char	tabs[10+1] ;
	int	index[10] = { 0 } ; index[0] = 0 ;
	remain_len = (*p_len) ;
	memset( tabs , '\t' , 10 );
	len=SNPRINTF(buf,remain_len,"{"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"tid\":"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	JSONESCAPE_EXPAND(pst->tid,strlen(pst->tid),buf,len,remain_len); if(len<0)return -7; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,","); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"end_datetime_stamp\":"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%d",pst->end_datetime_stamp); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,","); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"elapse\":"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%d",pst->elapse); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,","); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"error\":"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%d",pst->error); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,","); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"status\":"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%d",pst->status); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,","); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"info\":"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	JSONESCAPE_EXPAND(pst->info,strlen(pst->info),buf,len,remain_len); if(len<0)return -7; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"}"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	
	if( p_len ) (*p_len) = (*p_len) - remain_len ;
	
	return 0;
}

funcCallbackOnJsonNode CallbackOnJsonNode_execute_program_response ;
int CallbackOnJsonNode_execute_program_response( int type , char *jpath , int jpath_len , int jpath_size , char *node , int node_len , char *content , int content_len , void *p )
{
	execute_program_response	*pst = (execute_program_response*)p ;
	int	index[10] = { 0 } ;
	int	len ;
	
	index[0] = 0 ;
	len = 0 ;
	
	if( type & FASTERJSON_NODE_BRANCH )
	{
		if( type & FASTERJSON_NODE_ENTER )
		{
		}
		else if( type & FASTERJSON_NODE_LEAVE )
		{
		}
	}
	else if( type & FASTERJSON_NODE_LEAF )
	{
		/* tid */
		if( jpath_len == 4 && strncmp( jpath , "/tid" , jpath_len ) == 0 )
		{JSONUNESCAPE_FOLD(content,content_len,pst->tid,len,sizeof(pst->tid)-1); if(len<0)return -7;}
		/* end_datetime_stamp */
		if( jpath_len == 19 && strncmp( jpath , "/end_datetime_stamp" , jpath_len ) == 0 )
		{NATOI(content,content_len,pst->end_datetime_stamp);}
		/* elapse */
		if( jpath_len == 7 && strncmp( jpath , "/elapse" , jpath_len ) == 0 )
		{NATOI(content,content_len,pst->elapse);}
		/* error */
		if( jpath_len == 6 && strncmp( jpath , "/error" , jpath_len ) == 0 )
		{NATOI(content,content_len,pst->error);}
		/* status */
		if( jpath_len == 7 && strncmp( jpath , "/status" , jpath_len ) == 0 )
		{NATOI(content,content_len,pst->status);}
		/* info */
		if( jpath_len == 5 && strncmp( jpath , "/info" , jpath_len ) == 0 )
		{JSONUNESCAPE_FOLD(content,content_len,pst->info,len,sizeof(pst->info)-1); if(len<0)return -7;}
	}
	
	return 0;
}

int DSCDESERIALIZE_JSON_COMPACT_execute_program_response( char *encoding , char *buf , int *p_len , execute_program_response *pst )
{
	char	jpath[ 1024 + 1 ] ;
	int	nret = 0 ;
	memset( jpath , 0x00 , sizeof(jpath) );
	nret = TravelJsonBuffer( buf , jpath , sizeof(jpath) , & CallbackOnJsonNode_execute_program_response , (void*)pst ) ;
	if( nret )
		return nret;
	
	return 0;
}
