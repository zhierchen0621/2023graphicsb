#include<windows.h>
#include<stdio.h>
int main()
{///Setting_Compiler,Linker�G�y: �ݭnwinmm
    ///������| Absolue_Path
    ///PlaySound("C:\\Users\\Administrator\\Desktop\\do-re-mi\\do.wav",NULL,SND_SYNC);
    ///PlaySound("C:\\Users\\Administrator\\Desktop\\do-re-mi\\re.wav",NULL,SND_SYNC);
    ///PlaySound("C:\\Users\\Administrator\\Desktop\\do-re-mi\\mi.wav",NULL,SND_SYNC);

    ///�ؿ����׽u�i�H�� ��Ӥϱ׽u\\�ε۬O�@�ӱ׽u/
    PlaySound("do-re-mi/re.wav",NULL,SND_SYNC);
    ///�۹���|Relative Path
    printf("Hello World\n");
}
