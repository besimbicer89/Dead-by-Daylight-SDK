// ����ɱ�� (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ɱ��_AB_Menu_Slasher15_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AB_Menu_Slasher15.AB_Menu_Slasher15_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAB_Menu_Slasher15_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AB_Menu_Slasher15.AB_Menu_Slasher15_C.BlueprintUpdateAnimation"));

	UAB_Menu_Slasher15_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_Menu_Slasher15.AB_Menu_Slasher15_C.ExecuteUbergraph_AB_Menu_Slasher15
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAB_Menu_Slasher15_C::ExecuteUbergraph_AB_Menu_Slasher15(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AB_Menu_Slasher15.AB_Menu_Slasher15_C.ExecuteUbergraph_AB_Menu_Slasher15"));

	UAB_Menu_Slasher15_C_ExecuteUbergraph_AB_Menu_Slasher15_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
