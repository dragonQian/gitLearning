/*
 *autor : DragonQwl
 *data  : 2016/12/12
 *      : 2.0
 *      : include this feature : \xn
 * */
#include <stdio.h>
#include "generalframework.h"
#include <windows.h>


int main()
{
	char *dst_str = NULL;
	int len_src = 0;
	
	char arc_string(ONE_STRING_LENGHTH) = {0};
	FILE * fp_in = fopen(SRC_ADD, "r");
	if(NULL == fp_in)
    {
        puts("the src file cann't open !! \n");
        getchar();
        return NULL;
    }
    while(!feof(fp_in))
    {
        FILE * fp_out = fopen(GEN_RAN_STR,"a");
        if(NULL == fp_out)
        {
             
            puts("the arc file cann't open! \n");
            getchar();
            return NULL;
        }
        fgets(src_string,ONE_STRING_LENGTH, fp_in);
        dst_str = GeneralFramework_ver_1(src_string);
        if(NULL == dst_str)
        {
            fclose(fp_out);
            continue;
        }
        len_src = strlen(dst_str);
        dst_str = (char *)realloc(dst_str,sizeof(char) * (len_src + 1));
        MyStrnCat(dst_str, "\n",len_src, 1);
        fwrite(dst_str,sizeof(char), len_src + 1, fp_out);
        Sleep(1);
        fclose(fp_out);
        puts(dst_str);
    }
    free(dst_str);
    dst_str = NULL;
    fclose(fp_in);
    getchar();
    return 0;
}
