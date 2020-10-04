.code
ANDBytes proc
	mov r8b, byte ptr [rcx]
	mov r9b, byte ptr [rdx]

	AND r8b, r9b

	mov byte ptr [rcx], r8b

	ret
ANDBytes endp

ORBytes proc
	mov r8b, byte ptr [rcx]
	mov r9b, byte ptr [rdx]

	OR r8b, r9b

	mov byte ptr [rcx], r8b

	ret
ORBytes endp

XORBytes proc
	mov r8b, byte ptr [rcx]
	mov r9b, byte ptr [rdx]

	XOR r8b, r9b

	mov byte ptr [rcx], r8b

	ret
XORBytes endp

NOTByte proc
	mov r8b, byte ptr [rcx]

	NOT r8b

	mov byte ptr [rcx], r8b

	ret
NOTByte endp

end