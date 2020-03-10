#include <windows.h>>
#include <wchar.h>
#include <stdio.h>

int main(){
    TIME_ZONE_INFORMATION TZInfo;
    BOOL ret = GetTimeZoneInformation(&TZInfo);
    if(ret == TIME_ZONE_ID_INVALID){
        fprintf(stderr,"GetTimeZoneInformation fail(error:%d)\n",GetLastError());
        return 0;
    }
    printf("time zone id:%d\n",ret); /* TIME_ZONE_ID_UNKNOWN:0 */
    printf("StandardName:%ws\n",TZInfo.StandardName);
    return 0;
} 
