#include <stratego.h>
#include <stratego-lib.h>
Symbol sym_Scopes_0;
Symbol sym_Keys_0;
Symbol sym_Keys_1;
Symbol sym_Keys_2;
Symbol sym_Keys_3;
Symbol sym_Keys_4;
Symbol sym_Keys_5;
Symbol sym_Keys_6;
Symbol sym_Keys_7;
Symbol sym_Keys_8;
Symbol sym_Keys_9;
Symbol sym_Keys_10;
Symbol sym_Defined_0;
Symbol sym_Defined_1;
Symbol sym_Defined_2;
Symbol sym_Defined_3;
Symbol sym_Defined_4;
Symbol sym_Defined_5;
Symbol sym_Defined_6;
Symbol sym_Defined_7;
Symbol sym_Defined_8;
Symbol sym_Defined_9;
Symbol sym_Defined_10;
Symbol sym_Undefined_0;
Symbol sym_PointerOf_1;
Symbol sym_Pointer_2;
Symbol sym_ParamListVarArgs_1;
Symbol sym_ParamList_1;
Symbol sym_ArrayDecl_2;
Symbol sym_DeclBracket_1;
Symbol sym_DeclBracket1_1;
Symbol sym_DeclBracket2_1;
Symbol sym_FunType_2;
Symbol sym_ParamDecl_2;
Symbol sym_ParamDecl2_2;
Symbol sym_TypeName_2;
Symbol sym_Enum_2;
Symbol sym_EnumId_1;
Symbol sym_Enumerator_2;
Symbol sym_EnumVal_1;
Symbol sym_Struct_2;
Symbol sym_StructId_1;
Symbol sym_Union_2;
Symbol sym_UnionId_1;
Symbol sym_MemDecl_2;
Symbol sym_MemDecl1_2;
Symbol sym_BitFieldSize_2;
Symbol sym_IntConst_1;
Symbol sym_FloatConst_1;
Symbol sym_OctConst_1;
Symbol sym_HexConst_1;
Symbol sym_CharConst_1;
Symbol sym_StringLit_1;
Symbol sym_ArrayIndex_2;
Symbol sym_FunCall_2;
Symbol sym_Field_2;
Symbol sym_DerefMember_2;
Symbol sym_PostIncr_1;
Symbol sym_PostDecr_1;
Symbol sym_PreIncr_1;
Symbol sym_PreDecr_1;
Symbol sym_SizeofExp_1;
Symbol sym_SizeofType_1;
Symbol sym_Address_1;
Symbol sym_Deref_1;
Symbol sym_Positive_1;
Symbol sym_Negative_1;
Symbol sym_Tilde_1;
Symbol sym_Negation_1;
Symbol sym_TypeCast_2;
Symbol sym_Mul_2;
Symbol sym_Div_2;
Symbol sym_Mod_2;
Symbol sym_Add_2;
Symbol sym_Subt_2;
Symbol sym_ShiftLeft_2;
Symbol sym_ShiftRight_2;
Symbol sym_Lt_2;
Symbol sym_Gt_2;
Symbol sym_Le_2;
Symbol sym_Ge_2;
Symbol sym_Equal_2;
Symbol sym_NotEqual_2;
Symbol sym_And_2;
Symbol sym_ExOr_2;
Symbol sym_IncOr_2;
Symbol sym_LAnd_2;
Symbol sym_LOr_2;
Symbol sym_IfExp_3;
Symbol sym_Assign_3;
Symbol sym_AssignEq_0;
Symbol sym_AssignMul_0;
Symbol sym_AssignDiv_0;
Symbol sym_AssignMod_0;
Symbol sym_AssignPlus_0;
Symbol sym_AssignMin_0;
Symbol sym_AssignSL_0;
Symbol sym_AssignSR_0;
Symbol sym_AssignAnd_0;
Symbol sym_AssignExp_0;
Symbol sym_AssignOr_0;
Symbol sym_Comma_2;
Symbol sym_EmptyExp_0;
Symbol sym_Typedef_0;
Symbol sym_Extern_0;
Symbol sym_Static_0;
Symbol sym_Auto_0;
Symbol sym_Register_0;
Symbol sym_Int_0;
Symbol sym_Char_0;
Symbol sym_Short_0;
Symbol sym_Long_0;
Symbol sym_Float_0;
Symbol sym_Double_0;
Symbol sym_Signed_0;
Symbol sym_Unsigned_0;
Symbol sym_Void_0;
Symbol sym_Const_0;
Symbol sym_Volatile_0;
Symbol sym_Declaration_2;
Symbol sym_Declaration2_2;
Symbol sym_IdDeclInit_2;
Symbol sym_DeclInit_2;
Symbol sym_ArrayInit_1;
Symbol sym_ArrayInitIncomplete_1;
Symbol sym_AssignInit_1;
Symbol sym_TypeSpec_3;
Symbol sym_DQualifiers_3;
Symbol sym_DeclSpec_5;
Symbol sym_Id_1;
Symbol sym_TypeId_1;
Symbol sym_Label_2;
Symbol sym_Case_2;
Symbol sym_Default_1;
Symbol sym_Compound_2;
Symbol sym_Stat_1;
Symbol sym_If_2;
Symbol sym_IfElse_3;
Symbol sym_Switch_2;
Symbol sym_While_2;
Symbol sym_DoWhile_2;
Symbol sym_For_4;
Symbol sym_Goto_1;
Symbol sym_Continue_0;
Symbol sym_Break_0;
Symbol sym_Return_1;
Symbol sym_Exit_1;
Symbol sym_FunDef_3;
Symbol sym_NoTypeSpecifier_0;
Symbol sym_TranslationUnit_1;
Symbol sym_Include_1;
Symbol sym_IdDecl_3;
Symbol sym_FunDecl_3;
Symbol sym_TypedefDeclarator1_3;
Symbol sym_TypedefDeclarator2_3;
Symbol sym_OldFunction1_3;
Symbol sym_OldFunction2_3;
Symbol sym_PpIf_4;
Symbol sym_return_0;
Symbol sym_exit_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Silent_0;
Symbol sym_Verbose_0;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_DeclVersion_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_CUT_0;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Sort_2;
Symbol sym_OpDecl_2;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_NoKind_0;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_ScopeDefault_1;
Symbol sym_DynRuleScope_2;
Symbol sym_MA_2;
Symbol sym_AM_2;
Symbol sym_BA_2;
Symbol sym_BAM_3;
Symbol sym_Con_3;
Symbol sym_App_2;
Symbol sym_InfixApp_3;
Symbol sym_Explode_2;
Symbol sym_ExplodeCong_2;
Symbol sym_As_2;
Symbol sym_BuildDefault_1;
Symbol sym_Rule_3;
Symbol sym_StratRule_3;
Symbol sym_LRule_1;
Symbol sym_SRule_1;
Symbol sym_RDef_3;
Symbol sym_DynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_Mod_2;
Symbol sym_Overlay_3;
Symbol sym_Signature_1;
Symbol sym_Overlays_1;
Symbol sym_Rules_1;
Symbol sym_Strategies_1;
Symbol sym_Imports_1;
Symbol sym_Specification_1;
Symbol sym_Wld_0;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Str_1;
Symbol sym_Op_2;
Symbol sym_Id_0;
Symbol sym_Fail_0;
Symbol sym_Test_1;
Symbol sym_Not_1;
Symbol sym_Seq_2;
Symbol sym_Choice_2;
Symbol sym_LChoice_2;
Symbol sym_SVar_1;
Symbol sym_Rec_2;
Symbol sym_Let_2;
Symbol sym_SDef_3;
Symbol sym_VarDec_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_SDef_4;
Symbol sym_DontInline_0;
Symbol sym_Call_2;
Symbol sym_Path_2;
Symbol sym_Cong_2;
Symbol sym_One_1;
Symbol sym_Some_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_Assign_2;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_MatchVar_1;
Symbol sym_MatchFun_1;
Symbol sym_Scope_2;
Symbol sym_Where_1;
Symbol sym_Prim_2;
Symbol sym_TNil_0;
Symbol sym_TCons_2;
Symbol sym_Pair_2;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
void init_constructors (void)
{
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_Keys_0 = ATmakeSymbol("Keys", 0, ATfalse);
  ATprotectSymbol(sym_Keys_0);
  sym_Keys_1 = ATmakeSymbol("Keys", 1, ATfalse);
  ATprotectSymbol(sym_Keys_1);
  sym_Keys_2 = ATmakeSymbol("Keys", 2, ATfalse);
  ATprotectSymbol(sym_Keys_2);
  sym_Keys_3 = ATmakeSymbol("Keys", 3, ATfalse);
  ATprotectSymbol(sym_Keys_3);
  sym_Keys_4 = ATmakeSymbol("Keys", 4, ATfalse);
  ATprotectSymbol(sym_Keys_4);
  sym_Keys_5 = ATmakeSymbol("Keys", 5, ATfalse);
  ATprotectSymbol(sym_Keys_5);
  sym_Keys_6 = ATmakeSymbol("Keys", 6, ATfalse);
  ATprotectSymbol(sym_Keys_6);
  sym_Keys_7 = ATmakeSymbol("Keys", 7, ATfalse);
  ATprotectSymbol(sym_Keys_7);
  sym_Keys_8 = ATmakeSymbol("Keys", 8, ATfalse);
  ATprotectSymbol(sym_Keys_8);
  sym_Keys_9 = ATmakeSymbol("Keys", 9, ATfalse);
  ATprotectSymbol(sym_Keys_9);
  sym_Keys_10 = ATmakeSymbol("Keys", 10, ATfalse);
  ATprotectSymbol(sym_Keys_10);
  sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
  ATprotectSymbol(sym_Defined_0);
  sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
  ATprotectSymbol(sym_Defined_1);
  sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
  ATprotectSymbol(sym_Defined_2);
  sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
  ATprotectSymbol(sym_Defined_3);
  sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
  ATprotectSymbol(sym_Defined_4);
  sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
  ATprotectSymbol(sym_Defined_5);
  sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
  ATprotectSymbol(sym_Defined_6);
  sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
  ATprotectSymbol(sym_Defined_7);
  sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
  ATprotectSymbol(sym_Defined_8);
  sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
  ATprotectSymbol(sym_Defined_9);
  sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
  ATprotectSymbol(sym_Defined_10);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_PointerOf_1 = ATmakeSymbol("PointerOf", 1, ATfalse);
  ATprotectSymbol(sym_PointerOf_1);
  sym_Pointer_2 = ATmakeSymbol("Pointer", 2, ATfalse);
  ATprotectSymbol(sym_Pointer_2);
  sym_ParamListVarArgs_1 = ATmakeSymbol("ParamListVarArgs", 1, ATfalse);
  ATprotectSymbol(sym_ParamListVarArgs_1);
  sym_ParamList_1 = ATmakeSymbol("ParamList", 1, ATfalse);
  ATprotectSymbol(sym_ParamList_1);
  sym_ArrayDecl_2 = ATmakeSymbol("ArrayDecl", 2, ATfalse);
  ATprotectSymbol(sym_ArrayDecl_2);
  sym_DeclBracket_1 = ATmakeSymbol("DeclBracket", 1, ATfalse);
  ATprotectSymbol(sym_DeclBracket_1);
  sym_DeclBracket1_1 = ATmakeSymbol("DeclBracket1", 1, ATfalse);
  ATprotectSymbol(sym_DeclBracket1_1);
  sym_DeclBracket2_1 = ATmakeSymbol("DeclBracket2", 1, ATfalse);
  ATprotectSymbol(sym_DeclBracket2_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_ParamDecl_2 = ATmakeSymbol("ParamDecl", 2, ATfalse);
  ATprotectSymbol(sym_ParamDecl_2);
  sym_ParamDecl2_2 = ATmakeSymbol("ParamDecl2", 2, ATfalse);
  ATprotectSymbol(sym_ParamDecl2_2);
  sym_TypeName_2 = ATmakeSymbol("TypeName", 2, ATfalse);
  ATprotectSymbol(sym_TypeName_2);
  sym_Enum_2 = ATmakeSymbol("Enum", 2, ATfalse);
  ATprotectSymbol(sym_Enum_2);
  sym_EnumId_1 = ATmakeSymbol("EnumId", 1, ATfalse);
  ATprotectSymbol(sym_EnumId_1);
  sym_Enumerator_2 = ATmakeSymbol("Enumerator", 2, ATfalse);
  ATprotectSymbol(sym_Enumerator_2);
  sym_EnumVal_1 = ATmakeSymbol("EnumVal", 1, ATfalse);
  ATprotectSymbol(sym_EnumVal_1);
  sym_Struct_2 = ATmakeSymbol("Struct", 2, ATfalse);
  ATprotectSymbol(sym_Struct_2);
  sym_StructId_1 = ATmakeSymbol("StructId", 1, ATfalse);
  ATprotectSymbol(sym_StructId_1);
  sym_Union_2 = ATmakeSymbol("Union", 2, ATfalse);
  ATprotectSymbol(sym_Union_2);
  sym_UnionId_1 = ATmakeSymbol("UnionId", 1, ATfalse);
  ATprotectSymbol(sym_UnionId_1);
  sym_MemDecl_2 = ATmakeSymbol("MemDecl", 2, ATfalse);
  ATprotectSymbol(sym_MemDecl_2);
  sym_MemDecl1_2 = ATmakeSymbol("MemDecl1", 2, ATfalse);
  ATprotectSymbol(sym_MemDecl1_2);
  sym_BitFieldSize_2 = ATmakeSymbol("BitFieldSize", 2, ATfalse);
  ATprotectSymbol(sym_BitFieldSize_2);
  sym_IntConst_1 = ATmakeSymbol("IntConst", 1, ATfalse);
  ATprotectSymbol(sym_IntConst_1);
  sym_FloatConst_1 = ATmakeSymbol("FloatConst", 1, ATfalse);
  ATprotectSymbol(sym_FloatConst_1);
  sym_OctConst_1 = ATmakeSymbol("OctConst", 1, ATfalse);
  ATprotectSymbol(sym_OctConst_1);
  sym_HexConst_1 = ATmakeSymbol("HexConst", 1, ATfalse);
  ATprotectSymbol(sym_HexConst_1);
  sym_CharConst_1 = ATmakeSymbol("CharConst", 1, ATfalse);
  ATprotectSymbol(sym_CharConst_1);
  sym_StringLit_1 = ATmakeSymbol("StringLit", 1, ATfalse);
  ATprotectSymbol(sym_StringLit_1);
  sym_ArrayIndex_2 = ATmakeSymbol("ArrayIndex", 2, ATfalse);
  ATprotectSymbol(sym_ArrayIndex_2);
  sym_FunCall_2 = ATmakeSymbol("FunCall", 2, ATfalse);
  ATprotectSymbol(sym_FunCall_2);
  sym_Field_2 = ATmakeSymbol("Field", 2, ATfalse);
  ATprotectSymbol(sym_Field_2);
  sym_DerefMember_2 = ATmakeSymbol("DerefMember", 2, ATfalse);
  ATprotectSymbol(sym_DerefMember_2);
  sym_PostIncr_1 = ATmakeSymbol("PostIncr", 1, ATfalse);
  ATprotectSymbol(sym_PostIncr_1);
  sym_PostDecr_1 = ATmakeSymbol("PostDecr", 1, ATfalse);
  ATprotectSymbol(sym_PostDecr_1);
  sym_PreIncr_1 = ATmakeSymbol("PreIncr", 1, ATfalse);
  ATprotectSymbol(sym_PreIncr_1);
  sym_PreDecr_1 = ATmakeSymbol("PreDecr", 1, ATfalse);
  ATprotectSymbol(sym_PreDecr_1);
  sym_SizeofExp_1 = ATmakeSymbol("SizeofExp", 1, ATfalse);
  ATprotectSymbol(sym_SizeofExp_1);
  sym_SizeofType_1 = ATmakeSymbol("SizeofType", 1, ATfalse);
  ATprotectSymbol(sym_SizeofType_1);
  sym_Address_1 = ATmakeSymbol("Address", 1, ATfalse);
  ATprotectSymbol(sym_Address_1);
  sym_Deref_1 = ATmakeSymbol("Deref", 1, ATfalse);
  ATprotectSymbol(sym_Deref_1);
  sym_Positive_1 = ATmakeSymbol("Positive", 1, ATfalse);
  ATprotectSymbol(sym_Positive_1);
  sym_Negative_1 = ATmakeSymbol("Negative", 1, ATfalse);
  ATprotectSymbol(sym_Negative_1);
  sym_Tilde_1 = ATmakeSymbol("Tilde", 1, ATfalse);
  ATprotectSymbol(sym_Tilde_1);
  sym_Negation_1 = ATmakeSymbol("Negation", 1, ATfalse);
  ATprotectSymbol(sym_Negation_1);
  sym_TypeCast_2 = ATmakeSymbol("TypeCast", 2, ATfalse);
  ATprotectSymbol(sym_TypeCast_2);
  sym_Mul_2 = ATmakeSymbol("Mul", 2, ATfalse);
  ATprotectSymbol(sym_Mul_2);
  sym_Div_2 = ATmakeSymbol("Div", 2, ATfalse);
  ATprotectSymbol(sym_Div_2);
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
  sym_Add_2 = ATmakeSymbol("Add", 2, ATfalse);
  ATprotectSymbol(sym_Add_2);
  sym_Subt_2 = ATmakeSymbol("Subt", 2, ATfalse);
  ATprotectSymbol(sym_Subt_2);
  sym_ShiftLeft_2 = ATmakeSymbol("ShiftLeft", 2, ATfalse);
  ATprotectSymbol(sym_ShiftLeft_2);
  sym_ShiftRight_2 = ATmakeSymbol("ShiftRight", 2, ATfalse);
  ATprotectSymbol(sym_ShiftRight_2);
  sym_Lt_2 = ATmakeSymbol("Lt", 2, ATfalse);
  ATprotectSymbol(sym_Lt_2);
  sym_Gt_2 = ATmakeSymbol("Gt", 2, ATfalse);
  ATprotectSymbol(sym_Gt_2);
  sym_Le_2 = ATmakeSymbol("Le", 2, ATfalse);
  ATprotectSymbol(sym_Le_2);
  sym_Ge_2 = ATmakeSymbol("Ge", 2, ATfalse);
  ATprotectSymbol(sym_Ge_2);
  sym_Equal_2 = ATmakeSymbol("Equal", 2, ATfalse);
  ATprotectSymbol(sym_Equal_2);
  sym_NotEqual_2 = ATmakeSymbol("NotEqual", 2, ATfalse);
  ATprotectSymbol(sym_NotEqual_2);
  sym_And_2 = ATmakeSymbol("And", 2, ATfalse);
  ATprotectSymbol(sym_And_2);
  sym_ExOr_2 = ATmakeSymbol("ExOr", 2, ATfalse);
  ATprotectSymbol(sym_ExOr_2);
  sym_IncOr_2 = ATmakeSymbol("IncOr", 2, ATfalse);
  ATprotectSymbol(sym_IncOr_2);
  sym_LAnd_2 = ATmakeSymbol("LAnd", 2, ATfalse);
  ATprotectSymbol(sym_LAnd_2);
  sym_LOr_2 = ATmakeSymbol("LOr", 2, ATfalse);
  ATprotectSymbol(sym_LOr_2);
  sym_IfExp_3 = ATmakeSymbol("IfExp", 3, ATfalse);
  ATprotectSymbol(sym_IfExp_3);
  sym_Assign_3 = ATmakeSymbol("Assign", 3, ATfalse);
  ATprotectSymbol(sym_Assign_3);
  sym_AssignEq_0 = ATmakeSymbol("AssignEq", 0, ATfalse);
  ATprotectSymbol(sym_AssignEq_0);
  sym_AssignMul_0 = ATmakeSymbol("AssignMul", 0, ATfalse);
  ATprotectSymbol(sym_AssignMul_0);
  sym_AssignDiv_0 = ATmakeSymbol("AssignDiv", 0, ATfalse);
  ATprotectSymbol(sym_AssignDiv_0);
  sym_AssignMod_0 = ATmakeSymbol("AssignMod", 0, ATfalse);
  ATprotectSymbol(sym_AssignMod_0);
  sym_AssignPlus_0 = ATmakeSymbol("AssignPlus", 0, ATfalse);
  ATprotectSymbol(sym_AssignPlus_0);
  sym_AssignMin_0 = ATmakeSymbol("AssignMin", 0, ATfalse);
  ATprotectSymbol(sym_AssignMin_0);
  sym_AssignSL_0 = ATmakeSymbol("AssignSL", 0, ATfalse);
  ATprotectSymbol(sym_AssignSL_0);
  sym_AssignSR_0 = ATmakeSymbol("AssignSR", 0, ATfalse);
  ATprotectSymbol(sym_AssignSR_0);
  sym_AssignAnd_0 = ATmakeSymbol("AssignAnd", 0, ATfalse);
  ATprotectSymbol(sym_AssignAnd_0);
  sym_AssignExp_0 = ATmakeSymbol("AssignExp", 0, ATfalse);
  ATprotectSymbol(sym_AssignExp_0);
  sym_AssignOr_0 = ATmakeSymbol("AssignOr", 0, ATfalse);
  ATprotectSymbol(sym_AssignOr_0);
  sym_Comma_2 = ATmakeSymbol("Comma", 2, ATfalse);
  ATprotectSymbol(sym_Comma_2);
  sym_EmptyExp_0 = ATmakeSymbol("EmptyExp", 0, ATfalse);
  ATprotectSymbol(sym_EmptyExp_0);
  sym_Typedef_0 = ATmakeSymbol("Typedef", 0, ATfalse);
  ATprotectSymbol(sym_Typedef_0);
  sym_Extern_0 = ATmakeSymbol("Extern", 0, ATfalse);
  ATprotectSymbol(sym_Extern_0);
  sym_Static_0 = ATmakeSymbol("Static", 0, ATfalse);
  ATprotectSymbol(sym_Static_0);
  sym_Auto_0 = ATmakeSymbol("Auto", 0, ATfalse);
  ATprotectSymbol(sym_Auto_0);
  sym_Register_0 = ATmakeSymbol("Register", 0, ATfalse);
  ATprotectSymbol(sym_Register_0);
  sym_Int_0 = ATmakeSymbol("Int", 0, ATfalse);
  ATprotectSymbol(sym_Int_0);
  sym_Char_0 = ATmakeSymbol("Char", 0, ATfalse);
  ATprotectSymbol(sym_Char_0);
  sym_Short_0 = ATmakeSymbol("Short", 0, ATfalse);
  ATprotectSymbol(sym_Short_0);
  sym_Long_0 = ATmakeSymbol("Long", 0, ATfalse);
  ATprotectSymbol(sym_Long_0);
  sym_Float_0 = ATmakeSymbol("Float", 0, ATfalse);
  ATprotectSymbol(sym_Float_0);
  sym_Double_0 = ATmakeSymbol("Double", 0, ATfalse);
  ATprotectSymbol(sym_Double_0);
  sym_Signed_0 = ATmakeSymbol("Signed", 0, ATfalse);
  ATprotectSymbol(sym_Signed_0);
  sym_Unsigned_0 = ATmakeSymbol("Unsigned", 0, ATfalse);
  ATprotectSymbol(sym_Unsigned_0);
  sym_Void_0 = ATmakeSymbol("Void", 0, ATfalse);
  ATprotectSymbol(sym_Void_0);
  sym_Const_0 = ATmakeSymbol("Const", 0, ATfalse);
  ATprotectSymbol(sym_Const_0);
  sym_Volatile_0 = ATmakeSymbol("Volatile", 0, ATfalse);
  ATprotectSymbol(sym_Volatile_0);
  sym_Declaration_2 = ATmakeSymbol("Declaration", 2, ATfalse);
  ATprotectSymbol(sym_Declaration_2);
  sym_Declaration2_2 = ATmakeSymbol("Declaration2", 2, ATfalse);
  ATprotectSymbol(sym_Declaration2_2);
  sym_IdDeclInit_2 = ATmakeSymbol("IdDeclInit", 2, ATfalse);
  ATprotectSymbol(sym_IdDeclInit_2);
  sym_DeclInit_2 = ATmakeSymbol("DeclInit", 2, ATfalse);
  ATprotectSymbol(sym_DeclInit_2);
  sym_ArrayInit_1 = ATmakeSymbol("ArrayInit", 1, ATfalse);
  ATprotectSymbol(sym_ArrayInit_1);
  sym_ArrayInitIncomplete_1 = ATmakeSymbol("ArrayInitIncomplete", 1, ATfalse);
  ATprotectSymbol(sym_ArrayInitIncomplete_1);
  sym_AssignInit_1 = ATmakeSymbol("AssignInit", 1, ATfalse);
  ATprotectSymbol(sym_AssignInit_1);
  sym_TypeSpec_3 = ATmakeSymbol("TypeSpec", 3, ATfalse);
  ATprotectSymbol(sym_TypeSpec_3);
  sym_DQualifiers_3 = ATmakeSymbol("DQualifiers", 3, ATfalse);
  ATprotectSymbol(sym_DQualifiers_3);
  sym_DeclSpec_5 = ATmakeSymbol("DeclSpec", 5, ATfalse);
  ATprotectSymbol(sym_DeclSpec_5);
  sym_Id_1 = ATmakeSymbol("Id", 1, ATfalse);
  ATprotectSymbol(sym_Id_1);
  sym_TypeId_1 = ATmakeSymbol("TypeId", 1, ATfalse);
  ATprotectSymbol(sym_TypeId_1);
  sym_Label_2 = ATmakeSymbol("Label", 2, ATfalse);
  ATprotectSymbol(sym_Label_2);
  sym_Case_2 = ATmakeSymbol("Case", 2, ATfalse);
  ATprotectSymbol(sym_Case_2);
  sym_Default_1 = ATmakeSymbol("Default", 1, ATfalse);
  ATprotectSymbol(sym_Default_1);
  sym_Compound_2 = ATmakeSymbol("Compound", 2, ATfalse);
  ATprotectSymbol(sym_Compound_2);
  sym_Stat_1 = ATmakeSymbol("Stat", 1, ATfalse);
  ATprotectSymbol(sym_Stat_1);
  sym_If_2 = ATmakeSymbol("If", 2, ATfalse);
  ATprotectSymbol(sym_If_2);
  sym_IfElse_3 = ATmakeSymbol("IfElse", 3, ATfalse);
  ATprotectSymbol(sym_IfElse_3);
  sym_Switch_2 = ATmakeSymbol("Switch", 2, ATfalse);
  ATprotectSymbol(sym_Switch_2);
  sym_While_2 = ATmakeSymbol("While", 2, ATfalse);
  ATprotectSymbol(sym_While_2);
  sym_DoWhile_2 = ATmakeSymbol("DoWhile", 2, ATfalse);
  ATprotectSymbol(sym_DoWhile_2);
  sym_For_4 = ATmakeSymbol("For", 4, ATfalse);
  ATprotectSymbol(sym_For_4);
  sym_Goto_1 = ATmakeSymbol("Goto", 1, ATfalse);
  ATprotectSymbol(sym_Goto_1);
  sym_Continue_0 = ATmakeSymbol("Continue", 0, ATfalse);
  ATprotectSymbol(sym_Continue_0);
  sym_Break_0 = ATmakeSymbol("Break", 0, ATfalse);
  ATprotectSymbol(sym_Break_0);
  sym_Return_1 = ATmakeSymbol("Return", 1, ATfalse);
  ATprotectSymbol(sym_Return_1);
  sym_Exit_1 = ATmakeSymbol("Exit", 1, ATfalse);
  ATprotectSymbol(sym_Exit_1);
  sym_FunDef_3 = ATmakeSymbol("FunDef", 3, ATfalse);
  ATprotectSymbol(sym_FunDef_3);
  sym_NoTypeSpecifier_0 = ATmakeSymbol("NoTypeSpecifier", 0, ATfalse);
  ATprotectSymbol(sym_NoTypeSpecifier_0);
  sym_TranslationUnit_1 = ATmakeSymbol("TranslationUnit", 1, ATfalse);
  ATprotectSymbol(sym_TranslationUnit_1);
  sym_Include_1 = ATmakeSymbol("Include", 1, ATfalse);
  ATprotectSymbol(sym_Include_1);
  sym_IdDecl_3 = ATmakeSymbol("IdDecl", 3, ATfalse);
  ATprotectSymbol(sym_IdDecl_3);
  sym_FunDecl_3 = ATmakeSymbol("FunDecl", 3, ATfalse);
  ATprotectSymbol(sym_FunDecl_3);
  sym_TypedefDeclarator1_3 = ATmakeSymbol("TypedefDeclarator1", 3, ATfalse);
  ATprotectSymbol(sym_TypedefDeclarator1_3);
  sym_TypedefDeclarator2_3 = ATmakeSymbol("TypedefDeclarator2", 3, ATfalse);
  ATprotectSymbol(sym_TypedefDeclarator2_3);
  sym_OldFunction1_3 = ATmakeSymbol("OldFunction1", 3, ATfalse);
  ATprotectSymbol(sym_OldFunction1_3);
  sym_OldFunction2_3 = ATmakeSymbol("OldFunction2", 3, ATfalse);
  ATprotectSymbol(sym_OldFunction2_3);
  sym_PpIf_4 = ATmakeSymbol("PpIf", 4, ATfalse);
  ATprotectSymbol(sym_PpIf_4);
  sym_return_0 = ATmakeSymbol("return", 0, ATfalse);
  ATprotectSymbol(sym_return_0);
  sym_exit_0 = ATmakeSymbol("exit", 0, ATfalse);
  ATprotectSymbol(sym_exit_0);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
  sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
  ATprotectSymbol(sym_Verbose_0);
  sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
  ATprotectSymbol(sym_Version_0);
  sym_Input_1 = ATmakeSymbol("Input", 1, ATfalse);
  ATprotectSymbol(sym_Input_1);
  sym_Output_1 = ATmakeSymbol("Output", 1, ATfalse);
  ATprotectSymbol(sym_Output_1);
  sym_Binary_0 = ATmakeSymbol("Binary", 0, ATfalse);
  ATprotectSymbol(sym_Binary_0);
  sym_Statistics_0 = ATmakeSymbol("Statistics", 0, ATfalse);
  ATprotectSymbol(sym_Statistics_0);
  sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
  ATprotectSymbol(sym_Help_0);
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_DeclVersion_1 = ATmakeSymbol("DeclVersion", 1, ATfalse);
  ATprotectSymbol(sym_DeclVersion_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_Sorts_1 = ATmakeSymbol("Sorts", 1, ATfalse);
  ATprotectSymbol(sym_Sorts_1);
  sym_Constructors_1 = ATmakeSymbol("Constructors", 1, ATfalse);
  ATprotectSymbol(sym_Constructors_1);
  sym_NoKind_0 = ATmakeSymbol("NoKind", 0, ATfalse);
  ATprotectSymbol(sym_NoKind_0);
  sym_Seqs_1 = ATmakeSymbol("Seqs", 1, ATfalse);
  ATprotectSymbol(sym_Seqs_1);
  sym_Choices_1 = ATmakeSymbol("Choices", 1, ATfalse);
  ATprotectSymbol(sym_Choices_1);
  sym_LChoices_1 = ATmakeSymbol("LChoices", 1, ATfalse);
  ATprotectSymbol(sym_LChoices_1);
  sym_Lets_2 = ATmakeSymbol("Lets", 2, ATfalse);
  ATprotectSymbol(sym_Lets_2);
  sym_ScopeDefault_1 = ATmakeSymbol("ScopeDefault", 1, ATfalse);
  ATprotectSymbol(sym_ScopeDefault_1);
  sym_DynRuleScope_2 = ATmakeSymbol("DynRuleScope", 2, ATfalse);
  ATprotectSymbol(sym_DynRuleScope_2);
  sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
  ATprotectSymbol(sym_MA_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_BAM_3 = ATmakeSymbol("BAM", 3, ATfalse);
  ATprotectSymbol(sym_BAM_3);
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_InfixApp_3 = ATmakeSymbol("InfixApp", 3, ATfalse);
  ATprotectSymbol(sym_InfixApp_3);
  sym_Explode_2 = ATmakeSymbol("Explode", 2, ATfalse);
  ATprotectSymbol(sym_Explode_2);
  sym_ExplodeCong_2 = ATmakeSymbol("ExplodeCong", 2, ATfalse);
  ATprotectSymbol(sym_ExplodeCong_2);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_BuildDefault_1 = ATmakeSymbol("BuildDefault", 1, ATfalse);
  ATprotectSymbol(sym_BuildDefault_1);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
  ATprotectSymbol(sym_StratRule_3);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_SRule_1 = ATmakeSymbol("SRule", 1, ATfalse);
  ATprotectSymbol(sym_SRule_1);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
  sym_Overlays_1 = ATmakeSymbol("Overlays", 1, ATfalse);
  ATprotectSymbol(sym_Overlays_1);
  sym_Rules_1 = ATmakeSymbol("Rules", 1, ATfalse);
  ATprotectSymbol(sym_Rules_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Imports_1 = ATmakeSymbol("Imports", 1, ATfalse);
  ATprotectSymbol(sym_Imports_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_SDef_4 = ATmakeSymbol("SDef", 4, ATfalse);
  ATprotectSymbol(sym_SDef_4);
  sym_DontInline_0 = ATmakeSymbol("DontInline", 0, ATfalse);
  ATprotectSymbol(sym_DontInline_0);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
  ATprotectSymbol(sym_Thread_1);
  sym_Assign_2 = ATmakeSymbol("Assign", 2, ATfalse);
  ATprotectSymbol(sym_Assign_2);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_MatchVar_1 = ATmakeSymbol("MatchVar", 1, ATfalse);
  ATprotectSymbol(sym_MatchVar_1);
  sym_MatchFun_1 = ATmakeSymbol("MatchFun", 1, ATfalse);
  ATprotectSymbol(sym_MatchFun_1);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_TNil_0 = ATmakeSymbol("TNil", 0, ATfalse);
  ATprotectSymbol(sym_TNil_0);
  sym_TCons_2 = ATmakeSymbol("TCons", 2, ATfalse);
  ATprotectSymbol(sym_TCons_2);
  sym_Pair_2 = ATmakeSymbol("Pair", 2, ATfalse);
  ATprotectSymbol(sym_Pair_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
}
ATerm mark_fresh_vars_0 (ATerm);
ATerm alltd_1 (ATerm, ATerm r_76 (ATerm));
ATerm conc_0 (ATerm);
ATerm CallFailFun_0 (ATerm);
ATerm CallIdFun_0 (ATerm);
ATerm new_0 (ATerm);
ATerm CreateDef2_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm g_56 (ATerm));
ATerm Call_2 (ATerm, ATerm v_56 (ATerm), ATerm w_56 (ATerm));
ATerm CreateDef1_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm i_70 (ATerm), ATerm j_70 (ATerm), ATerm k_70 (ATerm), ATerm l_70 (ATerm));
ATerm unzip_1 (ATerm, ATerm s_70 (ATerm));
ATerm Canon_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm r_77 (ATerm), ATerm s_77 (ATerm));
ATerm repeat_1 (ATerm, ATerm u_77 (ATerm));
ATerm downup2_2 (ATerm, ATerm w_74 (ATerm), ATerm x_74 (ATerm));
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm q_57 (ATerm), ATerm r_57 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm h_63 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm l_65 (ATerm), ATerm m_65 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm g_63 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm m_72 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm n_61 (ATerm));
ATerm map_1 (ATerm, ATerm y_71 (ATerm));
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm m_61 (ATerm));
ATerm Program_1 (ATerm, ATerm y_52 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm z_52 (ATerm));
ATerm fetch_1 (ATerm, ATerm g_72 (ATerm));
ATerm option_defined_1 (ATerm, ATerm l_62 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm o_78 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm r_61 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm u_57 (ATerm), ATerm v_57 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm p_61 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm o_61 (ATerm));
ATerm iowrap_3 (ATerm, ATerm v_62 (ATerm), ATerm w_62 (ATerm), ATerm x_62 (ATerm));
ATerm iowrap_2 (ATerm, ATerm q_62 (ATerm), ATerm r_62 (ATerm));
ATerm iowrap_1 (ATerm, ATerm n_62 (ATerm));
ATerm canonicalize_0 (ATerm);
ATerm main_0 (ATerm);
ATerm mark_fresh_vars_0 (ATerm t)
{
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm r_76 (ATerm))
{
  ATerm y_0 (ATerm t)
  {
    ATerm y_5 = t;
    if(PushChoice()==0)
      {
        t = r_76(t);
        PopChoice();
      }
    else
      {
        t = y_5;
        t = _all(t, y_0);
      }
    return(t);
  }
  t = y_0(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm d_1 = NULL,e_1 = NULL,f_1 = NULL,g_1 = NULL,h_1 = NULL;
  d_1 = t;
  a_1 :
  if(match_cons(d_1, sym_TCons_2))
    {
      e_1 = ATgetArgument(d_1, 0);
      f_1 = ATgetArgument(d_1, 1);
      b_1 :
      if(match_cons(f_1, sym_TCons_2))
        {
          g_1 = ATgetArgument(f_1, 0);
          h_1 = ATgetArgument(f_1, 1);
          c_1 :
          if(match_cons(h_1, sym_TNil_0))
            {
              t = not_null(e_1);
              {
                ATerm g_0 (ATerm t)
                {
                  t = not_null(g_1);
                  return(t);
                }
                t = at_end_1(t, g_0);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm CallFailFun_0 (ATerm t)
{
  ATerm n_1 = NULL;
  n_1 = t;
  m_1 :
  if(match_cons(n_1, sym_Fail_0))
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Nil_0));
  else
    _fail(t);
  return(t);
}
ATerm CallIdFun_0 (ATerm t)
{
  ATerm r_1 = NULL;
  r_1 = t;
  q_1 :
  if(match_cons(r_1, sym_Id_0))
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Nil_0));
  else
    _fail(t);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm CreateDef2_0 (ATerm t)
{
  ATerm v_1 = NULL;
  ATerm x_1 = NULL;
  v_1 = t;
  t = new_0(t);
  x_1 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(x_1)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SDef_3, not_null(x_1), (ATerm)ATmakeAppl(sym_Nil_0), not_null(v_1)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm g_56 (ATerm))
{
  ATerm e_2 = NULL,f_2 = NULL;
  e_2 = t;
  d_2 :
  if(match_cons(e_2, sym_SVar_1))
    {
      f_2 = ATgetArgument(e_2, 0);
      {
        ATerm h_2 = NULL;
        t = not_null(f_2);
        t = g_56(t);
        h_2 = t;
        t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(h_2));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Call_2 (ATerm t, ATerm v_56 (ATerm), ATerm w_56 (ATerm))
{
  ATerm p_2 = NULL,q_2 = NULL,r_2 = NULL;
  p_2 = t;
  o_2 :
  if(match_cons(p_2, sym_Call_2))
    {
      q_2 = ATgetArgument(p_2, 0);
      r_2 = ATgetArgument(p_2, 1);
      {
        ATerm u_2 = NULL;
        t = not_null(q_2);
        {
          ATerm w_2 = NULL;
          t = v_56(t);
          u_2 = t;
          t = not_null(r_2);
          t = w_56(t);
          w_2 = t;
          t = (ATerm) ATmakeAppl(sym_Call_2, not_null(u_2), not_null(w_2));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm CreateDef1_0 (ATerm t)
{
  ATerm g_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL;
  g_3 = t;
  c_3 :
  if(match_cons(g_3, sym_Let_2))
    {
      h_3 = ATgetArgument(g_3, 0);
      i_3 = ATgetArgument(g_3, 1);
      d_3 :
      if(match_cons(i_3, sym_Call_2))
        {
          j_3 = ATgetArgument(i_3, 0);
          l_3 = ATgetArgument(i_3, 1);
          e_3 :
          if(match_cons(j_3, sym_SVar_1))
            {
              k_3 = ATgetArgument(j_3, 0);
              f_3 :
              if(match_cons(l_3, sym_Nil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(k_3)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_3), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL;
  z_3 = t;
  q_3 :
  if(match_cons(z_3, sym_TCons_2))
    {
      a_4 = ATgetArgument(z_3, 0);
      f_4 = ATgetArgument(z_3, 1);
      r_3 :
      if(match_cons(a_4, sym_TCons_2))
        {
          b_4 = ATgetArgument(a_4, 0);
          c_4 = ATgetArgument(a_4, 1);
          s_3 :
          if(match_cons(c_4, sym_TCons_2))
            {
              d_4 = ATgetArgument(c_4, 0);
              e_4 = ATgetArgument(c_4, 1);
              t_3 :
              if(match_cons(e_4, sym_TNil_0))
                {
                  u_3 :
                  if(match_cons(f_4, sym_TCons_2))
                    {
                      g_4 = ATgetArgument(f_4, 0);
                      l_4 = ATgetArgument(f_4, 1);
                      v_3 :
                      if(match_cons(g_4, sym_TCons_2))
                        {
                          h_4 = ATgetArgument(g_4, 0);
                          i_4 = ATgetArgument(g_4, 1);
                          w_3 :
                          if(match_cons(i_4, sym_TCons_2))
                            {
                              j_4 = ATgetArgument(i_4, 0);
                              k_4 = ATgetArgument(i_4, 1);
                              x_3 :
                              if(match_cons(k_4, sym_TNil_0))
                                {
                                  y_3 :
                                  if(match_cons(l_4, sym_TNil_0))
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(b_4), not_null(h_4)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(d_4), not_null(j_4)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm UnZip3_0 (ATerm t)
{
  ATerm t_4 = NULL,u_4 = NULL,v_4 = NULL;
  t_4 = t;
  s_4 :
  if(match_cons(t_4, sym_Cons_2))
    {
      u_4 = ATgetArgument(t_4, 0);
      v_4 = ATgetArgument(t_4, 1);
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_4), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_4), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  else
    _fail(t);
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm b_5 = NULL;
  b_5 = t;
  a_5 :
  if(match_cons(b_5, sym_Nil_0))
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  else
    _fail(t);
  return(t);
}
ATerm genzip_4 (ATerm t, ATerm i_70 (ATerm), ATerm j_70 (ATerm), ATerm k_70 (ATerm), ATerm l_70 (ATerm))
{
  ATerm d_5 (ATerm t)
  {
    ATerm z_5 = t;
    if(PushChoice()==0)
      {
        t = i_70(t);
        PopChoice();
      }
    else
      {
        t = z_5;
        t = j_70(t);
        {
          ATerm h_0 (ATerm t)
          {
            t = TCons_2(t, d_5, TNil_0);
            return(t);
          }
          t = TCons_2(t, l_70, h_0);
          t = k_70(t);
        }
      }
    return(t);
  }
  t = d_5(t);
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm s_70 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, s_70);
  return(t);
}
ATerm Canon_0 (ATerm t)
{
  ATerm u_6 = NULL,v_6 = NULL,w_6 = NULL,x_6 = NULL,y_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL;
  ATerm g_9 (ATerm t)
  {
    t = not_null(d_7);
    return(t);
  }
  ATerm h_9 (ATerm t)
  {
    ATerm d_8 = NULL;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_7), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_6), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = conc_0(t);
    d_8 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(d_8), not_null(w_6));
    return(t);
  }
  ATerm i_9 (ATerm t)
  {
    t = not_null(d_7);
    return(t);
  }
  ATerm j_9 (ATerm t)
  {
    t = not_null(a_7);
    return(t);
  }
  ATerm k_9 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_7), (ATerm) ATmakeAppl(sym_Build_1, not_null(u_6)));
    return(t);
  }
  ATerm l_9 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(v_6)), not_null(w_6)));
    return(t);
  }
  ATerm m_9 (ATerm t)
  {
    ATerm t_8 = NULL;
    t = not_null(y_6);
    {
      ATerm i_0 (ATerm t)
      {
        ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL;
        p_8 = t;
        b_6 :
        if(match_cons(p_8, sym_Call_2))
          {
            q_8 = ATgetArgument(p_8, 0);
            s_8 = ATgetArgument(p_8, 1);
            c_6 :
            if(match_cons(q_8, sym_SVar_1))
              {
                r_8 = ATgetArgument(q_8, 0);
                d_6 :
                if(match_cons(s_8, sym_Nil_0))
                  {
                    if(x_6 != NULL && x_6 != r_8)
                      _fail(r_8);
                    else
                      x_6 = r_8;
                    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_7)), (ATerm) ATmakeAppl(sym_Nil_0));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        return(t);
      }
      t = alltd_1(t, i_0);
      t_8 = t;
      t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(a_7), (ATerm)ATmakeAppl(sym_Nil_0), not_null(t_8));
    }
    return(t);
  }
  ATerm n_9 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SDef_3, not_null(a_7), (ATerm)ATmakeAppl(sym_Nil_0), not_null(d_7)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_7)), (ATerm) ATmakeAppl(sym_Nil_0)));
    return(t);
  }
  ATerm o_9 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(d_7), not_null(e_7), not_null(f_7));
    return(t);
  }
  z_6 = t;
  f_6 :
  if(match_cons(z_6, sym_Call_2))
    {
      a_7 = ATgetArgument(z_6, 0);
      d_7 = ATgetArgument(z_6, 1);
      {
        ATerm a_6 = t;
        if(PushChoice()==0)
          {
            ATerm i_7 = NULL,j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL;
            t = not_null(d_7);
            {
              ATerm j_0 (ATerm t)
              {
                ATerm k_0 (ATerm t)
                {
                  ATerm e_6 = t;
                  if(PushChoice()==0)
                    {
                      t = CallIdFun_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = e_6;
                      t = CallFailFun_0(t);
                    }
                  return(t);
                }
                t = try_1(t, k_0);
                {
                  ATerm g_7 = t;
                  if(PushChoice()==0)
                    {
                      t = CreateDef1_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = g_7;
                      {
                        ATerm h_7 = t;
                        if(PushChoice()==0)
                          {
                            ATerm n_7 = t;
                            if(PushChoice()==0)
                              {
                                ATerm l_0 (ATerm t)
                                {
                                  t = SVar_1(t, _id);
                                  return(t);
                                }
                                t = Call_2(t, l_0, Nil_0);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              t = n_7;
                            t = CreateDef2_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = h_7;
                            {
                              ATerm m_0 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Nil_0);
                                return(t);
                              }
                              t = split_2(t, _id, m_0);
                            }
                          }
                      }
                    }
                }
                return(t);
              }
              t = unzip_1(t, j_0);
              i_7 = t;
              v_5 :
              if(match_cons(i_7, sym_TCons_2))
                {
                  j_7 = ATgetArgument(i_7, 0);
                  k_7 = ATgetArgument(i_7, 1);
                  w_5 :
                  if(match_cons(k_7, sym_TCons_2))
                    {
                      l_7 = ATgetArgument(k_7, 0);
                      m_7 = ATgetArgument(k_7, 1);
                      x_5 :
                      if(match_cons(m_7, sym_TNil_0))
                        {
                          ATerm p_7 = NULL;
                          t = not_null(l_7);
                          t = concat_0(t);
                          p_7 = t;
                          {
                            ATerm o_7 = t;
                            if(PushChoice()==0)
                              {
                                t = Nil_0(t);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              t = o_7;
                            t = (ATerm) ATmakeAppl(sym_Let_2, not_null(p_7), (ATerm) ATmakeAppl(sym_Call_2, not_null(a_7), not_null(j_7)));
                          }
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
            PopChoice();
          }
        else
          {
            t = a_6;
            {
              ATerm t_7 = NULL;
              t = not_null(d_7);
              {
                ATerm r_9 (ATerm t)
                {
                  ATerm q_7 = t;
                  if(PushChoice()==0)
                    {
                      ATerm n_0 (ATerm t)
                      {
                        ATerm r_7 = t;
                        if(PushChoice()==0)
                          {
                            t = CallIdFun_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = r_7;
                            t = CallFailFun_0(t);
                          }
                        return(t);
                      }
                      ATerm o_0 (ATerm t)
                      {
                        t = try_1(t, r_9);
                        return(t);
                      }
                      t = Cons_2(t, n_0, o_0);
                      PopChoice();
                    }
                  else
                    {
                      t = q_7;
                      t = Cons_2(t, _id, r_9);
                    }
                  return(t);
                }
                t = r_9(t);
                t_7 = t;
                t = (ATerm) ATmakeAppl(sym_Call_2, not_null(a_7), not_null(t_7));
              }
            }
          }
      }
    }
  else
    {
      if(match_cons(z_6, sym_All_1))
        {
          a_7 = ATgetArgument(z_6, 0);
          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("_all", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_7), (ATerm) ATmakeAppl(sym_Nil_0)));
        }
      else
        {
          if(match_cons(z_6, sym_One_1))
            {
              a_7 = ATgetArgument(z_6, 0);
              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("_one", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_7), (ATerm) ATmakeAppl(sym_Nil_0)));
            }
          else
            {
              if(match_cons(z_6, sym_Some_1))
                {
                  a_7 = ATgetArgument(z_6, 0);
                  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("_some", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_7), (ATerm) ATmakeAppl(sym_Nil_0)));
                }
              else
                {
                  if(match_cons(z_6, sym_Thread_1))
                    {
                      a_7 = ATgetArgument(z_6, 0);
                      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("_thread", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_7), (ATerm) ATmakeAppl(sym_Nil_0)));
                    }
                  else
                    {
                      if(match_cons(z_6, sym_Scope_2))
                        {
                          a_7 = ATgetArgument(z_6, 0);
                          d_7 = ATgetArgument(z_6, 1);
                          g_6 :
                          if(match_cons(d_7, sym_Scope_2))
                            {
                              u_6 = ATgetArgument(d_7, 0);
                              w_6 = ATgetArgument(d_7, 1);
                              h_6 :
                              if(match_cons(a_7, sym_Nil_0))
                                {
                                  ATerm s_7 = t;
                                  if(PushChoice()==0)
                                    {
                                      t = g_9(t);
                                      PopChoice();
                                    }
                                  else
                                    {
                                      t = s_7;
                                      t = h_9(t);
                                    }
                                }
                              else
                                t = h_9(t);
                            }
                          else
                            {
                              i_6 :
                              if(match_cons(a_7, sym_Nil_0))
                                t = g_9(t);
                              else
                                _fail(t);
                            }
                        }
                      else
                        {
                          if(match_cons(z_6, sym_Seq_2))
                            {
                              a_7 = ATgetArgument(z_6, 0);
                              d_7 = ATgetArgument(z_6, 1);
                              j_6 :
                              if(match_cons(d_7, sym_Id_0))
                                {
                                  k_6 :
                                  if(match_cons(a_7, sym_Id_0))
                                    {
                                      ATerm u_7 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = i_9(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = u_7;
                                          t = j_9(t);
                                        }
                                    }
                                  else
                                    t = j_9(t);
                                }
                              else
                                {
                                  if(match_cons(d_7, sym_Build_1))
                                    {
                                      u_6 = ATgetArgument(d_7, 0);
                                      l_6 :
                                      if(match_cons(a_7, sym_Id_0))
                                        t = i_9(t);
                                      else
                                        {
                                          if(match_cons(a_7, sym_Where_1))
                                            {
                                              b_7 = ATgetArgument(a_7, 0);
                                              t = k_9(t);
                                            }
                                          else
                                            _fail(t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(d_7, sym_Seq_2))
                                        {
                                          u_6 = ATgetArgument(d_7, 0);
                                          w_6 = ATgetArgument(d_7, 1);
                                          m_6 :
                                          if(match_cons(a_7, sym_Id_0))
                                            t = i_9(t);
                                          else
                                            {
                                              if(match_cons(a_7, sym_Where_1))
                                                {
                                                  b_7 = ATgetArgument(a_7, 0);
                                                  n_6 :
                                                  if(match_cons(u_6, sym_Build_1))
                                                    {
                                                      v_6 = ATgetArgument(u_6, 0);
                                                      t = l_9(t);
                                                    }
                                                  else
                                                    _fail(t);
                                                }
                                              else
                                                _fail(t);
                                            }
                                        }
                                      else
                                        {
                                          o_6 :
                                          if(match_cons(a_7, sym_Id_0))
                                            t = i_9(t);
                                          else
                                            _fail(t);
                                        }
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(z_6, sym_SDef_3))
                                {
                                  a_7 = ATgetArgument(z_6, 0);
                                  d_7 = ATgetArgument(z_6, 1);
                                  e_7 = ATgetArgument(z_6, 2);
                                  p_6 :
                                  if(match_cons(d_7, sym_Nil_0))
                                    {
                                      q_6 :
                                      if(match_cons(e_7, sym_Rec_2))
                                        {
                                          x_6 = ATgetArgument(e_7, 0);
                                          y_6 = ATgetArgument(e_7, 1);
                                          t = m_9(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(z_6, sym_Rec_2))
                                    {
                                      a_7 = ATgetArgument(z_6, 0);
                                      d_7 = ATgetArgument(z_6, 1);
                                      t = n_9(t);
                                    }
                                  else
                                    {
                                      if(match_cons(z_6, sym_SDef_4))
                                        {
                                          a_7 = ATgetArgument(z_6, 0);
                                          d_7 = ATgetArgument(z_6, 1);
                                          e_7 = ATgetArgument(z_6, 2);
                                          f_7 = ATgetArgument(z_6, 3);
                                          r_6 :
                                          if(match_cons(a_7, sym_Cons_2))
                                            {
                                              b_7 = ATgetArgument(a_7, 0);
                                              c_7 = ATgetArgument(a_7, 1);
                                              s_6 :
                                              if(match_cons(b_7, sym_DontInline_0))
                                                {
                                                  t_6 :
                                                  if(match_cons(c_7, sym_Nil_0))
                                                    t = o_9(t);
                                                  else
                                                    _fail(t);
                                                }
                                              else
                                                _fail(t);
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm r_77 (ATerm), ATerm s_77 (ATerm))
{
  ATerm w_9 (ATerm t)
  {
    ATerm v_7 = t;
    if(PushChoice()==0)
      {
        t = r_77(t);
        t = w_9(t);
        PopChoice();
      }
    else
      {
        t = v_7;
        t = s_77(t);
      }
    return(t);
  }
  t = w_9(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm u_77 (ATerm))
{
  t = repeat_2(t, u_77, _id);
  return(t);
}
ATerm downup2_2 (ATerm t, ATerm w_74 (ATerm), ATerm x_74 (ATerm))
{
  ATerm x_9 (ATerm t)
  {
    t = w_74(t);
    t = _all(t, x_9);
    t = x_74(t);
    return(t);
  }
  t = x_9(t);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm z_9 = NULL;
  z_9 = t;
  y_9 :
  if(!(match_cons(z_9, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm q_57 (ATerm), ATerm r_57 (ATerm))
{
  ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL;
  e_10 = t;
  d_10 :
  if(match_cons(e_10, sym_TCons_2))
    {
      f_10 = ATgetArgument(e_10, 0);
      g_10 = ATgetArgument(e_10, 1);
      {
        ATerm j_10 = NULL;
        t = not_null(f_10);
        {
          ATerm l_10 = NULL;
          t = q_57(t);
          j_10 = t;
          t = not_null(g_10);
          t = r_57(t);
          l_10 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_10), not_null(l_10));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm s_10 = NULL;
  ATerm w_7;
  w_7 = t;
  {
    ATerm p_0 (ATerm t)
    {
      ATerm t_10 = NULL,u_10 = NULL;
      t_10 = t;
      r_10 :
      if(match_cons(t_10, sym_Program_1))
        {
          u_10 = ATgetArgument(t_10, 0);
          if(s_10 != NULL && s_10 != u_10)
            _fail(u_10);
          else
            s_10 = u_10;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, p_0);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_10), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = w_7;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = printnl_0(t);
  t = (ATerm) ATmakeInt(1);
  t = exit_0(t);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm b_11 = NULL,c_11 = NULL;
  ATerm q_0 (ATerm t)
  {
    ATerm r_0 (ATerm t)
    {
      ATerm x_7 = t;
      if(PushChoice()==0)
        {
          ATerm t_0 (ATerm t)
          {
            ATerm d_11 = NULL;
            d_11 = t;
            w_10 :
            if(!(match_cons(d_11, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, t_0);
          PopChoice();
          _fail(t);
        }
      else
        t = x_7;
      return(t);
    }
    ATerm s_0 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, r_0, s_0);
    {
      ATerm u_0 (ATerm t)
      {
        ATerm w_0 (ATerm t)
        {
          ATerm e_11 = NULL,f_11 = NULL;
          e_11 = t;
          y_10 :
          if(match_cons(e_11, sym_Runtime_1))
            {
              f_11 = ATgetArgument(e_11, 0);
              if(c_11 != NULL && c_11 != f_11)
                _fail(f_11);
              else
                c_11 = f_11;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, w_0);
        return(t);
      }
      ATerm v_0 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, u_0, v_0);
      {
        ATerm x_0 (ATerm t)
        {
          ATerm i_1 (ATerm t)
          {
            ATerm g_11 = NULL,h_11 = NULL;
            g_11 = t;
            a_11 :
            if(match_cons(g_11, sym_Program_1))
              {
                h_11 = ATgetArgument(g_11, 0);
                if(b_11 != NULL && b_11 != h_11)
                  _fail(h_11);
                else
                  b_11 = h_11;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, i_1);
          return(t);
        }
        ATerm z_0 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, x_0, z_0);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(b_11), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_11), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, q_0);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL;
  o_11 = t;
  l_11 :
  if(match_cons(o_11, sym_TCons_2))
    {
      p_11 = ATgetArgument(o_11, 0);
      q_11 = ATgetArgument(o_11, 1);
      m_11 :
      if(match_cons(q_11, sym_TCons_2))
        {
          r_11 = ATgetArgument(q_11, 0);
          s_11 = ATgetArgument(q_11, 1);
          n_11 :
          if(match_cons(s_11, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(p_11), not_null(r_11));
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL;
  a_12 = t;
  x_11 :
  if(match_cons(a_12, sym_TCons_2))
    {
      b_12 = ATgetArgument(a_12, 0);
      c_12 = ATgetArgument(a_12, 1);
      y_11 :
      if(match_cons(c_12, sym_TCons_2))
        {
          d_12 = ATgetArgument(c_12, 0);
          e_12 = ATgetArgument(c_12, 1);
          z_11 :
          if(match_cons(e_12, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(b_12), not_null(d_12));
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm m_12 = NULL;
  ATerm y_7;
  y_7 = t;
  {
    ATerm j_1 (ATerm t)
    {
      ATerm z_7 = t;
      if(PushChoice()==0)
        {
          ATerm l_1 (ATerm t)
          {
            ATerm n_12 = NULL,o_12 = NULL;
            n_12 = t;
            j_12 :
            if(match_cons(n_12, sym_Output_1))
              {
                o_12 = ATgetArgument(n_12, 0);
                if(m_12 != NULL && m_12 != o_12)
                  _fail(o_12);
                else
                  m_12 = o_12;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, l_1);
          PopChoice();
        }
      else
        {
          t = z_7;
          {
            ATerm p_12 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            p_12 = t;
            if(m_12 != NULL && m_12 != p_12)
              _fail(p_12);
            else
              m_12 = p_12;
          }
        }
      return(t);
    }
    ATerm k_1 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, j_1, k_1);
  }
  t = y_7;
  {
    ATerm o_1 (ATerm t)
    {
      ATerm p_1 (ATerm t)
      {
        ATerm s_1 (ATerm t)
        {
          t = not_null(m_12);
          return(t);
        }
        t = split_2(t, s_1, _id);
        return(t);
      }
      t = TCons_2(t, p_1, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, o_1);
    {
      ATerm a_8 = t;
      if(PushChoice()==0)
        {
          ATerm t_1 (ATerm t)
          {
            ATerm w_1 (ATerm t)
            {
              ATerm q_12 = NULL;
              q_12 = t;
              l_12 :
              if(!(match_cons(q_12, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, w_1);
            return(t);
          }
          ATerm u_1 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, t_1, u_1);
          PopChoice();
        }
      else
        {
          t = a_8;
          {
            ATerm y_1 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, y_1);
          }
        }
    }
  }
  return(t);
}
ATerm dtime_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1 (ATerm t, ATerm h_63 (ATerm))
{
  ATerm y_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL;
  ATerm b_8;
  b_8 = t;
  t = dtime_0(t);
  t = b_8;
  t = h_63(t);
  {
    ATerm c_8;
    c_8 = t;
    {
      ATerm z_12 = NULL;
      t = dtime_0(t);
      z_12 = t;
      if(y_12 != NULL && y_12 != z_12)
        _fail(z_12);
      else
        y_12 = z_12;
    }
    t = c_8;
    a_13 = t;
    v_12 :
    if(match_cons(a_13, sym_TCons_2))
      {
        b_13 = ATgetArgument(a_13, 0);
        c_13 = ATgetArgument(a_13, 1);
        w_12 :
        if(match_cons(c_13, sym_TCons_2))
          {
            d_13 = ATgetArgument(c_13, 0);
            e_13 = ATgetArgument(c_13, 1);
            x_12 :
            if(match_cons(e_13, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(y_12)), not_null(b_13)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_13), (ATerm) ATmakeAppl(sym_TNil_0)));
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
  }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm k_13 = NULL;
  k_13 = t;
  t = SSL_ReadFromFile(not_null(k_13));
  return(t);
}
ATerm split_2 (ATerm t, ATerm l_65 (ATerm), ATerm m_65 (ATerm))
{
  ATerm q_13 = NULL;
  ATerm s_13 = NULL;
  q_13 = t;
  {
    ATerm u_13 = NULL;
    t = l_65(t);
    s_13 = t;
    t = not_null(q_13);
    t = m_65(t);
    u_13 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_13), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_13), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm c_14 = NULL;
  ATerm e_8;
  e_8 = t;
  {
    ATerm f_8 = t;
    if(PushChoice()==0)
      {
        ATerm z_1 (ATerm t)
        {
          ATerm d_14 = NULL,e_14 = NULL;
          d_14 = t;
          a_14 :
          if(match_cons(d_14, sym_Input_1))
            {
              e_14 = ATgetArgument(d_14, 0);
              if(c_14 != NULL && c_14 != e_14)
                _fail(e_14);
              else
                c_14 = e_14;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, z_1);
        PopChoice();
      }
    else
      {
        t = f_8;
        {
          ATerm f_14 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          f_14 = t;
          if(c_14 != NULL && c_14 != f_14)
            _fail(f_14);
          else
            c_14 = f_14;
        }
      }
  }
  t = e_8;
  {
    ATerm a_2 (ATerm t)
    {
      t = not_null(c_14);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, a_2);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm j_14 = NULL;
  j_14 = t;
  i_14 :
  if(!(match_cons(j_14, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm g_63 (ATerm))
{
  ATerm b_2 (ATerm t)
  {
    ATerm g_8 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = g_8;
        {
          ATerm h_8 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = h_8;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, b_2);
  t = g_63(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm l_14 = NULL;
  l_14 = t;
  t = SSL_table_create(not_null(l_14));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm p_14 = NULL;
  p_14 = t;
  {
    ATerm i_8;
    i_8 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_14), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = i_8;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL;
  b_15 = t;
  v_14 :
  if(match_cons(b_15, sym_Cons_2))
    {
      x_14 = ATgetArgument(b_15, 0);
      y_14 = ATgetArgument(b_15, 1);
      w_14 :
      if(match_cons(y_14, sym_Cons_2))
        {
          z_14 = ATgetArgument(y_14, 0);
          a_15 = ATgetArgument(y_14, 1);
          {
            ATerm f_15 = NULL;
            t = not_null(x_14);
            t = d_0(t);
            t = not_null(z_14);
            t = e_0(t);
            f_15 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_15), not_null(a_15));
          }
        }
      else
        _fail(t);
    }
  else
    {
      if(match_string(b_15, "register-usage-info"))
        t = register_usage_1(t, f_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm j_8 = t;
  if(PushChoice()==0)
    {
      ATerm c_2 (ATerm t)
      {
        ATerm v_15 = NULL;
        v_15 = t;
        k_15 :
        if(!(match_string(v_15, "-S")))
          {
            if(!(match_string(v_15, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm g_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm i_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, c_2, g_2, i_2);
      PopChoice();
    }
  else
    {
      t = j_8;
      {
        ATerm k_8 = t;
        if(PushChoice()==0)
          {
            ATerm j_2 (ATerm t)
            {
              ATerm w_15 = NULL;
              w_15 = t;
              l_15 :
              if(!(match_string(w_15, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm k_2 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm l_2 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, j_2, k_2, l_2);
            PopChoice();
          }
        else
          {
            t = k_8;
            {
              ATerm l_8 = t;
              if(PushChoice()==0)
                {
                  ATerm m_2 (ATerm t)
                  {
                    ATerm x_15 = NULL;
                    x_15 = t;
                    m_15 :
                    if(!(match_string(x_15, "-v")))
                      {
                        if(!(match_string(x_15, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm n_2 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm s_2 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, m_2, n_2, s_2);
                  PopChoice();
                }
              else
                {
                  t = l_8;
                  {
                    ATerm m_8 = t;
                    if(PushChoice()==0)
                      {
                        ATerm t_2 (ATerm t)
                        {
                          ATerm y_15 = NULL;
                          y_15 = t;
                          n_15 :
                          if(!(match_string(y_15, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm v_2 (ATerm t)
                        {
                          ATerm z_15 = NULL;
                          z_15 = t;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(z_15));
                          return(t);
                        }
                        ATerm x_2 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, t_2, v_2, x_2);
                        PopChoice();
                      }
                    else
                      {
                        t = m_8;
                        {
                          ATerm n_8 = t;
                          if(PushChoice()==0)
                            {
                              ATerm y_2 (ATerm t)
                              {
                                ATerm b_16 = NULL;
                                b_16 = t;
                                p_15 :
                                if(!(match_string(b_16, "-i")))
                                  {
                                    if(!(match_string(b_16, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm z_2 (ATerm t)
                              {
                                ATerm c_16 = NULL;
                                c_16 = t;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(c_16));
                                return(t);
                              }
                              ATerm a_3 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, y_2, z_2, a_3);
                              PopChoice();
                            }
                          else
                            {
                              t = n_8;
                              {
                                ATerm o_8 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm b_3 (ATerm t)
                                    {
                                      ATerm e_16 = NULL;
                                      e_16 = t;
                                      r_15 :
                                      if(!(match_string(e_16, "-o")))
                                        {
                                          if(!(match_string(e_16, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm m_3 (ATerm t)
                                    {
                                      ATerm f_16 = NULL;
                                      f_16 = t;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(f_16));
                                      return(t);
                                    }
                                    ATerm n_3 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, b_3, m_3, n_3);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = o_8;
                                    {
                                      ATerm u_8 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm o_3 (ATerm t)
                                          {
                                            ATerm h_16 = NULL;
                                            h_16 = t;
                                            t_15 :
                                            if(!(match_string(h_16, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm p_3 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm m_4 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, o_3, p_3, m_4);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = u_8;
                                          {
                                            ATerm n_4 (ATerm t)
                                            {
                                              ATerm i_16 = NULL;
                                              i_16 = t;
                                              u_15 :
                                              if(!(match_string(i_16, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm o_4 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm p_4 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, n_4, o_4, p_4);
                                          }
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm n_16 = NULL;
  n_16 = t;
  t = SSL_table_destroy(not_null(n_16));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm s_16 = NULL;
  s_16 = t;
  r_16 :
  if(!(match_cons(s_16, sym_exit_0)))
    t = SSL_exit(not_null(s_16));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm w_16 = NULL;
  w_16 = t;
  t = SSL_implode_string(not_null(w_16));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm m_72 (ATerm))
{
  ATerm z_16 (ATerm t)
  {
    ATerm v_8 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, z_16);
        PopChoice();
      }
    else
      {
        t = v_8;
        t = Nil_0(t);
        t = m_72(t);
      }
    return(t);
  }
  t = z_16(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm w_8 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = w_8;
      {
        ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL;
        c_17 = t;
        b_17 :
        if(match_cons(c_17, sym_Cons_2))
          {
            d_17 = ATgetArgument(c_17, 0);
            e_17 = ATgetArgument(c_17, 1);
            t = not_null(d_17);
            {
              ATerm q_4 (ATerm t)
              {
                t = not_null(e_17);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, q_4);
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm k_17 = NULL;
  k_17 = t;
  t = SSL_explode_string(not_null(k_17));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm n_61 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm y_71 (ATerm))
{
  ATerm n_17 (ATerm t)
  {
    ATerm x_8 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = x_8;
        t = Cons_2(t, y_71, n_17);
      }
    return(t);
  }
  t = n_17(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL;
  t_17 = t;
  p_17 :
  if(match_cons(t_17, sym_TCons_2))
    {
      u_17 = ATgetArgument(t_17, 0);
      v_17 = ATgetArgument(t_17, 1);
      q_17 :
      if(match_cons(u_17, sym_Nil_0))
        {
          r_17 :
          if(match_cons(v_17, sym_TCons_2))
            {
              w_17 = ATgetArgument(v_17, 0);
              x_17 = ATgetArgument(v_17, 1);
              s_17 :
              if(match_cons(x_17, sym_TNil_0))
                t = not_null(w_17);
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Rev_0 (ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL;
  f_18 = t;
  b_18 :
  if(match_cons(f_18, sym_TCons_2))
    {
      g_18 = ATgetArgument(f_18, 0);
      j_18 = ATgetArgument(f_18, 1);
      c_18 :
      if(match_cons(g_18, sym_Cons_2))
        {
          h_18 = ATgetArgument(g_18, 0);
          i_18 = ATgetArgument(g_18, 1);
          d_18 :
          if(match_cons(j_18, sym_TCons_2))
            {
              k_18 = ATgetArgument(j_18, 0);
              l_18 = ATgetArgument(j_18, 1);
              e_18 :
              if(match_cons(l_18, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_18), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_18), not_null(k_18)), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm r_18 = NULL;
  r_18 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_18), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm m_61 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm y_52 (ATerm))
{
  ATerm x_18 = NULL,y_18 = NULL;
  x_18 = t;
  w_18 :
  if(match_cons(x_18, sym_Program_1))
    {
      y_18 = ATgetArgument(x_18, 0);
      {
        ATerm a_19 = NULL;
        t = not_null(y_18);
        t = y_52(t);
        a_19 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(a_19));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm i_19 = NULL;
  ATerm r_4 (ATerm t)
  {
    ATerm w_4 (ATerm t)
    {
      ATerm j_19 = NULL;
      j_19 = t;
      if(i_19 != NULL && i_19 != j_19)
        _fail(j_19);
      else
        i_19 = j_19;
      return(t);
    }
    t = Program_1(t, w_4);
    return(t);
  }
  t = option_defined_1(t, r_4);
  {
    ATerm x_4 (ATerm t)
    {
      ATerm k_19 = NULL;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm y_4 (ATerm t)
        {
          t = not_null(i_19);
          return(t);
        }
        t = short_description_1(t, y_4);
        t = concat_strings_0(t);
        k_19 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(k_19), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, x_4);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_get_0(t);
    t = reverse_0(t);
    {
      ATerm z_4 (ATerm t)
      {
        ATerm m_19 = NULL;
        m_19 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_19), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        return(t);
      }
      t = map_1(t, z_4);
      {
        ATerm c_5 (ATerm t)
        {
          ATerm o_19 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm e_5 (ATerm t)
            {
              t = not_null(i_19);
              return(t);
            }
            t = long_description_1(t, e_5);
            t = concat_strings_0(t);
            o_19 = t;
            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_19), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = printnl_0(t);
          }
          return(t);
        }
        t = try_1(t, c_5);
      }
    }
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL;
  y_19 = t;
  v_19 :
  if(match_cons(y_19, sym_TCons_2))
    {
      z_19 = ATgetArgument(y_19, 0);
      a_20 = ATgetArgument(y_19, 1);
      w_19 :
      if(match_cons(a_20, sym_TCons_2))
        {
          b_20 = ATgetArgument(a_20, 0);
          c_20 = ATgetArgument(a_20, 1);
          x_19 :
          if(match_cons(c_20, sym_TNil_0))
            {
              ATerm y_8;
              y_8 = t;
              t = SSL_printnl(not_null(z_19), not_null(b_20));
              t = y_8;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm z_52 (ATerm))
{
  ATerm q_20 = NULL,r_20 = NULL;
  q_20 = t;
  i_20 :
  if(match_cons(q_20, sym_Undefined_1))
    {
      r_20 = ATgetArgument(q_20, 0);
      {
        ATerm t_20 = NULL;
        t = not_null(r_20);
        t = z_52(t);
        t_20 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(t_20));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm g_72 (ATerm))
{
  ATerm x_20 (ATerm t)
  {
    ATerm z_8 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, g_72, _id);
        PopChoice();
      }
    else
      {
        t = z_8;
        t = Cons_2(t, _id, x_20);
      }
    return(t);
  }
  t = x_20(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm l_62 (ATerm))
{
  t = fetch_1(t, l_62);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm c_21 = NULL;
  c_21 = t;
  y_20 :
  if(!(match_cons(c_21, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm o_78 (ATerm))
{
  ATerm a_9 = t;
  if(PushChoice()==0)
    {
      t = o_78(t);
      PopChoice();
    }
  else
    t = a_9;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL;
  h_21 = t;
  e_21 :
  if(match_cons(h_21, sym_TCons_2))
    {
      i_21 = ATgetArgument(h_21, 0);
      j_21 = ATgetArgument(h_21, 1);
      f_21 :
      if(match_cons(j_21, sym_TCons_2))
        {
          k_21 = ATgetArgument(j_21, 0);
          l_21 = ATgetArgument(j_21, 1);
          g_21 :
          if(match_cons(l_21, sym_TNil_0))
            t = SSL_table_get(not_null(i_21), not_null(k_21));
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL;
  w_21 = t;
  r_21 :
  if(match_cons(w_21, sym_TCons_2))
    {
      x_21 = ATgetArgument(w_21, 0);
      y_21 = ATgetArgument(w_21, 1);
      s_21 :
      if(match_cons(y_21, sym_TCons_2))
        {
          z_21 = ATgetArgument(y_21, 0);
          a_22 = ATgetArgument(y_21, 1);
          t_21 :
          if(match_cons(a_22, sym_TCons_2))
            {
              b_22 = ATgetArgument(a_22, 0);
              c_22 = ATgetArgument(a_22, 1);
              v_21 :
              if(match_cons(c_22, sym_TNil_0))
                {
                  ATerm b_9;
                  b_9 = t;
                  {
                    ATerm g_22 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_21), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm c_9 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = c_9;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      g_22 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_21), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(b_22), not_null(g_22)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  }
                  t = b_9;
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm r_61 (ATerm))
{
  ATerm l_22 = NULL;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = r_61(t);
  l_22 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_22), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_push_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm))
{
  ATerm e_23 = NULL,q_23 = NULL,r_23 = NULL;
  r_23 = t;
  d_23 :
  if(match_cons(r_23, sym_Cons_2))
    {
      e_23 = ATgetArgument(r_23, 0);
      q_23 = ATgetArgument(r_23, 1);
      {
        ATerm u_23 = NULL;
        t = not_null(e_23);
        t = a_0(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = b_0(t);
        u_23 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_23), not_null(q_23));
      }
    }
  else
    {
      if(match_string(r_23, "register-usage-info"))
        t = register_usage_1(t, c_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm f_5 (ATerm t)
  {
    ATerm a_24 = NULL;
    a_24 = t;
    z_23 :
    if(!(match_string(a_24, "--help")))
      {
        if(!(match_string(a_24, "-h")))
          {
            if(!(match_string(a_24, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm g_5 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm h_5 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, f_5, g_5, h_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm f_24 = NULL,g_24 = NULL,h_24 = NULL;
  f_24 = t;
  c_24 :
  if(match_cons(f_24, sym_Cons_2))
    {
      g_24 = ATgetArgument(f_24, 0);
      h_24 = ATgetArgument(f_24, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(g_24)), not_null(h_24));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm u_57 (ATerm), ATerm v_57 (ATerm))
{
  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL;
  u_24 = t;
  t_24 :
  if(match_cons(u_24, sym_Cons_2))
    {
      v_24 = ATgetArgument(u_24, 0);
      w_24 = ATgetArgument(u_24, 1);
      {
        ATerm z_24 = NULL;
        t = not_null(v_24);
        {
          ATerm b_25 = NULL;
          t = u_57(t);
          z_24 = t;
          t = not_null(w_24);
          t = v_57(t);
          b_25 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_24), not_null(b_25));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm h_25 = NULL;
  h_25 = t;
  g_25 :
  if(!(match_cons(h_25, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm p_61 (ATerm))
{
  ATerm d_9;
  d_9 = t;
  {
    ATerm i_5 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = p_61(t);
      return(t);
    }
    t = try_1(t, i_5);
  }
  t = d_9;
  {
    ATerm j_5 (ATerm t)
    {
      ATerm j_25 = NULL;
      j_25 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(j_25));
      return(t);
    }
    ATerm k_5 (ATerm t)
    {
      ATerm e_9 = t;
      if(PushChoice()==0)
        {
          ATerm f_9 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = f_9;
              t = p_61(t);
              t = Cons_2(t, _id, k_5);
            }
          PopChoice();
        }
      else
        {
          t = e_9;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, j_5, k_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL;
  ATerm p_9;
  p_9 = t;
  {
    ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL;
    v_25 = t;
    o_25 :
    if(match_cons(v_25, sym_TCons_2))
      {
        w_25 = ATgetArgument(v_25, 0);
        x_25 = ATgetArgument(v_25, 1);
        p_25 :
        if(match_cons(x_25, sym_TCons_2))
          {
            y_25 = ATgetArgument(x_25, 0);
            z_25 = ATgetArgument(x_25, 1);
            q_25 :
            if(match_cons(z_25, sym_TCons_2))
              {
                a_26 = ATgetArgument(z_25, 0);
                b_26 = ATgetArgument(z_25, 1);
                r_25 :
                if(match_cons(b_26, sym_TNil_0))
                  {
                    if(s_25 != NULL && s_25 != w_25)
                      _fail(w_25);
                    else
                      s_25 = w_25;
                    if(t_25 != NULL && t_25 != y_25)
                      _fail(y_25);
                    else
                      t_25 = y_25;
                    if(u_25 != NULL && u_25 != a_26)
                      _fail(a_26);
                    else
                      u_25 = a_26;
                    t = SSL_table_put(not_null(s_25), not_null(t_25), not_null(u_25));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
  }
  t = p_9;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm o_61 (ATerm))
{
  ATerm e_26 = NULL;
  ATerm q_9;
  q_9 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_put_0(t);
  t = q_9;
  {
    ATerm l_5 (ATerm t)
    {
      ATerm s_9 = t;
      if(PushChoice()==0)
        {
          t = o_61(t);
          PopChoice();
        }
      else
        {
          t = s_9;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, l_5);
    {
      ATerm m_5 (ATerm t)
      {
        ATerm t_9 = t;
        if(PushChoice()==0)
          {
            t = option_defined_1(t, Help_0);
            t = system_usage_0(t);
            t = (ATerm) ATmakeInt(0);
            t = exit_0(t);
            PopChoice();
          }
        else
          {
            t = t_9;
            {
              ATerm n_5 (ATerm t)
              {
                ATerm o_5 (ATerm t)
                {
                  ATerm f_26 = NULL;
                  f_26 = t;
                  if(e_26 != NULL && e_26 != f_26)
                    _fail(f_26);
                  else
                    e_26 = f_26;
                  return(t);
                }
                t = Undefined_1(t, o_5);
                return(t);
              }
              t = option_defined_1(t, n_5);
              {
                ATerm u_9;
                u_9 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_26), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = u_9;
                t = system_usage_0(t);
                t = (ATerm) ATmakeInt(1);
                t = exit_0(t);
              }
            }
          }
        return(t);
      }
      t = try_1(t, m_5);
      {
        ATerm v_9;
        v_9 = t;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
        t = table_destroy_0(t);
        t = v_9;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm v_62 (ATerm), ATerm w_62 (ATerm), ATerm x_62 (ATerm))
{
  ATerm p_5 (ATerm t)
  {
    ATerm a_10 = t;
    if(PushChoice()==0)
      {
        t = w_62(t);
        PopChoice();
      }
    else
      {
        t = a_10;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, p_5);
  t = store_options_0(t);
  {
    ATerm b_10 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, x_62);
        PopChoice();
      }
    else
      {
        t = b_10;
        {
          ATerm c_10 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, v_62);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = c_10;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm q_62 (ATerm), ATerm r_62 (ATerm))
{
  t = iowrap_3(t, q_62, r_62, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm n_62 (ATerm))
{
  ATerm q_5 (ATerm t)
  {
    ATerm r_5 (ATerm t)
    {
      t = TCons_2(t, n_62, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, r_5);
    return(t);
  }
  t = iowrap_2(t, q_5, _fail);
  return(t);
}
ATerm canonicalize_0 (ATerm t)
{
  ATerm s_5 (ATerm t)
  {
    ATerm t_5 (ATerm t)
    {
      t = repeat_1(t, Canon_0);
      return(t);
    }
    ATerm u_5 (ATerm t)
    {
      t = repeat_1(t, Canon_0);
      return(t);
    }
    t = downup2_2(t, t_5, u_5);
    t = mark_fresh_vars_0(t);
    return(t);
  }
  t = iowrap_1(t, s_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = canonicalize_0(t);
  return(t);
}
