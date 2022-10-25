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
	 * 		Name   -> Function OakCommonFunctions.OakCommonFunctions_C.Bitmask_EnumArrayToInt
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<unsigned char>                              Enum                                                       (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Bitmask                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakCommonFunctions_C::STATIC_Bitmask_EnumArrayToInt(TArray<unsigned char>* Enum, class UObject* __WorldContext, int32_t* Bitmask)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCommonFunctions.OakCommonFunctions_C.Bitmask_EnumArrayToInt");
		
		UOakCommonFunctions_C_Bitmask_EnumArrayToInt_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Enum != nullptr)
			*Enum = params.Enum;
		if (Bitmask != nullptr)
			*Bitmask = params.Bitmask;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakCommonFunctions.OakCommonFunctions_C.Bitmask_EnumToInt
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		unsigned char                                      Enum                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Bitmask                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakCommonFunctions_C::STATIC_Bitmask_EnumToInt(unsigned char Enum, class UObject* __WorldContext, int32_t* Bitmask)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCommonFunctions.OakCommonFunctions_C.Bitmask_EnumToInt");
		
		UOakCommonFunctions_C_Bitmask_EnumToInt_Params params {};
		params.Enum = Enum;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Bitmask != nullptr)
			*Bitmask = params.Bitmask;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakCommonFunctions.OakCommonFunctions_C.Bitmask_RandomEnum
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            BitmaskInt                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      RandomEnum                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakCommonFunctions_C::STATIC_Bitmask_RandomEnum(int32_t BitmaskInt, class UObject* __WorldContext, unsigned char* RandomEnum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCommonFunctions.OakCommonFunctions_C.Bitmask_RandomEnum");
		
		UOakCommonFunctions_C_Bitmask_RandomEnum_Params params {};
		params.BitmaskInt = BitmaskInt;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RandomEnum != nullptr)
			*RandomEnum = params.RandomEnum;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakCommonFunctions.OakCommonFunctions_C.CheckChallengeArrayStatus
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UClass*>                              Challenge_Array                                            (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class APlayerController*                           Chracter_Controller                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UClass*>                              Completed_Challenges_Array                                 (Parm, OutParm, ZeroConstructor)
	 */
	void UOakCommonFunctions_C::STATIC_CheckChallengeArrayStatus(TArray<class UClass*>* Challenge_Array, class APlayerController* Chracter_Controller, class UObject* __WorldContext, TArray<class UClass*>* Completed_Challenges_Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCommonFunctions.OakCommonFunctions_C.CheckChallengeArrayStatus");
		
		UOakCommonFunctions_C_CheckChallengeArrayStatus_Params params {};
		params.Chracter_Controller = Chracter_Controller;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Challenge_Array != nullptr)
			*Challenge_Array = params.Challenge_Array;
		if (Completed_Challenges_Array != nullptr)
			*Completed_Challenges_Array = params.Completed_Challenges_Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakCommonFunctions.OakCommonFunctions_C.CheckChallengeStatus
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           CharacterController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Challenge                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Complete                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOakCommonFunctions_C::STATIC_CheckChallengeStatus(class APlayerController* CharacterController, class UClass* Challenge, class UObject* __WorldContext, bool* Complete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCommonFunctions.OakCommonFunctions_C.CheckChallengeStatus");
		
		UOakCommonFunctions_C_CheckChallengeStatus_Params params {};
		params.CharacterController = CharacterController;
		params.Challenge = Challenge;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Complete != nullptr)
			*Complete = params.Complete;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakCommonFunctions.OakCommonFunctions_C.ChallengeComplete_AllPlayers
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Challenge                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakCommonFunctions_C::STATIC_ChallengeComplete_AllPlayers(class UClass* Challenge, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCommonFunctions.OakCommonFunctions_C.ChallengeComplete_AllPlayers");
		
		UOakCommonFunctions_C_ChallengeComplete_AllPlayers_Params params {};
		params.Challenge = Challenge;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakCommonFunctions.OakCommonFunctions_C.ChallengeActivate_AllPlayers
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Challenge                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakCommonFunctions_C::STATIC_ChallengeActivate_AllPlayers(class UClass* Challenge, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCommonFunctions.OakCommonFunctions_C.ChallengeActivate_AllPlayers");
		
		UOakCommonFunctions_C_ChallengeActivate_AllPlayers_Params params {};
		params.Challenge = Challenge;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakCommonFunctions.OakCommonFunctions_C.ChallengeComplete
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter_Player*                        Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Challenge                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakCommonFunctions_C::STATIC_ChallengeComplete(class AOakCharacter_Player* Character, class UClass* Challenge, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCommonFunctions.OakCommonFunctions_C.ChallengeComplete");
		
		UOakCommonFunctions_C_ChallengeComplete_Params params {};
		params.Character = Character;
		params.Challenge = Challenge;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakCommonFunctions.OakCommonFunctions_C.ChallengeActivate
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter_Player*                        Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Challenge                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakCommonFunctions_C::STATIC_ChallengeActivate(class AOakCharacter_Player* Character, class UClass* Challenge, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCommonFunctions.OakCommonFunctions_C.ChallengeActivate");
		
		UOakCommonFunctions_C_ChallengeActivate_Params params {};
		params.Character = Character;
		params.Challenge = Challenge;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakCommonFunctions.OakCommonFunctions_C.Cosh
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              A                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakCommonFunctions_C::STATIC_Cosh(float A, class UObject* __WorldContext, float* result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCommonFunctions.OakCommonFunctions_C.Cosh");
		
		UOakCommonFunctions_C_Cosh_Params params {};
		params.A = A;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (result != nullptr)
			*result = params.result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakCommonFunctions.OakCommonFunctions_C.SetMissionDoorState
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMissionObjectiveReference                  ObjectiveRef                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakCommonFunctions_C::STATIC_SetMissionDoorState(const struct FMissionObjectiveReference& ObjectiveRef, class UObject* Context, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCommonFunctions.OakCommonFunctions_C.SetMissionDoorState");
		
		UOakCommonFunctions_C_SetMissionDoorState_Params params {};
		params.ObjectiveRef = ObjectiveRef;
		params.Context = Context;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakCommonFunctions.OakCommonFunctions_C.SetMissionSwitchState
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMissionObjectiveReference                  ObjectiveRef                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakCommonFunctions_C::STATIC_SetMissionSwitchState(const struct FMissionObjectiveReference& ObjectiveRef, class UObject* Context, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCommonFunctions.OakCommonFunctions_C.SetMissionSwitchState");
		
		UOakCommonFunctions_C_SetMissionSwitchState_Params params {};
		params.ObjectiveRef = ObjectiveRef;
		params.Context = Context;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakCommonFunctions.OakCommonFunctions_C.SetDebugConsoleCommands
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Stat_Unit                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Stat_FPS                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShowDebug_Missions                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ToggleAllScreenMessages                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               BalanceMe                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               NoTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               God                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Demigod                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AllAmmo                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakCommonFunctions_C::STATIC_SetDebugConsoleCommands(class APlayerController* PlayerController, bool Stat_Unit, bool Stat_FPS, bool ShowDebug_Missions, bool ToggleAllScreenMessages, bool BalanceMe, bool NoTarget, bool God, bool Demigod, bool Loaded, bool AllAmmo, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCommonFunctions.OakCommonFunctions_C.SetDebugConsoleCommands");
		
		UOakCommonFunctions_C_SetDebugConsoleCommands_Params params {};
		params.PlayerController = PlayerController;
		params.Stat_Unit = Stat_Unit;
		params.Stat_FPS = Stat_FPS;
		params.ShowDebug_Missions = ShowDebug_Missions;
		params.ToggleAllScreenMessages = ToggleAllScreenMessages;
		params.BalanceMe = BalanceMe;
		params.NoTarget = NoTarget;
		params.God = God;
		params.Demigod = Demigod;
		params.Loaded = Loaded;
		params.AllAmmo = AllAmmo;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakCommonFunctions.OakCommonFunctions_C.MissionTempHudText
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              TextSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                TextColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakCommonFunctions_C::STATIC_MissionTempHudText(class UObject* WorldContextObject, const class FText& Text, float TextSize, float Duration, const struct FLinearColor& TextColor, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCommonFunctions.OakCommonFunctions_C.MissionTempHudText");
		
		UOakCommonFunctions_C_MissionTempHudText_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Text = Text;
		params.TextSize = TextSize;
		params.Duration = Duration;
		params.TextColor = TextColor;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakCommonFunctions.OakCommonFunctions_C.MissionTempSpeakText
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      ActorClass                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              TextSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                TextColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               FacePlayer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakCommonFunctions_C::STATIC_MissionTempSpeakText(class UObject* WorldContextObject, class UClass* ActorClass, const class FText& Text, float TextSize, float Duration, const struct FLinearColor& TextColor, bool FacePlayer, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCommonFunctions.OakCommonFunctions_C.MissionTempSpeakText");
		
		UOakCommonFunctions_C_MissionTempSpeakText_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ActorClass = ActorClass;
		params.Text = Text;
		params.TextSize = TextSize;
		params.Duration = Duration;
		params.TextColor = TextColor;
		params.FacePlayer = FacePlayer;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakCommonFunctions.OakCommonFunctions_C.DisplayErrorMessage
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      ErrorMessage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakCommonFunctions_C::STATIC_DisplayErrorMessage(class UObject* Context, const class FString& ErrorMessage, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCommonFunctions.OakCommonFunctions_C.DisplayErrorMessage");
		
		UOakCommonFunctions_C_DisplayErrorMessage_Params params {};
		params.Context = Context;
		params.ErrorMessage = ErrorMessage;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakCommonFunctions.OakCommonFunctions_C.Compare Damage Source
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UDamageSource*                               Damage_Source                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Damage_Source2                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Equal                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Not_Equal                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOakCommonFunctions_C::STATIC_Compare_Damage_Source(class UDamageSource* Damage_Source, class UClass* Damage_Source2, class UObject* __WorldContext, bool* Equal, bool* Not_Equal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCommonFunctions.OakCommonFunctions_C.Compare Damage Source");
		
		UOakCommonFunctions_C_Compare_Damage_Source_Params params {};
		params.Damage_Source = Damage_Source;
		params.Damage_Source2 = Damage_Source2;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Equal != nullptr)
			*Equal = params.Equal;
		if (Not_Equal != nullptr)
			*Not_Equal = params.Not_Equal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakCommonFunctions.OakCommonFunctions_C.Make Transforms Around Cone
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Cone_Axis                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Cone_Location                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Cone_Angle_Min                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Cone_Angle_Max                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Rotation_Angle_Divergence                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Sweep_Angle                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Distance_From_Cone_Center                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Number_Of_Transforms                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FTransform>                          Out_Transforms                                             (Parm, OutParm, ZeroConstructor)
	 */
	void UOakCommonFunctions_C::STATIC_Make_Transforms_Around_Cone(const struct FVector& Cone_Axis, const struct FVector& Cone_Location, float Cone_Angle_Min, float Cone_Angle_Max, float Rotation_Angle_Divergence, float Sweep_Angle, float Distance_From_Cone_Center, int32_t Number_Of_Transforms, class UObject* __WorldContext, TArray<struct FTransform>* Out_Transforms)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCommonFunctions.OakCommonFunctions_C.Make Transforms Around Cone");
		
		UOakCommonFunctions_C_Make_Transforms_Around_Cone_Params params {};
		params.Cone_Axis = Cone_Axis;
		params.Cone_Location = Cone_Location;
		params.Cone_Angle_Min = Cone_Angle_Min;
		params.Cone_Angle_Max = Cone_Angle_Max;
		params.Rotation_Angle_Divergence = Rotation_Angle_Divergence;
		params.Sweep_Angle = Sweep_Angle;
		params.Distance_From_Cone_Center = Distance_From_Cone_Center;
		params.Number_Of_Transforms = Number_Of_Transforms;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out_Transforms != nullptr)
			*Out_Transforms = params.Out_Transforms;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakCommonFunctions.OakCommonFunctions_C.Get Player View Trace
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter_Player*                        Player_Character                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Trace_Length                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Trace_Start                                                (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Trace_End                                                  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakCommonFunctions_C::STATIC_Get_Player_View_Trace(class AOakCharacter_Player* Player_Character, float Trace_Length, class UObject* __WorldContext, struct FVector* Trace_Start, struct FVector* Trace_End)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCommonFunctions.OakCommonFunctions_C.Get Player View Trace");
		
		UOakCommonFunctions_C_Get_Player_View_Trace_Params params {};
		params.Player_Character = Player_Character;
		params.Trace_Length = Trace_Length;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Trace_Start != nullptr)
			*Trace_Start = params.Trace_Start;
		if (Trace_End != nullptr)
			*Trace_End = params.Trace_End;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakCommonFunctions.OakCommonFunctions_C.Get Regeneration Rate
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Max_Regen_Rate                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Regen_Rate                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakCommonFunctions_C::STATIC_Get_Regeneration_Rate(class UObject* Context, float Max_Regen_Rate, class UObject* __WorldContext, float* Regen_Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakCommonFunctions.OakCommonFunctions_C.Get Regeneration Rate");
		
		UOakCommonFunctions_C_Get_Regeneration_Rate_Params params {};
		params.Context = Context;
		params.Max_Regen_Rate = Max_Regen_Rate;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Regen_Rate != nullptr)
			*Regen_Rate = params.Regen_Rate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOakCommonFunctions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOakCommonFunctions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OakCommonFunctions.OakCommonFunctions_C");
		return ptr;
	}

}


