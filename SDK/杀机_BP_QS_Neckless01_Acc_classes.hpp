#pragma once

// ����ɱ�� (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ɱ��_BP_QS_Neckless01_Acc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_QS_Neckless01_Acc.BP_QS_Neckless01_Acc_C
// 0x0000 (0x03C8 - 0x03C8)
class ABP_QS_Neckless01_Acc_C : public AItemBlueprint
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_QS_Neckless01_Acc.BP_QS_Neckless01_Acc_C"));

		return ptr;
	}


	void OnRep_ReplicatedPhysAsset();
	void OnRep_ReplicatedMesh();
	void OnRep_ReplicatedMaterial1();
	void OnRep_ReplicatedMaterial0();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
