
SUB             SP, SP, #0x40
STP             X29, X30, [SP,#0x30+var_s0]
ADD             X29, SP, #0x30
ADD             X8, SP, #0x30+var_18
MOV             X9, #0
STUR            X0, [X29,#var_8]
STUR            X1, [X29,#var_10]
STR             X9, [SP,#0x30+var_18]
MOV             X0, X8
MOV             X1, X2
STR             X3, [SP,#0x30+var_28]
BL              _objc_storeStrong
ADD             X8, SP, #0x30+var_20
MOV             X9, #0
STR             X9, [SP,#0x30+var_20]
LDR             X9, [SP,#0x30+var_28]
MOV             X0, X8
MOV             X1, X9
BL              _objc_storeStrong

ADRP            X8, #selRef_blockTypeTestCode@PAGE
ADD             X8, X8, #selRef_blockTypeTestCode@PAGEOFF
LDUR            X9, [X29,#var_8]
LDR             X1, [X8] ; "blockTypeTestCode"
MOV             X0, X9  ; void *
BL              _objc_msgSend
; [self blockTypeTestCode];

MOV             X8, #0
ADD             X9, SP, #0x30+var_20
MOV             X0, X9
MOV             X1, X8
BL              _objc_storeStrong
MOV             X8, #0
ADD             X9, SP, #0x30+var_18
MOV             X0, X9
MOV             X1, X8
BL              _objc_storeStrong
MOV             W10, #1
AND             W0, W10, #1
LDP             X29, X30, [SP,#0x30+var_s0]
ADD             SP, SP, #0x40

; End of function -[AppDelegate application:didFinishLaunchingWithOptions:]


; void __cdecl -[AppDelegate blockTypeTestCode](AppDelegate *self, SEL)
__AppDelegate_blockTypeTestCode_

SUB             SP, SP, #0x20
STP             X29, X30, [SP,#0x10+var_s0]
ADD             X29, SP, #0x10

ADRP            X8, #___block_literal_global@PAGE
ADD             X8, X8, #___block_literal_global@PAGEOFF ;delayTimeBlock 参数
ADRP            X9, #___block_literal_global.45@PAGE
ADD             X9, X9, #___block_literal_global.45@PAGEOFF ;voidBlk 参数
ADRP            X10, #___block_literal_global.50@PAGE
ADD             X10, X10, #___block_literal_global.50@PAGEOFF ;failedBlk 参数

ADRP            X11, #selRef_delayTimeBlock_voidBlk_failedBlk_@PAGE
ADD             X11, X11, #selRef_delayTimeBlock_voidBlk_failedBlk_@PAGEOFF

STR             X0, [SP,#0x10+var_8] ;x0 = self
STR             X1, [SP,#0x10+var_10]
LDR             X0, [SP,#0x10+var_8] ; void *
LDR             X1, [X11] ; "delayTimeBlock:voidBlk:failedBlk:" 
MOV             X2, X8
MOV             X3, X9
MOV             X4, X10
BL              _objc_msgSend
; [self delayTimeBlock: voidBlk:failedBlk:]

LDP             X29, X30, [SP,#0x10+var_s0]
ADD             SP, SP, #0x20
RET
; End of function -[AppDelegate blockTypeTestCode]


___32__AppDelegate_blockTypeTestCode__block_invoke

SUB             SP, SP, #0x40
STP             X29, X30, [SP,#0x30+var_s0]
ADD             X29, SP, #0x30
SUB             X8, X29, #-var_10
MOV             X9, #0
STUR            X0, [X29,#var_8]
STUR            X9, [X29,#var_10]
STR             X0, [SP,#0x30+var_20]
MOV             X0, X8
BL              _objc_storeStrong
LDR             X8, [SP,#0x30+var_20]
STR             X8, [SP,#0x30+var_18]
LDUR            X9, [X29,#var_10]
MOV             X0, SP
STR             X9, [X0,#0x30+var_30]
ADRP            X0, #cfstr_DelayTimeBlock@PAGE ; "delay time block : %@"
ADD             X0, X0, #cfstr_DelayTimeBlock@PAGEOFF ; "delay time block : %@"
BL              _NSLog
MOV             X8, #0
SUB             X9, X29, #-var_10
MOV             X0, X9
MOV             X1, X8
BL              _objc_storeStrong
LDP             X29, X30, [SP,#0x30+var_s0]
ADD             SP, SP, #0x40
RET
; End of function ___32__AppDelegate_blockTypeTestCode__block_invoke



___32__AppDelegate_blockTypeTestCode__block_invoke_2
SUB             SP, SP, #0x20
STP             X29, X30, [SP,#0x10+var_s0]
ADD             X29, SP, #0x10
STR             X0, [SP,#0x10+var_8]
STR             X0, [SP,#0x10+var_10]
ADRP            X0, #cfstr_VoidTimeBlock@PAGE ; "void time block"
ADD             X0, X0, #cfstr_VoidTimeBlock@PAGEOFF ; "void time block"
BL              _NSLog
LDP             X29, X30, [SP,#0x10+var_s0]
ADD             SP, SP, #0x20
RET
; End of function ___32__AppDelegate_blockTypeTestCode__block_invoke_2


___32__AppDelegate_blockTypeTestCode__block_invoke_3

SUB             SP, SP, #0x50
STP             X29, X30, [SP,#0x40+var_s0]
ADD             X29, SP, #0x40
SUB             X8, X29, #-var_10
MOV             X9, #0
STUR            X0, [X29,#var_8]
STUR            X9, [X29,#var_10]
STR             X0, [SP,#0x40+var_28]
MOV             X0, X8
STR             X2, [SP,#0x40+var_30]
BL              _objc_storeStrong
LDR             X8, [SP,#0x40+var_30]
STUR            X8, [X29,#var_18]
LDR             X9, [SP,#0x40+var_28]
STR             X9, [SP,#0x40+var_20]
LDUR            X0, [X29,#var_10]
LDUR            X1, [X29,#var_18]
MOV             X2, SP
STR             X1, [X2,#0x40+var_38]
STR             X0, [X2,#0x40+var_40]
ADRP            X0, #cfstr_DelayTimeFaile@PAGE ; "delay time failed block : %@  age: %zd"
ADD             X0, X0, #cfstr_DelayTimeFaile@PAGEOFF ; "delay time failed block : %@  age: %zd"
BL              _NSLog
MOV             X8, #0
SUB             X9, X29, #-var_10
MOV             X0, X9
MOV             X1, X8
BL              _objc_storeStrong
LDP             X29, X30, [SP,#0x40+var_s0]
ADD             SP, SP, #0x50
RET

; End of function ___32__AppDelegate_blockTypeTestCode__block_invoke_3


; void __cdecl -[AppDelegate delayTimeBlock:voidBlk:failedBlk:](AppDelegate *self, SEL, id, id, id)
__AppDelegate_delayTimeBlock_voidBlk_failedBlk__

SUB             SP, SP, #0x120
STP             X28, X27, [SP,#0x110+var_10]
STP             X29, X30, [SP,#0x110+var_s0]
ADD             X29, SP, #0x110
SUB             X8, X29, #-var_28
MOV             X9, #0
STUR            X0, [X29,#var_18]
STUR            X1, [X29,#var_20]
STUR            X9, [X29,#var_28]
MOV             X0, X8
MOV             X1, X2
STR             X3, [SP,#0x110+var_B8]
STR             X4, [SP,#0x110+var_C0]
BL              _objc_storeStrong
SUB             X8, X29, #-var_30
MOV             X9, #0
STUR            X9, [X29,#var_30]
LDR             X9, [SP,#0x110+var_B8]
MOV             X0, X8
MOV             X1, X9
BL              _objc_storeStrong
SUB             X8, X29, #-var_38
MOV             X9, #0
STUR            X9, [X29,#var_38]
LDR             X9, [SP,#0x110+var_C0]
MOV             X0, X8
MOV             X1, X9
BL              _objc_storeStrong
MOV             X8, #0
MOV             X1, #0x3B9A0000
MOVK            X1, #0xCA00
SUB             X9, X29, #-var_60
ADD             X9, X9, #0x20
MOV             X0, X8  ; when
STR             X9, [SP,#0x110+var_C8]
BL              _dispatch_time
ADRP            X8, #__dispatch_main_q_ptr@PAGE
LDR             X8, [X8,#__dispatch_main_q_ptr@PAGEOFF]
STR             X0, [SP,#0x110+var_D0]
MOV             X0, X8
BL              _objc_retainAutoreleaseReturnValue
MOV             X29, X29
BL              _objc_retainAutoreleasedReturnValue
ADRP            X8, #___block_descriptor_tmp.55@PAGE
ADD             X8, X8, #___block_descriptor_tmp.55@PAGEOFF
ADRP            X9, #___48__AppDelegate_delayTimeBlock_voidBlk_failedBlk___block_invoke@PAGE
ADD             X9, X9, #___48__AppDelegate_delayTimeBlock_voidBlk_failedBlk___block_invoke@PAGEOFF
MOV             W10, #0xC2000000
ADRP            X1, #__NSConcreteStackBlock_ptr@PAGE
LDR             X1, [X1,#__NSConcreteStackBlock_ptr@PAGEOFF]
STUR            X1, [X29,#var_60]
STUR            W10, [X29,#var_58]
STUR            WZR, [X29,#var_54]
STUR            X9, [X29,#var_50]
STUR            X8, [X29,#var_48]
LDUR            X8, [X29,#var_28]
STR             X0, [SP,#0x110+var_D8]
MOV             X0, X8
BL              _objc_retain
SUB             X8, X29, #-var_60
STUR            X0, [X29,#var_40]
LDR             X0, [SP,#0x110+var_D0]
LDR             X1, [SP,#0x110+var_D8]
MOV             X2, X8
BL              _dispatch_after
LDR             X0, [SP,#0x110+var_D8]
BL              _objc_release
MOV             X8, #0
MOV             X1, #0x77350000
MOVK            X1, #0x9400
ADD             X9, SP, #0x110+var_88
ADD             X9, X9, #0x20
MOV             X0, X8  ; when
STR             X9, [SP,#0x110+var_E0]
BL              _dispatch_time
ADRP            X8, #__dispatch_main_q_ptr@PAGE
LDR             X8, [X8,#__dispatch_main_q_ptr@PAGEOFF]
STR             X0, [SP,#0x110+var_E8]
MOV             X0, X8
BL              _objc_retainAutoreleaseReturnValue
MOV             X29, X29
BL              _objc_retainAutoreleasedReturnValue
ADRP            X8, #___block_descriptor_tmp.59@PAGE
ADD             X8, X8, #___block_descriptor_tmp.59@PAGEOFF
ADRP            X9, #___48__AppDelegate_delayTimeBlock_voidBlk_failedBlk___block_invoke.56@PAGE
ADD             X9, X9, #___48__AppDelegate_delayTimeBlock_voidBlk_failedBlk___block_invoke.56@PAGEOFF
MOV             W10, #0xC2000000
ADRP            X1, #__NSConcreteStackBlock_ptr@PAGE
LDR             X1, [X1,#__NSConcreteStackBlock_ptr@PAGEOFF]
STR             X1, [SP,#0x110+var_88]
STR             W10, [SP,#0x110+var_80]
STR             WZR, [SP,#0x110+var_7C]
STR             X9, [SP,#0x110+var_78]
STR             X8, [SP,#0x110+var_70]
LDUR            X8, [X29,#var_30]
STR             X0, [SP,#0x110+var_F0]
MOV             X0, X8
BL              _objc_retain
ADD             X8, SP, #0x110+var_88
STR             X0, [SP,#0x110+var_68]
LDR             X0, [SP,#0x110+var_E8]
LDR             X1, [SP,#0x110+var_F0]
MOV             X2, X8
BL              _dispatch_after
LDR             X0, [SP,#0x110+var_F0]
BL              _objc_release
MOV             X8, #0
MOV             X1, #0xB2D00000
MOVK            X1, #0x5E00
ADD             X9, SP, #0x110+var_B0
ADD             X9, X9, #0x20
MOV             X0, X8  ; when
STR             X9, [SP,#0x110+var_F8]
BL              _dispatch_time
ADRP            X8, #__dispatch_main_q_ptr@PAGE
LDR             X8, [X8,#__dispatch_main_q_ptr@PAGEOFF]
STR             X0, [SP,#0x110+var_100]
MOV             X0, X8
BL              _objc_retainAutoreleaseReturnValue
MOV             X29, X29
BL              _objc_retainAutoreleasedReturnValue
ADRP            X8, #___block_descriptor_tmp.65@PAGE
ADD             X8, X8, #___block_descriptor_tmp.65@PAGEOFF
ADRP            X9, #___48__AppDelegate_delayTimeBlock_voidBlk_failedBlk___block_invoke.60@PAGE
ADD             X9, X9, #___48__AppDelegate_delayTimeBlock_voidBlk_failedBlk___block_invoke.60@PAGEOFF
MOV             W10, #0xC2000000
ADRP            X1, #__NSConcreteStackBlock_ptr@PAGE
LDR             X1, [X1,#__NSConcreteStackBlock_ptr@PAGEOFF]
STR             X1, [SP,#0x110+var_B0]
STR             W10, [SP,#0x110+var_A8]
STR             WZR, [SP,#0x110+var_A4]
STR             X9, [SP,#0x110+var_A0]
STR             X8, [SP,#0x110+var_98]
LDUR            X8, [X29,#var_38]
STR             X0, [SP,#0x110+var_108]
MOV             X0, X8
BL              _objc_retain
ADD             X8, SP, #0x110+var_B0
STR             X0, [SP,#0x110+var_90]
LDR             X0, [SP,#0x110+var_100]
LDR             X1, [SP,#0x110+var_108]
MOV             X2, X8
BL              _dispatch_after
LDR             X0, [SP,#0x110+var_108]
BL              _objc_release
MOV             X8, #0
LDR             X9, [SP,#0x110+var_F8]
MOV             X0, X9
MOV             X1, X8
BL              _objc_storeStrong
MOV             X8, #0
LDR             X9, [SP,#0x110+var_E0]
MOV             X0, X9
MOV             X1, X8
BL              _objc_storeStrong
MOV             X8, #0
LDR             X9, [SP,#0x110+var_C8]
MOV             X0, X9
MOV             X1, X8
BL              _objc_storeStrong
MOV             X8, #0
SUB             X9, X29, #-var_38
MOV             X0, X9
MOV             X1, X8
BL              _objc_storeStrong
MOV             X8, #0
SUB             X9, X29, #-var_30
MOV             X0, X9
MOV             X1, X8
BL              _objc_storeStrong
MOV             X8, #0
SUB             X9, X29, #-var_28
MOV             X0, X9
MOV             X1, X8
BL              _objc_storeStrong
LDP             X29, X30, [SP,#0x110+var_s0]
LDP             X28, X27, [SP,#0x110+var_10]
ADD             SP, SP, #0x120
RET
; End of function -[AppDelegate delayTimeBlock:voidBlk:failedBlk:]




SUB             SP, SP, #0x40
STP             X29, X30, [SP,#0x30+var_s0]
ADD             X29, SP, #0x30
SUB             X8, X29, #-var_10
MOV             X9, #0
STUR            X0, [X29,#var_8]
MOV             X10, X0
STUR            X9, [X29,#var_10]
STR             X0, [SP,#0x30+var_20]
MOV             X0, X8
STR             X10, [SP,#0x30+var_28]
BL              _objc_storeStrong
ADRP            X8, #selRef_completedTest_@PAGE
ADD             X8, X8, #selRef_completedTest_@PAGEOFF
LDR             X9, [SP,#0x30+var_28]
STR             X9, [SP,#0x30+var_18]
LDR             X10, [SP,#0x30+var_20]
LDR             X0, [X10,#0x20] ; void *
LDUR            X2, [X29,#var_10]
LDR             X1, [X8] ; "completedTest:"
BL              _objc_msgSend
MOV             X8, #0
SUB             X9, X29, #-var_10
MOV             X0, X9
MOV             X1, X8
BL              _objc_storeStrong
LDP             X29, X30, [SP,#0x30+var_s0]
ADD             SP, SP, #0x40
RET
; End of function ___32__AppDelegate_blockTypeTestCode__block_invoke


SUB             SP, SP, #0x20
STP             X29, X30, [SP,#0x10+var_s0]
ADD             X29, SP, #0x10
ADRP            X8, #selRef_voidBlkTest@PAGE
ADD             X8, X8, #selRef_voidBlkTest@PAGEOFF
STR             X0, [SP,#0x10+var_8]
MOV             X9, X0
STR             X9, [SP,#0x10+var_10]
LDR             X9, [X0,#0x20]
LDR             X1, [X8] ; "voidBlkTest"
MOV             X0, X9  ; void *
BL              _objc_msgSend
LDP             X29, X30, [SP,#0x10+var_s0]
ADD             SP, SP, #0x20
RET
; End of function ___32__AppDelegate_blockTypeTestCode__block_invoke.42



SUB             SP, SP, #0x50
STP             X29, X30, [SP,#0x40+var_s0]
ADD             X29, SP, #0x40
SUB             X8, X29, #-var_10
MOV             X9, #0
STUR            X0, [X29,#var_8]
MOV             X10, X0
STUR            X9, [X29,#var_10]
STR             X0, [SP,#0x40+var_28]
MOV             X0, X8
STR             X2, [SP,#0x40+var_30]
STR             X10, [SP,#0x40+var_38]
BL              _objc_storeStrong
ADRP            X8, #selRef_failedBlkTest_age_@PAGE
ADD             X8, X8, #selRef_failedBlkTest_age_@PAGEOFF
LDR             X9, [SP,#0x40+var_30]
STUR            X9, [X29,#var_18]
LDR             X10, [SP,#0x40+var_38]
STR             X10, [SP,#0x40+var_20]
LDR             X0, [SP,#0x40+var_28]
LDR             X1, [X0,#0x20]
LDUR            X2, [X29,#var_10]
LDUR            X3, [X29,#var_18]
LDR             X8, [X8] ; "failedBlkTest:age:"
MOV             X0, X1  ; void *
MOV             X1, X8  ; char *
BL              _objc_msgSend
; [self failedBlkTest:age:]

MOV             X8, #0
SUB             X9, X29, #-var_10
MOV             X0, X9
MOV             X1, X8
BL              _objc_storeStrong
LDP             X29, X30, [SP,#0x40+var_s0]
ADD             SP, SP, #0x50
RET
; End of function ___32__AppDelegate_blockTypeTestCode__block_invoke.49

















SUB             SP, SP, #0xF0
STP             X29, X30, [SP,#0xE0+var_s0]
ADD             X29, SP, #0xE0
ADRP            X8, #___block_descriptor_tmp@PAGE
ADD             X8, X8, #___block_descriptor_tmp@PAGEOFF
ADRP            X9, #___32__AppDelegate_blockTypeTestCode__block_invoke@PAGE
ADD             X9, X9, #___32__AppDelegate_blockTypeTestCode__block_invoke@PAGEOFF
MOV             W10, #0xC2000000
ADRP            X11, #__NSConcreteStackBlock_ptr@PAGE
LDR             X11, [X11,#__NSConcreteStackBlock_ptr@PAGEOFF]
SUB             X12, X29, #-var_38
STUR            X0, [X29,#var_8]
STUR            X1, [X29,#var_10]
ADD             X12, X12, #0x20
LDUR            X0, [X29,#var_8]
STUR            X11, [X29,#var_38]
STUR            W10, [X29,#var_30]
STUR            WZR, [X29,#var_2C]
STUR            X9, [X29,#var_28]
STUR            X8, [X29,#var_20]
LDUR            X8, [X29,#var_8]
STR             X0, [SP,#0xE0+var_90]
MOV             X0, X8
STR             X12, [SP,#0xE0+var_98]
BL              _objc_retain
ADRP            X8, #0x100009000
ADD             X8, X8, #selRef_setCompletedBlock_@PAGEOFF
SUB             X9, X29, #-var_38
STUR            X0, [X29,#var_18]
LDR             X1, [X8] ; "setCompletedBlock:"
LDR             X8, [SP,#0xE0+var_90]
MOV             X0, X8  ; void *
MOV             X2, X9
BL              _objc_msgSend
ADRP            X8, #___block_descriptor_tmp.32@PAGE
ADD             X8, X8, #___block_descriptor_tmp.32@PAGEOFF
ADRP            X9, #___32__AppDelegate_blockTypeTestCode__block_invoke.26@PAGE
ADD             X9, X9, #___32__AppDelegate_blockTypeTestCode__block_invoke.26@PAGEOFF
MOV             W10, #0xC2000000
ADRP            X11, #__NSConcreteStackBlock_ptr@PAGE
LDR             X11, [X11,#__NSConcreteStackBlock_ptr@PAGEOFF]
SUB             X12, X29, #-var_60
ADD             X12, X12, #0x20
LDUR            X0, [X29,#var_8]
STUR            X11, [X29,#var_60]
STUR            W10, [X29,#var_58]
STUR            WZR, [X29,#var_54]
STUR            X9, [X29,#var_50]
STUR            X8, [X29,#var_48]
LDUR            X8, [X29,#var_8]
STR             X0, [SP,#0xE0+var_A0]
MOV             X0, X8
STR             X12, [SP,#0xE0+var_A8]
BL              _objc_retain
ADRP            X8, #selRef_setVoidBlock_@PAGE
ADD             X8, X8, #selRef_setVoidBlock_@PAGEOFF
SUB             X9, X29, #-var_60
STUR            X0, [X29,#var_40]
LDR             X1, [X8] ; "setVoidBlock:"
LDR             X8, [SP,#0xE0+var_A0]
MOV             X0, X8  ; void *
MOV             X2, X9
BL              _objc_msgSend
ADRP            X8, #___block_descriptor_tmp.41@PAGE
ADD             X8, X8, #___block_descriptor_tmp.41@PAGEOFF
ADRP            X9, #___32__AppDelegate_blockTypeTestCode__block_invoke.35@PAGE
ADD             X9, X9, #___32__AppDelegate_blockTypeTestCode__block_invoke.35@PAGEOFF
MOV             W10, #0xC2000000
ADRP            X11, #__NSConcreteStackBlock_ptr@PAGE
LDR             X11, [X11,#__NSConcreteStackBlock_ptr@PAGEOFF]
ADD             X12, SP, #0xE0+var_88
ADD             X12, X12, #0x20
LDUR            X0, [X29,#var_8]
STR             X11, [SP,#0xE0+var_88]
STR             W10, [SP,#0xE0+var_80]
STR             WZR, [SP,#0xE0+var_7C]
STR             X9, [SP,#0xE0+var_78]
STR             X8, [SP,#0xE0+var_70]
LDUR            X8, [X29,#var_8]
STR             X0, [SP,#0xE0+var_B0]
MOV             X0, X8
STR             X12, [SP,#0xE0+var_B8]
BL              _objc_retain
ADRP            X8, #selRef_setFailedBlock_@PAGE
ADD             X8, X8, #selRef_setFailedBlock_@PAGEOFF
ADD             X9, SP, #0xE0+var_88
STR             X0, [SP,#0xE0+var_68]
LDR             X1, [X8] ; "setFailedBlock:"
LDR             X8, [SP,#0xE0+var_B0]
MOV             X0, X8  ; void *
MOV             X2, X9
BL              _objc_msgSend
ADRP            X8, #selRef_completedBlock@PAGE
ADD             X8, X8, #selRef_completedBlock@PAGEOFF
LDUR            X9, [X29,#var_8]
LDUR            X11, [X29,#var_8]
LDR             X1, [X8] ; "completedBlock"
MOV             X0, X11 ; void *
STR             X9, [SP,#0xE0+var_C0]
BL              _objc_msgSend
MOV             X29, X29
BL              _objc_retainAutoreleasedReturnValue

ADRP            X8, #selRef_voidBlock@PAGE
ADD             X8, X8, #selRef_voidBlock@PAGEOFF
LDUR            X9, [X29,#var_8]
LDR             X1, [X8] ; "voidBlock"
STR             X0, [SP,#0xE0+var_C8]
MOV             X0, X9  ; void *
BL              _objc_msgSend
MOV             X29, X29
BL              _objc_retainAutoreleasedReturnValue

ADRP            X8, #selRef_failedBlock@PAGE
ADD             X8, X8, #selRef_failedBlock@PAGEOFF
LDUR            X9, [X29,#var_8]
LDR             X1, [X8] ; "failedBlock"
STR             X0, [SP,#0xE0+var_D0]
MOV             X0, X9  ; void *
BL              _objc_msgSend
MOV             X29, X29
BL              _objc_retainAutoreleasedReturnValue

ADRP            X8, #selRef_delayTimeBlock_voidBlk_failedBlk_@PAGE
ADD             X8, X8, #selRef_delayTimeBlock_voidBlk_failedBlk_@PAGEOFF
LDR             X1, [X8] ; "delayTimeBlock:voidBlk:failedBlk:"
LDR             X8, [SP,#0xE0+var_C0]
STR             X0, [SP,#0xE0+var_D8]
MOV             X0, X8  ; void *
LDR             X2, [SP,#0xE0+var_C8]
LDR             X3, [SP,#0xE0+var_D0]
LDR             X4, [SP,#0xE0+var_D8]
BL              _objc_msgSend



LDR             X0, [SP,#0xE0+var_D8]
BL              _objc_release
LDR             X0, [SP,#0xE0+var_D0]
BL              _objc_release
LDR             X0, [SP,#0xE0+var_C8]
BL              _objc_release
MOV             X8, #0
LDR             X9, [SP,#0xE0+var_B8]
MOV             X0, X9
MOV             X1, X8
BL              _objc_storeStrong
MOV             X8, #0
LDR             X9, [SP,#0xE0+var_A8]
MOV             X0, X9
MOV             X1, X8
BL              _objc_storeStrong
MOV             X8, #0
LDR             X9, [SP,#0xE0+var_98]
MOV             X0, X9
MOV             X1, X8
BL              _objc_storeStrong
LDP             X29, X30, [SP,#0xE0+var_s0]
ADD             SP, SP, #0xF0
RET

