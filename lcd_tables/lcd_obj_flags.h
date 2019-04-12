#ifndef _lcd_obj_flags_h_ 
#define  _lcd_obj_flags_h_
/*0-256 : CGBFLAGS , 256-512 : CGB PAL , 512-768 : CGb PRI
 768-1024 : GBFLAGS , 1024-1280 : GB PAL , 1280-1536 : GB PRI*/
static const int lcd_gb_cgb_obj_flags_table[] = {
0,
0,0,0,0,0,0,0,512,512,512,512,512,512,512,512,0,
0,0,0,0,0,0,0,512,512,512,512,512,512,512,512,1024,
1024,1024,1024,1024,1024,1024,1024,1536,1536,1536,1536,1536,1536,1536,1536,1024,
1024,1024,1024,1024,1024,1024,1024,1536,1536,1536,1536,1536,1536,1536,1536,2048,
2048,2048,2048,2048,2048,2048,2048,2560,2560,2560,2560,2560,2560,2560,2560,2048,
2048,2048,2048,2048,2048,2048,2048,2560,2560,2560,2560,2560,2560,2560,2560,3072,
3072,3072,3072,3072,3072,3072,3072,3584,3584,3584,3584,3584,3584,3584,3584,3072,
3072,3072,3072,3072,3072,3072,3072,3584,3584,3584,3584,3584,3584,3584,3584,0,
0,0,0,0,0,0,0,512,512,512,512,512,512,512,512,0,
0,0,0,0,0,0,0,512,512,512,512,512,512,512,512,1024,
1024,1024,1024,1024,1024,1024,1024,1536,1536,1536,1536,1536,1536,1536,1536,1024,
1024,1024,1024,1024,1024,1024,1024,1536,1536,1536,1536,1536,1536,1536,1536,2048,
2048,2048,2048,2048,2048,2048,2048,2560,2560,2560,2560,2560,2560,2560,2560,2048,
2048,2048,2048,2048,2048,2048,2048,2560,2560,2560,2560,2560,2560,2560,2560,3072,
3072,3072,3072,3072,3072,3072,3072,3584,3584,3584,3584,3584,3584,3584,3584,3072,
3072,3072,3072,3072,3072,3072,3072,3584,3584,3584,3584,3584,3584,3584,3584,

32,
36,40,44,48,52,56,60,32,36,40,44,48,52,56,60,32,
36,40,44,48,52,56,60,32,36,40,44,48,52,56,60,32,
36,40,44,48,52,56,60,32,36,40,44,48,52,56,60,32,
36,40,44,48,52,56,60,32,36,40,44,48,52,56,60,32,
36,40,44,48,52,56,60,32,36,40,44,48,52,56,60,32,
36,40,44,48,52,56,60,32,36,40,44,48,52,56,60,32,
36,40,44,48,52,56,60,32,36,40,44,48,52,56,60,32,
36,40,44,48,52,56,60,32,36,40,44,48,52,56,60,32,
36,40,44,48,52,56,60,32,36,40,44,48,52,56,60,32,
36,40,44,48,52,56,60,32,36,40,44,48,52,56,60,32,
36,40,44,48,52,56,60,32,36,40,44,48,52,56,60,32,
36,40,44,48,52,56,60,32,36,40,44,48,52,56,60,32,
36,40,44,48,52,56,60,32,36,40,44,48,52,56,60,32,
36,40,44,48,52,56,60,32,36,40,44,48,52,56,60,32,
36,40,44,48,52,56,60,32,36,40,44,48,52,56,60,32,
36,40,44,48,52,56,60,32,36,40,44,48,52,56,60,

0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,

0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1024,
1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,
1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,2048,
2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,
2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,3072,
3072,3072,3072,3072,3072,3072,3072,3072,3072,3072,3072,3072,3072,3072,3072,3072,
3072,3072,3072,3072,3072,3072,3072,3072,3072,3072,3072,3072,3072,3072,3072,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1024,
1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,
1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,2048,
2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,
2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,3072,
3072,3072,3072,3072,3072,3072,3072,3072,3072,3072,3072,3072,3072,3072,3072,3072,
3072,3072,3072,3072,3072,3072,3072,3072,3072,3072,3072,3072,3072,3072,3072,

32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,36,
36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,36,
36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,36,
36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,36,
36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,36,
36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,36,
36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,36,
36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,36,
36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,

0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
};

#endif