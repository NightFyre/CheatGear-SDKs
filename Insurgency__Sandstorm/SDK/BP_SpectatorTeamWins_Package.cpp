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
	 * 		Name   -> Function BP_SpectatorTeamWins.BP_SpectatorTeamWins_C.UpdateTeamWins
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATeamInfo*                                   Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      CurrentWins                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  LabelWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SpectatorTeamWins_C::UpdateTeamWins(class ATeamInfo* Team, unsigned char* CurrentWins, class UTextBlock* LabelWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorTeamWins.BP_SpectatorTeamWins_C.UpdateTeamWins");
		
		UBP_SpectatorTeamWins_C_UpdateTeamWins_Params params {};
		params.Team = Team;
		params.LabelWidget = LabelWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentWins != nullptr)
			*CurrentWins = params.CurrentWins;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorTeamWins.BP_SpectatorTeamWins_C.UpdateTeamIconAndTint
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATeamInfo*                                   Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      IconWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      BackgroundWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SpectatorTeamWins_C::UpdateTeamIconAndTint(class ATeamInfo* Team, class UImage* IconWidget, class UImage* BackgroundWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorTeamWins.BP_SpectatorTeamWins_C.UpdateTeamIconAndTint");
		
		UBP_SpectatorTeamWins_C_UpdateTeamIconAndTint_Params params {};
		params.Team = Team;
		params.IconWidget = IconWidget;
		params.BackgroundWidget = BackgroundWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorTeamWins.BP_SpectatorTeamWins_C.UpdateTeamReferences
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_SpectatorTeamWins_C::UpdateTeamReferences()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorTeamWins.BP_SpectatorTeamWins_C.UpdateTeamReferences");
		
		UBP_SpectatorTeamWins_C_UpdateTeamReferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorTeamWins.BP_SpectatorTeamWins_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_SpectatorTeamWins_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorTeamWins.BP_SpectatorTeamWins_C.Construct");
		
		UBP_SpectatorTeamWins_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorTeamWins.BP_SpectatorTeamWins_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SpectatorTeamWins_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorTeamWins.BP_SpectatorTeamWins_C.Tick");
		
		UBP_SpectatorTeamWins_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorTeamWins.BP_SpectatorTeamWins_C.ExecuteUbergraph_BP_SpectatorTeamWins
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SpectatorTeamWins_C::ExecuteUbergraph_BP_SpectatorTeamWins(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorTeamWins.BP_SpectatorTeamWins_C.ExecuteUbergraph_BP_SpectatorTeamWins");
		
		UBP_SpectatorTeamWins_C_ExecuteUbergraph_BP_SpectatorTeamWins_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_SpectatorTeamWins_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_SpectatorTeamWins_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_SpectatorTeamWins.BP_SpectatorTeamWins_C");
		return ptr;
	}

}


