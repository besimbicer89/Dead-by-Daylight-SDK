// ����ɱ�� (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ɱ��_BP_Menu_Slasher10_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Menu_Slasher10.BP_Menu_Slasher10_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ABP_Menu_Slasher10_C::ReceiveBeginPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_Menu_Slasher10.BP_Menu_Slasher10_C.ReceiveBeginPlay"));

	ABP_Menu_Slasher10_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu_Slasher10.BP_Menu_Slasher10_C.ExecuteUbergraph_BP_Menu_Slasher10
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ABP_Menu_Slasher10_C::ExecuteUbergraph_BP_Menu_Slasher10(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_Menu_Slasher10.BP_Menu_Slasher10_C.ExecuteUbergraph_BP_Menu_Slasher10"));

	ABP_Menu_Slasher10_C_ExecuteUbergraph_BP_Menu_Slasher10_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
