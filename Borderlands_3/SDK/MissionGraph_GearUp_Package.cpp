/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function MissionGraph_GearUp.MissionGraph_GearUp_C.[Shlooting Spree: Introduction]
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMissionGraph_GearUp_C::Shlooting_Spree_Introduction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionGraph_GearUp.MissionGraph_GearUp_C.[Shlooting Spree: Introduction]");
		
		UMissionGraph_GearUp_C_Shlooting_Spree_Introduction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function MissionGraph_GearUp.MissionGraph_GearUp_C.[Shlooting Spree]
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMissionGraph_GearUp_C::Shlooting_Spree()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionGraph_GearUp.MissionGraph_GearUp_C.[Shlooting Spree]");
		
		UMissionGraph_GearUp_C_Shlooting_Spree_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function MissionGraph_GearUp.MissionGraph_GearUp_C.ExecuteUbergraph_MissionGraph_GearUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMissionGraph_GearUp_C::ExecuteUbergraph_MissionGraph_GearUp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionGraph_GearUp.MissionGraph_GearUp_C.ExecuteUbergraph_MissionGraph_GearUp");
		
		UMissionGraph_GearUp_C_ExecuteUbergraph_MissionGraph_GearUp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionGraph_GearUp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionGraph_GearUp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MissionGraph_GearUp.MissionGraph_GearUp_C");
		return ptr;
	}

}


