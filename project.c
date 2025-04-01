#include "spimcore.h"


/* ALU */
/* 10 Points */
//Function will check the result, if is not zero return 0; otherwise return 1
int result(unsigned ALUresult){
    if(ALUresult != 0){
        return 0;
    }else{
        return 1;
    }
}

//Function will convert the ALUControl from binary to integer, to use it on the if conditions
int binary_to_integer(const char *binary_string) {
    return (int)strtol(binary_string, NULL, 2);
}

void ALU(unsigned A,unsigned B,char ALUControl,unsigned *ALUresult,char *Zero)
{
//Since ALUControl is a char, it will call the function to have it as an integer.
int control = binary_to_integer(ALUControl);

//On each condition pointer ALUresult has been dereference and its value modified 

    if(control == 0){
        *ALUresult = A + B;
        *Zero = (char)result(ALUresult);
    }
    if(control == 1){
        *ALUresult = A - B;
        *Zero = (char)result(ALUresult);
    }
    if(control == 2){
        if(A < B){
            *ALUresult = 1;
            *Zero =(char)result(ALUresult);
        }else{
            *ALUresult = 0;
            *Zero =(char)result(ALUresult);
        }
    }
    if(control == 3){
        if((unsigned)A < (unsigned) B){
            *ALUresult = 1;
            *Zero =(char)result(ALUresult);
        }else{
            *ALUresult = 0;
            *Zero =(char)result(ALUresult);
        }
    }
    if(control == 4){
       if(A && B){
        *ALUresult = 1;
        *Zero =(char)result(ALUresult);
       }else{
        *ALUresult = 0;
        *Zero =(char)result(ALUresult);
       }
    }
    if(control == 5){
        if(A || B){
            *ALUresult = 1;
            *Zero =(char)result(ALUresult);
        }else{
            *ALUresult = 0;
            *Zero =(char)result(ALUresult);
        }
    } 
  //------------WORK IN PROGRESS-------
    if(control == 6){
        *ALUresult = B << 16;
    }
    if(control == 7){
        *ALUresult = ~A;
    }
}

/* instruction fetch */
/* 10 Points */
int instruction_fetch(unsigned PC,unsigned *Mem,unsigned *instruction)
{

}


/* instruction partition */
/* 10 Points */
void instruction_partition(unsigned instruction, unsigned *op, unsigned *r1,unsigned *r2, unsigned *r3, unsigned *funct, unsigned *offset, unsigned *jsec)
{

}



/* instruction decode */
/* 15 Points */
int instruction_decode(unsigned op,struct_controls *controls)
{

}

/* Read Register */
/* 5 Points */
void read_register(unsigned r1,unsigned r2,unsigned *Reg,unsigned *data1,unsigned *data2)
{

}


/* Sign Extend */
/* 10 Points */
void sign_extend(unsigned offset,unsigned *extended_value)
{

}

/* ALU operations */
/* 10 Points */
int ALU_operations(unsigned data1,unsigned data2,unsigned extended_value,unsigned funct,char ALUOp,char ALUSrc,unsigned *ALUresult,char *Zero)
{

}

/* Read / Write Memory */
/* 10 Points */
int rw_memory(unsigned ALUresult,unsigned data2,char MemWrite,char MemRead,unsigned *memdata,unsigned *Mem)
{

}


/* Write Register */
/* 10 Points */
void write_register(unsigned r2,unsigned r3,unsigned memdata,unsigned ALUresult,char RegWrite,char RegDst,char MemtoReg,unsigned *Reg)
{

}

/* PC update */
/* 10 Points */
void PC_update(unsigned jsec,unsigned extended_value,char Branch,char Jump,char Zero,unsigned *PC)
{

}

