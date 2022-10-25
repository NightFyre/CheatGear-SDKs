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
	 * 		Name   -> Function BP_GameplayNotificationsContainer.BP_GameplayNotificationsContainer_C.PruneNotifications
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_GameplayNotificationsContainer_C::PruneNotifications()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameplayNotificationsContainer.BP_GameplayNotificationsContainer_C.PruneNotifications");
		
		UBP_GameplayNotificationsContainer_C_PruneNotifications_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameplayNotificationsContainer.BP_GameplayNotificationsContainer_C.AddPlayerTeamKillWarningNotification
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Kills                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Limit                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GameplayNotificationsContainer_C::AddPlayerTeamKillWarningNotification(int32_t Kills, int32_t Limit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameplayNotificationsContainer.BP_GameplayNotificationsContainer_C.AddPlayerTeamKillWarningNotification");
		
		UBP_GameplayNotificationsContainer_C_AddPlayerTeamKillWarningNotification_Params params {};
		params.Kills = Kills;
		params.Limit = Limit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameplayNotificationsContainer.BP_GameplayNotificationsContainer_C.GetWeaponName
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UClass*                                      CauserClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      DamageType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        LocalizedName                                              (Parm, OutParm)
	 */
	void UBP_GameplayNotificationsContainer_C::GetWeaponName(class UClass* CauserClass, class UClass* DamageType, class FText* LocalizedName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameplayNotificationsContainer.BP_GameplayNotificationsContainer_C.GetWeaponName");
		
		UBP_GameplayNotificationsContainer_C_GetWeaponName_Params params {};
		params.CauserClass = CauserClass;
		params.DamageType = DamageType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LocalizedName != nullptr)
			*LocalizedName = params.LocalizedName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameplayNotificationsContainer.BP_GameplayNotificationsContainer_C.AddNotification
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_GameplayNotificationsContainer_C::AddNotification(class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameplayNotificationsContainer.BP_GameplayNotificationsContainer_C.AddNotification");
		
		UBP_GameplayNotificationsContainer_C_AddNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameplayNotificationsContainer.BP_GameplayNotificationsContainer_C.AddPlayerKillNotification
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlayerKillNotice                           Notice                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_GameplayNotificationsContainer_C::AddPlayerKillNotification(struct FPlayerKillNotice* Notice)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameplayNotificationsContainer.BP_GameplayNotificationsContainer_C.AddPlayerKillNotification");
		
		UBP_GameplayNotificationsContainer_C_AddPlayerKillNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Notice != nullptr)
			*Notice = params.Notice;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameplayNotificationsContainer.BP_GameplayNotificationsContainer_C.AddObjectiveDestroyedNotification
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AObjectiveDestructible*                      Objective                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      OldOwners                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      NewOwners                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AINSPlayerState*>                     Attackers                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UBP_GameplayNotificationsContainer_C::AddObjectiveDestroyedNotification(class AObjectiveDestructible* Objective, unsigned char OldOwners, unsigned char NewOwners, TArray<class AINSPlayerState*>* Attackers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameplayNotificationsContainer.BP_GameplayNotificationsContainer_C.AddObjectiveDestroyedNotification");
		
		UBP_GameplayNotificationsContainer_C_AddObjectiveDestroyedNotification_Params params {};
		params.Objective = Objective;
		params.OldOwners = OldOwners;
		params.NewOwners = NewOwners;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Attackers != nullptr)
			*Attackers = params.Attackers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameplayNotificationsContainer.BP_GameplayNotificationsContainer_C.BindEvents
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_GameplayNotificationsContainer_C::BindEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameplayNotificationsContainer.BP_GameplayNotificationsContainer_C.BindEvents");
		
		UBP_GameplayNotificationsContainer_C_BindEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameplayNotificationsContainer.BP_GameplayNotificationsContainer_C.AddObjectiveCaptureNotification
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AObjectiveCapturable*                        Objective                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      OldOwners                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      NewOwners                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AINSPlayerState*>                     Capturers                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UBP_GameplayNotificationsContainer_C::AddObjectiveCaptureNotification(class AObjectiveCapturable* Objective, unsigned char OldOwners, unsigned char NewOwners, TArray<class AINSPlayerState*>* Capturers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameplayNotificationsContainer.BP_GameplayNotificationsContainer_C.AddObjectiveCaptureNotification");
		
		UBP_GameplayNotificationsContainer_C_AddObjectiveCaptureNotification_Params params {};
		params.Objective = Objective;
		params.OldOwners = OldOwners;
		params.NewOwners = NewOwners;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Capturers != nullptr)
			*Capturers = params.Capturers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameplayNotificationsContainer.BP_GameplayNotificationsContainer_C.GetFormattedPlayerList
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class AINSPlayerState*>                     Players                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		class FText                                        FormattedNames                                             (Parm, OutParm)
	 */
	void UBP_GameplayNotificationsContainer_C::GetFormattedPlayerList(TArray<class AINSPlayerState*>* Players, class FText* FormattedNames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameplayNotificationsContainer.BP_GameplayNotificationsContainer_C.GetFormattedPlayerList");
		
		UBP_GameplayNotificationsContainer_C_GetFormattedPlayerList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Players != nullptr)
			*Players = params.Players;
		if (FormattedNames != nullptr)
			*FormattedNames = params.FormattedNames;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameplayNotificationsContainer.BP_GameplayNotificationsContainer_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_GameplayNotificationsContainer_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameplayNotificationsContainer.BP_GameplayNotificationsContainer_C.Construct");
		
		UBP_GameplayNotificationsContainer_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GameplayNotificationsContainer.BP_GameplayNotificationsContainer_C.ExecuteUbergraph_BP_GameplayNotificationsContainer
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GameplayNotificationsContainer_C::ExecuteUbergraph_BP_GameplayNotificationsContainer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameplayNotificationsContainer.BP_GameplayNotificationsContainer_C.ExecuteUbergraph_BP_GameplayNotificationsContainer");
		
		UBP_GameplayNotificationsContainer_C_ExecuteUbergraph_BP_GameplayNotificationsContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_GameplayNotificationsContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_GameplayNotificationsContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_GameplayNotificationsContainer.BP_GameplayNotificationsContainer_C");
		return ptr;
	}

}


