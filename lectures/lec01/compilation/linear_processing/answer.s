	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 15, 0	sdk_version 15, 2
	.globl	_answer                         ; -- Begin function answer
	.p2align	2
_answer:                                ; @answer
	.cfi_startproc
; %bb.0:
	mov	w0, #1337                       ; =0x539
	ret
	.cfi_endproc
                                        ; -- End function
.subsections_via_symbols
