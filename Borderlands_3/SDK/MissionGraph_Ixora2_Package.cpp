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
	 * 		Name   -> Function MissionGraph_Ixora2.MissionGraph_Ixora2_C.[Mysteriouslier: Murder on Eschaton Row]
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMissionGraph_Ixora2_C::Mysteriouslier_Murder_on_Eschaton_Row()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionGraph_Ixora2.MissionGraph_Ixora2_C.[Mysteriouslier: Murder on Eschaton Row]");
		
		UMissionGraph_Ixora2_C_Mysteriouslier_Murder_on_Eschaton_Row_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function MissionGraph_Ixora2.MissionGraph_Ixora2_C.[Mysteriouslier: The Vanishing of Hizzen Mays]
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMissionGraph_Ixora2_C::Mysteriouslier_The_Vanishing_of_Hizzen_Mays()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionGraph_Ixora2.MissionGraph_Ixora2_C.[Mysteriouslier: The Vanishing of Hizzen Mays]");
		
		UMissionGraph_Ixora2_C_Mysteriouslier_The_Vanishing_of_Hizzen_Mays_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function MissionGraph_Ixora2.MissionGraph_Ixora2_C.[Mysteriouslier: Ghosts of Karass Canyon]
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMissionGraph_Ixora2_C::Mysteriouslier_Ghosts_of_Karass_Canyon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionGraph_Ixora2.MissionGraph_Ixora2_C.[Mysteriouslier: Ghosts of Karass Canyon]");
		
		UMissionGraph_Ixora2_C_Mysteriouslier_Ghosts_of_Karass_Canyon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function MissionGraph_Ixora2.MissionGraph_Ixora2_C.[Mysteriouslier: Horror at Scryer's Crypt]
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMissionGraph_Ixora2_C::Mysteriouslier_Horror_at_Scryer_s_Crypt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionGraph_Ixora2.MissionGraph_Ixora2_C.[Mysteriouslier: Horror at Scryer's Crypt]");
		
		UMissionGraph_Ixora2_C_Mysteriouslier_Horror_at_Scryer_s_Crypt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function MissionGraph_Ixora2.MissionGraph_Ixora2_C.[You. Will. Die. (Over and Over.)]
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMissionGraph_Ixora2_C::You_Will_Die_Over_and_Over()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionGraph_Ixora2.MissionGraph_Ixora2_C.[You. Will. Die. (Over and Over.)]");
		
		UMissionGraph_Ixora2_C_You_Will_Die_Over_and_Over_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function MissionGraph_Ixora2.MissionGraph_Ixora2_C.ExecuteUbergraph_MissionGraph_Ixora2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMissionGraph_Ixora2_C::ExecuteUbergraph_MissionGraph_Ixora2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionGraph_Ixora2.MissionGraph_Ixora2_C.ExecuteUbergraph_MissionGraph_Ixora2");
		
		UMissionGraph_Ixora2_C_ExecuteUbergraph_MissionGraph_Ixora2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionGraph_Ixora2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionGraph_Ixora2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MissionGraph_Ixora2.MissionGraph_Ixora2_C");
		return ptr;
	}

}


