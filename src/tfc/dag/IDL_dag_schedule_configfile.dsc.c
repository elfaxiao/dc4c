/* It had generated by DirectStruct v1.4.5 */
#include "IDL_dag_schedule_configfile.dsc.h"

int DSCINIT_dag_schedule_configfile( dag_schedule_configfile *pst )
{
	int	index[10] = { 0 } ; index[0] = 0 ;
	memset( pst , 0x00 , sizeof(dag_schedule_configfile) );
			for( index[2] = 0 ; index[2] < 1000 ; index[2]++ )
			{
				for( index[3] = 0 ; index[3] < 1000 ; index[3]++ )
				{
				}
				pst->batches.batches_info[index[2]]._tasks_size = 1000 ;
			}
			pst->batches._batches_info_size = 1000 ;
			for( index[2] = 0 ; index[2] < 1000 ; index[2]++ )
			{
			}
			pst->batches._batches_direction_size = 1000 ;
	return 0;
}

#include "fasterjson.h"

int DSCSERIALIZE_JSON_dag_schedule_configfile( dag_schedule_configfile *pst , char *encoding , char *buf , int *p_len )
{
	int	remain_len ;
	int	len ;
	char	tabs[10+1] ;
	int	index[10] = { 0 } ; index[0] = 0 ;
	remain_len = (*p_len) ;
	memset( tabs , '\t' , 10 );
	len=SNPRINTF(buf,remain_len,"{\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	\"schedule\" : \n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	{\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"		"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"schedule_name\" : "); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	JSONESCAPE_EXPAND(pst->schedule.schedule_name,strlen(pst->schedule.schedule_name),buf,len,remain_len); if(len<0)return -7; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len," ,\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"		"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"schedule_desc\" : "); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	JSONESCAPE_EXPAND(pst->schedule.schedule_desc,strlen(pst->schedule.schedule_desc),buf,len,remain_len); if(len<0)return -7; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len," ,\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"		"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"begin_datetime\" : "); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	JSONESCAPE_EXPAND(pst->schedule.begin_datetime,strlen(pst->schedule.begin_datetime),buf,len,remain_len); if(len<0)return -7; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len," ,\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"		"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"end_datetime\" : "); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	JSONESCAPE_EXPAND(pst->schedule.end_datetime,strlen(pst->schedule.end_datetime),buf,len,remain_len); if(len<0)return -7; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len," ,\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"		"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"progress\" : "); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%d",pst->schedule.progress); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	} ,\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	\"batches\" : \n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	{\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"		\"batches_info\" : \n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"		[\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
				for( index[2] = 0 ; index[2]<pst->batches._batches_info_count ; index[2]++ )
				{
	len=SNPRINTF(buf,remain_len,"		{\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"			"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"batch_name\" : "); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	JSONESCAPE_EXPAND(pst->batches.batches_info[index[2]].batch_name,strlen(pst->batches.batches_info[index[2]].batch_name),buf,len,remain_len); if(len<0)return -7; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len," ,\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"			"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"batch_desc\" : "); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	JSONESCAPE_EXPAND(pst->batches.batches_info[index[2]].batch_desc,strlen(pst->batches.batches_info[index[2]].batch_desc),buf,len,remain_len); if(len<0)return -7; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len," ,\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"			"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"view_pos_x\" : "); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%d",pst->batches.batches_info[index[2]].view_pos_x); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len," ,\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"			"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"view_pos_y\" : "); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%d",pst->batches.batches_info[index[2]].view_pos_y); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len," ,\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"			"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"interrupt_by_app\" : "); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%d",pst->batches.batches_info[index[2]].interrupt_by_app); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len," ,\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"			"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"begin_datetime\" : "); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	JSONESCAPE_EXPAND(pst->batches.batches_info[index[2]].begin_datetime,strlen(pst->batches.batches_info[index[2]].begin_datetime),buf,len,remain_len); if(len<0)return -7; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len," ,\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"			"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"end_datetime\" : "); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	JSONESCAPE_EXPAND(pst->batches.batches_info[index[2]].end_datetime,strlen(pst->batches.batches_info[index[2]].end_datetime),buf,len,remain_len); if(len<0)return -7; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len," ,\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"			"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"progress\" : "); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%d",pst->batches.batches_info[index[2]].progress); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len," ,\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"			\"tasks\" : \n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"			[\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
					for( index[3] = 0 ; index[3]<pst->batches.batches_info[index[2]]._tasks_count ; index[3]++ )
					{
	len=SNPRINTF(buf,remain_len,"			{\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"				"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"order_index\" : "); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%d",pst->batches.batches_info[index[2]].tasks[index[3]].order_index); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len," ,\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"				"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"program_and_params\" : "); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	JSONESCAPE_EXPAND(pst->batches.batches_info[index[2]].tasks[index[3]].program_and_params,strlen(pst->batches.batches_info[index[2]].tasks[index[3]].program_and_params),buf,len,remain_len); if(len<0)return -7; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len," ,\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"				"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"timeout\" : "); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%d",pst->batches.batches_info[index[2]].tasks[index[3]].timeout); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len," ,\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"				"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"progress\" : "); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%d",pst->batches.batches_info[index[2]].tasks[index[3]].progress); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
					if((pst->batches.batches_info[index[2]]._tasks_count==0)?(index[3]<1000-1):(index[3]<pst->batches.batches_info[index[2]]._tasks_count-1))
					{ len=SNPRINTF(buf,remain_len,"			} ,\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len; }
					else
					{ len=SNPRINTF(buf,remain_len,"			}\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len; }
					}
	len=SNPRINTF(buf,remain_len,"			]\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
				if((pst->batches._batches_info_count==0)?(index[2]<1000-1):(index[2]<pst->batches._batches_info_count-1))
				{ len=SNPRINTF(buf,remain_len,"		} ,\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len; }
				else
				{ len=SNPRINTF(buf,remain_len,"		}\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len; }
				}
	len=SNPRINTF(buf,remain_len,"		] ,\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"		\"batches_direction\" : \n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"		[\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
				for( index[2] = 0 ; index[2]<pst->batches._batches_direction_count ; index[2]++ )
				{
	len=SNPRINTF(buf,remain_len,"		{\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"			"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"from_batch\" : "); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	JSONESCAPE_EXPAND(pst->batches.batches_direction[index[2]].from_batch,strlen(pst->batches.batches_direction[index[2]].from_batch),buf,len,remain_len); if(len<0)return -7; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len," ,\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"			"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"to_batch\" : "); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	JSONESCAPE_EXPAND(pst->batches.batches_direction[index[2]].to_batch,strlen(pst->batches.batches_direction[index[2]].to_batch),buf,len,remain_len); if(len<0)return -7; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
				if((pst->batches._batches_direction_count==0)?(index[2]<1000-1):(index[2]<pst->batches._batches_direction_count-1))
				{ len=SNPRINTF(buf,remain_len,"		} ,\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len; }
				else
				{ len=SNPRINTF(buf,remain_len,"		}\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len; }
				}
	len=SNPRINTF(buf,remain_len,"		]\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	}\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"}\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	
	if( p_len ) (*p_len) = (*p_len) - remain_len ;
	
	return 0;
}

funcCallbackOnJsonNode CallbackOnJsonNode_dag_schedule_configfile ;
int CallbackOnJsonNode_dag_schedule_configfile( int type , char *jpath , int jpath_len , int jpath_size , char *node , int node_len , char *content , int content_len , void *p )
{
	dag_schedule_configfile	*pst = (dag_schedule_configfile*)p ;
	int	index[10] = { 0 } ;
	int	len ;
	
	index[0] = 0 ;
	len = 0 ;
	
	if( type & FASTERJSON_NODE_BRANCH )
	{
		if( type & FASTERJSON_NODE_ENTER )
		{
			if( jpath_len == 21 && strncmp( jpath , "/batches/batches_info" , jpath_len ) == 0 )
			{if(pst->batches._batches_info_count>=1000)return -8;}
				if( jpath_len == 27 && strncmp( jpath , "/batches/batches_info/tasks" , jpath_len ) == 0 )
				{if(pst->batches.batches_info[pst->batches._batches_info_count]._tasks_count>=1000)return -8;}
			if( jpath_len == 26 && strncmp( jpath , "/batches/batches_direction" , jpath_len ) == 0 )
			{if(pst->batches._batches_direction_count>=1000)return -8;}
		}
		else if( type & FASTERJSON_NODE_LEAVE )
		{
			if( jpath_len == 21 && strncmp( jpath , "/batches/batches_info" , jpath_len ) == 0 )
			{pst->batches._batches_info_count++;}
				if( jpath_len == 27 && strncmp( jpath , "/batches/batches_info/tasks" , jpath_len ) == 0 )
				{pst->batches.batches_info[pst->batches._batches_info_count]._tasks_count++;}
			if( jpath_len == 26 && strncmp( jpath , "/batches/batches_direction" , jpath_len ) == 0 )
			{pst->batches._batches_direction_count++;}
		}
	}
	else if( type & FASTERJSON_NODE_LEAF )
	{
			/* schedule_name */
			if( jpath_len == 23 && strncmp( jpath , "/schedule/schedule_name" , jpath_len ) == 0 )
			{JSONUNESCAPE_FOLD(content,content_len,pst->schedule.schedule_name,len,sizeof(pst->schedule.schedule_name)-1); if(len<0)return -7;}
			/* schedule_desc */
			if( jpath_len == 23 && strncmp( jpath , "/schedule/schedule_desc" , jpath_len ) == 0 )
			{JSONUNESCAPE_FOLD(content,content_len,pst->schedule.schedule_desc,len,sizeof(pst->schedule.schedule_desc)-1); if(len<0)return -7;}
			/* begin_datetime */
			if( jpath_len == 24 && strncmp( jpath , "/schedule/begin_datetime" , jpath_len ) == 0 )
			{JSONUNESCAPE_FOLD(content,content_len,pst->schedule.begin_datetime,len,sizeof(pst->schedule.begin_datetime)-1); if(len<0)return -7;}
			/* end_datetime */
			if( jpath_len == 22 && strncmp( jpath , "/schedule/end_datetime" , jpath_len ) == 0 )
			{JSONUNESCAPE_FOLD(content,content_len,pst->schedule.end_datetime,len,sizeof(pst->schedule.end_datetime)-1); if(len<0)return -7;}
			/* progress */
			if( jpath_len == 18 && strncmp( jpath , "/schedule/progress" , jpath_len ) == 0 )
			{NATOI(content,content_len,pst->schedule.progress);}
				/* batch_name */
				if( jpath_len == 32 && strncmp( jpath , "/batches/batches_info/batch_name" , jpath_len ) == 0 )
				{JSONUNESCAPE_FOLD(content,content_len,pst->batches.batches_info[pst->batches._batches_info_count].batch_name,len,sizeof(pst->batches.batches_info[pst->batches._batches_info_count].batch_name)-1); if(len<0)return -7;}
				/* batch_desc */
				if( jpath_len == 32 && strncmp( jpath , "/batches/batches_info/batch_desc" , jpath_len ) == 0 )
				{JSONUNESCAPE_FOLD(content,content_len,pst->batches.batches_info[pst->batches._batches_info_count].batch_desc,len,sizeof(pst->batches.batches_info[pst->batches._batches_info_count].batch_desc)-1); if(len<0)return -7;}
				/* view_pos_x */
				if( jpath_len == 32 && strncmp( jpath , "/batches/batches_info/view_pos_x" , jpath_len ) == 0 )
				{NATOI(content,content_len,pst->batches.batches_info[pst->batches._batches_info_count].view_pos_x);}
				/* view_pos_y */
				if( jpath_len == 32 && strncmp( jpath , "/batches/batches_info/view_pos_y" , jpath_len ) == 0 )
				{NATOI(content,content_len,pst->batches.batches_info[pst->batches._batches_info_count].view_pos_y);}
				/* interrupt_by_app */
				if( jpath_len == 38 && strncmp( jpath , "/batches/batches_info/interrupt_by_app" , jpath_len ) == 0 )
				{NATOI(content,content_len,pst->batches.batches_info[pst->batches._batches_info_count].interrupt_by_app);}
				/* begin_datetime */
				if( jpath_len == 36 && strncmp( jpath , "/batches/batches_info/begin_datetime" , jpath_len ) == 0 )
				{JSONUNESCAPE_FOLD(content,content_len,pst->batches.batches_info[pst->batches._batches_info_count].begin_datetime,len,sizeof(pst->batches.batches_info[pst->batches._batches_info_count].begin_datetime)-1); if(len<0)return -7;}
				/* end_datetime */
				if( jpath_len == 34 && strncmp( jpath , "/batches/batches_info/end_datetime" , jpath_len ) == 0 )
				{JSONUNESCAPE_FOLD(content,content_len,pst->batches.batches_info[pst->batches._batches_info_count].end_datetime,len,sizeof(pst->batches.batches_info[pst->batches._batches_info_count].end_datetime)-1); if(len<0)return -7;}
				/* progress */
				if( jpath_len == 30 && strncmp( jpath , "/batches/batches_info/progress" , jpath_len ) == 0 )
				{NATOI(content,content_len,pst->batches.batches_info[pst->batches._batches_info_count].progress);}
					/* order_index */
					if( jpath_len == 39 && strncmp( jpath , "/batches/batches_info/tasks/order_index" , jpath_len ) == 0 )
					{NATOI(content,content_len,pst->batches.batches_info[pst->batches._batches_info_count].tasks[pst->batches.batches_info[pst->batches._batches_info_count]._tasks_count].order_index);}
					/* program_and_params */
					if( jpath_len == 46 && strncmp( jpath , "/batches/batches_info/tasks/program_and_params" , jpath_len ) == 0 )
					{JSONUNESCAPE_FOLD(content,content_len,pst->batches.batches_info[pst->batches._batches_info_count].tasks[pst->batches.batches_info[pst->batches._batches_info_count]._tasks_count].program_and_params,len,sizeof(pst->batches.batches_info[pst->batches._batches_info_count].tasks[pst->batches.batches_info[pst->batches._batches_info_count]._tasks_count].program_and_params)-1); if(len<0)return -7;}
					/* timeout */
					if( jpath_len == 35 && strncmp( jpath , "/batches/batches_info/tasks/timeout" , jpath_len ) == 0 )
					{NATOI(content,content_len,pst->batches.batches_info[pst->batches._batches_info_count].tasks[pst->batches.batches_info[pst->batches._batches_info_count]._tasks_count].timeout);}
					/* progress */
					if( jpath_len == 36 && strncmp( jpath , "/batches/batches_info/tasks/progress" , jpath_len ) == 0 )
					{NATOI(content,content_len,pst->batches.batches_info[pst->batches._batches_info_count].tasks[pst->batches.batches_info[pst->batches._batches_info_count]._tasks_count].progress);}
				/* from_batch */
				if( jpath_len == 37 && strncmp( jpath , "/batches/batches_direction/from_batch" , jpath_len ) == 0 )
				{JSONUNESCAPE_FOLD(content,content_len,pst->batches.batches_direction[pst->batches._batches_direction_count].from_batch,len,sizeof(pst->batches.batches_direction[pst->batches._batches_direction_count].from_batch)-1); if(len<0)return -7;}
				/* to_batch */
				if( jpath_len == 35 && strncmp( jpath , "/batches/batches_direction/to_batch" , jpath_len ) == 0 )
				{JSONUNESCAPE_FOLD(content,content_len,pst->batches.batches_direction[pst->batches._batches_direction_count].to_batch,len,sizeof(pst->batches.batches_direction[pst->batches._batches_direction_count].to_batch)-1); if(len<0)return -7;}
	}
	
	return 0;
}

int DSCDESERIALIZE_JSON_dag_schedule_configfile( char *encoding , char *buf , int *p_len , dag_schedule_configfile *pst )
{
	char	jpath[ 1024 + 1 ] ;
	int	nret = 0 ;
	memset( jpath , 0x00 , sizeof(jpath) );
	nret = TravelJsonBuffer( buf , jpath , sizeof(jpath) , & CallbackOnJsonNode_dag_schedule_configfile , (void*)pst ) ;
	if( nret )
		return nret;
	
	return 0;
}
