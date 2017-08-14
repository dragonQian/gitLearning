#define U_EXP_REG "outp_regex.txt"
#define GEN_RAN_STR "generate_random_string.txt"


#define MAX_TIME 20

enum TYPECHARREGEX{
	//typeofchar
	null,CZF,ZYZF,FZZF,XKH,ZKH,DKH,TSZF,
	//tpyeofInfluence
	WYX,ZY_YX,BZY_YX,ZDFZ_YX,FZBJ_YX,XZBJ_YX,XZFW_YX,QF_YX,CFFW_YX,CFQZ_YX,FWQZ_YX,X_BD_YX,XDF_YX,HG_YX,X_HX_YX,QJXZ_YX,T_YX,W_YX,LD_YX,
	//typeOfWrite
	LJ_XR,X_ZB,FZ_ZB,FW_ZB,XD_ZB,ZB_XR,FZCF_ZB,FZXD_ZB,SJ_XR,QJBJ_ZB,TW_ZB
};

typedef struct REGEX_PARAMETER{
	char * address;
	int lenght_aim;
}REGEX_PARA;

typedef struct REPETITION_PARAMETER{
	int sub_mark;
	int num_repet;
}REPET_PARA;

REGEX_PARA *GetRegexStr(char * src_txt_catalog);
void MyStrnCat(char *&dst_str, char * src_str, int dst_str_len, int src_str_len);
int CheckRegexStr(char *&src_str);