/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_TacticalMap_SpawnZone.BP_Widget_TacticalMap_SpawnZone_C.UpdateFactionColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_TacticalMap_SpawnZone_C::UpdateFactionColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_TacticalMap_SpawnZone.BP_Widget_TacticalMap_SpawnZone_C.UpdateFactionColor");
		
		UBP_Widget_TacticalMap_SpawnZone_C_UpdateFactionColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_TacticalMap_SpawnZone.BP_Widget_TacticalMap_SpawnZone_C.UpdateFactionIcon
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_TacticalMap_SpawnZone_C::UpdateFactionIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_TacticalMap_SpawnZone.BP_Widget_TacticalMap_SpawnZone_C.UpdateFactionIcon");
		
		UBP_Widget_TacticalMap_SpawnZone_C_UpdateFactionIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_TacticalMap_SpawnZone.BP_Widget_TacticalMap_SpawnZone_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_Widget_TacticalMap_SpawnZone_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_TacticalMap_SpawnZone.BP_Widget_TacticalMap_SpawnZone_C.Construct");
		
		UBP_Widget_TacticalMap_SpawnZone_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_TacticalMap_SpawnZone.BP_Widget_TacticalMap_SpawnZone_C.OnRefreshTeams
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_TacticalMap_SpawnZone_C::OnRefreshTeams()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_TacticalMap_SpawnZone.BP_Widget_TacticalMap_SpawnZone_C.OnRefreshTeams");
		
		UBP_Widget_TacticalMap_SpawnZone_C_OnRefreshTeams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_TacticalMap_SpawnZone.BP_Widget_TacticalMap_SpawnZone_C.OnChangeTeam
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      TeamId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ATeamInfo*                                   TeamInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_TacticalMap_SpawnZone_C::OnChangeTeam(unsigned char TeamId, class ATeamInfo* TeamInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_TacticalMap_SpawnZone.BP_Widget_TacticalMap_SpawnZone_C.OnChangeTeam");
		
		UBP_Widget_TacticalMap_SpawnZone_C_OnChangeTeam_Params params {};
		params.TeamId = TeamId;
		params.TeamInfo = TeamInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_TacticalMap_SpawnZone.BP_Widget_TacticalMap_SpawnZone_C.ExecuteUbergraph_BP_Widget_TacticalMap_SpawnZone
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_TacticalMap_SpawnZone_C::ExecuteUbergraph_BP_Widget_TacticalMap_SpawnZone(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_TacticalMap_SpawnZone.BP_Widget_TacticalMap_SpawnZone_C.ExecuteUbergraph_BP_Widget_TacticalMap_SpawnZone");
		
		UBP_Widget_TacticalMap_SpawnZone_C_ExecuteUbergraph_BP_Widget_TacticalMap_SpawnZone_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Widget_TacticalMap_SpawnZone_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Widget_TacticalMap_SpawnZone_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Widget_TacticalMap_SpawnZone.BP_Widget_TacticalMap_SpawnZone_C");
		return ptr;
	}

}


